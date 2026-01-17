#include "sym_kernels.h"
#include "symmetric/kernel.cuh"
#include "symmetric/all_reduce.cuh"
#if CUDART_VERSION >= 12070
  __global__ void ncclSymkDevKernel_AllReduce_RSxLDMC_AGxSTMC_sum_f8e5m2(ncclSymkDevWorkArgs4K NCCL_GRID_CONSTANT const args4K) {
    #if 0 || NCCL_CUDA_ARCH_SPECIFIC==1000 || NCCL_CUDA_ARCH_SPECIFIC==1010 || NCCL_CUDA_ARCH_FAMILY_SPECIFIC==1000 || NCCL_CUDA_ARCH_FAMILY_SPECIFIC==1010 || NCCL_CUDA_ARCH_SPECIFIC==1200 || NCCL_CUDA_ARCH_SPECIFIC==1210
      ncclSymkRun_AllReduce_RSxLDMC_AGxSTMC<FuncSum, __nv_fp8_e5m2>(&args4K.args);
    #endif
  }
#endif
