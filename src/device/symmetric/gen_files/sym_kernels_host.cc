#include "sym_kernels.h"
#include "device.h"

#if CUDART_VERSION >= 0
  __global__ void ncclSymkDevKernel_AllGather_LL(ncclSymkDevWorkArgs4K const);
#else
  constexpr void* ncclSymkDevKernel_AllGather_LL = nullptr;
#endif
#if CUDART_VERSION >= 0
  __global__ void ncclSymkDevKernel_AllGather_LLMC(ncclSymkDevWorkArgs4K const);
#else
  constexpr void* ncclSymkDevKernel_AllGather_LLMC = nullptr;
#endif
#if CUDART_VERSION >= 0
  __global__ void ncclSymkDevKernel_AllGather_ST(ncclSymkDevWorkArgs4K const);
#else
  constexpr void* ncclSymkDevKernel_AllGather_ST = nullptr;
#endif
#if CUDART_VERSION >= 0
  __global__ void ncclSymkDevKernel_AllGather_STMC(ncclSymkDevWorkArgs4K const);
#else
  constexpr void* ncclSymkDevKernel_AllGather_STMC = nullptr;
#endif
#if CUDART_VERSION >= 0
  __global__ void ncclSymkDevKernel_AllGather_GinHier_MCRing(ncclSymkDevWorkArgs4K const);
#else
  constexpr void* ncclSymkDevKernel_AllGather_GinHier_MCRing = nullptr;
#endif
#if CUDART_VERSION >= 0
  __global__ void ncclSymkDevKernel_AllReduce_AGxLL_R_sum_f32(ncclSymkDevWorkArgs4K const);
#else
  constexpr void* ncclSymkDevKernel_AllReduce_AGxLL_R_sum_f32 = nullptr;
#endif
#if CUDART_VERSION >= 12010
  __global__ void ncclSymkDevKernel_AllReduce_AGxLLMC_R_sum_f32(ncclSymkDevWorkArgs4K const);
#else
  constexpr void* ncclSymkDevKernel_AllReduce_AGxLLMC_R_sum_f32 = nullptr;
#endif
#if CUDART_VERSION >= 0
  __global__ void ncclSymkDevKernel_AllReduce_RSxLD_AGxST_sum_f32(ncclSymkDevWorkArgs4K const);
#else
  constexpr void* ncclSymkDevKernel_AllReduce_RSxLD_AGxST_sum_f32 = nullptr;
#endif
#if CUDART_VERSION >= 12010
  __global__ void ncclSymkDevKernel_AllReduce_RSxLDMC_AGxSTMC_sum_f32(ncclSymkDevWorkArgs4K const);
#else
  constexpr void* ncclSymkDevKernel_AllReduce_RSxLDMC_AGxSTMC_sum_f32 = nullptr;
#endif
#if CUDART_VERSION >= 0
  __global__ void ncclSymkDevKernel_ReduceScatter_LL_sum_f32(ncclSymkDevWorkArgs4K const);
#else
  constexpr void* ncclSymkDevKernel_ReduceScatter_LL_sum_f32 = nullptr;
#endif
#if CUDART_VERSION >= 0
  __global__ void ncclSymkDevKernel_ReduceScatter_LD_sum_f32(ncclSymkDevWorkArgs4K const);
#else
  constexpr void* ncclSymkDevKernel_ReduceScatter_LD_sum_f32 = nullptr;
#endif
#if CUDART_VERSION >= 12010
  __global__ void ncclSymkDevKernel_ReduceScatter_LDMC_sum_f32(ncclSymkDevWorkArgs4K const);
#else
  constexpr void* ncclSymkDevKernel_ReduceScatter_LDMC_sum_f32 = nullptr;
#endif
#if CUDART_VERSION >= 0
  __global__ void ncclSymkDevKernel_AllReduce_AGxLL_R_sum_f16(ncclSymkDevWorkArgs4K const);
#else
  constexpr void* ncclSymkDevKernel_AllReduce_AGxLL_R_sum_f16 = nullptr;
#endif
#if CUDART_VERSION >= 12010
  __global__ void ncclSymkDevKernel_AllReduce_AGxLLMC_R_sum_f16(ncclSymkDevWorkArgs4K const);
#else
  constexpr void* ncclSymkDevKernel_AllReduce_AGxLLMC_R_sum_f16 = nullptr;
#endif
#if CUDART_VERSION >= 0
  __global__ void ncclSymkDevKernel_AllReduce_RSxLD_AGxST_sum_f16(ncclSymkDevWorkArgs4K const);
#else
  constexpr void* ncclSymkDevKernel_AllReduce_RSxLD_AGxST_sum_f16 = nullptr;
#endif
#if CUDART_VERSION >= 12010
  __global__ void ncclSymkDevKernel_AllReduce_RSxLDMC_AGxSTMC_sum_f16(ncclSymkDevWorkArgs4K const);
#else
  constexpr void* ncclSymkDevKernel_AllReduce_RSxLDMC_AGxSTMC_sum_f16 = nullptr;
#endif
#if CUDART_VERSION >= 0
  __global__ void ncclSymkDevKernel_ReduceScatter_LL_sum_f16(ncclSymkDevWorkArgs4K const);
#else
  constexpr void* ncclSymkDevKernel_ReduceScatter_LL_sum_f16 = nullptr;
#endif
#if CUDART_VERSION >= 0
  __global__ void ncclSymkDevKernel_ReduceScatter_LD_sum_f16(ncclSymkDevWorkArgs4K const);
#else
  constexpr void* ncclSymkDevKernel_ReduceScatter_LD_sum_f16 = nullptr;
#endif
#if CUDART_VERSION >= 12010
  __global__ void ncclSymkDevKernel_ReduceScatter_LDMC_sum_f16(ncclSymkDevWorkArgs4K const);
#else
  constexpr void* ncclSymkDevKernel_ReduceScatter_LDMC_sum_f16 = nullptr;
#endif
#if CUDART_VERSION >= 11000
  __global__ void ncclSymkDevKernel_AllReduce_AGxLL_R_sum_bf16(ncclSymkDevWorkArgs4K const);
#else
  constexpr void* ncclSymkDevKernel_AllReduce_AGxLL_R_sum_bf16 = nullptr;
#endif
#if CUDART_VERSION >= 12010
  __global__ void ncclSymkDevKernel_AllReduce_AGxLLMC_R_sum_bf16(ncclSymkDevWorkArgs4K const);
#else
  constexpr void* ncclSymkDevKernel_AllReduce_AGxLLMC_R_sum_bf16 = nullptr;
#endif
#if CUDART_VERSION >= 11000
  __global__ void ncclSymkDevKernel_AllReduce_RSxLD_AGxST_sum_bf16(ncclSymkDevWorkArgs4K const);
#else
  constexpr void* ncclSymkDevKernel_AllReduce_RSxLD_AGxST_sum_bf16 = nullptr;
#endif
#if CUDART_VERSION >= 12010
  __global__ void ncclSymkDevKernel_AllReduce_RSxLDMC_AGxSTMC_sum_bf16(ncclSymkDevWorkArgs4K const);
#else
  constexpr void* ncclSymkDevKernel_AllReduce_RSxLDMC_AGxSTMC_sum_bf16 = nullptr;
#endif
#if CUDART_VERSION >= 11000
  __global__ void ncclSymkDevKernel_ReduceScatter_LL_sum_bf16(ncclSymkDevWorkArgs4K const);
#else
  constexpr void* ncclSymkDevKernel_ReduceScatter_LL_sum_bf16 = nullptr;
#endif
#if CUDART_VERSION >= 11000
  __global__ void ncclSymkDevKernel_ReduceScatter_LD_sum_bf16(ncclSymkDevWorkArgs4K const);
#else
  constexpr void* ncclSymkDevKernel_ReduceScatter_LD_sum_bf16 = nullptr;
#endif
#if CUDART_VERSION >= 12010
  __global__ void ncclSymkDevKernel_ReduceScatter_LDMC_sum_bf16(ncclSymkDevWorkArgs4K const);
#else
  constexpr void* ncclSymkDevKernel_ReduceScatter_LDMC_sum_bf16 = nullptr;
#endif
#if CUDART_VERSION >= 11080
  __global__ void ncclSymkDevKernel_AllReduce_AGxLL_R_sum_f8e4m3(ncclSymkDevWorkArgs4K const);
#else
  constexpr void* ncclSymkDevKernel_AllReduce_AGxLL_R_sum_f8e4m3 = nullptr;
#endif
#if CUDART_VERSION >= 12010
  __global__ void ncclSymkDevKernel_AllReduce_AGxLLMC_R_sum_f8e4m3(ncclSymkDevWorkArgs4K const);
#else
  constexpr void* ncclSymkDevKernel_AllReduce_AGxLLMC_R_sum_f8e4m3 = nullptr;
#endif
#if CUDART_VERSION >= 11080
  __global__ void ncclSymkDevKernel_AllReduce_RSxLD_AGxST_sum_f8e4m3(ncclSymkDevWorkArgs4K const);
#else
  constexpr void* ncclSymkDevKernel_AllReduce_RSxLD_AGxST_sum_f8e4m3 = nullptr;
#endif
#if CUDART_VERSION >= 12070
  __global__ void ncclSymkDevKernel_AllReduce_RSxLDMC_AGxSTMC_sum_f8e4m3(ncclSymkDevWorkArgs4K const);
#else
  constexpr void* ncclSymkDevKernel_AllReduce_RSxLDMC_AGxSTMC_sum_f8e4m3 = nullptr;
#endif
#if CUDART_VERSION >= 11080
  __global__ void ncclSymkDevKernel_ReduceScatter_LL_sum_f8e4m3(ncclSymkDevWorkArgs4K const);
#else
  constexpr void* ncclSymkDevKernel_ReduceScatter_LL_sum_f8e4m3 = nullptr;
#endif
#if CUDART_VERSION >= 11080
  __global__ void ncclSymkDevKernel_ReduceScatter_LD_sum_f8e4m3(ncclSymkDevWorkArgs4K const);
#else
  constexpr void* ncclSymkDevKernel_ReduceScatter_LD_sum_f8e4m3 = nullptr;
#endif
#if CUDART_VERSION >= 12070
  __global__ void ncclSymkDevKernel_ReduceScatter_LDMC_sum_f8e4m3(ncclSymkDevWorkArgs4K const);
#else
  constexpr void* ncclSymkDevKernel_ReduceScatter_LDMC_sum_f8e4m3 = nullptr;
#endif
#if CUDART_VERSION >= 11080
  __global__ void ncclSymkDevKernel_AllReduce_AGxLL_R_sum_f8e5m2(ncclSymkDevWorkArgs4K const);
#else
  constexpr void* ncclSymkDevKernel_AllReduce_AGxLL_R_sum_f8e5m2 = nullptr;
#endif
#if CUDART_VERSION >= 12010
  __global__ void ncclSymkDevKernel_AllReduce_AGxLLMC_R_sum_f8e5m2(ncclSymkDevWorkArgs4K const);
#else
  constexpr void* ncclSymkDevKernel_AllReduce_AGxLLMC_R_sum_f8e5m2 = nullptr;
#endif
#if CUDART_VERSION >= 11080
  __global__ void ncclSymkDevKernel_AllReduce_RSxLD_AGxST_sum_f8e5m2(ncclSymkDevWorkArgs4K const);
#else
  constexpr void* ncclSymkDevKernel_AllReduce_RSxLD_AGxST_sum_f8e5m2 = nullptr;
#endif
#if CUDART_VERSION >= 12070
  __global__ void ncclSymkDevKernel_AllReduce_RSxLDMC_AGxSTMC_sum_f8e5m2(ncclSymkDevWorkArgs4K const);
#else
  constexpr void* ncclSymkDevKernel_AllReduce_RSxLDMC_AGxSTMC_sum_f8e5m2 = nullptr;
#endif
#if CUDART_VERSION >= 11080
  __global__ void ncclSymkDevKernel_ReduceScatter_LL_sum_f8e5m2(ncclSymkDevWorkArgs4K const);
#else
  constexpr void* ncclSymkDevKernel_ReduceScatter_LL_sum_f8e5m2 = nullptr;
#endif
#if CUDART_VERSION >= 11080
  __global__ void ncclSymkDevKernel_ReduceScatter_LD_sum_f8e5m2(ncclSymkDevWorkArgs4K const);
#else
  constexpr void* ncclSymkDevKernel_ReduceScatter_LD_sum_f8e5m2 = nullptr;
#endif
#if CUDART_VERSION >= 12070
  __global__ void ncclSymkDevKernel_ReduceScatter_LDMC_sum_f8e5m2(ncclSymkDevWorkArgs4K const);
#else
  constexpr void* ncclSymkDevKernel_ReduceScatter_LDMC_sum_f8e5m2 = nullptr;
#endif

extern int const ncclSymkKernelCount = 40;
void* ncclSymkKernelList[] = {
(void*)ncclSymkDevKernel_AllGather_LL,
(void*)ncclSymkDevKernel_AllGather_LLMC,
(void*)ncclSymkDevKernel_AllGather_ST,
(void*)ncclSymkDevKernel_AllGather_STMC,
(void*)ncclSymkDevKernel_AllGather_GinHier_MCRing,
(void*)ncclSymkDevKernel_AllReduce_AGxLL_R_sum_f32,
(void*)ncclSymkDevKernel_AllReduce_AGxLLMC_R_sum_f32,
(void*)ncclSymkDevKernel_AllReduce_RSxLD_AGxST_sum_f32,
(void*)ncclSymkDevKernel_AllReduce_RSxLDMC_AGxSTMC_sum_f32,
(void*)ncclSymkDevKernel_ReduceScatter_LL_sum_f32,
(void*)ncclSymkDevKernel_ReduceScatter_LD_sum_f32,
(void*)ncclSymkDevKernel_ReduceScatter_LDMC_sum_f32,
(void*)ncclSymkDevKernel_AllReduce_AGxLL_R_sum_f16,
(void*)ncclSymkDevKernel_AllReduce_AGxLLMC_R_sum_f16,
(void*)ncclSymkDevKernel_AllReduce_RSxLD_AGxST_sum_f16,
(void*)ncclSymkDevKernel_AllReduce_RSxLDMC_AGxSTMC_sum_f16,
(void*)ncclSymkDevKernel_ReduceScatter_LL_sum_f16,
(void*)ncclSymkDevKernel_ReduceScatter_LD_sum_f16,
(void*)ncclSymkDevKernel_ReduceScatter_LDMC_sum_f16,
(void*)ncclSymkDevKernel_AllReduce_AGxLL_R_sum_bf16,
(void*)ncclSymkDevKernel_AllReduce_AGxLLMC_R_sum_bf16,
(void*)ncclSymkDevKernel_AllReduce_RSxLD_AGxST_sum_bf16,
(void*)ncclSymkDevKernel_AllReduce_RSxLDMC_AGxSTMC_sum_bf16,
(void*)ncclSymkDevKernel_ReduceScatter_LL_sum_bf16,
(void*)ncclSymkDevKernel_ReduceScatter_LD_sum_bf16,
(void*)ncclSymkDevKernel_ReduceScatter_LDMC_sum_bf16,
(void*)ncclSymkDevKernel_AllReduce_AGxLL_R_sum_f8e4m3,
(void*)ncclSymkDevKernel_AllReduce_AGxLLMC_R_sum_f8e4m3,
(void*)ncclSymkDevKernel_AllReduce_RSxLD_AGxST_sum_f8e4m3,
(void*)ncclSymkDevKernel_AllReduce_RSxLDMC_AGxSTMC_sum_f8e4m3,
(void*)ncclSymkDevKernel_ReduceScatter_LL_sum_f8e4m3,
(void*)ncclSymkDevKernel_ReduceScatter_LD_sum_f8e4m3,
(void*)ncclSymkDevKernel_ReduceScatter_LDMC_sum_f8e4m3,
(void*)ncclSymkDevKernel_AllReduce_AGxLL_R_sum_f8e5m2,
(void*)ncclSymkDevKernel_AllReduce_AGxLLMC_R_sum_f8e5m2,
(void*)ncclSymkDevKernel_AllReduce_RSxLD_AGxST_sum_f8e5m2,
(void*)ncclSymkDevKernel_AllReduce_RSxLDMC_AGxSTMC_sum_f8e5m2,
(void*)ncclSymkDevKernel_ReduceScatter_LL_sum_f8e5m2,
(void*)ncclSymkDevKernel_ReduceScatter_LD_sum_f8e5m2,
(void*)ncclSymkDevKernel_ReduceScatter_LDMC_sum_f8e5m2,
nullptr};

int ncclSymkKernelRequirements[] = {
        0, /*   0 ncclSymkDevKernel_AllGather_LL*/
        0, /*   1 ncclSymkDevKernel_AllGather_LLMC*/
        0, /*   2 ncclSymkDevKernel_AllGather_ST*/
        0, /*   3 ncclSymkDevKernel_AllGather_STMC*/
        0, /*   4 ncclSymkDevKernel_AllGather_GinHier_MCRing*/
        0, /*   5 ncclSymkDevKernel_AllReduce_AGxLL_R_sum_f32*/
    12010, /*   6 ncclSymkDevKernel_AllReduce_AGxLLMC_R_sum_f32*/
        0, /*   7 ncclSymkDevKernel_AllReduce_RSxLD_AGxST_sum_f32*/
    12010, /*   8 ncclSymkDevKernel_AllReduce_RSxLDMC_AGxSTMC_sum_f32*/
        0, /*   9 ncclSymkDevKernel_ReduceScatter_LL_sum_f32*/
        0, /*  10 ncclSymkDevKernel_ReduceScatter_LD_sum_f32*/
    12010, /*  11 ncclSymkDevKernel_ReduceScatter_LDMC_sum_f32*/
        0, /*  12 ncclSymkDevKernel_AllReduce_AGxLL_R_sum_f16*/
    12010, /*  13 ncclSymkDevKernel_AllReduce_AGxLLMC_R_sum_f16*/
        0, /*  14 ncclSymkDevKernel_AllReduce_RSxLD_AGxST_sum_f16*/
    12010, /*  15 ncclSymkDevKernel_AllReduce_RSxLDMC_AGxSTMC_sum_f16*/
        0, /*  16 ncclSymkDevKernel_ReduceScatter_LL_sum_f16*/
        0, /*  17 ncclSymkDevKernel_ReduceScatter_LD_sum_f16*/
    12010, /*  18 ncclSymkDevKernel_ReduceScatter_LDMC_sum_f16*/
    11000, /*  19 ncclSymkDevKernel_AllReduce_AGxLL_R_sum_bf16*/
    12010, /*  20 ncclSymkDevKernel_AllReduce_AGxLLMC_R_sum_bf16*/
    11000, /*  21 ncclSymkDevKernel_AllReduce_RSxLD_AGxST_sum_bf16*/
    12010, /*  22 ncclSymkDevKernel_AllReduce_RSxLDMC_AGxSTMC_sum_bf16*/
    11000, /*  23 ncclSymkDevKernel_ReduceScatter_LL_sum_bf16*/
    11000, /*  24 ncclSymkDevKernel_ReduceScatter_LD_sum_bf16*/
    12010, /*  25 ncclSymkDevKernel_ReduceScatter_LDMC_sum_bf16*/
    11080, /*  26 ncclSymkDevKernel_AllReduce_AGxLL_R_sum_f8e4m3*/
    12010, /*  27 ncclSymkDevKernel_AllReduce_AGxLLMC_R_sum_f8e4m3*/
    11080, /*  28 ncclSymkDevKernel_AllReduce_RSxLD_AGxST_sum_f8e4m3*/
    12070, /*  29 ncclSymkDevKernel_AllReduce_RSxLDMC_AGxSTMC_sum_f8e4m3*/
    11080, /*  30 ncclSymkDevKernel_ReduceScatter_LL_sum_f8e4m3*/
    11080, /*  31 ncclSymkDevKernel_ReduceScatter_LD_sum_f8e4m3*/
    12070, /*  32 ncclSymkDevKernel_ReduceScatter_LDMC_sum_f8e4m3*/
    11080, /*  33 ncclSymkDevKernel_AllReduce_AGxLL_R_sum_f8e5m2*/
    12010, /*  34 ncclSymkDevKernel_AllReduce_AGxLLMC_R_sum_f8e5m2*/
    11080, /*  35 ncclSymkDevKernel_AllReduce_RSxLD_AGxST_sum_f8e5m2*/
    12070, /*  36 ncclSymkDevKernel_AllReduce_RSxLDMC_AGxSTMC_sum_f8e5m2*/
    11080, /*  37 ncclSymkDevKernel_ReduceScatter_LL_sum_f8e5m2*/
    11080, /*  38 ncclSymkDevKernel_ReduceScatter_LD_sum_f8e5m2*/
    12070, /*  39 ncclSymkDevKernel_ReduceScatter_LDMC_sum_f8e5m2*/
};

void* ncclSymkGetKernelPtr(ncclSymkKernelId id, int red, ncclDataType_t ty) {
  switch (id) {
  default: return nullptr;
  case ncclSymkKernelId_AllGather_LL:
    return (void*)&ncclSymkDevKernel_AllGather_LL;
  case ncclSymkKernelId_AllGather_LLMC:
    return (void*)&ncclSymkDevKernel_AllGather_LLMC;
  case ncclSymkKernelId_AllGather_ST:
    return (void*)&ncclSymkDevKernel_AllGather_ST;
  case ncclSymkKernelId_AllGather_STMC:
    return (void*)&ncclSymkDevKernel_AllGather_STMC;
  case ncclSymkKernelId_AllGather_GinHier_MCRing:
    return (void*)&ncclSymkDevKernel_AllGather_GinHier_MCRing;
  case ncclSymkKernelId_AllReduce_AGxLL_R:
    switch ((ncclDevRedOp_t)red) {
    default: return nullptr;
    case ncclDevSum:
      switch (ty) {
      default: return nullptr;
      case ncclFloat32: return (void*)ncclSymkDevKernel_AllReduce_AGxLL_R_sum_f32;
      case ncclFloat16: return (void*)ncclSymkDevKernel_AllReduce_AGxLL_R_sum_f16;
      case ncclBfloat16: return (void*)ncclSymkDevKernel_AllReduce_AGxLL_R_sum_bf16;
      case ncclFloat8e4m3: return (void*)ncclSymkDevKernel_AllReduce_AGxLL_R_sum_f8e4m3;
      case ncclFloat8e5m2: return (void*)ncclSymkDevKernel_AllReduce_AGxLL_R_sum_f8e5m2;
      }
    }
  case ncclSymkKernelId_AllReduce_AGxLLMC_R:
    switch ((ncclDevRedOp_t)red) {
    default: return nullptr;
    case ncclDevSum:
      switch (ty) {
      default: return nullptr;
      case ncclFloat32: return (void*)ncclSymkDevKernel_AllReduce_AGxLLMC_R_sum_f32;
      case ncclFloat16: return (void*)ncclSymkDevKernel_AllReduce_AGxLLMC_R_sum_f16;
      case ncclBfloat16: return (void*)ncclSymkDevKernel_AllReduce_AGxLLMC_R_sum_bf16;
      case ncclFloat8e4m3: return (void*)ncclSymkDevKernel_AllReduce_AGxLLMC_R_sum_f8e4m3;
      case ncclFloat8e5m2: return (void*)ncclSymkDevKernel_AllReduce_AGxLLMC_R_sum_f8e5m2;
      }
    }
  case ncclSymkKernelId_AllReduce_RSxLD_AGxST:
    switch ((ncclDevRedOp_t)red) {
    default: return nullptr;
    case ncclDevSum:
      switch (ty) {
      default: return nullptr;
      case ncclFloat32: return (void*)ncclSymkDevKernel_AllReduce_RSxLD_AGxST_sum_f32;
      case ncclFloat16: return (void*)ncclSymkDevKernel_AllReduce_RSxLD_AGxST_sum_f16;
      case ncclBfloat16: return (void*)ncclSymkDevKernel_AllReduce_RSxLD_AGxST_sum_bf16;
      case ncclFloat8e4m3: return (void*)ncclSymkDevKernel_AllReduce_RSxLD_AGxST_sum_f8e4m3;
      case ncclFloat8e5m2: return (void*)ncclSymkDevKernel_AllReduce_RSxLD_AGxST_sum_f8e5m2;
      }
    }
  case ncclSymkKernelId_AllReduce_RSxLDMC_AGxSTMC:
    switch ((ncclDevRedOp_t)red) {
    default: return nullptr;
    case ncclDevSum:
      switch (ty) {
      default: return nullptr;
      case ncclFloat32: return (void*)ncclSymkDevKernel_AllReduce_RSxLDMC_AGxSTMC_sum_f32;
      case ncclFloat16: return (void*)ncclSymkDevKernel_AllReduce_RSxLDMC_AGxSTMC_sum_f16;
      case ncclBfloat16: return (void*)ncclSymkDevKernel_AllReduce_RSxLDMC_AGxSTMC_sum_bf16;
      case ncclFloat8e4m3: return (void*)ncclSymkDevKernel_AllReduce_RSxLDMC_AGxSTMC_sum_f8e4m3;
      case ncclFloat8e5m2: return (void*)ncclSymkDevKernel_AllReduce_RSxLDMC_AGxSTMC_sum_f8e5m2;
      }
    }
  case ncclSymkKernelId_ReduceScatter_LL:
    switch ((ncclDevRedOp_t)red) {
    default: return nullptr;
    case ncclDevSum:
      switch (ty) {
      default: return nullptr;
      case ncclFloat32: return (void*)ncclSymkDevKernel_ReduceScatter_LL_sum_f32;
      case ncclFloat16: return (void*)ncclSymkDevKernel_ReduceScatter_LL_sum_f16;
      case ncclBfloat16: return (void*)ncclSymkDevKernel_ReduceScatter_LL_sum_bf16;
      case ncclFloat8e4m3: return (void*)ncclSymkDevKernel_ReduceScatter_LL_sum_f8e4m3;
      case ncclFloat8e5m2: return (void*)ncclSymkDevKernel_ReduceScatter_LL_sum_f8e5m2;
      }
    }
  case ncclSymkKernelId_ReduceScatter_LD:
    switch ((ncclDevRedOp_t)red) {
    default: return nullptr;
    case ncclDevSum:
      switch (ty) {
      default: return nullptr;
      case ncclFloat32: return (void*)ncclSymkDevKernel_ReduceScatter_LD_sum_f32;
      case ncclFloat16: return (void*)ncclSymkDevKernel_ReduceScatter_LD_sum_f16;
      case ncclBfloat16: return (void*)ncclSymkDevKernel_ReduceScatter_LD_sum_bf16;
      case ncclFloat8e4m3: return (void*)ncclSymkDevKernel_ReduceScatter_LD_sum_f8e4m3;
      case ncclFloat8e5m2: return (void*)ncclSymkDevKernel_ReduceScatter_LD_sum_f8e5m2;
      }
    }
  case ncclSymkKernelId_ReduceScatter_LDMC:
    switch ((ncclDevRedOp_t)red) {
    default: return nullptr;
    case ncclDevSum:
      switch (ty) {
      default: return nullptr;
      case ncclFloat32: return (void*)ncclSymkDevKernel_ReduceScatter_LDMC_sum_f32;
      case ncclFloat16: return (void*)ncclSymkDevKernel_ReduceScatter_LDMC_sum_f16;
      case ncclBfloat16: return (void*)ncclSymkDevKernel_ReduceScatter_LDMC_sum_bf16;
      case ncclFloat8e4m3: return (void*)ncclSymkDevKernel_ReduceScatter_LDMC_sum_f8e4m3;
      case ncclFloat8e5m2: return (void*)ncclSymkDevKernel_ReduceScatter_LDMC_sum_f8e5m2;
      }
    }
  }
}
