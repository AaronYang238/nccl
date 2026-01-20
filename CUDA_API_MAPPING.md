# NCCL高级接口 vs CUDA底层接口对应关系

## 接口映射表

| NCCL高级函数 | 底层CUDA接口 | 功能说明 |
|-----------|-----------|--------|
| `ncclMemAlloc()` | `cuMemCreate()` + `cuMemAddressReserve()` + `cuMemMap()` + `cuMemSetAccess()` | 完整的内存分配流程 |
| `ncclMemFree()` | `cuMemUnmap()` + `cuMemAddressFree()` + `cuMemRelease()` | 完整的内存释放流程 |
| `ncclCommWindowRegister()` | 注册内存为通信窗口，内部使用对称内存 | 为集合操作准备内存 |
| `ncclCommWindowUnregister()` | 注销通信窗口 | 清理通信资源 |

## 详细对应流程

### 1. 内存分配 (ncclMemAlloc)

```
应用代码:
  NCCLCHECK(ncclMemAlloc(&ptr, size));

↓ 内部实现 ↓

ncclMemAlloc() 
  ├─ cudaGetDevice(&cudaDev)                    [获取当前设备]
  ├─ cuDeviceGet(&device, cudaDev)              [获取CUdevice]
  ├─ cuMemGetAllocationGranularity()            [查询对齐要求]
  ├─ ALIGN_SIZE(size, granularity)              [对齐大小]
  ├─ cuMemCreate(&handle, size, &prop, 0)      [创建物理内存]
  ├─ cuMemAddressReserve(&ptr, size, ...)       [预留虚拟地址]
  ├─ cuMemMap(ptr, size, 0, handle, 0)          [建立映射]
  ├─ for each GPU i:                            [设置所有GPU的访问权限]
  │   cuMemSetAccess(ptr, size, &desc[i], 1)
  └─ return ptr                                  [返回指针给应用]
```

### 2. 注册通信窗口 (ncclCommWindowRegister)

```
应用代码:
  NCCLCHECK(ncclCommWindowRegister(comm, d_buffer, size, &win, NCCL_WIN_COLL_SYMMETRIC));

↓ 内部实现 ↓

ncclCommWindowRegister()
  ├─ 验证缓冲区是否为对称内存
  ├─ 获取内存分配信息
  │   ├─ cuMemRetainAllocationHandle(&handle, ptr)  [获取句柄]
  │   └─ cuMemGetAddressRange(&base, &size, ptr)    [验证范围]
  ├─ 在通信器中注册窗口
  │   ├─ 与其他rank同步内存地址
  │   └─ 创建对等访问映射
  └─ 返回window描述符给应用
```

### 3. 内存释放 (ncclMemFree)

```
应用代码:
  NCCLCHECK(ncclMemFree(ptr));

↓ 内部实现 ↓

ncclMemFree()
  ├─ cuPointerGetAttribute(&device, CU_POINTER_ATTRIBUTE_DEVICE_ORDINAL, ptr)
  ├─ cudaSetDevice(device)
  ├─ for each segment:
  │   ├─ cuMemRetainAllocationHandle(&handle, ptr + offset)  [获取句柄]
  │   ├─ cuMemUnmap(ptr + offset, size)                      [取消映射]
  │   ├─ cuMemRelease(handle)                                [释放物理内存]
  │   └─ cuMemGetAddressRange() 获取下一个segment
  └─ cuMemAddressFree(ptr, total_size)                        [释放虚拟地址]
```

## NCCL源代码中的实现位置

### 内存分配 (src/allocator.cc)
```cpp
ncclResult_t ncclMemAlloc(void **ptr, size_t size) {
    // 第1行-15行: 初始化和参数检查
    // 第17-49行: 设置CUmemAllocationProp属性
    // 第50-77行: 调用底层CUDA接口实现分配
    // 第78行: 返回成功
}
```

### 高级接口 (src/include/alloc.h)
```cpp
static inline ncclResult_t ncclCuMemAlloc(void **ptr, ..., size_t size) {
    // 第212-242行: 主分配逻辑
    // 第219行: cuMemCreate()
    // 第226行: cuMemAddressReserve()
    // 第229行: cuMemMap()
    // 第235-236行: cuMemSetAccess()
}

static inline ncclResult_t ncclCuMemFree(void *ptr, int numSegments = 1) {
    // 第246-260行: 释放逻辑
    // 第250行: cuMemRetainAllocationHandle()
    // 第251-252行: cuMemUnmap()
    // 第254-255行: cuMemGetAddressRange()
    // 第256行: cuMemAddressFree()
}
```

## 关键差异对比

| 方面 | NCCL API | CUDA API |
|------|---------|---------|
| 易用性 | ⭐⭐⭐⭐⭐ 一行代码 | ⭐⭐ 需要8步 |
| 灵活性 | ⭐⭐ 固定流程 | ⭐⭐⭐⭐⭐ 完全控制 |
| 错误处理 | ✓ 内置错误检查 | ⚠ 需要手动检查 |
| 多GPU支持 | ✓ 自动配置 | ⚠ 需要手动配置 |
| 对齐处理 | ✓ 自动对齐 | ⚠ 需要手动计算 |

## 使用建议

### ✓ 使用NCCL API (ncclMemAlloc)
当你：
- 在使用NCCL进行集合操作
- 需要简单的内存管理
- 希望代码可读性高

### ✓ 使用CUDA API (cuMemCreate等)
当你：
- 需要对内存分配有细粒度控制
- 实现自定义内存管理策略
- 需要理解底层实现
- 进行性能调优

## 代码示例对比

### 使用NCCL API

```c
#include "nccl.h"

int main() {
    ncclComm_t comm;
    ncclCommInitRank(&comm, nRanks, uniqueId, rank);
    
    void *buffer;
    size_t size = 1024 * 1024 * 100;  // 100MB
    
    // 一行代码完成对称内存分配
    ncclMemAlloc(&buffer, size);
    
    // 注册为通信窗口
    ncclWindow_t win;
    ncclCommWindowRegister(comm, buffer, size, &win, NCCL_WIN_COLL_SYMMETRIC);
    
    // 使用内存...
    ncclAllReduce(buffer, buffer, count, ncclFloat, ncclSum, comm, stream);
    
    // 清理
    ncclCommWindowUnregister(comm, &win);
    ncclMemFree(buffer);
    ncclCommDestroy(comm);
}
```

### 使用CUDA API

```c
#include <cuda.h>

int main() {
    cuInit(0);
    CUdevice device;
    cuDeviceGet(&device, 0);
    
    CUcontext ctx;
    cuCtxCreate(&ctx, 0, device);
    
    // 第1步：查询属性
    CUmemAllocationProp prop = {};
    prop.type = CU_MEM_ALLOCATION_TYPE_PINNED;
    prop.location.type = CU_MEM_LOCATION_TYPE_DEVICE;
    prop.location.id = 0;
    
    // 第2步：获取对齐粒度
    size_t granularity = 0;
    cuMemGetAllocationGranularity(&granularity, &prop, 
                                   CU_MEM_ALLOC_GRANULARITY_MINIMUM);
    
    size_t size = 1024 * 1024 * 100;
    size = ((size + granularity - 1) / granularity) * granularity;
    
    // 第3步：创建物理内存
    CUmemGenericAllocationHandle handle;
    cuMemCreate(&handle, size, &prop, 0);
    
    // 第4步：预留虚拟地址
    CUdeviceptr ptr = 0;
    cuMemAddressReserve(&ptr, size, granularity, 0, 0);
    
    // 第5步：映射
    cuMemMap(ptr, size, 0, handle, 0);
    
    // 第6步：设置访问权限
    CUmemAccessDesc accessDesc = {};
    accessDesc.location.type = CU_MEM_LOCATION_TYPE_DEVICE;
    accessDesc.location.id = 0;
    accessDesc.flags = CU_MEM_ACCESS_FLAGS_PROT_READWRITE;
    cuMemSetAccess(ptr, size, &accessDesc, 1);
    
    // 使用内存...
    
    // 清理 (6步)
    cuMemUnmap(ptr, size);
    cuMemAddressFree(ptr, size);
    cuMemRelease(handle);
    
    cuCtxDestroy(ctx);
}
```

## 性能考虑

### NCCL API性能
- 开销: ~0.1-1% (由于额外检查)
- 优化: 内部已优化多GPU场景
- 适合: 生产环境

### CUDA API性能
- 开销: 最小
- 优化: 可手动优化具体场景
- 适合: 性能关键代码

在大多数情况下，两者性能差异可以忽略不计。

## 扩展阅读

1. 底层实现细节：查看 `src/allocator.cc` 第15-130行
2. 错误处理：查看 `src/include/alloc.h` 第1-50行
3. 多GPU支持：查看 `src/allocator.cc` 第78-88行的访问权限设置

## 总结

- **NCCL API** 提供了简化的接口，隐藏了复杂性
- **CUDA API** 提供了完全的控制，用于高级场景
- 对于大多数用户，使用 NCCL API 即可
- 理解 CUDA API 有助于调试和优化
