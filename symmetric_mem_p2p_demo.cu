/*
 * Multi-GPU Symmetric Memory Demo
 *
 * 展示多GPU间通过对称内存进行P2P通信
 * 
 * 关键接口组合：
 * - 跨GPU访问权限配置
 * - 多GPU数据同步
 */

#include <cuda.h>
#include <cuda_runtime.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <omp.h>

#define CUDA_CHECK(call) {                                                 \
    CUresult err = call;                                                    \
    if (err != CUDA_SUCCESS) {                                              \
        const char *error_str = NULL;                                       \
        cuGetErrorString(err, &error_str);                                  \
        fprintf(stderr, "CUDA Error: %s at line %d\n", error_str, __LINE__); \
        exit(1);                                                            \
    }                                                                       \
}

#define CUDA_RT_CHECK(call) {                                              \
    cudaError_t err = call;                                                \
    if (err != cudaSuccess) {                                              \
        fprintf(stderr, "CUDA Runtime Error: %s at line %d\n",             \
                cudaGetErrorString(err), __LINE__);                        \
        exit(1);                                                           \
    }                                                                      \
}

typedef struct {
    float *d_ptr;
    CUmemGenericAllocationHandle handle;
    size_t size;
    int gpu_id;
} SymmetricMemBuffer;

/*
 * 分配对称内存（支持多GPU访问）
 */
SymmetricMemBuffer* allocateSymmetricMemory(int gpu_id, int num_gpus, 
                                           size_t size) {
    SymmetricMemBuffer *buf = (SymmetricMemBuffer*)malloc(
        sizeof(SymmetricMemBuffer));
    
    CUDA_RT_CHECK(cudaSetDevice(gpu_id));
    
    CUdevice device;
    CUDA_CHECK(cuDeviceGet(&device, gpu_id));
    
    // 获取对齐粒度
    CUmemAllocationProp memProp = {};
    memProp.type = CU_MEM_ALLOCATION_TYPE_PINNED;
    memProp.location.type = CU_MEM_LOCATION_TYPE_DEVICE;
    memProp.location.id = gpu_id;
    memProp.requestedHandleTypes = CU_MEM_HANDLE_TYPE_POSIX_FILE_DESCRIPTOR;
    
    size_t granularity = 0;
    CUDA_CHECK(cuMemGetAllocationGranularity(&granularity, &memProp,
        CU_MEM_ALLOC_GRANULARITY_MINIMUM));
    
    // 对齐大小
    size_t alignedSize = ((size + granularity - 1) / granularity) * granularity;
    
    // 创建物理内存
    CUDA_CHECK(cuMemCreate(&buf->handle, alignedSize, &memProp, 0));
    
    // 预留虚拟地址
    CUdeviceptr devPtr = 0;
    CUDA_CHECK(cuMemAddressReserve(&devPtr, alignedSize, granularity, 0, 0));
    
    // 映射
    CUDA_CHECK(cuMemMap(devPtr, alignedSize, 0, buf->handle, 0));
    
    // 为所有GPU设置访问权限
    for (int i = 0; i < num_gpus; i++) {
        CUmemAccessDesc accessDesc = {};
        accessDesc.location.type = CU_MEM_LOCATION_TYPE_DEVICE;
        accessDesc.location.id = i;
        accessDesc.flags = CU_MEM_ACCESS_FLAGS_PROT_READWRITE;
        CUDA_CHECK(cuMemSetAccess(devPtr, alignedSize, &accessDesc, 1));
    }
    
    buf->d_ptr = (float*)devPtr;
    buf->size = alignedSize;
    buf->gpu_id = gpu_id;
    
    printf("Allocated %zu bytes (aligned: %zu) on GPU %d\n", 
           size, alignedSize, gpu_id);
    
    return buf;
}

/*
 * 释放对称内存
 */
void freeSymmetricMemory(SymmetricMemBuffer *buf) {
    if (!buf) return;
    
    CUDA_RT_CHECK(cudaSetDevice(buf->gpu_id));
    
    CUdeviceptr devPtr = (CUdeviceptr)buf->d_ptr;
    CUDA_CHECK(cuMemUnmap(devPtr, buf->size));
    CUDA_CHECK(cuMemAddressFree(devPtr, buf->size));
    CUDA_CHECK(cuMemRelease(buf->handle));
    
    free(buf);
}

/*
 * P2P拷贝内核：从一个GPU读数据，写到另一个GPU
 * 这演示了对称内存的关键优势：所有GPU可以看到同一块内存
 */
__global__ void copyKernel(float *dst, float *src, size_t n) {
    size_t idx = blockIdx.x * blockDim.x + threadIdx.x;
    if (idx < n) {
        dst[idx] = src[idx];
    }
}

/*
 * 从源GPU到目标GPU的P2P复制（使用对称内存）
 */
void p2pCopy(int src_gpu, int dst_gpu, SymmetricMemBuffer *src_buf, 
             SymmetricMemBuffer *dst_buf, size_t nelems) {
    
    printf("P2P Copy: GPU%d -> GPU%d (%zu elements)\n", 
           src_gpu, dst_gpu, nelems);
    
    // 在目标GPU上执行内核
    CUDA_RT_CHECK(cudaSetDevice(dst_gpu));
    
    size_t blockSize = 256;
    size_t gridSize = (nelems + blockSize - 1) / blockSize;
    
    cudaStream_t stream;
    CUDA_RT_CHECK(cudaStreamCreate(&stream));
    
    copyKernel<<<gridSize, blockSize, 0, stream>>>(
        dst_buf->d_ptr, src_buf->d_ptr, nelems);
    
    CUDA_RT_CHECK(cudaStreamSynchronize(stream));
    CUDA_RT_CHECK(cudaStreamDestroy(stream));
    
    printf("  ✓ Completed\n");
}

/*
 * 验证数据一致性
 */
void verifyP2PCopy(int src_gpu, int dst_gpu, SymmetricMemBuffer *src_buf,
                   SymmetricMemBuffer *dst_buf, size_t nelems) {
    
    printf("Verifying GPU%d -> GPU%d...\n", src_gpu, dst_gpu);
    
    float *h_src = (float*)malloc(nelems * sizeof(float));
    float *h_dst = (float*)malloc(nelems * sizeof(float));
    
    CUDA_RT_CHECK(cudaSetDevice(src_gpu));
    CUDA_RT_CHECK(cudaMemcpy(h_src, src_buf->d_ptr, 
                            nelems * sizeof(float), cudaMemcpyDeviceToHost));
    
    CUDA_RT_CHECK(cudaSetDevice(dst_gpu));
    CUDA_RT_CHECK(cudaMemcpy(h_dst, dst_buf->d_ptr, 
                            nelems * sizeof(float), cudaMemcpyDeviceToHost));
    
    bool match = true;
    for (size_t i = 0; i < nelems; i++) {
        if (h_src[i] != h_dst[i]) {
            printf("  Mismatch at index %zu: src=%f, dst=%f\n", 
                   i, h_src[i], h_dst[i]);
            match = false;
            break;
        }
    }
    
    printf("  %s Verification passed!\n", match ? "✓" : "✗");
    
    free(h_src);
    free(h_dst);
}

int main() {
    printf("================================================\n");
    printf("Multi-GPU Symmetric Memory Demo\n");
    printf("================================================\n\n");
    
    // 获取GPU数量
    int gpuCount = 0;
    CUDA_RT_CHECK(cudaGetDeviceCount(&gpuCount));
    printf("Available GPUs: %d\n\n", gpuCount);
    
    if (gpuCount < 2) {
        printf("This demo requires at least 2 GPUs!\n");
        return 1;
    }
    
    // =====================================================
    // STEP 1: 为每个GPU分配对称内存
    // =====================================================
    printf("STEP 1: Allocate symmetric memory buffers\n");
    printf("-" "----" "-" "----" "-" "----" "-" "-----\n\n");
    
    int num_test_gpus = 2;
    size_t nelems = 1024 * 1024;
    size_t bufferSize = nelems * sizeof(float);
    
    SymmetricMemBuffer **buffers = 
        (SymmetricMemBuffer**)malloc(num_test_gpus * sizeof(SymmetricMemBuffer*));
    
    for (int i = 0; i < num_test_gpus; i++) {
        buffers[i] = allocateSymmetricMemory(i, gpuCount, bufferSize);
    }
    printf("\n");
    
    // =====================================================
    // STEP 2: 初始化数据
    // =====================================================
    printf("STEP 2: Initialize data on each GPU\n");
    printf("-" "----" "-" "----" "-" "----" "-" "-----\n\n");
    
    for (int i = 0; i < num_test_gpus; i++) {
        CUDA_RT_CHECK(cudaSetDevice(i));
        
        // 创建填充模式：GPU i 的数据为 (100 + i)
        float fillValue = 100.0f + i;
        CUDA_RT_CHECK(cudaMemset(buffers[i]->d_ptr, 0, buffers[i]->size));
        
        float *h_init = (float*)malloc(bufferSize);
        for (size_t j = 0; j < nelems; j++) {
            h_init[j] = fillValue;
        }
        CUDA_RT_CHECK(cudaMemcpy(buffers[i]->d_ptr, h_init, 
                                bufferSize, cudaMemcpyHostToDevice));
        free(h_init);
        
        printf("GPU%d initialized with value %.1f\n", i, fillValue);
    }
    printf("\n");
    
    // =====================================================
    // STEP 3: 执行P2P拷贝
    // =====================================================
    printf("STEP 3: Perform P2P copies\n");
    printf("-" "----" "-" "----" "-" "----" "-" "-----\n\n");
    
    // GPU0 -> GPU1
    p2pCopy(0, 1, buffers[0], buffers[1], nelems);
    printf("\n");
    
    // GPU1 -> GPU0
    p2pCopy(1, 0, buffers[1], buffers[0], nelems);
    printf("\n");
    
    // =====================================================
    // STEP 4: 验证结果
    // =====================================================
    printf("STEP 4: Verify P2P copy results\n");
    printf("-" "----" "-" "----" "-" "----" "-" "-----\n\n");
    
    // 验证 GPU0 -> GPU1: GPU1应该现在全是100.0
    verifyP2PCopy(0, 1, buffers[0], buffers[1], nelems);
    
    // 验证 GPU1 -> GPU0: GPU0应该现在全是101.0
    verifyP2PCopy(1, 0, buffers[1], buffers[0], nelems);
    printf("\n");
    
    // =====================================================
    // STEP 5: 性能测试
    // =====================================================
    printf("STEP 5: Performance test\n");
    printf("-" "----" "-" "----" "-" "----" "-" "-----\n\n");
    
    int iterations = 10;
    printf("Running %d iterations of P2P copy...\n", iterations);
    
    CUDA_RT_CHECK(cudaSetDevice(0));
    cudaEvent_t start, stop;
    CUDA_RT_CHECK(cudaEventCreate(&start));
    CUDA_RT_CHECK(cudaEventCreate(&stop));
    
    CUDA_RT_CHECK(cudaEventRecord(start));
    
    for (int iter = 0; iter < iterations; iter++) {
        p2pCopy(0, 1, buffers[0], buffers[1], nelems);
    }
    
    CUDA_RT_CHECK(cudaEventRecord(stop));
    CUDA_RT_CHECK(cudaEventSynchronize(stop));
    
    float elapsedTime = 0.0f;
    CUDA_RT_CHECK(cudaEventElapsedTime(&elapsedTime, start, stop));
    
    float dataSize = bufferSize / (1024.0f * 1024.0f * 1024.0f);  // GB
    float totalData = dataSize * iterations;  // GB
    float bandwidth = totalData / (elapsedTime / 1000.0f);  // GB/s
    
    printf("Total time: %.2f ms\n", elapsedTime);
    printf("Bandwidth: %.2f GB/s\n\n", bandwidth);
    
    CUDA_RT_CHECK(cudaEventDestroy(start));
    CUDA_RT_CHECK(cudaEventDestroy(stop));
    
    // =====================================================
    // STEP 6: 清理
    // =====================================================
    printf("STEP 6: Cleanup\n");
    printf("-" "----" "-" "----" "-" "----" "-" "-----\n\n");
    
    for (int i = 0; i < num_test_gpus; i++) {
        freeSymmetricMemory(buffers[i]);
    }
    free(buffers);
    
    printf("================================================\n");
    printf("Demo completed successfully!\n");
    printf("================================================\n");
    
    return 0;
}

/*
 * 编译：
 * nvcc -std=c++14 -o symmetric_mem_p2p_demo symmetric_mem_p2p_demo.cu
 * 
 * 运行：
 * ./symmetric_mem_p2p_demo
 */
