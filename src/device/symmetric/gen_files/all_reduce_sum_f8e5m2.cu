#include "sym_kernels.h"
#include "symmetric/kernel.cuh"
#include "symmetric/all_reduce.cuh"
#if CUDART_VERSION >= 11080
  __global__ void ncclSymkDevKernel_AllReduce_AGxLL_R_sum_f8e5m2(ncclSymkDevWorkArgs4K NCCL_GRID_CONSTANT const args4K) {
    #if __CUDA_ARCH__ >= 900
      ncclSymkRun_AllReduce_AGxLL_R<FuncSum, __nv_fp8_e5m2>(&args4K.args);
    #endif
  }
#endif
#if CUDART_VERSION >= 12010
  __global__ void ncclSymkDevKernel_AllReduce_AGxLLMC_R_sum_f8e5m2(ncclSymkDevWorkArgs4K NCCL_GRID_CONSTANT const args4K) {
    #if __CUDA_ARCH__ >= 900
      ncclSymkRun_AllReduce_AGxLLMC_R<FuncSum, __nv_fp8_e5m2>(&args4K.args);
    #endif
  }
#endif
#if CUDART_VERSION >= 11080
  __global__ void ncclSymkDevKernel_AllReduce_RSxLD_AGxST_sum_f8e5m2(ncclSymkDevWorkArgs4K NCCL_GRID_CONSTANT const args4K) {
    #if __CUDA_ARCH__ >= 900
      ncclSymkRun_AllReduce_RSxLD_AGxST<FuncSum, __nv_fp8_e5m2>(&args4K.args);
    #endif
  }
#endif
