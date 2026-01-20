/*
 * CUDA Symmetric Memory Demo
 *
 * 这个demo展示了NCCL中对称内存涉及的主要CUDA接口：
 * 
 * 核心接口：
 * 1. cuMemCreate()              - 创建物理内存分配
 * 2. cuMemAddressReserve()      - 预留虚拟地址范围
 * 3. cuMemMap()                 - 将物理内存映射到虚拟地址
 * 4. cuMemSetAccess()           - 设置多GPU的访问权限
 * 5. cuMemUnmap()               - 取消映射
 * 6. cuMemAddressFree()         - 释放虚拟地址范围
 * 7. cuMemRelease()             - 释放物理内存
 * 8. cuMemGetAllocationGranularity()     - 获取最小对齐粒度
 * 9. cuMemRetainAllocationHandle()       - 获取现有分配的句柄
 * 10. cuMemGetAddressRange()    - 获取地址范围信息
 */

#include <cuda.h>
#include <cuda_runtime.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

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

/*
 * 内核函数：简单的数据初始化
 */
__global__ void initKernel(float *data, size_t n, float value) {
    size_t idx = blockIdx.x * blockDim.x + threadIdx.x;
    if (idx < n) {
        data[idx] = value;
    }
}

/*
 * 内核函数：验证数据
 */
__global__ void verifyKernel(float *data, size_t n, float expected) {
    size_t idx = blockIdx.x * blockDim.x + threadIdx.x;
    if (idx < n) {
        if (data[idx] != expected) {
            printf("Verification failed at index %zu: expected %f, got %f\n",
                   idx, expected, data[idx]);
        }
    }
}

int main() {
    printf("=================================================\n");
    printf("CUDA Symmetric Memory Demo\n");
    printf("=================================================\n\n");

    // 初始化CUDA
    CUDA_CHECK(cuInit(0));
    
    // 获取第一个GPU设备
    CUdevice device;
    CUDA_CHECK(cuDeviceGet(&device, 0));
    
    // 创建计算上下文
    CUcontext ctx;
    CUDA_CHECK(cuCtxCreate(&ctx, 0, device));
    
    int gpuCount = 0;
    CUDA_RT_CHECK(cudaGetDeviceCount(&gpuCount));
    printf("Found %d GPU(s)\n\n", gpuCount);

    // =====================================================
    // STEP 1: 查询内存分配属性和对齐粒度
    // =====================================================
    printf("STEP 1: Query allocation properties\n");
    printf("-" "----" "-" "----" "-" "----" "-" "-----\n");
    
    CUmemAllocationProp memProp = {};
    memProp.type = CU_MEM_ALLOCATION_TYPE_PINNED;
    memProp.location.type = CU_MEM_LOCATION_TYPE_DEVICE;
    memProp.location.id = 0;  // GPU 0
    memProp.requestedHandleTypes = CU_MEM_HANDLE_TYPE_POSIX_FILE_DESCRIPTOR;
    
    // 查询是否支持GPU Direct RDMA
    int rdmaSupport = 0;
    CUDA_CHECK(cuDeviceGetAttribute(&rdmaSupport, 
        CU_DEVICE_ATTRIBUTE_GPU_DIRECT_RDMA_WITH_CUDA_VMM_SUPPORTED, device));
    printf("GPU Direct RDMA with CUDA VMM supported: %s\n", 
           rdmaSupport ? "YES" : "NO");
    
    if (rdmaSupport) {
        memProp.allocFlags.gpuDirectRDMACapable = 1;
    }
    
    // 获取最小对齐粒度（cuMemGetAllocationGranularity）
    size_t granularity = 0;
    CUDA_CHECK(cuMemGetAllocationGranularity(&granularity, &memProp, 
        CU_MEM_ALLOC_GRANULARITY_MINIMUM));
    printf("Allocation granularity: %zu bytes\n\n", granularity);

    // =====================================================
    // STEP 2: 分配对称内存
    // =====================================================
    printf("STEP 2: Allocate symmetric memory\n");
    printf("-" "----" "-" "----" "-" "----" "-" "-----\n");
    
    size_t elemsPerDevice = 1024 * 1024;  // 1M floats
    size_t allocSize = elemsPerDevice * sizeof(float);
    
    // 对齐大小到粒度
    size_t alignedSize = ((allocSize + granularity - 1) / granularity) * granularity;
    printf("Original size: %zu bytes\n", allocSize);
    printf("Aligned size:  %zu bytes\n\n", alignedSize);

    // Step 2a: 创建物理内存分配（cuMemCreate）
    printf("Creating physical memory allocation...\n");
    CUmemGenericAllocationHandle memHandle;
    CUDA_CHECK(cuMemCreate(&memHandle, alignedSize, &memProp, 0));
    printf("✓ Physical memory created (handle: 0x%llx)\n\n", 
           (unsigned long long)memHandle);

    // Step 2b: 预留虚拟地址范围（cuMemAddressReserve）
    printf("Reserving virtual address range...\n");
    CUdeviceptr devPtr = 0;
    CUDA_CHECK(cuMemAddressReserve(&devPtr, alignedSize, granularity, 0, 0));
    printf("✓ Virtual address reserved (0x%llx)\n\n", devPtr);

    // Step 2c: 映射虚拟地址到物理内存（cuMemMap）
    printf("Mapping virtual address to physical memory...\n");
    CUDA_CHECK(cuMemMap(devPtr, alignedSize, 0, memHandle, 0));
    printf("✓ Memory mapped\n\n");

    // Step 2d: 设置访问权限（cuMemSetAccess）
    printf("Setting access permissions for %d GPU(s)...\n", gpuCount);
    for (int i = 0; i < gpuCount; i++) {
        CUmemAccessDesc accessDesc = {};
        accessDesc.location.type = CU_MEM_LOCATION_TYPE_DEVICE;
        accessDesc.location.id = i;
        accessDesc.flags = CU_MEM_ACCESS_FLAGS_PROT_READWRITE;
        CUDA_CHECK(cuMemSetAccess(devPtr, alignedSize, &accessDesc, 1));
        printf("  ✓ GPU %d: read/write access enabled\n", i);
    }
    printf("\n");

    // =====================================================
    // STEP 3: 在设备上使用内存
    // =====================================================
    printf("STEP 3: Use symmetric memory on GPU\n");
    printf("-" "----" "-" "----" "-" "----" "-" "-----\n");
    
    cudaStream_t stream;
    CUDA_RT_CHECK(cudaStreamCreate(&stream));
    
    float *d_mem = (float*)devPtr;
    size_t blockSize = 256;
    size_t gridSize = (elemsPerDevice + blockSize - 1) / blockSize;
    
    // 初始化内存
    printf("Initializing memory to value 42.0...\n");
    initKernel<<<gridSize, blockSize, 0, stream>>>(d_mem, elemsPerDevice, 42.0f);
    CUDA_RT_CHECK(cudaStreamSynchronize(stream));
    printf("✓ Initialization complete\n\n");
    
    // 验证内存
    printf("Verifying memory contents...\n");
    verifyKernel<<<gridSize, blockSize, 0, stream>>>(d_mem, elemsPerDevice, 42.0f);
    CUDA_RT_CHECK(cudaStreamSynchronize(stream));
    printf("✓ Verification complete\n\n");

    // =====================================================
    // STEP 4: 复制数据到主机并验证
    // =====================================================
    printf("STEP 4: Copy data to host and verify\n");
    printf("-" "----" "-" "----" "-" "----" "-" "-----\n");
    
    float *h_mem = (float*)malloc(alignedSize);
    CUDA_RT_CHECK(cudaMemcpy(h_mem, d_mem, alignedSize, cudaMemcpyDeviceToHost));
    
    // 检查前几个元素
    int checkCount = 10;
    printf("Checking first %d elements:\n", checkCount);
    bool valid = true;
    for (int i = 0; i < checkCount; i++) {
        printf("  [%d] = %f %s\n", i, h_mem[i], 
               (h_mem[i] == 42.0f) ? "✓" : "✗");
        if (h_mem[i] != 42.0f) valid = false;
    }
    printf("%s All values are correct!\n\n", valid ? "✓" : "✗");

    // =====================================================
    // STEP 5: 查询分配信息（cuMemGetAddressRange）
    // =====================================================
    printf("STEP 5: Query memory allocation information\n");
    printf("-" "----" "-" "----" "-" "----" "-" "-----\n");
    
    CUdeviceptr rangeBase;
    size_t rangeSize;
    CUDA_CHECK(cuMemGetAddressRange(&rangeBase, &rangeSize, devPtr));
    printf("Address range base: 0x%llx\n", rangeBase);
    printf("Address range size: %zu bytes (%.2f MB)\n", 
           rangeSize, rangeSize / (1024.0 * 1024.0));
    printf("Matches our allocation: %s\n\n", 
           (rangeBase == devPtr && rangeSize >= alignedSize) ? "✓" : "✗");

    // =====================================================
    // STEP 6: 清理资源
    // =====================================================
    printf("STEP 6: Cleanup\n");
    printf("-" "----" "-" "----" "-" "----" "-" "-----\n");
    
    // Step 6a: 取消映射（cuMemUnmap）
    printf("Unmapping memory...\n");
    CUDA_CHECK(cuMemUnmap(devPtr, alignedSize));
    printf("✓ Memory unmapped\n");
    
    // Step 6b: 释放虚拟地址范围（cuMemAddressFree）
    printf("Freeing virtual address range...\n");
    CUDA_CHECK(cuMemAddressFree(devPtr, alignedSize));
    printf("✓ Virtual address freed\n");
    
    // Step 6c: 释放物理内存（cuMemRelease）
    printf("Releasing physical memory...\n");
    CUDA_CHECK(cuMemRelease(memHandle));
    printf("✓ Physical memory released\n\n");
    
    // 清理其他资源
    CUDA_RT_CHECK(cudaStreamDestroy(stream));
    free(h_mem);
    
    CUDA_CHECK(cuCtxDestroy(ctx));
    
    printf("=================================================\n");
    printf("Demo completed successfully!\n");
    printf("=================================================\n");
    
    return 0;
}

/*
 * 编译方式：
 * nvcc -std=c++14 -o symmetric_mem_demo symmetric_mem_demo.cu
 * 
 * 或使用cmake：
 * 在你的CMakeLists.txt中添加：
 *   find_package(CUDA REQUIRED)
 *   cuda_add_executable(symmetric_mem_demo symmetric_mem_demo.cu)
 *   target_link_libraries(symmetric_mem_demo ${CUDA_LIBRARIES})
 */
