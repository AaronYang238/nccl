#include "sym_kernels.h"
#include "symmetric/kernel.cuh"
#include "symmetric/all_gather_gin.cuh"
#if CUDART_VERSION >= 0
  __global__ void ncclSymkDevKernel_AllGather_GinHier_MCRing(ncclSymkDevWorkArgs4K NCCL_GRID_CONSTANT const args4K) {
    #if __CUDA_ARCH__ >= 600
      ncclSymkRun_AllGather_GinHier_MCRing(&args4K.args);
    #endif
  }
#endif
