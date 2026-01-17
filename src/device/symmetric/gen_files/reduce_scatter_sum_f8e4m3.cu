#include "sym_kernels.h"
#include "symmetric/kernel.cuh"
#include "symmetric/reduce_scatter.cuh"
#if CUDART_VERSION >= 11080
  __global__ void ncclSymkDevKernel_ReduceScatter_LL_sum_f8e4m3(ncclSymkDevWorkArgs4K NCCL_GRID_CONSTANT const args4K) {
    #if __CUDA_ARCH__ >= 900
      ncclSymkRun_ReduceScatter_LL<FuncSum, __nv_fp8_e4m3>(&args4K.args);
    #endif
  }
#endif
#if CUDART_VERSION >= 11080
  __global__ void ncclSymkDevKernel_ReduceScatter_LD_sum_f8e4m3(ncclSymkDevWorkArgs4K NCCL_GRID_CONSTANT const args4K) {
    #if __CUDA_ARCH__ >= 900
      ncclSymkRun_ReduceScatter_LD<FuncSum, __nv_fp8_e4m3>(&args4K.args);
    #endif
  }
#endif
