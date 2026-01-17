#include "sym_kernels.h"
#include "symmetric/kernel.cuh"
#include "symmetric/all_reduce.cuh"
#if CUDART_VERSION >= 0
  __global__ void ncclSymkDevKernel_AllReduce_AGxLL_R_sum_f32(ncclSymkDevWorkArgs4K NCCL_GRID_CONSTANT const args4K) {
    #if __CUDA_ARCH__ >= 600
      ncclSymkRun_AllReduce_AGxLL_R<FuncSum, float>(&args4K.args);
    #endif
  }
#endif
#if CUDART_VERSION >= 12010
  __global__ void ncclSymkDevKernel_AllReduce_AGxLLMC_R_sum_f32(ncclSymkDevWorkArgs4K NCCL_GRID_CONSTANT const args4K) {
    #if __CUDA_ARCH__ >= 900
      ncclSymkRun_AllReduce_AGxLLMC_R<FuncSum, float>(&args4K.args);
    #endif
  }
#endif
#if CUDART_VERSION >= 0
  __global__ void ncclSymkDevKernel_AllReduce_RSxLD_AGxST_sum_f32(ncclSymkDevWorkArgs4K NCCL_GRID_CONSTANT const args4K) {
    #if __CUDA_ARCH__ >= 600
      ncclSymkRun_AllReduce_RSxLD_AGxST<FuncSum, float>(&args4K.args);
    #endif
  }
#endif
#if CUDART_VERSION >= 12010
  __global__ void ncclSymkDevKernel_AllReduce_RSxLDMC_AGxSTMC_sum_f32(ncclSymkDevWorkArgs4K NCCL_GRID_CONSTANT const args4K) {
    #if __CUDA_ARCH__ >= 900
      ncclSymkRun_AllReduce_RSxLDMC_AGxSTMC<FuncSum, float>(&args4K.args);
    #endif
  }
#endif
