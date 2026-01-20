# NCCL 对称内存涉及的CUDA接口总结

## 核心接口

### 1. **内存分配相关**

#### `cuMemCreate`
- **原型**: `CUresult cuMemCreate(CUmemGenericAllocationHandle *handle, size_t size, const CUmemAllocationProp *prop, unsigned int flags)`
- **功能**: 创建物理内存分配
- **说明**: 这是分配流程中的第一步，创建实际的物理内存块
- **用途**: 在NCCL中用于创建可跨GPU访问的内存块

#### `cuMemGetAllocationGranularity`
- **原型**: `CUresult cuMemGetAllocationGranularity(size_t *granularity, const CUmemAllocationProp *prop, CUmemAllocGranularity_flags option)`
- **功能**: 获取内存分配的最小粒度
- **说明**: 返回分配和映射时的对齐要求，常见为2MB或64KB
- **用途**: 确保分配大小和地址都对齐到粒度

#### `cuMemAddressReserve`
- **原型**: `CUresult cuMemAddressReserve(CUdeviceptr *ptr, size_t size, size_t alignment, CUdeviceptr addr, unsigned long long flags)`
- **功能**: 在虚拟地址空间中预留地址范围
- **说明**: 不分配物理内存，只预留虚拟地址，后续可映射物理内存到此处
- **用途**: 获得稳定的设备指针用于访问

#### `cuMemMap`
- **原型**: `CUresult cuMemMap(CUdeviceptr ptr, size_t size, size_t offset, CUmemGenericAllocationHandle handle, unsigned long long flags)`
- **功能**: 将物理内存映射到预留的虚拟地址
- **说明**: 将cuMemCreate创建的内存映射到cuMemAddressReserve预留的地址
- **用途**: 建立虚拟地址到物理内存的映射

### 2. **访问权限设置**

#### `cuMemSetAccess`
- **原型**: `CUresult cuMemSetAccess(CUdeviceptr ptr, size_t size, const CUmemAccessDesc *desc, size_t count)`
- **功能**: 设置多个位置（GPU/CPU）对内存的访问权限
- **说明**: 对于每个GPU设置读/写权限，支持P2P访问
- **参数说明**:
  - `desc.location.type`: 位置类型（`CU_MEM_LOCATION_TYPE_DEVICE` 或 `CU_MEM_LOCATION_TYPE_HOST`）
  - `desc.location.id`: GPU/NUMA节点ID
  - `desc.flags`: 访问权限（`CU_MEM_ACCESS_FLAGS_PROT_READWRITE` 等）
- **用途**: 使所有GPU都能访问该内存

#### `cuDeviceGetAttribute`
- **原型**: `CUresult cuDeviceGetAttribute(int *pi, CUdevice_attribute attrib, CUdevice dev)`
- **功能**: 查询设备属性
- **关键属性**:
  - `CU_DEVICE_ATTRIBUTE_GPU_DIRECT_RDMA_WITH_CUDA_VMM_SUPPORTED`: 检查是否支持RDMA
  - `CU_DEVICE_ATTRIBUTE_HOST_NUMA_ID`: 获取主机NUMA节点ID
  - `CU_DEVICE_ATTRIBUTE_HANDLE_TYPE_FABRIC_SUPPORTED`: 检查FABRIC句柄支持
- **用途**: 决定分配策略

### 3. **内存释放**

#### `cuMemUnmap`
- **原型**: `CUresult cuMemUnmap(CUdeviceptr ptr, size_t size)`
- **功能**: 取消虚拟地址到物理内存的映射
- **说明**: 反向操作`cuMemMap`，不释放虚拟地址或物理内存
- **用途**: 释放流程的第一步

#### `cuMemAddressFree`
- **原型**: `CUresult cuMemAddressFree(CUdeviceptr ptr, size_t size)`
- **功能**: 释放预留的虚拟地址范围
- **说明**: 反向操作`cuMemAddressReserve`
- **用途**: 释放虚拟地址空间

#### `cuMemRelease`
- **原型**: `CUresult cuMemRelease(CUmemGenericAllocationHandle handle)`
- **功能**: 释放物理内存分配
- **说明**: 反向操作`cuMemCreate`
- **用途**: 释放物理内存

### 4. **句柄管理**

#### `cuMemRetainAllocationHandle`
- **原型**: `CUresult cuMemRetainAllocationHandle(CUmemGenericAllocationHandle *handle, void *addr)`
- **功能**: 从指针地址获取内存分配的句柄
- **说明**: 用于查询现有分配，增加引用计数
- **用途**: 获取分配句柄进行后续操作

#### `cuMemExportToShareableHandle`
- **原型**: `CUresult cuMemExportToShareableHandle(void *shareableHandle, CUmemGenericAllocationHandle handle, CUmemAllocationHandleType handleType, unsigned long long flags)`
- **功能**: 导出内存句柄为可共享形式
- **说明**: 用于在进程间共享内存（IPC）
- **用途**: 在多进程场景中共享对称内存

#### `cuMemImportFromShareableHandle`
- **原型**: `CUresult cuMemImportFromShareableHandle(CUmemGenericAllocationHandle *handle, void *osHandle, CUmemAllocationHandleType handleType)`
- **功能**: 导入共享的内存句柄
- **说明**: 在另一个进程中导入共享内存
- **用途**: 在多进程场景中使用共享对称内存

### 5. **地址查询**

#### `cuMemGetAddressRange`
- **原型**: `CUresult cuMemGetAddressRange(CUdeviceptr *pbase, size_t *psize, CUdeviceptr dptr)`
- **功能**: 查询设备指针对应的内存范围
- **说明**: 返回包含该指针的内存映射的基址和大小
- **用途**: 验证内存分配的范围

#### `cuMemGetAllocationPropertiesFromHandle`
- **原型**: `CUresult cuMemGetAllocationPropertiesFromHandle(CUmemAllocationProp *prop, CUmemGenericAllocationHandle handle)`
- **功能**: 从句柄获取分配属性
- **说明**: 查询分配的属性（类型、位置等）
- **用途**: 验证分配属性是否符合要求

### 6. **其他相关接口**

#### `cuDeviceGet`
- **原型**: `CUresult cuDeviceGet(CUdevice *device, int ordinal)`
- **功能**: 获取设备对象
- **用途**: 用于设置内存分配属性中的设备位置

#### `cuCtxCreate`/`cuCtxDestroy`
- **功能**: 创建和销毁CUDA上下文
- **说明**: 大多数CUDA操作需要活跃的上下文
- **用途**: 管理设备执行环境

#### `cuMemGetHandleForAddressRange`
- **原型**: `CUresult cuMemGetHandleForAddressRange(void *handle, CUdeviceptr dptr, size_t size, CUmemRangeHandleType handleType, unsigned int flags)`
- **功能**: 获取地址范围的DMA-BUF文件描述符句柄
- **说明**: CUDA 11.7+ 支持，用于Linux DMA-BUF导出
- **用途**: 在某些网络传输场景中使用

## 典型工作流

### 单GPU对称内存分配

```
1. cuMemGetAllocationGranularity()      -> 获取对齐要求
2. cuMemCreate()                         -> 创建物理内存
3. cuMemAddressReserve()                 -> 预留虚拟地址
4. cuMemMap()                            -> 建立映射
5. cuMemSetAccess()                      -> 设置访问权限
   ↓ 使用内存进行计算 ↓
6. cuMemUnmap()                          -> 取消映射
7. cuMemAddressFree()                    -> 释放虚拟地址
8. cuMemRelease()                        -> 释放物理内存
```

### 多GPU对称内存分配

```
对单GPU流程的扩展：
在 cuMemSetAccess() 时，为所有GPU设置访问权限：
  for each GPU:
    cuMemSetAccess(ptr, size, &accessDesc[GPU_i], 1)
```

## NCCL中的使用

NCCL对称内存的实现主要在以下文件中：

1. **`src/include/alloc.h`**: 定义了包装函数 `ncclCuMemAlloc()`、`ncclCuMemFree()` 等
2. **`src/allocator.cc`**: 实现了 `ncclMemAlloc()` 和 `ncclMemFree()` 
3. **`src/misc/cudawrap.cc`**: 动态加载CUDA函数
4. **`src/dev_runtime.cc`**: 设备端运行时的对称内存管理

### 关键函数

- `ncclMemAlloc(void **ptr, size_t size)`: 高级分配接口，自动选择是否使用cuMem API
- `ncclCommWindowRegister()`: 将对称内存注册为NCCL通信窗口
- `ncclCommWindowUnregister()`: 注销通信窗口

## 编译要求

- CUDA 11.3+: 基础cuMem API支持
- CUDA 12.1+: 多播（Multicast）支持
- CUDA 12.2+: 主机内存支持

## 环境变量控制

```bash
# 启用CUDA VMM（Unified Memory）模式
export NCCL_CUMEM_ENABLE=1

# 启用主机内存对称分配
export NCCL_CUMEM_HOST_ENABLE=1

# 调试信息
export NCCL_DEBUG=INFO
```

## 参考示例

项目中的示例代码：
- `examples/05_symmetric_memory/01_allreduce/` - NCCL高级接口示例
- `examples/06_device_api/01_allreduce_lsa/` - 设备API示例
