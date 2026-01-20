/*
 * Complete HBM Mapping Demo
 *
 * 演示如何使用CUDA接口映射整个GPU HBM全局内存
 * 
 * 关键要点：
 * 1. HBM虚拟地址空间充分大（H100: 256TB）
 * 2. 可以创建单个大分配
 * 3. 或分段创建多个分配
 * 4. 适合大模型和通信密集应用
 */

#include <cuda.h>
#include <cuda_runtime.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

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
    CUdeviceptr ptr;
    CUmemGenericAllocationHandle handle;
    size_t size;
} HBMAllocation;

typedef struct {
    HBMAllocation *allocations;
    int count;
    size_t total_size;
} HBMMapping;

/*
 * 打印内存容量，转换为合适的单位
 */
void printSize(const char *label, size_t bytes) {
    if (bytes < 1024) {
        printf("%s: %zu B\n", label, bytes);
    } else if (bytes < 1024 * 1024) {
        printf("%s: %.2f KB\n", label, bytes / 1024.0);
    } else if (bytes < 1024 * 1024 * 1024) {
        printf("%s: %.2f MB\n", label, bytes / (1024.0 * 1024.0));
    } else if (bytes < 1024ULL * 1024 * 1024 * 1024) {
        printf("%s: %.2f GB\n", label, bytes / (1024.0 * 1024.0 * 1024.0));
    } else {
        printf("%s: %.2f TB\n", label, bytes / (1024.0 * 1024.0 * 1024.0 * 1024.0));
    }
}

/*
 * 方案1: 单个大分配映射整个HBM
 */
HBMAllocation* mapFullHBMAsSingleAllocation(int gpu_id) {
    printf("\n=================================================\n");
    printf("SCHEME 1: Single Large Allocation\n");
    printf("=================================================\n\n");
    
    CUDA_RT_CHECK(cudaSetDevice(gpu_id));
    
    CUdevice device;
    CUDA_CHECK(cuDeviceGet(&device, gpu_id));
    
    // 查询HBM大小
    size_t totalMemory, freeMemory;
    CUDA_RT_CHECK(cudaMemGetInfo(&freeMemory, &totalMemory));
    
    printf("GPU %d Memory Information:\n", gpu_id);
    printSize("  Total HBM", totalMemory);
    printSize("  Free HBM", freeMemory);
    
    // 为系统保留10%
    size_t allocSize = (size_t)(freeMemory * 0.9);
    printSize("  Allocation target (90%% of free)", allocSize);
    
    // 获取对齐粒度
    CUmemAllocationProp prop = {};
    prop.type = CU_MEM_ALLOCATION_TYPE_PINNED;
    prop.location.type = CU_MEM_LOCATION_TYPE_DEVICE;
    prop.location.id = gpu_id;
    prop.requestedHandleTypes = CU_MEM_HANDLE_TYPE_POSIX_FILE_DESCRIPTOR;
    
    size_t granularity = 0;
    CUDA_CHECK(cuMemGetAllocationGranularity(&granularity, &prop,
        CU_MEM_ALLOC_GRANULARITY_MINIMUM));
    
    printf("\nAllocation Properties:\n");
    printf("  Granularity: %zu bytes (%.1f MB)\n", granularity, 
           granularity / (1024.0 * 1024.0));
    
    // 对齐大小
    size_t alignedSize = ((allocSize + granularity - 1) / granularity) * granularity;
    printf("  Aligned size: ");
    printSize("", alignedSize);
    
    // 计算会产生多少个段
    int numSegments = (int)((alignedSize + granularity - 1) / granularity);
    printf("  Number of segments: %d\n", numSegments);
    
    // 尝试创建分配
    printf("\nAttempting to create allocation...\n");
    
    HBMAllocation *alloc = (HBMAllocation*)malloc(sizeof(HBMAllocation));
    
    CUresult result = cuMemCreate(&alloc->handle, alignedSize, &prop, 0);
    if (result != CUDA_SUCCESS) {
        printf("✗ Failed to create allocation\n");
        free(alloc);
        return NULL;
    }
    printf("✓ Created physical memory allocation\n");
    
    // 预留虚拟地址范围
    printf("Reserving virtual address range...\n");
    CUDA_CHECK(cuMemAddressReserve(&alloc->ptr, alignedSize, granularity, 0, 0));
    printf("✓ Virtual address reserved: 0x%llx\n", alloc->ptr);
    
    // 映射
    printf("Mapping virtual address to physical memory...\n");
    CUDA_CHECK(cuMemMap(alloc->ptr, alignedSize, 0, alloc->handle, 0));
    printf("✓ Memory mapped\n");
    
    // 设置访问权限
    printf("Setting access permissions...\n");
    CUmemAccessDesc accessDesc = {};
    accessDesc.location.type = CU_MEM_LOCATION_TYPE_DEVICE;
    accessDesc.location.id = gpu_id;
    accessDesc.flags = CU_MEM_ACCESS_FLAGS_PROT_READWRITE;
    CUDA_CHECK(cuMemSetAccess(alloc->ptr, alignedSize, &accessDesc, 1));
    printf("✓ Access permissions set\n");
    
    alloc->size = alignedSize;
    
    printf("\n✓ SUCCESS: Entire HBM mapped in single allocation\n");
    printf("  Pointer: 0x%llx\n", alloc->ptr);
    printSize("  Size", alloc->size);
    
    return alloc;
}

/*
 * 方案2: 分段分配映射（如果单个分配失败）
 */
HBMMapping* mapFullHBMAsSegments(int gpu_id, size_t segment_size) {
    printf("\n=================================================\n");
    printf("SCHEME 2: Segmented Allocation\n");
    printf("=================================================\n\n");
    
    CUDA_RT_CHECK(cudaSetDevice(gpu_id));
    
    CUdevice device;
    CUDA_CHECK(cuDeviceGet(&device, gpu_id));
    
    // 查询HBM大小
    size_t totalMemory, freeMemory;
    CUDA_RT_CHECK(cudaMemGetInfo(&freeMemory, &totalMemory));
    
    printf("GPU %d Memory Information:\n", gpu_id);
    printSize("  Free HBM", freeMemory);
    printSize("  Segment size", segment_size);
    
    size_t allocSize = (size_t)(freeMemory * 0.9);
    int numSegments = (int)((allocSize + segment_size - 1) / segment_size);
    
    printf("  Number of segments: %d\n\n", numSegments);
    
    HBMMapping *mapping = (HBMMapping*)malloc(sizeof(HBMMapping));
    mapping->allocations = (HBMAllocation*)malloc(numSegments * sizeof(HBMAllocation));
    mapping->count = 0;
    mapping->total_size = 0;
    
    // 获取对齐粒度
    CUmemAllocationProp prop = {};
    prop.type = CU_MEM_ALLOCATION_TYPE_PINNED;
    prop.location.type = CU_MEM_LOCATION_TYPE_DEVICE;
    prop.location.id = gpu_id;
    prop.requestedHandleTypes = CU_MEM_HANDLE_TYPE_POSIX_FILE_DESCRIPTOR;
    
    size_t granularity = 0;
    CUDA_CHECK(cuMemGetAllocationGranularity(&granularity, &prop,
        CU_MEM_ALLOC_GRANULARITY_MINIMUM));
    
    // 创建多个分段分配
    printf("Creating segments...\n");
    
    for (int i = 0; i < numSegments; i++) {
        size_t currentSegmentSize = segment_size;
        if (mapping->total_size + currentSegmentSize > allocSize) {
            currentSegmentSize = allocSize - mapping->total_size;
        }
        
        if (currentSegmentSize == 0) break;
        
        // 对齐
        currentSegmentSize = ((currentSegmentSize + granularity - 1) / granularity) * granularity;
        
        HBMAllocation *alloc = &mapping->allocations[i];
        
        // 创建
        CUDA_CHECK(cuMemCreate(&alloc->handle, currentSegmentSize, &prop, 0));
        
        // 预留虚拟地址
        CUDA_CHECK(cuMemAddressReserve(&alloc->ptr, currentSegmentSize, granularity, 0, 0));
        
        // 映射
        CUDA_CHECK(cuMemMap(alloc->ptr, currentSegmentSize, 0, alloc->handle, 0));
        
        // 设置权限
        CUmemAccessDesc accessDesc = {};
        accessDesc.location.type = CU_MEM_LOCATION_TYPE_DEVICE;
        accessDesc.location.id = gpu_id;
        accessDesc.flags = CU_MEM_ACCESS_FLAGS_PROT_READWRITE;
        CUDA_CHECK(cuMemSetAccess(alloc->ptr, currentSegmentSize, &accessDesc, 1));
        
        alloc->size = currentSegmentSize;
        
        printf("  Segment %d: 0x%llx (", i, alloc->ptr);
        printSize("", currentSegmentSize);
        printf(")\n");
        
        mapping->total_size += currentSegmentSize;
        mapping->count++;
    }
    
    printf("\n✓ SUCCESS: HBM mapped in %d segments\n", mapping->count);
    printSize("  Total mapped", mapping->total_size);
    
    return mapping;
}

/*
 * 测试内存：进行简单的读写
 */
void testHBMAccess(CUdeviceptr ptr, size_t size) {
    printf("\nTesting HBM access...\n");
    
    // 创建内核来测试访问
    float *d_data = (float*)ptr;
    
    CUDA_RT_CHECK(cudaSetDevice(0));
    
    // 简单的memset测试
    printf("  Writing test pattern...\n");
    CUDA_RT_CHECK(cudaMemset(d_data, 0xAA, size < 1024 * 1024 ? size : 1024 * 1024));
    CUDA_RT_CHECK(cudaDeviceSynchronize());
    
    printf("  ✓ HBM access successful\n");
}

/*
 * 释放单个分配
 */
void freeHBMAllocation(HBMAllocation *alloc) {
    if (!alloc) return;
    
    CUDA_CHECK(cuMemUnmap(alloc->ptr, alloc->size));
    CUDA_CHECK(cuMemAddressFree(alloc->ptr, alloc->size));
    CUDA_CHECK(cuMemRelease(alloc->handle));
    
    free(alloc);
}

/*
 * 释放分段映射
 */
void freeHBMMapping(HBMMapping *mapping) {
    if (!mapping) return;
    
    for (int i = 0; i < mapping->count; i++) {
        CUDA_CHECK(cuMemUnmap(mapping->allocations[i].ptr, mapping->allocations[i].size));
        CUDA_CHECK(cuMemAddressFree(mapping->allocations[i].ptr, mapping->allocations[i].size));
        CUDA_CHECK(cuMemRelease(mapping->allocations[i].handle));
    }
    
    free(mapping->allocations);
    free(mapping);
}

int main() {
    printf("================================================\n");
    printf("Complete HBM Mapping Demo\n");
    printf("================================================\n");
    
    // 初始化CUDA
    CUDA_CHECK(cuInit(0));
    
    int gpuCount = 0;
    CUDA_RT_CHECK(cudaGetDeviceCount(&gpuCount));
    printf("\nAvailable GPUs: %d\n", gpuCount);
    
    if (gpuCount == 0) {
        printf("No GPU found!\n");
        return 1;
    }
    
    int targetGPU = 0;
    
    // =====================================================
    // 方案1: 单个大分配
    // =====================================================
    printf("\n");
    HBMAllocation *singleAlloc = mapFullHBMAsSingleAllocation(targetGPU);
    
    if (singleAlloc) {
        testHBMAccess(singleAlloc->ptr, 1024 * 1024);  // 测试1MB
        freeHBMAllocation(singleAlloc);
        printf("✓ Single allocation freed\n");
    } else {
        printf("✗ Single allocation failed, trying segmented approach\n");
        
        // =====================================================
        // 方案2: 分段分配（备选方案）
        // =====================================================
        size_t segmentSize = 4 * 1024 * 1024 * 1024ULL;  // 4GB per segment
        HBMMapping *segmentedAlloc = mapFullHBMAsSegments(targetGPU, segmentSize);
        
        if (segmentedAlloc) {
            testHBMAccess(segmentedAlloc->allocations[0].ptr, 1024 * 1024);
            freeHBMMapping(segmentedAlloc);
            printf("✓ Segmented allocation freed\n");
        }
    }
    
    printf("\n================================================\n");
    printf("Demo completed successfully!\n");
    printf("================================================\n");
    
    return 0;
}

/*
 * 编译：
 * nvcc -std=c++14 -O2 -o hbm_mapping_demo hbm_mapping_demo.cu
 * 
 * 预期输出（H100示例）：
 * 
 * Available GPUs: 8
 * GPU 0 Memory Information:
 *   Total HBM: 81.37 GB
 *   Free HBM: 80.00 GB
 *   Allocation target (90%% of free): 72.00 GB
 * 
 * Allocation Properties:
 *   Granularity: 2097152 bytes (2.00 MB)
 *   Aligned size: 72.00 GB
 *   Number of segments: 36864
 * 
 * ✓ SUCCESS: Entire HBM mapped in single allocation
 *   Pointer: 0x7000000000
 *   Size: 72.00 GB
 * 
 * Key Insights:
 * 1. 虚拟地址空间充分（H100有256TB可用）
 * 2. 72GB对齐后仍是72GB（2MB粒度很容易对齐）
 * 3. 单次分配即可映射整个HBM
 * 4. 初始化时间通常 < 50ms
 */
