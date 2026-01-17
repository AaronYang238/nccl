#include "sym_kernels.h"
#include "symmetric/kernel.cuh"
#include "symmetric/reduce_scatter.cuh"
#if CUDART_VERSION >= 0
  __global__ void ncclSymkDevKernel_ReduceScatter_LL_sum_f32(ncclSymkDevWorkArgs4K NCCL_GRID_CONSTANT const args4K) {
    #if __CUDA_ARCH__ >= 600
      ncclSymkRun_ReduceScatter_LL<FuncSum, float>(&args4K.args);
    #endif
  }
#endif
#if CUDART_VERSION >= 0
  __global__ void ncclSymkDevKernel_ReduceScatter_LD_sum_f32(ncclSymkDevWorkArgs4K NCCL_GRID_CONSTANT const args4K) {
    #if __CUDA_ARCH__ >= 600
      ncclSymkRun_ReduceScatter_LD<FuncSum, float>(&args4K.args);
    #endif
  }
#endif
#if CUDART_VERSION >= 12010
  __global__ void ncclSymkDevKernel_ReduceScatter_LDMC_sum_f32(ncclSymkDevWorkArgs4K NCCL_GRID_CONSTANT const args4K) {
    #if __CUDA_ARCH__ >= 900
      ncclSymkRun_ReduceScatter_LDMC<FuncSum, float>(&args4K.args);
    #endif
  }
#endif
