#include "sym_kernels.h"
#include "symmetric/kernel.cuh"
#include "symmetric/all_gather.cuh"
#if CUDART_VERSION >= 0
  __global__ void ncclSymkDevKernel_AllGather_LL(ncclSymkDevWorkArgs4K NCCL_GRID_CONSTANT const args4K) {
    #if __CUDA_ARCH__ >= 600
      ncclSymkRun_AllGather_LL(&args4K.args);
    #endif
  }
#endif
#if CUDART_VERSION >= 0
  __global__ void ncclSymkDevKernel_AllGather_LLMC(ncclSymkDevWorkArgs4K NCCL_GRID_CONSTANT const args4K) {
    #if __CUDA_ARCH__ >= 600
      ncclSymkRun_AllGather_LLMC(&args4K.args);
    #endif
  }
#endif
#if CUDART_VERSION >= 0
  __global__ void ncclSymkDevKernel_AllGather_ST(ncclSymkDevWorkArgs4K NCCL_GRID_CONSTANT const args4K) {
    #if __CUDA_ARCH__ >= 600
      ncclSymkRun_AllGather_ST(&args4K.args);
    #endif
  }
#endif
#if CUDART_VERSION >= 0
  __global__ void ncclSymkDevKernel_AllGather_STMC(ncclSymkDevWorkArgs4K NCCL_GRID_CONSTANT const args4K) {
    #if __CUDA_ARCH__ >= 600
      ncclSymkRun_AllGather_STMC(&args4K.args);
    #endif
  }
#endif
