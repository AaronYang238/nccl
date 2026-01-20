# NCCL 对称内存 CUDA Demo

这个目录包含了演示NCCL中对称内存（Symmetric Memory）使用的CUDA原生接口的示例代码。

## 文件说明

### 1. `SYMMETRIC_MEMORY_GUIDE.md` - 完整指南
详细介绍了所有涉及的CUDA接口：
- 核心接口详解（内存分配、访问权限、释放等）
- 典型工作流
- NCCL中的使用
- 编译和环境要求

### 2. `symmetric_mem_demo.cu` - 基础demo
演示单GPU上对称内存的完整生命周期：
- 内存分配（`cuMemCreate`, `cuMemAddressReserve`, `cuMemMap`）
- 访问权限设置（`cuMemSetAccess`）
- 设备上的使用
- 内存释放（`cuMemUnmap`, `cuMemAddressFree`, `cuMemRelease`）

**关键接口流程**：
```
cuMemGetAllocationGranularity()
    ↓
cuMemCreate()           ← 创建物理内存
    ↓
cuMemAddressReserve()   ← 预留虚拟地址
    ↓
cuMemMap()              ← 建立映射
    ↓
cuMemSetAccess()        ← 设置访问权限
    ↓ [使用内存] ↓
cuMemUnmap()            ← 取消映射
    ↓
cuMemAddressFree()      ← 释放虚拟地址
    ↓
cuMemRelease()          ← 释放物理内存
```

### 3. `symmetric_mem_p2p_demo.cu` - 多GPU demo
演示多GPU间的P2P通信（对称内存的关键优势）：
- 为多个GPU分配同一块对称内存
- 为所有GPU设置访问权限
- GPU间的直接数据拷贝
- 性能基准测试

**特点**：
- 展示P2P通信的优势：所有GPU共享同一个内存地址空间
- 包含性能测试（带宽测量）
- 演示多GPU间的数据验证

## 编译方式

### 方法1：使用提供的Makefile
```bash
make -f Makefile.symmetric_mem
```

### 方法2：直接编译
```bash
# 单个demo
nvcc -std=c++14 -O2 -arch=sm_70 -o symmetric_mem_demo symmetric_mem_demo.cu

# P2P demo
nvcc -std=c++14 -O2 -arch=sm_70 -o symmetric_mem_p2p_demo symmetric_mem_p2p_demo.cu
```

### 方法3：使用CMake
```bash
# 在CMakeLists.txt中添加
find_package(CUDA REQUIRED)
cuda_add_executable(symmetric_mem_demo symmetric_mem_demo.cu)
cuda_add_executable(symmetric_mem_p2p_demo symmetric_mem_p2p_demo.cu)
```

## 运行

### 基础demo（支持单GPU）
```bash
./symmetric_mem_demo
```

输出示例：
```
=================================================
CUDA Symmetric Memory Demo
=================================================

Found 1 GPU(s)

STEP 1: Query allocation properties
----+----+----+-----
GPU Direct RDMA with CUDA VMM supported: YES
Allocation granularity: 2097152 bytes

STEP 2: Allocate symmetric memory
...
```

### P2P demo（需要2个或更多GPU）
```bash
./symmetric_mem_p2p_demo
```

输出示例：
```
================================================
Multi-GPU Symmetric Memory Demo
================================================

Available GPUs: 2

STEP 1: Allocate symmetric memory buffers
...
STEP 5: Performance test
Running 10 iterations of P2P copy...
Total time: 45.32 ms
Bandwidth: 93.21 GB/s
```

## CUDA版本要求

| 功能 | 最低CUDA版本 |
|------|------------|
| 基础cuMem API | 11.3 |
| RDMA支持 | 11.3 |
| DMA-BUF支持 | 11.7 |
| FABRIC句柄支持 | 12.3 |

## 关键概念

### 什么是对称内存？

对称内存是指在多GPU系统中，所有GPU都能通过相同的虚拟地址访问同一块物理内存的技术。

**传统方式**：每个GPU有独立的地址空间，跨GPU访问需要显式拷贝
```
GPU0: buffer_addr_0
GPU1: buffer_addr_1  ← 不同的地址！
```

**对称内存方式**：所有GPU使用同一地址
```
GPU0: buffer_addr  ← 相同的地址
GPU1: buffer_addr  ← 相同的地址
```

### 优势

1. **性能**: 避免冗余的数据拷贝
2. **编程简化**: 相同的指针在所有GPU上都有效
3. **P2P通信**: 支持直接的GPU间数据传输
4. **通用指针**: 简化内存管理逻辑

## 相关NCCL API

```c
// 高级NCCL接口
ncclResult_t ncclMemAlloc(void **ptr, size_t size);
ncclResult_t ncclMemFree(void *ptr);

ncclResult_t ncclCommWindowRegister(ncclComm_t comm, void *buff, 
                                     size_t buffSize, ncclWindow_t *window,
                                     int winFlag);
ncclResult_t ncclCommWindowUnregister(ncclComm_t comm, ncclWindow_t *window);
```

## 注意事项

1. **地址对齐**: 所有分配大小都必须对齐到粒度（通常2MB）
2. **P2P能力**: 需要硬件支持P2P访问（现代NVIDIA GPU支持）
3. **访问权限**: 必须显式为每个GPU设置访问权限
4. **生命周期**: 正确的释放顺序很关键（Unmap → AddressFree → Release）

## 环境变量

```bash
# 启用CUDA VMM模式（如果支持）
export NCCL_CUMEM_ENABLE=1

# 启用主机内存对称分配（CUDA 12.2+）
export NCCL_CUMEM_HOST_ENABLE=1

# 调试信息
export NCCL_DEBUG=INFO
export NCCL_DEBUG_SUBSYS=ALLOC
```

## 参考资源

- NVIDIA CUDA Runtime API文档: https://docs.nvidia.com/cuda/
- NCCL文档: https://docs.nvidia.com/deeplearning/nccl/
- NVIDIA CUDA虚拟内存管理: https://developer.nvidia.com/blog/unified-memory-cuda-beginners/

## 故障排除

### "CUDA Error: Not Supported"
- 检查CUDA版本是否 >= 11.3
- 确认GPU驱动程序是最新的
- 某些CUDA模拟器可能不支持cuMem API

### "Segmentation Fault"
- 检查内存释放顺序是否正确
- 确保没有访问已释放的内存
- 验证地址对齐是否正确

### 性能低于预期
- 检查P2P访问是否真的被启用
- 验证数据传输大小和对齐
- 考虑使用 `cudaProfilerStart()`/`Stop()` 进行性能分析

## 扩展阅读

本demo中的接口是NCCL内部实现的基础。NCCL通过这些底层接口提供了：
- `ncclAllReduce()` - 对称内存优化的归约操作
- `ncclAllGather()` - 对称内存优化的集合操作
- LSA (Local Shared Addressing) - 设备API中的直接内存访问

查看 `examples/05_symmetric_memory/` 和 `examples/06_device_api/` 了解NCCL高级API的使用。
