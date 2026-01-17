#include "common.h"

__device__ void ncclDevFunc_AllGather_COLLNET_DIRECT_SIMPLE();
#if CUDART_VERSION >= 12010 && __CUDA_ARCH__ >= 900
__device__ void ncclDevFunc_AllGather_NVLS_SIMPLE();
#endif
__device__ void ncclDevFunc_AllGather_PAT_SIMPLE();
__device__ void ncclDevFunc_AllGather_RING_LL();
__device__ void ncclDevFunc_AllGather_RING_LL128();
__device__ void ncclDevFunc_AllGather_RING_SIMPLE();
__device__ void ncclDevFunc_AllGatherV_RING_LL();
__device__ void ncclDevFunc_AllGatherV_RING_LL128();
__device__ void ncclDevFunc_AllGatherV_RING_SIMPLE();
#if CUDART_VERSION >= 11000 && __CUDA_ARCH__ >= 0
__device__ void ncclDevFunc_AllReduce_MinMax_bf16_COLLNET_CHAIN_SIMPLE();
#endif
#if CUDART_VERSION >= 11000 && __CUDA_ARCH__ >= 0
__device__ void ncclDevFunc_AllReduce_MinMax_bf16_COLLNET_DIRECT_SIMPLE();
#endif
#if CUDART_VERSION >= 12010 && __CUDA_ARCH__ >= 900
__device__ void ncclDevFunc_AllReduce_MinMax_bf16_NVLS_SIMPLE();
#endif
#if CUDART_VERSION >= 12010 && __CUDA_ARCH__ >= 900
__device__ void ncclDevFunc_AllReduce_MinMax_bf16_NVLS_TREE_SIMPLE();
#endif
#if CUDART_VERSION >= 11000 && __CUDA_ARCH__ >= 0
__device__ void ncclDevFunc_AllReduce_MinMax_bf16_RING_LL();
#endif
#if CUDART_VERSION >= 11000 && __CUDA_ARCH__ >= 0
__device__ void ncclDevFunc_AllReduce_MinMax_bf16_RING_LL128();
#endif
#if CUDART_VERSION >= 11000 && __CUDA_ARCH__ >= 0
__device__ void ncclDevFunc_AllReduce_MinMax_bf16_RING_SIMPLE();
#endif
#if CUDART_VERSION >= 11000 && __CUDA_ARCH__ >= 0
__device__ void ncclDevFunc_AllReduce_MinMax_bf16_TREE_LL();
#endif
#if CUDART_VERSION >= 11000 && __CUDA_ARCH__ >= 0
__device__ void ncclDevFunc_AllReduce_MinMax_bf16_TREE_LL128();
#endif
#if CUDART_VERSION >= 11000 && __CUDA_ARCH__ >= 0
__device__ void ncclDevFunc_AllReduce_MinMax_bf16_TREE_SIMPLE();
#endif
__device__ void ncclDevFunc_AllReduce_MinMax_f16_COLLNET_CHAIN_SIMPLE();
__device__ void ncclDevFunc_AllReduce_MinMax_f16_COLLNET_DIRECT_SIMPLE();
#if CUDART_VERSION >= 12010 && __CUDA_ARCH__ >= 900
__device__ void ncclDevFunc_AllReduce_MinMax_f16_NVLS_SIMPLE();
#endif
#if CUDART_VERSION >= 12010 && __CUDA_ARCH__ >= 900
__device__ void ncclDevFunc_AllReduce_MinMax_f16_NVLS_TREE_SIMPLE();
#endif
__device__ void ncclDevFunc_AllReduce_MinMax_f16_RING_LL();
__device__ void ncclDevFunc_AllReduce_MinMax_f16_RING_LL128();
__device__ void ncclDevFunc_AllReduce_MinMax_f16_RING_SIMPLE();
__device__ void ncclDevFunc_AllReduce_MinMax_f16_TREE_LL();
__device__ void ncclDevFunc_AllReduce_MinMax_f16_TREE_LL128();
__device__ void ncclDevFunc_AllReduce_MinMax_f16_TREE_SIMPLE();
__device__ void ncclDevFunc_AllReduce_MinMax_f32_COLLNET_CHAIN_SIMPLE();
__device__ void ncclDevFunc_AllReduce_MinMax_f32_COLLNET_DIRECT_SIMPLE();
__device__ void ncclDevFunc_AllReduce_MinMax_f32_RING_LL();
__device__ void ncclDevFunc_AllReduce_MinMax_f32_RING_LL128();
__device__ void ncclDevFunc_AllReduce_MinMax_f32_RING_SIMPLE();
__device__ void ncclDevFunc_AllReduce_MinMax_f32_TREE_LL();
__device__ void ncclDevFunc_AllReduce_MinMax_f32_TREE_LL128();
__device__ void ncclDevFunc_AllReduce_MinMax_f32_TREE_SIMPLE();
__device__ void ncclDevFunc_AllReduce_MinMax_f64_COLLNET_CHAIN_SIMPLE();
__device__ void ncclDevFunc_AllReduce_MinMax_f64_COLLNET_DIRECT_SIMPLE();
__device__ void ncclDevFunc_AllReduce_MinMax_f64_RING_LL();
__device__ void ncclDevFunc_AllReduce_MinMax_f64_RING_LL128();
__device__ void ncclDevFunc_AllReduce_MinMax_f64_RING_SIMPLE();
__device__ void ncclDevFunc_AllReduce_MinMax_f64_TREE_LL();
__device__ void ncclDevFunc_AllReduce_MinMax_f64_TREE_LL128();
__device__ void ncclDevFunc_AllReduce_MinMax_f64_TREE_SIMPLE();
#if CUDART_VERSION >= 11080 && __CUDA_ARCH__ >= 900
__device__ void ncclDevFunc_AllReduce_MinMax_f8e4m3_COLLNET_CHAIN_SIMPLE();
#endif
#if CUDART_VERSION >= 11080 && __CUDA_ARCH__ >= 900
__device__ void ncclDevFunc_AllReduce_MinMax_f8e4m3_COLLNET_DIRECT_SIMPLE();
#endif
#if CUDART_VERSION >= 11080 && __CUDA_ARCH__ >= 900
__device__ void ncclDevFunc_AllReduce_MinMax_f8e4m3_RING_LL();
#endif
#if CUDART_VERSION >= 11080 && __CUDA_ARCH__ >= 900
__device__ void ncclDevFunc_AllReduce_MinMax_f8e4m3_RING_LL128();
#endif
#if CUDART_VERSION >= 11080 && __CUDA_ARCH__ >= 900
__device__ void ncclDevFunc_AllReduce_MinMax_f8e4m3_RING_SIMPLE();
#endif
#if CUDART_VERSION >= 11080 && __CUDA_ARCH__ >= 900
__device__ void ncclDevFunc_AllReduce_MinMax_f8e4m3_TREE_LL();
#endif
#if CUDART_VERSION >= 11080 && __CUDA_ARCH__ >= 900
__device__ void ncclDevFunc_AllReduce_MinMax_f8e4m3_TREE_LL128();
#endif
#if CUDART_VERSION >= 11080 && __CUDA_ARCH__ >= 900
__device__ void ncclDevFunc_AllReduce_MinMax_f8e4m3_TREE_SIMPLE();
#endif
#if CUDART_VERSION >= 11080 && __CUDA_ARCH__ >= 900
__device__ void ncclDevFunc_AllReduce_MinMax_f8e5m2_COLLNET_CHAIN_SIMPLE();
#endif
#if CUDART_VERSION >= 11080 && __CUDA_ARCH__ >= 900
__device__ void ncclDevFunc_AllReduce_MinMax_f8e5m2_COLLNET_DIRECT_SIMPLE();
#endif
#if CUDART_VERSION >= 11080 && __CUDA_ARCH__ >= 900
__device__ void ncclDevFunc_AllReduce_MinMax_f8e5m2_RING_LL();
#endif
#if CUDART_VERSION >= 11080 && __CUDA_ARCH__ >= 900
__device__ void ncclDevFunc_AllReduce_MinMax_f8e5m2_RING_LL128();
#endif
#if CUDART_VERSION >= 11080 && __CUDA_ARCH__ >= 900
__device__ void ncclDevFunc_AllReduce_MinMax_f8e5m2_RING_SIMPLE();
#endif
#if CUDART_VERSION >= 11080 && __CUDA_ARCH__ >= 900
__device__ void ncclDevFunc_AllReduce_MinMax_f8e5m2_TREE_LL();
#endif
#if CUDART_VERSION >= 11080 && __CUDA_ARCH__ >= 900
__device__ void ncclDevFunc_AllReduce_MinMax_f8e5m2_TREE_LL128();
#endif
#if CUDART_VERSION >= 11080 && __CUDA_ARCH__ >= 900
__device__ void ncclDevFunc_AllReduce_MinMax_f8e5m2_TREE_SIMPLE();
#endif
#if CUDART_VERSION >= 12010 && __CUDA_ARCH__ >= 900
__device__ void ncclDevFunc_AllReduce_MinMax_i32_NVLS_SIMPLE();
#endif
#if CUDART_VERSION >= 12010 && __CUDA_ARCH__ >= 900
__device__ void ncclDevFunc_AllReduce_MinMax_i32_NVLS_TREE_SIMPLE();
#endif
#if CUDART_VERSION >= 12010 && __CUDA_ARCH__ >= 900
__device__ void ncclDevFunc_AllReduce_MinMax_i64_NVLS_SIMPLE();
#endif
#if CUDART_VERSION >= 12010 && __CUDA_ARCH__ >= 900
__device__ void ncclDevFunc_AllReduce_MinMax_i64_NVLS_TREE_SIMPLE();
#endif
__device__ void ncclDevFunc_AllReduce_MinMax_u32_COLLNET_CHAIN_SIMPLE();
__device__ void ncclDevFunc_AllReduce_MinMax_u32_COLLNET_DIRECT_SIMPLE();
#if CUDART_VERSION >= 12010 && __CUDA_ARCH__ >= 900
__device__ void ncclDevFunc_AllReduce_MinMax_u32_NVLS_SIMPLE();
#endif
#if CUDART_VERSION >= 12010 && __CUDA_ARCH__ >= 900
__device__ void ncclDevFunc_AllReduce_MinMax_u32_NVLS_TREE_SIMPLE();
#endif
__device__ void ncclDevFunc_AllReduce_MinMax_u32_RING_LL();
__device__ void ncclDevFunc_AllReduce_MinMax_u32_RING_LL128();
__device__ void ncclDevFunc_AllReduce_MinMax_u32_RING_SIMPLE();
__device__ void ncclDevFunc_AllReduce_MinMax_u32_TREE_LL();
__device__ void ncclDevFunc_AllReduce_MinMax_u32_TREE_LL128();
__device__ void ncclDevFunc_AllReduce_MinMax_u32_TREE_SIMPLE();
__device__ void ncclDevFunc_AllReduce_MinMax_u64_COLLNET_CHAIN_SIMPLE();
__device__ void ncclDevFunc_AllReduce_MinMax_u64_COLLNET_DIRECT_SIMPLE();
#if CUDART_VERSION >= 12010 && __CUDA_ARCH__ >= 900
__device__ void ncclDevFunc_AllReduce_MinMax_u64_NVLS_SIMPLE();
#endif
#if CUDART_VERSION >= 12010 && __CUDA_ARCH__ >= 900
__device__ void ncclDevFunc_AllReduce_MinMax_u64_NVLS_TREE_SIMPLE();
#endif
__device__ void ncclDevFunc_AllReduce_MinMax_u64_RING_LL();
__device__ void ncclDevFunc_AllReduce_MinMax_u64_RING_LL128();
__device__ void ncclDevFunc_AllReduce_MinMax_u64_RING_SIMPLE();
__device__ void ncclDevFunc_AllReduce_MinMax_u64_TREE_LL();
__device__ void ncclDevFunc_AllReduce_MinMax_u64_TREE_LL128();
__device__ void ncclDevFunc_AllReduce_MinMax_u64_TREE_SIMPLE();
__device__ void ncclDevFunc_AllReduce_MinMax_u8_COLLNET_CHAIN_SIMPLE();
__device__ void ncclDevFunc_AllReduce_MinMax_u8_COLLNET_DIRECT_SIMPLE();
__device__ void ncclDevFunc_AllReduce_MinMax_u8_RING_LL();
__device__ void ncclDevFunc_AllReduce_MinMax_u8_RING_LL128();
__device__ void ncclDevFunc_AllReduce_MinMax_u8_RING_SIMPLE();
__device__ void ncclDevFunc_AllReduce_MinMax_u8_TREE_LL();
__device__ void ncclDevFunc_AllReduce_MinMax_u8_TREE_LL128();
__device__ void ncclDevFunc_AllReduce_MinMax_u8_TREE_SIMPLE();
#if CUDART_VERSION >= 11000 && __CUDA_ARCH__ >= 0
__device__ void ncclDevFunc_AllReduce_PreMulSum_bf16_COLLNET_CHAIN_SIMPLE();
#endif
#if CUDART_VERSION >= 11000 && __CUDA_ARCH__ >= 0
__device__ void ncclDevFunc_AllReduce_PreMulSum_bf16_COLLNET_DIRECT_SIMPLE();
#endif
#if CUDART_VERSION >= 11000 && __CUDA_ARCH__ >= 0
__device__ void ncclDevFunc_AllReduce_PreMulSum_bf16_RING_LL();
#endif
#if CUDART_VERSION >= 11000 && __CUDA_ARCH__ >= 0
__device__ void ncclDevFunc_AllReduce_PreMulSum_bf16_RING_LL128();
#endif
#if CUDART_VERSION >= 11000 && __CUDA_ARCH__ >= 0
__device__ void ncclDevFunc_AllReduce_PreMulSum_bf16_RING_SIMPLE();
#endif
#if CUDART_VERSION >= 11000 && __CUDA_ARCH__ >= 0
__device__ void ncclDevFunc_AllReduce_PreMulSum_bf16_TREE_LL();
#endif
#if CUDART_VERSION >= 11000 && __CUDA_ARCH__ >= 0
__device__ void ncclDevFunc_AllReduce_PreMulSum_bf16_TREE_LL128();
#endif
#if CUDART_VERSION >= 11000 && __CUDA_ARCH__ >= 0
__device__ void ncclDevFunc_AllReduce_PreMulSum_bf16_TREE_SIMPLE();
#endif
__device__ void ncclDevFunc_AllReduce_PreMulSum_f16_COLLNET_CHAIN_SIMPLE();
__device__ void ncclDevFunc_AllReduce_PreMulSum_f16_COLLNET_DIRECT_SIMPLE();
__device__ void ncclDevFunc_AllReduce_PreMulSum_f16_RING_LL();
__device__ void ncclDevFunc_AllReduce_PreMulSum_f16_RING_LL128();
__device__ void ncclDevFunc_AllReduce_PreMulSum_f16_RING_SIMPLE();
__device__ void ncclDevFunc_AllReduce_PreMulSum_f16_TREE_LL();
__device__ void ncclDevFunc_AllReduce_PreMulSum_f16_TREE_LL128();
__device__ void ncclDevFunc_AllReduce_PreMulSum_f16_TREE_SIMPLE();
__device__ void ncclDevFunc_AllReduce_PreMulSum_f32_COLLNET_CHAIN_SIMPLE();
__device__ void ncclDevFunc_AllReduce_PreMulSum_f32_COLLNET_DIRECT_SIMPLE();
__device__ void ncclDevFunc_AllReduce_PreMulSum_f32_RING_LL();
__device__ void ncclDevFunc_AllReduce_PreMulSum_f32_RING_LL128();
__device__ void ncclDevFunc_AllReduce_PreMulSum_f32_RING_SIMPLE();
__device__ void ncclDevFunc_AllReduce_PreMulSum_f32_TREE_LL();
__device__ void ncclDevFunc_AllReduce_PreMulSum_f32_TREE_LL128();
__device__ void ncclDevFunc_AllReduce_PreMulSum_f32_TREE_SIMPLE();
__device__ void ncclDevFunc_AllReduce_PreMulSum_f64_COLLNET_CHAIN_SIMPLE();
__device__ void ncclDevFunc_AllReduce_PreMulSum_f64_COLLNET_DIRECT_SIMPLE();
__device__ void ncclDevFunc_AllReduce_PreMulSum_f64_RING_LL();
__device__ void ncclDevFunc_AllReduce_PreMulSum_f64_RING_LL128();
__device__ void ncclDevFunc_AllReduce_PreMulSum_f64_RING_SIMPLE();
__device__ void ncclDevFunc_AllReduce_PreMulSum_f64_TREE_LL();
__device__ void ncclDevFunc_AllReduce_PreMulSum_f64_TREE_LL128();
__device__ void ncclDevFunc_AllReduce_PreMulSum_f64_TREE_SIMPLE();
#if CUDART_VERSION >= 11080 && __CUDA_ARCH__ >= 900
__device__ void ncclDevFunc_AllReduce_PreMulSum_f8e4m3_COLLNET_CHAIN_SIMPLE();
#endif
#if CUDART_VERSION >= 11080 && __CUDA_ARCH__ >= 900
__device__ void ncclDevFunc_AllReduce_PreMulSum_f8e4m3_COLLNET_DIRECT_SIMPLE();
#endif
#if CUDART_VERSION >= 11080 && __CUDA_ARCH__ >= 900
__device__ void ncclDevFunc_AllReduce_PreMulSum_f8e4m3_RING_LL();
#endif
#if CUDART_VERSION >= 11080 && __CUDA_ARCH__ >= 900
__device__ void ncclDevFunc_AllReduce_PreMulSum_f8e4m3_RING_LL128();
#endif
#if CUDART_VERSION >= 11080 && __CUDA_ARCH__ >= 900
__device__ void ncclDevFunc_AllReduce_PreMulSum_f8e4m3_RING_SIMPLE();
#endif
#if CUDART_VERSION >= 11080 && __CUDA_ARCH__ >= 900
__device__ void ncclDevFunc_AllReduce_PreMulSum_f8e4m3_TREE_LL();
#endif
#if CUDART_VERSION >= 11080 && __CUDA_ARCH__ >= 900
__device__ void ncclDevFunc_AllReduce_PreMulSum_f8e4m3_TREE_LL128();
#endif
#if CUDART_VERSION >= 11080 && __CUDA_ARCH__ >= 900
__device__ void ncclDevFunc_AllReduce_PreMulSum_f8e4m3_TREE_SIMPLE();
#endif
#if CUDART_VERSION >= 11080 && __CUDA_ARCH__ >= 900
__device__ void ncclDevFunc_AllReduce_PreMulSum_f8e5m2_COLLNET_CHAIN_SIMPLE();
#endif
#if CUDART_VERSION >= 11080 && __CUDA_ARCH__ >= 900
__device__ void ncclDevFunc_AllReduce_PreMulSum_f8e5m2_COLLNET_DIRECT_SIMPLE();
#endif
#if CUDART_VERSION >= 11080 && __CUDA_ARCH__ >= 900
__device__ void ncclDevFunc_AllReduce_PreMulSum_f8e5m2_RING_LL();
#endif
#if CUDART_VERSION >= 11080 && __CUDA_ARCH__ >= 900
__device__ void ncclDevFunc_AllReduce_PreMulSum_f8e5m2_RING_LL128();
#endif
#if CUDART_VERSION >= 11080 && __CUDA_ARCH__ >= 900
__device__ void ncclDevFunc_AllReduce_PreMulSum_f8e5m2_RING_SIMPLE();
#endif
#if CUDART_VERSION >= 11080 && __CUDA_ARCH__ >= 900
__device__ void ncclDevFunc_AllReduce_PreMulSum_f8e5m2_TREE_LL();
#endif
#if CUDART_VERSION >= 11080 && __CUDA_ARCH__ >= 900
__device__ void ncclDevFunc_AllReduce_PreMulSum_f8e5m2_TREE_LL128();
#endif
#if CUDART_VERSION >= 11080 && __CUDA_ARCH__ >= 900
__device__ void ncclDevFunc_AllReduce_PreMulSum_f8e5m2_TREE_SIMPLE();
#endif
__device__ void ncclDevFunc_AllReduce_PreMulSum_u32_COLLNET_CHAIN_SIMPLE();
__device__ void ncclDevFunc_AllReduce_PreMulSum_u32_COLLNET_DIRECT_SIMPLE();
__device__ void ncclDevFunc_AllReduce_PreMulSum_u32_RING_LL();
__device__ void ncclDevFunc_AllReduce_PreMulSum_u32_RING_LL128();
__device__ void ncclDevFunc_AllReduce_PreMulSum_u32_RING_SIMPLE();
__device__ void ncclDevFunc_AllReduce_PreMulSum_u32_TREE_LL();
__device__ void ncclDevFunc_AllReduce_PreMulSum_u32_TREE_LL128();
__device__ void ncclDevFunc_AllReduce_PreMulSum_u32_TREE_SIMPLE();
__device__ void ncclDevFunc_AllReduce_PreMulSum_u64_COLLNET_CHAIN_SIMPLE();
__device__ void ncclDevFunc_AllReduce_PreMulSum_u64_COLLNET_DIRECT_SIMPLE();
__device__ void ncclDevFunc_AllReduce_PreMulSum_u64_RING_LL();
__device__ void ncclDevFunc_AllReduce_PreMulSum_u64_RING_LL128();
__device__ void ncclDevFunc_AllReduce_PreMulSum_u64_RING_SIMPLE();
__device__ void ncclDevFunc_AllReduce_PreMulSum_u64_TREE_LL();
__device__ void ncclDevFunc_AllReduce_PreMulSum_u64_TREE_LL128();
__device__ void ncclDevFunc_AllReduce_PreMulSum_u64_TREE_SIMPLE();
__device__ void ncclDevFunc_AllReduce_PreMulSum_u8_COLLNET_CHAIN_SIMPLE();
__device__ void ncclDevFunc_AllReduce_PreMulSum_u8_COLLNET_DIRECT_SIMPLE();
__device__ void ncclDevFunc_AllReduce_PreMulSum_u8_RING_LL();
__device__ void ncclDevFunc_AllReduce_PreMulSum_u8_RING_LL128();
__device__ void ncclDevFunc_AllReduce_PreMulSum_u8_RING_SIMPLE();
__device__ void ncclDevFunc_AllReduce_PreMulSum_u8_TREE_LL();
__device__ void ncclDevFunc_AllReduce_PreMulSum_u8_TREE_LL128();
__device__ void ncclDevFunc_AllReduce_PreMulSum_u8_TREE_SIMPLE();
#if CUDART_VERSION >= 11000 && __CUDA_ARCH__ >= 0
__device__ void ncclDevFunc_AllReduce_Prod_bf16_COLLNET_CHAIN_SIMPLE();
#endif
#if CUDART_VERSION >= 11000 && __CUDA_ARCH__ >= 0
__device__ void ncclDevFunc_AllReduce_Prod_bf16_COLLNET_DIRECT_SIMPLE();
#endif
#if CUDART_VERSION >= 11000 && __CUDA_ARCH__ >= 0
__device__ void ncclDevFunc_AllReduce_Prod_bf16_RING_LL();
#endif
#if CUDART_VERSION >= 11000 && __CUDA_ARCH__ >= 0
__device__ void ncclDevFunc_AllReduce_Prod_bf16_RING_LL128();
#endif
#if CUDART_VERSION >= 11000 && __CUDA_ARCH__ >= 0
__device__ void ncclDevFunc_AllReduce_Prod_bf16_RING_SIMPLE();
#endif
#if CUDART_VERSION >= 11000 && __CUDA_ARCH__ >= 0
__device__ void ncclDevFunc_AllReduce_Prod_bf16_TREE_LL();
#endif
#if CUDART_VERSION >= 11000 && __CUDA_ARCH__ >= 0
__device__ void ncclDevFunc_AllReduce_Prod_bf16_TREE_LL128();
#endif
#if CUDART_VERSION >= 11000 && __CUDA_ARCH__ >= 0
__device__ void ncclDevFunc_AllReduce_Prod_bf16_TREE_SIMPLE();
#endif
__device__ void ncclDevFunc_AllReduce_Prod_f16_COLLNET_CHAIN_SIMPLE();
__device__ void ncclDevFunc_AllReduce_Prod_f16_COLLNET_DIRECT_SIMPLE();
__device__ void ncclDevFunc_AllReduce_Prod_f16_RING_LL();
__device__ void ncclDevFunc_AllReduce_Prod_f16_RING_LL128();
__device__ void ncclDevFunc_AllReduce_Prod_f16_RING_SIMPLE();
__device__ void ncclDevFunc_AllReduce_Prod_f16_TREE_LL();
__device__ void ncclDevFunc_AllReduce_Prod_f16_TREE_LL128();
__device__ void ncclDevFunc_AllReduce_Prod_f16_TREE_SIMPLE();
__device__ void ncclDevFunc_AllReduce_Prod_f32_COLLNET_CHAIN_SIMPLE();
__device__ void ncclDevFunc_AllReduce_Prod_f32_COLLNET_DIRECT_SIMPLE();
__device__ void ncclDevFunc_AllReduce_Prod_f32_RING_LL();
__device__ void ncclDevFunc_AllReduce_Prod_f32_RING_LL128();
__device__ void ncclDevFunc_AllReduce_Prod_f32_RING_SIMPLE();
__device__ void ncclDevFunc_AllReduce_Prod_f32_TREE_LL();
__device__ void ncclDevFunc_AllReduce_Prod_f32_TREE_LL128();
__device__ void ncclDevFunc_AllReduce_Prod_f32_TREE_SIMPLE();
__device__ void ncclDevFunc_AllReduce_Prod_f64_COLLNET_CHAIN_SIMPLE();
__device__ void ncclDevFunc_AllReduce_Prod_f64_COLLNET_DIRECT_SIMPLE();
__device__ void ncclDevFunc_AllReduce_Prod_f64_RING_LL();
__device__ void ncclDevFunc_AllReduce_Prod_f64_RING_LL128();
__device__ void ncclDevFunc_AllReduce_Prod_f64_RING_SIMPLE();
__device__ void ncclDevFunc_AllReduce_Prod_f64_TREE_LL();
__device__ void ncclDevFunc_AllReduce_Prod_f64_TREE_LL128();
__device__ void ncclDevFunc_AllReduce_Prod_f64_TREE_SIMPLE();
#if CUDART_VERSION >= 11080 && __CUDA_ARCH__ >= 900
__device__ void ncclDevFunc_AllReduce_Prod_f8e4m3_COLLNET_CHAIN_SIMPLE();
#endif
#if CUDART_VERSION >= 11080 && __CUDA_ARCH__ >= 900
__device__ void ncclDevFunc_AllReduce_Prod_f8e4m3_COLLNET_DIRECT_SIMPLE();
#endif
#if CUDART_VERSION >= 11080 && __CUDA_ARCH__ >= 900
__device__ void ncclDevFunc_AllReduce_Prod_f8e4m3_RING_LL();
#endif
#if CUDART_VERSION >= 11080 && __CUDA_ARCH__ >= 900
__device__ void ncclDevFunc_AllReduce_Prod_f8e4m3_RING_LL128();
#endif
#if CUDART_VERSION >= 11080 && __CUDA_ARCH__ >= 900
__device__ void ncclDevFunc_AllReduce_Prod_f8e4m3_RING_SIMPLE();
#endif
#if CUDART_VERSION >= 11080 && __CUDA_ARCH__ >= 900
__device__ void ncclDevFunc_AllReduce_Prod_f8e4m3_TREE_LL();
#endif
#if CUDART_VERSION >= 11080 && __CUDA_ARCH__ >= 900
__device__ void ncclDevFunc_AllReduce_Prod_f8e4m3_TREE_LL128();
#endif
#if CUDART_VERSION >= 11080 && __CUDA_ARCH__ >= 900
__device__ void ncclDevFunc_AllReduce_Prod_f8e4m3_TREE_SIMPLE();
#endif
#if CUDART_VERSION >= 11080 && __CUDA_ARCH__ >= 900
__device__ void ncclDevFunc_AllReduce_Prod_f8e5m2_COLLNET_CHAIN_SIMPLE();
#endif
#if CUDART_VERSION >= 11080 && __CUDA_ARCH__ >= 900
__device__ void ncclDevFunc_AllReduce_Prod_f8e5m2_COLLNET_DIRECT_SIMPLE();
#endif
#if CUDART_VERSION >= 11080 && __CUDA_ARCH__ >= 900
__device__ void ncclDevFunc_AllReduce_Prod_f8e5m2_RING_LL();
#endif
#if CUDART_VERSION >= 11080 && __CUDA_ARCH__ >= 900
__device__ void ncclDevFunc_AllReduce_Prod_f8e5m2_RING_LL128();
#endif
#if CUDART_VERSION >= 11080 && __CUDA_ARCH__ >= 900
__device__ void ncclDevFunc_AllReduce_Prod_f8e5m2_RING_SIMPLE();
#endif
#if CUDART_VERSION >= 11080 && __CUDA_ARCH__ >= 900
__device__ void ncclDevFunc_AllReduce_Prod_f8e5m2_TREE_LL();
#endif
#if CUDART_VERSION >= 11080 && __CUDA_ARCH__ >= 900
__device__ void ncclDevFunc_AllReduce_Prod_f8e5m2_TREE_LL128();
#endif
#if CUDART_VERSION >= 11080 && __CUDA_ARCH__ >= 900
__device__ void ncclDevFunc_AllReduce_Prod_f8e5m2_TREE_SIMPLE();
#endif
__device__ void ncclDevFunc_AllReduce_Prod_u32_COLLNET_CHAIN_SIMPLE();
__device__ void ncclDevFunc_AllReduce_Prod_u32_COLLNET_DIRECT_SIMPLE();
__device__ void ncclDevFunc_AllReduce_Prod_u32_RING_LL();
__device__ void ncclDevFunc_AllReduce_Prod_u32_RING_LL128();
__device__ void ncclDevFunc_AllReduce_Prod_u32_RING_SIMPLE();
__device__ void ncclDevFunc_AllReduce_Prod_u32_TREE_LL();
__device__ void ncclDevFunc_AllReduce_Prod_u32_TREE_LL128();
__device__ void ncclDevFunc_AllReduce_Prod_u32_TREE_SIMPLE();
__device__ void ncclDevFunc_AllReduce_Prod_u64_COLLNET_CHAIN_SIMPLE();
__device__ void ncclDevFunc_AllReduce_Prod_u64_COLLNET_DIRECT_SIMPLE();
__device__ void ncclDevFunc_AllReduce_Prod_u64_RING_LL();
__device__ void ncclDevFunc_AllReduce_Prod_u64_RING_LL128();
__device__ void ncclDevFunc_AllReduce_Prod_u64_RING_SIMPLE();
__device__ void ncclDevFunc_AllReduce_Prod_u64_TREE_LL();
__device__ void ncclDevFunc_AllReduce_Prod_u64_TREE_LL128();
__device__ void ncclDevFunc_AllReduce_Prod_u64_TREE_SIMPLE();
__device__ void ncclDevFunc_AllReduce_Prod_u8_COLLNET_CHAIN_SIMPLE();
__device__ void ncclDevFunc_AllReduce_Prod_u8_COLLNET_DIRECT_SIMPLE();
__device__ void ncclDevFunc_AllReduce_Prod_u8_RING_LL();
__device__ void ncclDevFunc_AllReduce_Prod_u8_RING_LL128();
__device__ void ncclDevFunc_AllReduce_Prod_u8_RING_SIMPLE();
__device__ void ncclDevFunc_AllReduce_Prod_u8_TREE_LL();
__device__ void ncclDevFunc_AllReduce_Prod_u8_TREE_LL128();
__device__ void ncclDevFunc_AllReduce_Prod_u8_TREE_SIMPLE();
#if CUDART_VERSION >= 11000 && __CUDA_ARCH__ >= 0
__device__ void ncclDevFunc_AllReduce_Sum_bf16_COLLNET_CHAIN_SIMPLE();
#endif
#if CUDART_VERSION >= 11000 && __CUDA_ARCH__ >= 0
__device__ void ncclDevFunc_AllReduce_Sum_bf16_COLLNET_DIRECT_SIMPLE();
#endif
#if CUDART_VERSION >= 12010 && __CUDA_ARCH__ >= 900
__device__ void ncclDevFunc_AllReduce_Sum_bf16_NVLS_SIMPLE();
#endif
#if CUDART_VERSION >= 12010 && __CUDA_ARCH__ >= 900
__device__ void ncclDevFunc_AllReduce_Sum_bf16_NVLS_TREE_SIMPLE();
#endif
#if CUDART_VERSION >= 11000 && __CUDA_ARCH__ >= 0
__device__ void ncclDevFunc_AllReduce_Sum_bf16_RING_LL();
#endif
#if CUDART_VERSION >= 11000 && __CUDA_ARCH__ >= 0
__device__ void ncclDevFunc_AllReduce_Sum_bf16_RING_LL128();
#endif
#if CUDART_VERSION >= 11000 && __CUDA_ARCH__ >= 0
__device__ void ncclDevFunc_AllReduce_Sum_bf16_RING_SIMPLE();
#endif
#if CUDART_VERSION >= 11000 && __CUDA_ARCH__ >= 0
__device__ void ncclDevFunc_AllReduce_Sum_bf16_TREE_LL();
#endif
#if CUDART_VERSION >= 11000 && __CUDA_ARCH__ >= 0
__device__ void ncclDevFunc_AllReduce_Sum_bf16_TREE_LL128();
#endif
#if CUDART_VERSION >= 11000 && __CUDA_ARCH__ >= 0
__device__ void ncclDevFunc_AllReduce_Sum_bf16_TREE_SIMPLE();
#endif
__device__ void ncclDevFunc_AllReduce_Sum_f16_COLLNET_CHAIN_SIMPLE();
__device__ void ncclDevFunc_AllReduce_Sum_f16_COLLNET_DIRECT_SIMPLE();
#if CUDART_VERSION >= 12010 && __CUDA_ARCH__ >= 900
__device__ void ncclDevFunc_AllReduce_Sum_f16_NVLS_SIMPLE();
#endif
#if CUDART_VERSION >= 12010 && __CUDA_ARCH__ >= 900
__device__ void ncclDevFunc_AllReduce_Sum_f16_NVLS_TREE_SIMPLE();
#endif
__device__ void ncclDevFunc_AllReduce_Sum_f16_RING_LL();
__device__ void ncclDevFunc_AllReduce_Sum_f16_RING_LL128();
__device__ void ncclDevFunc_AllReduce_Sum_f16_RING_SIMPLE();
__device__ void ncclDevFunc_AllReduce_Sum_f16_TREE_LL();
__device__ void ncclDevFunc_AllReduce_Sum_f16_TREE_LL128();
__device__ void ncclDevFunc_AllReduce_Sum_f16_TREE_SIMPLE();
__device__ void ncclDevFunc_AllReduce_Sum_f32_COLLNET_CHAIN_SIMPLE();
__device__ void ncclDevFunc_AllReduce_Sum_f32_COLLNET_DIRECT_SIMPLE();
#if CUDART_VERSION >= 12010 && __CUDA_ARCH__ >= 900
__device__ void ncclDevFunc_AllReduce_Sum_f32_NVLS_SIMPLE();
#endif
#if CUDART_VERSION >= 12010 && __CUDA_ARCH__ >= 900
__device__ void ncclDevFunc_AllReduce_Sum_f32_NVLS_TREE_SIMPLE();
#endif
__device__ void ncclDevFunc_AllReduce_Sum_f32_RING_LL();
__device__ void ncclDevFunc_AllReduce_Sum_f32_RING_LL128();
__device__ void ncclDevFunc_AllReduce_Sum_f32_RING_SIMPLE();
__device__ void ncclDevFunc_AllReduce_Sum_f32_TREE_LL();
__device__ void ncclDevFunc_AllReduce_Sum_f32_TREE_LL128();
__device__ void ncclDevFunc_AllReduce_Sum_f32_TREE_SIMPLE();
__device__ void ncclDevFunc_AllReduce_Sum_f64_COLLNET_CHAIN_SIMPLE();
__device__ void ncclDevFunc_AllReduce_Sum_f64_COLLNET_DIRECT_SIMPLE();
#if CUDART_VERSION >= 12010 && __CUDA_ARCH__ >= 900
__device__ void ncclDevFunc_AllReduce_Sum_f64_NVLS_SIMPLE();
#endif
#if CUDART_VERSION >= 12010 && __CUDA_ARCH__ >= 900
__device__ void ncclDevFunc_AllReduce_Sum_f64_NVLS_TREE_SIMPLE();
#endif
__device__ void ncclDevFunc_AllReduce_Sum_f64_RING_LL();
__device__ void ncclDevFunc_AllReduce_Sum_f64_RING_LL128();
__device__ void ncclDevFunc_AllReduce_Sum_f64_RING_SIMPLE();
__device__ void ncclDevFunc_AllReduce_Sum_f64_TREE_LL();
__device__ void ncclDevFunc_AllReduce_Sum_f64_TREE_LL128();
__device__ void ncclDevFunc_AllReduce_Sum_f64_TREE_SIMPLE();
#if CUDART_VERSION >= 11080 && __CUDA_ARCH__ >= 900
__device__ void ncclDevFunc_AllReduce_Sum_f8e4m3_COLLNET_CHAIN_SIMPLE();
#endif
#if CUDART_VERSION >= 11080 && __CUDA_ARCH__ >= 900
__device__ void ncclDevFunc_AllReduce_Sum_f8e4m3_COLLNET_DIRECT_SIMPLE();
#endif
#if CUDART_VERSION >= 11080 && __CUDA_ARCH__ >= 900
__device__ void ncclDevFunc_AllReduce_Sum_f8e4m3_RING_LL();
#endif
#if CUDART_VERSION >= 11080 && __CUDA_ARCH__ >= 900
__device__ void ncclDevFunc_AllReduce_Sum_f8e4m3_RING_LL128();
#endif
#if CUDART_VERSION >= 11080 && __CUDA_ARCH__ >= 900
__device__ void ncclDevFunc_AllReduce_Sum_f8e4m3_RING_SIMPLE();
#endif
#if CUDART_VERSION >= 11080 && __CUDA_ARCH__ >= 900
__device__ void ncclDevFunc_AllReduce_Sum_f8e4m3_TREE_LL();
#endif
#if CUDART_VERSION >= 11080 && __CUDA_ARCH__ >= 900
__device__ void ncclDevFunc_AllReduce_Sum_f8e4m3_TREE_LL128();
#endif
#if CUDART_VERSION >= 11080 && __CUDA_ARCH__ >= 900
__device__ void ncclDevFunc_AllReduce_Sum_f8e4m3_TREE_SIMPLE();
#endif
#if CUDART_VERSION >= 11080 && __CUDA_ARCH__ >= 900
__device__ void ncclDevFunc_AllReduce_Sum_f8e5m2_COLLNET_CHAIN_SIMPLE();
#endif
#if CUDART_VERSION >= 11080 && __CUDA_ARCH__ >= 900
__device__ void ncclDevFunc_AllReduce_Sum_f8e5m2_COLLNET_DIRECT_SIMPLE();
#endif
#if CUDART_VERSION >= 11080 && __CUDA_ARCH__ >= 900
__device__ void ncclDevFunc_AllReduce_Sum_f8e5m2_RING_LL();
#endif
#if CUDART_VERSION >= 11080 && __CUDA_ARCH__ >= 900
__device__ void ncclDevFunc_AllReduce_Sum_f8e5m2_RING_LL128();
#endif
#if CUDART_VERSION >= 11080 && __CUDA_ARCH__ >= 900
__device__ void ncclDevFunc_AllReduce_Sum_f8e5m2_RING_SIMPLE();
#endif
#if CUDART_VERSION >= 11080 && __CUDA_ARCH__ >= 900
__device__ void ncclDevFunc_AllReduce_Sum_f8e5m2_TREE_LL();
#endif
#if CUDART_VERSION >= 11080 && __CUDA_ARCH__ >= 900
__device__ void ncclDevFunc_AllReduce_Sum_f8e5m2_TREE_LL128();
#endif
#if CUDART_VERSION >= 11080 && __CUDA_ARCH__ >= 900
__device__ void ncclDevFunc_AllReduce_Sum_f8e5m2_TREE_SIMPLE();
#endif
__device__ void ncclDevFunc_AllReduce_Sum_u32_COLLNET_CHAIN_SIMPLE();
__device__ void ncclDevFunc_AllReduce_Sum_u32_COLLNET_DIRECT_SIMPLE();
#if CUDART_VERSION >= 12010 && __CUDA_ARCH__ >= 900
__device__ void ncclDevFunc_AllReduce_Sum_u32_NVLS_SIMPLE();
#endif
#if CUDART_VERSION >= 12010 && __CUDA_ARCH__ >= 900
__device__ void ncclDevFunc_AllReduce_Sum_u32_NVLS_TREE_SIMPLE();
#endif
__device__ void ncclDevFunc_AllReduce_Sum_u32_RING_LL();
__device__ void ncclDevFunc_AllReduce_Sum_u32_RING_LL128();
__device__ void ncclDevFunc_AllReduce_Sum_u32_RING_SIMPLE();
__device__ void ncclDevFunc_AllReduce_Sum_u32_TREE_LL();
__device__ void ncclDevFunc_AllReduce_Sum_u32_TREE_LL128();
__device__ void ncclDevFunc_AllReduce_Sum_u32_TREE_SIMPLE();
__device__ void ncclDevFunc_AllReduce_Sum_u64_COLLNET_CHAIN_SIMPLE();
__device__ void ncclDevFunc_AllReduce_Sum_u64_COLLNET_DIRECT_SIMPLE();
#if CUDART_VERSION >= 12010 && __CUDA_ARCH__ >= 900
__device__ void ncclDevFunc_AllReduce_Sum_u64_NVLS_SIMPLE();
#endif
#if CUDART_VERSION >= 12010 && __CUDA_ARCH__ >= 900
__device__ void ncclDevFunc_AllReduce_Sum_u64_NVLS_TREE_SIMPLE();
#endif
__device__ void ncclDevFunc_AllReduce_Sum_u64_RING_LL();
__device__ void ncclDevFunc_AllReduce_Sum_u64_RING_LL128();
__device__ void ncclDevFunc_AllReduce_Sum_u64_RING_SIMPLE();
__device__ void ncclDevFunc_AllReduce_Sum_u64_TREE_LL();
__device__ void ncclDevFunc_AllReduce_Sum_u64_TREE_LL128();
__device__ void ncclDevFunc_AllReduce_Sum_u64_TREE_SIMPLE();
__device__ void ncclDevFunc_AllReduce_Sum_u8_COLLNET_CHAIN_SIMPLE();
__device__ void ncclDevFunc_AllReduce_Sum_u8_COLLNET_DIRECT_SIMPLE();
__device__ void ncclDevFunc_AllReduce_Sum_u8_RING_LL();
__device__ void ncclDevFunc_AllReduce_Sum_u8_RING_LL128();
__device__ void ncclDevFunc_AllReduce_Sum_u8_RING_SIMPLE();
__device__ void ncclDevFunc_AllReduce_Sum_u8_TREE_LL();
__device__ void ncclDevFunc_AllReduce_Sum_u8_TREE_LL128();
__device__ void ncclDevFunc_AllReduce_Sum_u8_TREE_SIMPLE();
__device__ void ncclDevFunc_AllReduce_SumPostDiv_u32_COLLNET_CHAIN_SIMPLE();
__device__ void ncclDevFunc_AllReduce_SumPostDiv_u32_COLLNET_DIRECT_SIMPLE();
__device__ void ncclDevFunc_AllReduce_SumPostDiv_u32_RING_LL();
__device__ void ncclDevFunc_AllReduce_SumPostDiv_u32_RING_LL128();
__device__ void ncclDevFunc_AllReduce_SumPostDiv_u32_RING_SIMPLE();
__device__ void ncclDevFunc_AllReduce_SumPostDiv_u32_TREE_LL();
__device__ void ncclDevFunc_AllReduce_SumPostDiv_u32_TREE_LL128();
__device__ void ncclDevFunc_AllReduce_SumPostDiv_u32_TREE_SIMPLE();
__device__ void ncclDevFunc_AllReduce_SumPostDiv_u64_COLLNET_CHAIN_SIMPLE();
__device__ void ncclDevFunc_AllReduce_SumPostDiv_u64_COLLNET_DIRECT_SIMPLE();
__device__ void ncclDevFunc_AllReduce_SumPostDiv_u64_RING_LL();
__device__ void ncclDevFunc_AllReduce_SumPostDiv_u64_RING_LL128();
__device__ void ncclDevFunc_AllReduce_SumPostDiv_u64_RING_SIMPLE();
__device__ void ncclDevFunc_AllReduce_SumPostDiv_u64_TREE_LL();
__device__ void ncclDevFunc_AllReduce_SumPostDiv_u64_TREE_LL128();
__device__ void ncclDevFunc_AllReduce_SumPostDiv_u64_TREE_SIMPLE();
__device__ void ncclDevFunc_AllReduce_SumPostDiv_u8_COLLNET_CHAIN_SIMPLE();
__device__ void ncclDevFunc_AllReduce_SumPostDiv_u8_COLLNET_DIRECT_SIMPLE();
__device__ void ncclDevFunc_AllReduce_SumPostDiv_u8_RING_LL();
__device__ void ncclDevFunc_AllReduce_SumPostDiv_u8_RING_LL128();
__device__ void ncclDevFunc_AllReduce_SumPostDiv_u8_RING_SIMPLE();
__device__ void ncclDevFunc_AllReduce_SumPostDiv_u8_TREE_LL();
__device__ void ncclDevFunc_AllReduce_SumPostDiv_u8_TREE_LL128();
__device__ void ncclDevFunc_AllReduce_SumPostDiv_u8_TREE_SIMPLE();
__device__ void ncclDevFunc_Broadcast_RING_LL();
__device__ void ncclDevFunc_Broadcast_RING_LL128();
__device__ void ncclDevFunc_Broadcast_RING_SIMPLE();
#if CUDART_VERSION >= 11000 && __CUDA_ARCH__ >= 0
__device__ void ncclDevFunc_Reduce_MinMax_bf16_RING_LL();
#endif
#if CUDART_VERSION >= 11000 && __CUDA_ARCH__ >= 0
__device__ void ncclDevFunc_Reduce_MinMax_bf16_RING_LL128();
#endif
#if CUDART_VERSION >= 11000 && __CUDA_ARCH__ >= 0
__device__ void ncclDevFunc_Reduce_MinMax_bf16_RING_SIMPLE();
#endif
__device__ void ncclDevFunc_Reduce_MinMax_f16_RING_LL();
__device__ void ncclDevFunc_Reduce_MinMax_f16_RING_LL128();
__device__ void ncclDevFunc_Reduce_MinMax_f16_RING_SIMPLE();
__device__ void ncclDevFunc_Reduce_MinMax_f32_RING_LL();
__device__ void ncclDevFunc_Reduce_MinMax_f32_RING_LL128();
__device__ void ncclDevFunc_Reduce_MinMax_f32_RING_SIMPLE();
__device__ void ncclDevFunc_Reduce_MinMax_f64_RING_LL();
__device__ void ncclDevFunc_Reduce_MinMax_f64_RING_LL128();
__device__ void ncclDevFunc_Reduce_MinMax_f64_RING_SIMPLE();
#if CUDART_VERSION >= 11080 && __CUDA_ARCH__ >= 900
__device__ void ncclDevFunc_Reduce_MinMax_f8e4m3_RING_LL();
#endif
#if CUDART_VERSION >= 11080 && __CUDA_ARCH__ >= 900
__device__ void ncclDevFunc_Reduce_MinMax_f8e4m3_RING_LL128();
#endif
#if CUDART_VERSION >= 11080 && __CUDA_ARCH__ >= 900
__device__ void ncclDevFunc_Reduce_MinMax_f8e4m3_RING_SIMPLE();
#endif
#if CUDART_VERSION >= 11080 && __CUDA_ARCH__ >= 900
__device__ void ncclDevFunc_Reduce_MinMax_f8e5m2_RING_LL();
#endif
#if CUDART_VERSION >= 11080 && __CUDA_ARCH__ >= 900
__device__ void ncclDevFunc_Reduce_MinMax_f8e5m2_RING_LL128();
#endif
#if CUDART_VERSION >= 11080 && __CUDA_ARCH__ >= 900
__device__ void ncclDevFunc_Reduce_MinMax_f8e5m2_RING_SIMPLE();
#endif
__device__ void ncclDevFunc_Reduce_MinMax_u32_RING_LL();
__device__ void ncclDevFunc_Reduce_MinMax_u32_RING_LL128();
__device__ void ncclDevFunc_Reduce_MinMax_u32_RING_SIMPLE();
__device__ void ncclDevFunc_Reduce_MinMax_u64_RING_LL();
__device__ void ncclDevFunc_Reduce_MinMax_u64_RING_LL128();
__device__ void ncclDevFunc_Reduce_MinMax_u64_RING_SIMPLE();
__device__ void ncclDevFunc_Reduce_MinMax_u8_RING_LL();
__device__ void ncclDevFunc_Reduce_MinMax_u8_RING_LL128();
__device__ void ncclDevFunc_Reduce_MinMax_u8_RING_SIMPLE();
#if CUDART_VERSION >= 11000 && __CUDA_ARCH__ >= 0
__device__ void ncclDevFunc_Reduce_PreMulSum_bf16_RING_LL();
#endif
#if CUDART_VERSION >= 11000 && __CUDA_ARCH__ >= 0
__device__ void ncclDevFunc_Reduce_PreMulSum_bf16_RING_LL128();
#endif
#if CUDART_VERSION >= 11000 && __CUDA_ARCH__ >= 0
__device__ void ncclDevFunc_Reduce_PreMulSum_bf16_RING_SIMPLE();
#endif
__device__ void ncclDevFunc_Reduce_PreMulSum_f16_RING_LL();
__device__ void ncclDevFunc_Reduce_PreMulSum_f16_RING_LL128();
__device__ void ncclDevFunc_Reduce_PreMulSum_f16_RING_SIMPLE();
__device__ void ncclDevFunc_Reduce_PreMulSum_f32_RING_LL();
__device__ void ncclDevFunc_Reduce_PreMulSum_f32_RING_LL128();
__device__ void ncclDevFunc_Reduce_PreMulSum_f32_RING_SIMPLE();
__device__ void ncclDevFunc_Reduce_PreMulSum_f64_RING_LL();
__device__ void ncclDevFunc_Reduce_PreMulSum_f64_RING_LL128();
__device__ void ncclDevFunc_Reduce_PreMulSum_f64_RING_SIMPLE();
#if CUDART_VERSION >= 11080 && __CUDA_ARCH__ >= 900
__device__ void ncclDevFunc_Reduce_PreMulSum_f8e4m3_RING_LL();
#endif
#if CUDART_VERSION >= 11080 && __CUDA_ARCH__ >= 900
__device__ void ncclDevFunc_Reduce_PreMulSum_f8e4m3_RING_LL128();
#endif
#if CUDART_VERSION >= 11080 && __CUDA_ARCH__ >= 900
__device__ void ncclDevFunc_Reduce_PreMulSum_f8e4m3_RING_SIMPLE();
#endif
#if CUDART_VERSION >= 11080 && __CUDA_ARCH__ >= 900
__device__ void ncclDevFunc_Reduce_PreMulSum_f8e5m2_RING_LL();
#endif
#if CUDART_VERSION >= 11080 && __CUDA_ARCH__ >= 900
__device__ void ncclDevFunc_Reduce_PreMulSum_f8e5m2_RING_LL128();
#endif
#if CUDART_VERSION >= 11080 && __CUDA_ARCH__ >= 900
__device__ void ncclDevFunc_Reduce_PreMulSum_f8e5m2_RING_SIMPLE();
#endif
__device__ void ncclDevFunc_Reduce_PreMulSum_u32_RING_LL();
__device__ void ncclDevFunc_Reduce_PreMulSum_u32_RING_LL128();
__device__ void ncclDevFunc_Reduce_PreMulSum_u32_RING_SIMPLE();
__device__ void ncclDevFunc_Reduce_PreMulSum_u64_RING_LL();
__device__ void ncclDevFunc_Reduce_PreMulSum_u64_RING_LL128();
__device__ void ncclDevFunc_Reduce_PreMulSum_u64_RING_SIMPLE();
__device__ void ncclDevFunc_Reduce_PreMulSum_u8_RING_LL();
__device__ void ncclDevFunc_Reduce_PreMulSum_u8_RING_LL128();
__device__ void ncclDevFunc_Reduce_PreMulSum_u8_RING_SIMPLE();
#if CUDART_VERSION >= 11000 && __CUDA_ARCH__ >= 0
__device__ void ncclDevFunc_Reduce_Prod_bf16_RING_LL();
#endif
#if CUDART_VERSION >= 11000 && __CUDA_ARCH__ >= 0
__device__ void ncclDevFunc_Reduce_Prod_bf16_RING_LL128();
#endif
#if CUDART_VERSION >= 11000 && __CUDA_ARCH__ >= 0
__device__ void ncclDevFunc_Reduce_Prod_bf16_RING_SIMPLE();
#endif
__device__ void ncclDevFunc_Reduce_Prod_f16_RING_LL();
__device__ void ncclDevFunc_Reduce_Prod_f16_RING_LL128();
__device__ void ncclDevFunc_Reduce_Prod_f16_RING_SIMPLE();
__device__ void ncclDevFunc_Reduce_Prod_f32_RING_LL();
__device__ void ncclDevFunc_Reduce_Prod_f32_RING_LL128();
__device__ void ncclDevFunc_Reduce_Prod_f32_RING_SIMPLE();
__device__ void ncclDevFunc_Reduce_Prod_f64_RING_LL();
__device__ void ncclDevFunc_Reduce_Prod_f64_RING_LL128();
__device__ void ncclDevFunc_Reduce_Prod_f64_RING_SIMPLE();
#if CUDART_VERSION >= 11080 && __CUDA_ARCH__ >= 900
__device__ void ncclDevFunc_Reduce_Prod_f8e4m3_RING_LL();
#endif
#if CUDART_VERSION >= 11080 && __CUDA_ARCH__ >= 900
__device__ void ncclDevFunc_Reduce_Prod_f8e4m3_RING_LL128();
#endif
#if CUDART_VERSION >= 11080 && __CUDA_ARCH__ >= 900
__device__ void ncclDevFunc_Reduce_Prod_f8e4m3_RING_SIMPLE();
#endif
#if CUDART_VERSION >= 11080 && __CUDA_ARCH__ >= 900
__device__ void ncclDevFunc_Reduce_Prod_f8e5m2_RING_LL();
#endif
#if CUDART_VERSION >= 11080 && __CUDA_ARCH__ >= 900
__device__ void ncclDevFunc_Reduce_Prod_f8e5m2_RING_LL128();
#endif
#if CUDART_VERSION >= 11080 && __CUDA_ARCH__ >= 900
__device__ void ncclDevFunc_Reduce_Prod_f8e5m2_RING_SIMPLE();
#endif
__device__ void ncclDevFunc_Reduce_Prod_u32_RING_LL();
__device__ void ncclDevFunc_Reduce_Prod_u32_RING_LL128();
__device__ void ncclDevFunc_Reduce_Prod_u32_RING_SIMPLE();
__device__ void ncclDevFunc_Reduce_Prod_u64_RING_LL();
__device__ void ncclDevFunc_Reduce_Prod_u64_RING_LL128();
__device__ void ncclDevFunc_Reduce_Prod_u64_RING_SIMPLE();
__device__ void ncclDevFunc_Reduce_Prod_u8_RING_LL();
__device__ void ncclDevFunc_Reduce_Prod_u8_RING_LL128();
__device__ void ncclDevFunc_Reduce_Prod_u8_RING_SIMPLE();
#if CUDART_VERSION >= 11000 && __CUDA_ARCH__ >= 0
__device__ void ncclDevFunc_Reduce_Sum_bf16_RING_LL();
#endif
#if CUDART_VERSION >= 11000 && __CUDA_ARCH__ >= 0
__device__ void ncclDevFunc_Reduce_Sum_bf16_RING_LL128();
#endif
#if CUDART_VERSION >= 11000 && __CUDA_ARCH__ >= 0
__device__ void ncclDevFunc_Reduce_Sum_bf16_RING_SIMPLE();
#endif
__device__ void ncclDevFunc_Reduce_Sum_f16_RING_LL();
__device__ void ncclDevFunc_Reduce_Sum_f16_RING_LL128();
__device__ void ncclDevFunc_Reduce_Sum_f16_RING_SIMPLE();
__device__ void ncclDevFunc_Reduce_Sum_f32_RING_LL();
__device__ void ncclDevFunc_Reduce_Sum_f32_RING_LL128();
__device__ void ncclDevFunc_Reduce_Sum_f32_RING_SIMPLE();
__device__ void ncclDevFunc_Reduce_Sum_f64_RING_LL();
__device__ void ncclDevFunc_Reduce_Sum_f64_RING_LL128();
__device__ void ncclDevFunc_Reduce_Sum_f64_RING_SIMPLE();
#if CUDART_VERSION >= 11080 && __CUDA_ARCH__ >= 900
__device__ void ncclDevFunc_Reduce_Sum_f8e4m3_RING_LL();
#endif
#if CUDART_VERSION >= 11080 && __CUDA_ARCH__ >= 900
__device__ void ncclDevFunc_Reduce_Sum_f8e4m3_RING_LL128();
#endif
#if CUDART_VERSION >= 11080 && __CUDA_ARCH__ >= 900
__device__ void ncclDevFunc_Reduce_Sum_f8e4m3_RING_SIMPLE();
#endif
#if CUDART_VERSION >= 11080 && __CUDA_ARCH__ >= 900
__device__ void ncclDevFunc_Reduce_Sum_f8e5m2_RING_LL();
#endif
#if CUDART_VERSION >= 11080 && __CUDA_ARCH__ >= 900
__device__ void ncclDevFunc_Reduce_Sum_f8e5m2_RING_LL128();
#endif
#if CUDART_VERSION >= 11080 && __CUDA_ARCH__ >= 900
__device__ void ncclDevFunc_Reduce_Sum_f8e5m2_RING_SIMPLE();
#endif
__device__ void ncclDevFunc_Reduce_Sum_u32_RING_LL();
__device__ void ncclDevFunc_Reduce_Sum_u32_RING_LL128();
__device__ void ncclDevFunc_Reduce_Sum_u32_RING_SIMPLE();
__device__ void ncclDevFunc_Reduce_Sum_u64_RING_LL();
__device__ void ncclDevFunc_Reduce_Sum_u64_RING_LL128();
__device__ void ncclDevFunc_Reduce_Sum_u64_RING_SIMPLE();
__device__ void ncclDevFunc_Reduce_Sum_u8_RING_LL();
__device__ void ncclDevFunc_Reduce_Sum_u8_RING_LL128();
__device__ void ncclDevFunc_Reduce_Sum_u8_RING_SIMPLE();
__device__ void ncclDevFunc_Reduce_SumPostDiv_u32_RING_LL();
__device__ void ncclDevFunc_Reduce_SumPostDiv_u32_RING_LL128();
__device__ void ncclDevFunc_Reduce_SumPostDiv_u32_RING_SIMPLE();
__device__ void ncclDevFunc_Reduce_SumPostDiv_u64_RING_LL();
__device__ void ncclDevFunc_Reduce_SumPostDiv_u64_RING_LL128();
__device__ void ncclDevFunc_Reduce_SumPostDiv_u64_RING_SIMPLE();
__device__ void ncclDevFunc_Reduce_SumPostDiv_u8_RING_LL();
__device__ void ncclDevFunc_Reduce_SumPostDiv_u8_RING_LL128();
__device__ void ncclDevFunc_Reduce_SumPostDiv_u8_RING_SIMPLE();
#if CUDART_VERSION >= 11000 && __CUDA_ARCH__ >= 0
__device__ void ncclDevFunc_ReduceScatter_MinMax_bf16_COLLNET_DIRECT_SIMPLE();
#endif
#if CUDART_VERSION >= 12010 && __CUDA_ARCH__ >= 900
__device__ void ncclDevFunc_ReduceScatter_MinMax_bf16_NVLS_SIMPLE();
#endif
#if CUDART_VERSION >= 11000 && __CUDA_ARCH__ >= 0
__device__ void ncclDevFunc_ReduceScatter_MinMax_bf16_PAT_SIMPLE();
#endif
#if CUDART_VERSION >= 11000 && __CUDA_ARCH__ >= 0
__device__ void ncclDevFunc_ReduceScatter_MinMax_bf16_RING_LL();
#endif
#if CUDART_VERSION >= 11000 && __CUDA_ARCH__ >= 0
__device__ void ncclDevFunc_ReduceScatter_MinMax_bf16_RING_LL128();
#endif
#if CUDART_VERSION >= 11000 && __CUDA_ARCH__ >= 0
__device__ void ncclDevFunc_ReduceScatter_MinMax_bf16_RING_SIMPLE();
#endif
__device__ void ncclDevFunc_ReduceScatter_MinMax_f16_COLLNET_DIRECT_SIMPLE();
#if CUDART_VERSION >= 12010 && __CUDA_ARCH__ >= 900
__device__ void ncclDevFunc_ReduceScatter_MinMax_f16_NVLS_SIMPLE();
#endif
__device__ void ncclDevFunc_ReduceScatter_MinMax_f16_PAT_SIMPLE();
__device__ void ncclDevFunc_ReduceScatter_MinMax_f16_RING_LL();
__device__ void ncclDevFunc_ReduceScatter_MinMax_f16_RING_LL128();
__device__ void ncclDevFunc_ReduceScatter_MinMax_f16_RING_SIMPLE();
__device__ void ncclDevFunc_ReduceScatter_MinMax_f32_COLLNET_DIRECT_SIMPLE();
__device__ void ncclDevFunc_ReduceScatter_MinMax_f32_PAT_SIMPLE();
__device__ void ncclDevFunc_ReduceScatter_MinMax_f32_RING_LL();
__device__ void ncclDevFunc_ReduceScatter_MinMax_f32_RING_LL128();
__device__ void ncclDevFunc_ReduceScatter_MinMax_f32_RING_SIMPLE();
__device__ void ncclDevFunc_ReduceScatter_MinMax_f64_COLLNET_DIRECT_SIMPLE();
__device__ void ncclDevFunc_ReduceScatter_MinMax_f64_PAT_SIMPLE();
__device__ void ncclDevFunc_ReduceScatter_MinMax_f64_RING_LL();
__device__ void ncclDevFunc_ReduceScatter_MinMax_f64_RING_LL128();
__device__ void ncclDevFunc_ReduceScatter_MinMax_f64_RING_SIMPLE();
#if CUDART_VERSION >= 11080 && __CUDA_ARCH__ >= 900
__device__ void ncclDevFunc_ReduceScatter_MinMax_f8e4m3_COLLNET_DIRECT_SIMPLE();
#endif
#if CUDART_VERSION >= 11080 && __CUDA_ARCH__ >= 900
__device__ void ncclDevFunc_ReduceScatter_MinMax_f8e4m3_PAT_SIMPLE();
#endif
#if CUDART_VERSION >= 11080 && __CUDA_ARCH__ >= 900
__device__ void ncclDevFunc_ReduceScatter_MinMax_f8e4m3_RING_LL();
#endif
#if CUDART_VERSION >= 11080 && __CUDA_ARCH__ >= 900
__device__ void ncclDevFunc_ReduceScatter_MinMax_f8e4m3_RING_LL128();
#endif
#if CUDART_VERSION >= 11080 && __CUDA_ARCH__ >= 900
__device__ void ncclDevFunc_ReduceScatter_MinMax_f8e4m3_RING_SIMPLE();
#endif
#if CUDART_VERSION >= 11080 && __CUDA_ARCH__ >= 900
__device__ void ncclDevFunc_ReduceScatter_MinMax_f8e5m2_COLLNET_DIRECT_SIMPLE();
#endif
#if CUDART_VERSION >= 11080 && __CUDA_ARCH__ >= 900
__device__ void ncclDevFunc_ReduceScatter_MinMax_f8e5m2_PAT_SIMPLE();
#endif
#if CUDART_VERSION >= 11080 && __CUDA_ARCH__ >= 900
__device__ void ncclDevFunc_ReduceScatter_MinMax_f8e5m2_RING_LL();
#endif
#if CUDART_VERSION >= 11080 && __CUDA_ARCH__ >= 900
__device__ void ncclDevFunc_ReduceScatter_MinMax_f8e5m2_RING_LL128();
#endif
#if CUDART_VERSION >= 11080 && __CUDA_ARCH__ >= 900
__device__ void ncclDevFunc_ReduceScatter_MinMax_f8e5m2_RING_SIMPLE();
#endif
#if CUDART_VERSION >= 12010 && __CUDA_ARCH__ >= 900
__device__ void ncclDevFunc_ReduceScatter_MinMax_i32_NVLS_SIMPLE();
#endif
#if CUDART_VERSION >= 12010 && __CUDA_ARCH__ >= 900
__device__ void ncclDevFunc_ReduceScatter_MinMax_i64_NVLS_SIMPLE();
#endif
__device__ void ncclDevFunc_ReduceScatter_MinMax_u32_COLLNET_DIRECT_SIMPLE();
#if CUDART_VERSION >= 12010 && __CUDA_ARCH__ >= 900
__device__ void ncclDevFunc_ReduceScatter_MinMax_u32_NVLS_SIMPLE();
#endif
__device__ void ncclDevFunc_ReduceScatter_MinMax_u32_PAT_SIMPLE();
__device__ void ncclDevFunc_ReduceScatter_MinMax_u32_RING_LL();
__device__ void ncclDevFunc_ReduceScatter_MinMax_u32_RING_LL128();
__device__ void ncclDevFunc_ReduceScatter_MinMax_u32_RING_SIMPLE();
__device__ void ncclDevFunc_ReduceScatter_MinMax_u64_COLLNET_DIRECT_SIMPLE();
#if CUDART_VERSION >= 12010 && __CUDA_ARCH__ >= 900
__device__ void ncclDevFunc_ReduceScatter_MinMax_u64_NVLS_SIMPLE();
#endif
__device__ void ncclDevFunc_ReduceScatter_MinMax_u64_PAT_SIMPLE();
__device__ void ncclDevFunc_ReduceScatter_MinMax_u64_RING_LL();
__device__ void ncclDevFunc_ReduceScatter_MinMax_u64_RING_LL128();
__device__ void ncclDevFunc_ReduceScatter_MinMax_u64_RING_SIMPLE();
__device__ void ncclDevFunc_ReduceScatter_MinMax_u8_COLLNET_DIRECT_SIMPLE();
__device__ void ncclDevFunc_ReduceScatter_MinMax_u8_PAT_SIMPLE();
__device__ void ncclDevFunc_ReduceScatter_MinMax_u8_RING_LL();
__device__ void ncclDevFunc_ReduceScatter_MinMax_u8_RING_LL128();
__device__ void ncclDevFunc_ReduceScatter_MinMax_u8_RING_SIMPLE();
#if CUDART_VERSION >= 11000 && __CUDA_ARCH__ >= 0
__device__ void ncclDevFunc_ReduceScatter_PreMulSum_bf16_COLLNET_DIRECT_SIMPLE();
#endif
#if CUDART_VERSION >= 11000 && __CUDA_ARCH__ >= 0
__device__ void ncclDevFunc_ReduceScatter_PreMulSum_bf16_PAT_SIMPLE();
#endif
#if CUDART_VERSION >= 11000 && __CUDA_ARCH__ >= 0
__device__ void ncclDevFunc_ReduceScatter_PreMulSum_bf16_RING_LL();
#endif
#if CUDART_VERSION >= 11000 && __CUDA_ARCH__ >= 0
__device__ void ncclDevFunc_ReduceScatter_PreMulSum_bf16_RING_LL128();
#endif
#if CUDART_VERSION >= 11000 && __CUDA_ARCH__ >= 0
__device__ void ncclDevFunc_ReduceScatter_PreMulSum_bf16_RING_SIMPLE();
#endif
__device__ void ncclDevFunc_ReduceScatter_PreMulSum_f16_COLLNET_DIRECT_SIMPLE();
__device__ void ncclDevFunc_ReduceScatter_PreMulSum_f16_PAT_SIMPLE();
__device__ void ncclDevFunc_ReduceScatter_PreMulSum_f16_RING_LL();
__device__ void ncclDevFunc_ReduceScatter_PreMulSum_f16_RING_LL128();
__device__ void ncclDevFunc_ReduceScatter_PreMulSum_f16_RING_SIMPLE();
__device__ void ncclDevFunc_ReduceScatter_PreMulSum_f32_COLLNET_DIRECT_SIMPLE();
__device__ void ncclDevFunc_ReduceScatter_PreMulSum_f32_PAT_SIMPLE();
__device__ void ncclDevFunc_ReduceScatter_PreMulSum_f32_RING_LL();
__device__ void ncclDevFunc_ReduceScatter_PreMulSum_f32_RING_LL128();
__device__ void ncclDevFunc_ReduceScatter_PreMulSum_f32_RING_SIMPLE();
__device__ void ncclDevFunc_ReduceScatter_PreMulSum_f64_COLLNET_DIRECT_SIMPLE();
__device__ void ncclDevFunc_ReduceScatter_PreMulSum_f64_PAT_SIMPLE();
__device__ void ncclDevFunc_ReduceScatter_PreMulSum_f64_RING_LL();
__device__ void ncclDevFunc_ReduceScatter_PreMulSum_f64_RING_LL128();
__device__ void ncclDevFunc_ReduceScatter_PreMulSum_f64_RING_SIMPLE();
#if CUDART_VERSION >= 11080 && __CUDA_ARCH__ >= 900
__device__ void ncclDevFunc_ReduceScatter_PreMulSum_f8e4m3_COLLNET_DIRECT_SIMPLE();
#endif
#if CUDART_VERSION >= 11080 && __CUDA_ARCH__ >= 900
__device__ void ncclDevFunc_ReduceScatter_PreMulSum_f8e4m3_PAT_SIMPLE();
#endif
#if CUDART_VERSION >= 11080 && __CUDA_ARCH__ >= 900
__device__ void ncclDevFunc_ReduceScatter_PreMulSum_f8e4m3_RING_LL();
#endif
#if CUDART_VERSION >= 11080 && __CUDA_ARCH__ >= 900
__device__ void ncclDevFunc_ReduceScatter_PreMulSum_f8e4m3_RING_LL128();
#endif
#if CUDART_VERSION >= 11080 && __CUDA_ARCH__ >= 900
__device__ void ncclDevFunc_ReduceScatter_PreMulSum_f8e4m3_RING_SIMPLE();
#endif
#if CUDART_VERSION >= 11080 && __CUDA_ARCH__ >= 900
__device__ void ncclDevFunc_ReduceScatter_PreMulSum_f8e5m2_COLLNET_DIRECT_SIMPLE();
#endif
#if CUDART_VERSION >= 11080 && __CUDA_ARCH__ >= 900
__device__ void ncclDevFunc_ReduceScatter_PreMulSum_f8e5m2_PAT_SIMPLE();
#endif
#if CUDART_VERSION >= 11080 && __CUDA_ARCH__ >= 900
__device__ void ncclDevFunc_ReduceScatter_PreMulSum_f8e5m2_RING_LL();
#endif
#if CUDART_VERSION >= 11080 && __CUDA_ARCH__ >= 900
__device__ void ncclDevFunc_ReduceScatter_PreMulSum_f8e5m2_RING_LL128();
#endif
#if CUDART_VERSION >= 11080 && __CUDA_ARCH__ >= 900
__device__ void ncclDevFunc_ReduceScatter_PreMulSum_f8e5m2_RING_SIMPLE();
#endif
__device__ void ncclDevFunc_ReduceScatter_PreMulSum_u32_COLLNET_DIRECT_SIMPLE();
__device__ void ncclDevFunc_ReduceScatter_PreMulSum_u32_PAT_SIMPLE();
__device__ void ncclDevFunc_ReduceScatter_PreMulSum_u32_RING_LL();
__device__ void ncclDevFunc_ReduceScatter_PreMulSum_u32_RING_LL128();
__device__ void ncclDevFunc_ReduceScatter_PreMulSum_u32_RING_SIMPLE();
__device__ void ncclDevFunc_ReduceScatter_PreMulSum_u64_COLLNET_DIRECT_SIMPLE();
__device__ void ncclDevFunc_ReduceScatter_PreMulSum_u64_PAT_SIMPLE();
__device__ void ncclDevFunc_ReduceScatter_PreMulSum_u64_RING_LL();
__device__ void ncclDevFunc_ReduceScatter_PreMulSum_u64_RING_LL128();
__device__ void ncclDevFunc_ReduceScatter_PreMulSum_u64_RING_SIMPLE();
__device__ void ncclDevFunc_ReduceScatter_PreMulSum_u8_COLLNET_DIRECT_SIMPLE();
__device__ void ncclDevFunc_ReduceScatter_PreMulSum_u8_PAT_SIMPLE();
__device__ void ncclDevFunc_ReduceScatter_PreMulSum_u8_RING_LL();
__device__ void ncclDevFunc_ReduceScatter_PreMulSum_u8_RING_LL128();
__device__ void ncclDevFunc_ReduceScatter_PreMulSum_u8_RING_SIMPLE();
#if CUDART_VERSION >= 11000 && __CUDA_ARCH__ >= 0
__device__ void ncclDevFunc_ReduceScatter_Prod_bf16_COLLNET_DIRECT_SIMPLE();
#endif
#if CUDART_VERSION >= 11000 && __CUDA_ARCH__ >= 0
__device__ void ncclDevFunc_ReduceScatter_Prod_bf16_PAT_SIMPLE();
#endif
#if CUDART_VERSION >= 11000 && __CUDA_ARCH__ >= 0
__device__ void ncclDevFunc_ReduceScatter_Prod_bf16_RING_LL();
#endif
#if CUDART_VERSION >= 11000 && __CUDA_ARCH__ >= 0
__device__ void ncclDevFunc_ReduceScatter_Prod_bf16_RING_LL128();
#endif
#if CUDART_VERSION >= 11000 && __CUDA_ARCH__ >= 0
__device__ void ncclDevFunc_ReduceScatter_Prod_bf16_RING_SIMPLE();
#endif
__device__ void ncclDevFunc_ReduceScatter_Prod_f16_COLLNET_DIRECT_SIMPLE();
__device__ void ncclDevFunc_ReduceScatter_Prod_f16_PAT_SIMPLE();
__device__ void ncclDevFunc_ReduceScatter_Prod_f16_RING_LL();
__device__ void ncclDevFunc_ReduceScatter_Prod_f16_RING_LL128();
__device__ void ncclDevFunc_ReduceScatter_Prod_f16_RING_SIMPLE();
__device__ void ncclDevFunc_ReduceScatter_Prod_f32_COLLNET_DIRECT_SIMPLE();
__device__ void ncclDevFunc_ReduceScatter_Prod_f32_PAT_SIMPLE();
__device__ void ncclDevFunc_ReduceScatter_Prod_f32_RING_LL();
__device__ void ncclDevFunc_ReduceScatter_Prod_f32_RING_LL128();
__device__ void ncclDevFunc_ReduceScatter_Prod_f32_RING_SIMPLE();
__device__ void ncclDevFunc_ReduceScatter_Prod_f64_COLLNET_DIRECT_SIMPLE();
__device__ void ncclDevFunc_ReduceScatter_Prod_f64_PAT_SIMPLE();
__device__ void ncclDevFunc_ReduceScatter_Prod_f64_RING_LL();
__device__ void ncclDevFunc_ReduceScatter_Prod_f64_RING_LL128();
__device__ void ncclDevFunc_ReduceScatter_Prod_f64_RING_SIMPLE();
#if CUDART_VERSION >= 11080 && __CUDA_ARCH__ >= 900
__device__ void ncclDevFunc_ReduceScatter_Prod_f8e4m3_COLLNET_DIRECT_SIMPLE();
#endif
#if CUDART_VERSION >= 11080 && __CUDA_ARCH__ >= 900
__device__ void ncclDevFunc_ReduceScatter_Prod_f8e4m3_PAT_SIMPLE();
#endif
#if CUDART_VERSION >= 11080 && __CUDA_ARCH__ >= 900
__device__ void ncclDevFunc_ReduceScatter_Prod_f8e4m3_RING_LL();
#endif
#if CUDART_VERSION >= 11080 && __CUDA_ARCH__ >= 900
__device__ void ncclDevFunc_ReduceScatter_Prod_f8e4m3_RING_LL128();
#endif
#if CUDART_VERSION >= 11080 && __CUDA_ARCH__ >= 900
__device__ void ncclDevFunc_ReduceScatter_Prod_f8e4m3_RING_SIMPLE();
#endif
#if CUDART_VERSION >= 11080 && __CUDA_ARCH__ >= 900
__device__ void ncclDevFunc_ReduceScatter_Prod_f8e5m2_COLLNET_DIRECT_SIMPLE();
#endif
#if CUDART_VERSION >= 11080 && __CUDA_ARCH__ >= 900
__device__ void ncclDevFunc_ReduceScatter_Prod_f8e5m2_PAT_SIMPLE();
#endif
#if CUDART_VERSION >= 11080 && __CUDA_ARCH__ >= 900
__device__ void ncclDevFunc_ReduceScatter_Prod_f8e5m2_RING_LL();
#endif
#if CUDART_VERSION >= 11080 && __CUDA_ARCH__ >= 900
__device__ void ncclDevFunc_ReduceScatter_Prod_f8e5m2_RING_LL128();
#endif
#if CUDART_VERSION >= 11080 && __CUDA_ARCH__ >= 900
__device__ void ncclDevFunc_ReduceScatter_Prod_f8e5m2_RING_SIMPLE();
#endif
__device__ void ncclDevFunc_ReduceScatter_Prod_u32_COLLNET_DIRECT_SIMPLE();
__device__ void ncclDevFunc_ReduceScatter_Prod_u32_PAT_SIMPLE();
__device__ void ncclDevFunc_ReduceScatter_Prod_u32_RING_LL();
__device__ void ncclDevFunc_ReduceScatter_Prod_u32_RING_LL128();
__device__ void ncclDevFunc_ReduceScatter_Prod_u32_RING_SIMPLE();
__device__ void ncclDevFunc_ReduceScatter_Prod_u64_COLLNET_DIRECT_SIMPLE();
__device__ void ncclDevFunc_ReduceScatter_Prod_u64_PAT_SIMPLE();
__device__ void ncclDevFunc_ReduceScatter_Prod_u64_RING_LL();
__device__ void ncclDevFunc_ReduceScatter_Prod_u64_RING_LL128();
__device__ void ncclDevFunc_ReduceScatter_Prod_u64_RING_SIMPLE();
__device__ void ncclDevFunc_ReduceScatter_Prod_u8_COLLNET_DIRECT_SIMPLE();
__device__ void ncclDevFunc_ReduceScatter_Prod_u8_PAT_SIMPLE();
__device__ void ncclDevFunc_ReduceScatter_Prod_u8_RING_LL();
__device__ void ncclDevFunc_ReduceScatter_Prod_u8_RING_LL128();
__device__ void ncclDevFunc_ReduceScatter_Prod_u8_RING_SIMPLE();
#if CUDART_VERSION >= 11000 && __CUDA_ARCH__ >= 0
__device__ void ncclDevFunc_ReduceScatter_Sum_bf16_COLLNET_DIRECT_SIMPLE();
#endif
#if CUDART_VERSION >= 12010 && __CUDA_ARCH__ >= 900
__device__ void ncclDevFunc_ReduceScatter_Sum_bf16_NVLS_SIMPLE();
#endif
#if CUDART_VERSION >= 11000 && __CUDA_ARCH__ >= 0
__device__ void ncclDevFunc_ReduceScatter_Sum_bf16_PAT_SIMPLE();
#endif
#if CUDART_VERSION >= 11000 && __CUDA_ARCH__ >= 0
__device__ void ncclDevFunc_ReduceScatter_Sum_bf16_RING_LL();
#endif
#if CUDART_VERSION >= 11000 && __CUDA_ARCH__ >= 0
__device__ void ncclDevFunc_ReduceScatter_Sum_bf16_RING_LL128();
#endif
#if CUDART_VERSION >= 11000 && __CUDA_ARCH__ >= 0
__device__ void ncclDevFunc_ReduceScatter_Sum_bf16_RING_SIMPLE();
#endif
__device__ void ncclDevFunc_ReduceScatter_Sum_f16_COLLNET_DIRECT_SIMPLE();
#if CUDART_VERSION >= 12010 && __CUDA_ARCH__ >= 900
__device__ void ncclDevFunc_ReduceScatter_Sum_f16_NVLS_SIMPLE();
#endif
__device__ void ncclDevFunc_ReduceScatter_Sum_f16_PAT_SIMPLE();
__device__ void ncclDevFunc_ReduceScatter_Sum_f16_RING_LL();
__device__ void ncclDevFunc_ReduceScatter_Sum_f16_RING_LL128();
__device__ void ncclDevFunc_ReduceScatter_Sum_f16_RING_SIMPLE();
__device__ void ncclDevFunc_ReduceScatter_Sum_f32_COLLNET_DIRECT_SIMPLE();
#if CUDART_VERSION >= 12010 && __CUDA_ARCH__ >= 900
__device__ void ncclDevFunc_ReduceScatter_Sum_f32_NVLS_SIMPLE();
#endif
__device__ void ncclDevFunc_ReduceScatter_Sum_f32_PAT_SIMPLE();
__device__ void ncclDevFunc_ReduceScatter_Sum_f32_RING_LL();
__device__ void ncclDevFunc_ReduceScatter_Sum_f32_RING_LL128();
__device__ void ncclDevFunc_ReduceScatter_Sum_f32_RING_SIMPLE();
__device__ void ncclDevFunc_ReduceScatter_Sum_f64_COLLNET_DIRECT_SIMPLE();
#if CUDART_VERSION >= 12010 && __CUDA_ARCH__ >= 900
__device__ void ncclDevFunc_ReduceScatter_Sum_f64_NVLS_SIMPLE();
#endif
__device__ void ncclDevFunc_ReduceScatter_Sum_f64_PAT_SIMPLE();
__device__ void ncclDevFunc_ReduceScatter_Sum_f64_RING_LL();
__device__ void ncclDevFunc_ReduceScatter_Sum_f64_RING_LL128();
__device__ void ncclDevFunc_ReduceScatter_Sum_f64_RING_SIMPLE();
#if CUDART_VERSION >= 11080 && __CUDA_ARCH__ >= 900
__device__ void ncclDevFunc_ReduceScatter_Sum_f8e4m3_COLLNET_DIRECT_SIMPLE();
#endif
#if CUDART_VERSION >= 11080 && __CUDA_ARCH__ >= 900
__device__ void ncclDevFunc_ReduceScatter_Sum_f8e4m3_PAT_SIMPLE();
#endif
#if CUDART_VERSION >= 11080 && __CUDA_ARCH__ >= 900
__device__ void ncclDevFunc_ReduceScatter_Sum_f8e4m3_RING_LL();
#endif
#if CUDART_VERSION >= 11080 && __CUDA_ARCH__ >= 900
__device__ void ncclDevFunc_ReduceScatter_Sum_f8e4m3_RING_LL128();
#endif
#if CUDART_VERSION >= 11080 && __CUDA_ARCH__ >= 900
__device__ void ncclDevFunc_ReduceScatter_Sum_f8e4m3_RING_SIMPLE();
#endif
#if CUDART_VERSION >= 11080 && __CUDA_ARCH__ >= 900
__device__ void ncclDevFunc_ReduceScatter_Sum_f8e5m2_COLLNET_DIRECT_SIMPLE();
#endif
#if CUDART_VERSION >= 11080 && __CUDA_ARCH__ >= 900
__device__ void ncclDevFunc_ReduceScatter_Sum_f8e5m2_PAT_SIMPLE();
#endif
#if CUDART_VERSION >= 11080 && __CUDA_ARCH__ >= 900
__device__ void ncclDevFunc_ReduceScatter_Sum_f8e5m2_RING_LL();
#endif
#if CUDART_VERSION >= 11080 && __CUDA_ARCH__ >= 900
__device__ void ncclDevFunc_ReduceScatter_Sum_f8e5m2_RING_LL128();
#endif
#if CUDART_VERSION >= 11080 && __CUDA_ARCH__ >= 900
__device__ void ncclDevFunc_ReduceScatter_Sum_f8e5m2_RING_SIMPLE();
#endif
__device__ void ncclDevFunc_ReduceScatter_Sum_u32_COLLNET_DIRECT_SIMPLE();
#if CUDART_VERSION >= 12010 && __CUDA_ARCH__ >= 900
__device__ void ncclDevFunc_ReduceScatter_Sum_u32_NVLS_SIMPLE();
#endif
__device__ void ncclDevFunc_ReduceScatter_Sum_u32_PAT_SIMPLE();
__device__ void ncclDevFunc_ReduceScatter_Sum_u32_RING_LL();
__device__ void ncclDevFunc_ReduceScatter_Sum_u32_RING_LL128();
__device__ void ncclDevFunc_ReduceScatter_Sum_u32_RING_SIMPLE();
__device__ void ncclDevFunc_ReduceScatter_Sum_u64_COLLNET_DIRECT_SIMPLE();
#if CUDART_VERSION >= 12010 && __CUDA_ARCH__ >= 900
__device__ void ncclDevFunc_ReduceScatter_Sum_u64_NVLS_SIMPLE();
#endif
__device__ void ncclDevFunc_ReduceScatter_Sum_u64_PAT_SIMPLE();
__device__ void ncclDevFunc_ReduceScatter_Sum_u64_RING_LL();
__device__ void ncclDevFunc_ReduceScatter_Sum_u64_RING_LL128();
__device__ void ncclDevFunc_ReduceScatter_Sum_u64_RING_SIMPLE();
__device__ void ncclDevFunc_ReduceScatter_Sum_u8_COLLNET_DIRECT_SIMPLE();
__device__ void ncclDevFunc_ReduceScatter_Sum_u8_PAT_SIMPLE();
__device__ void ncclDevFunc_ReduceScatter_Sum_u8_RING_LL();
__device__ void ncclDevFunc_ReduceScatter_Sum_u8_RING_LL128();
__device__ void ncclDevFunc_ReduceScatter_Sum_u8_RING_SIMPLE();
__device__ void ncclDevFunc_ReduceScatter_SumPostDiv_u32_COLLNET_DIRECT_SIMPLE();
__device__ void ncclDevFunc_ReduceScatter_SumPostDiv_u32_PAT_SIMPLE();
__device__ void ncclDevFunc_ReduceScatter_SumPostDiv_u32_RING_LL();
__device__ void ncclDevFunc_ReduceScatter_SumPostDiv_u32_RING_LL128();
__device__ void ncclDevFunc_ReduceScatter_SumPostDiv_u32_RING_SIMPLE();
__device__ void ncclDevFunc_ReduceScatter_SumPostDiv_u64_COLLNET_DIRECT_SIMPLE();
__device__ void ncclDevFunc_ReduceScatter_SumPostDiv_u64_PAT_SIMPLE();
__device__ void ncclDevFunc_ReduceScatter_SumPostDiv_u64_RING_LL();
__device__ void ncclDevFunc_ReduceScatter_SumPostDiv_u64_RING_LL128();
__device__ void ncclDevFunc_ReduceScatter_SumPostDiv_u64_RING_SIMPLE();
__device__ void ncclDevFunc_ReduceScatter_SumPostDiv_u8_COLLNET_DIRECT_SIMPLE();
__device__ void ncclDevFunc_ReduceScatter_SumPostDiv_u8_PAT_SIMPLE();
__device__ void ncclDevFunc_ReduceScatter_SumPostDiv_u8_RING_LL();
__device__ void ncclDevFunc_ReduceScatter_SumPostDiv_u8_RING_LL128();
__device__ void ncclDevFunc_ReduceScatter_SumPostDiv_u8_RING_SIMPLE();
__device__ void ncclDevFunc_SendRecv();

__device__ ncclDevFuncPtr_t const ncclDevFuncTable[] = {
/*   0*/ ncclDevFunc_AllGather_COLLNET_DIRECT_SIMPLE,
#if CUDART_VERSION >= 12010 && __CUDA_ARCH__ >= 900
/*   1*/ ncclDevFunc_AllGather_NVLS_SIMPLE,
#else
/*   1*/ nullptr,
#endif
/*   2*/ ncclDevFunc_AllGather_PAT_SIMPLE,
/*   3*/ ncclDevFunc_AllGather_RING_LL,
/*   4*/ ncclDevFunc_AllGather_RING_LL128,
/*   5*/ ncclDevFunc_AllGather_RING_SIMPLE,
/*   6*/ ncclDevFunc_AllGatherV_RING_LL,
/*   7*/ ncclDevFunc_AllGatherV_RING_LL128,
/*   8*/ ncclDevFunc_AllGatherV_RING_SIMPLE,
#if CUDART_VERSION >= 11000 && __CUDA_ARCH__ >= 0
/*   9*/ ncclDevFunc_AllReduce_MinMax_bf16_COLLNET_CHAIN_SIMPLE,
#else
/*   9*/ nullptr,
#endif
#if CUDART_VERSION >= 11000 && __CUDA_ARCH__ >= 0
/*  10*/ ncclDevFunc_AllReduce_MinMax_bf16_COLLNET_DIRECT_SIMPLE,
#else
/*  10*/ nullptr,
#endif
#if CUDART_VERSION >= 12010 && __CUDA_ARCH__ >= 900
/*  11*/ ncclDevFunc_AllReduce_MinMax_bf16_NVLS_SIMPLE,
#else
/*  11*/ nullptr,
#endif
#if CUDART_VERSION >= 12010 && __CUDA_ARCH__ >= 900
/*  12*/ ncclDevFunc_AllReduce_MinMax_bf16_NVLS_TREE_SIMPLE,
#else
/*  12*/ nullptr,
#endif
#if CUDART_VERSION >= 11000 && __CUDA_ARCH__ >= 0
/*  13*/ ncclDevFunc_AllReduce_MinMax_bf16_RING_LL,
#else
/*  13*/ nullptr,
#endif
#if CUDART_VERSION >= 11000 && __CUDA_ARCH__ >= 0
/*  14*/ ncclDevFunc_AllReduce_MinMax_bf16_RING_LL128,
#else
/*  14*/ nullptr,
#endif
#if CUDART_VERSION >= 11000 && __CUDA_ARCH__ >= 0
/*  15*/ ncclDevFunc_AllReduce_MinMax_bf16_RING_SIMPLE,
#else
/*  15*/ nullptr,
#endif
#if CUDART_VERSION >= 11000 && __CUDA_ARCH__ >= 0
/*  16*/ ncclDevFunc_AllReduce_MinMax_bf16_TREE_LL,
#else
/*  16*/ nullptr,
#endif
#if CUDART_VERSION >= 11000 && __CUDA_ARCH__ >= 0
/*  17*/ ncclDevFunc_AllReduce_MinMax_bf16_TREE_LL128,
#else
/*  17*/ nullptr,
#endif
#if CUDART_VERSION >= 11000 && __CUDA_ARCH__ >= 0
/*  18*/ ncclDevFunc_AllReduce_MinMax_bf16_TREE_SIMPLE,
#else
/*  18*/ nullptr,
#endif
/*  19*/ ncclDevFunc_AllReduce_MinMax_f16_COLLNET_CHAIN_SIMPLE,
/*  20*/ ncclDevFunc_AllReduce_MinMax_f16_COLLNET_DIRECT_SIMPLE,
#if CUDART_VERSION >= 12010 && __CUDA_ARCH__ >= 900
/*  21*/ ncclDevFunc_AllReduce_MinMax_f16_NVLS_SIMPLE,
#else
/*  21*/ nullptr,
#endif
#if CUDART_VERSION >= 12010 && __CUDA_ARCH__ >= 900
/*  22*/ ncclDevFunc_AllReduce_MinMax_f16_NVLS_TREE_SIMPLE,
#else
/*  22*/ nullptr,
#endif
/*  23*/ ncclDevFunc_AllReduce_MinMax_f16_RING_LL,
/*  24*/ ncclDevFunc_AllReduce_MinMax_f16_RING_LL128,
/*  25*/ ncclDevFunc_AllReduce_MinMax_f16_RING_SIMPLE,
/*  26*/ ncclDevFunc_AllReduce_MinMax_f16_TREE_LL,
/*  27*/ ncclDevFunc_AllReduce_MinMax_f16_TREE_LL128,
/*  28*/ ncclDevFunc_AllReduce_MinMax_f16_TREE_SIMPLE,
/*  29*/ ncclDevFunc_AllReduce_MinMax_f32_COLLNET_CHAIN_SIMPLE,
/*  30*/ ncclDevFunc_AllReduce_MinMax_f32_COLLNET_DIRECT_SIMPLE,
/*  31*/ ncclDevFunc_AllReduce_MinMax_f32_RING_LL,
/*  32*/ ncclDevFunc_AllReduce_MinMax_f32_RING_LL128,
/*  33*/ ncclDevFunc_AllReduce_MinMax_f32_RING_SIMPLE,
/*  34*/ ncclDevFunc_AllReduce_MinMax_f32_TREE_LL,
/*  35*/ ncclDevFunc_AllReduce_MinMax_f32_TREE_LL128,
/*  36*/ ncclDevFunc_AllReduce_MinMax_f32_TREE_SIMPLE,
/*  37*/ ncclDevFunc_AllReduce_MinMax_f64_COLLNET_CHAIN_SIMPLE,
/*  38*/ ncclDevFunc_AllReduce_MinMax_f64_COLLNET_DIRECT_SIMPLE,
/*  39*/ ncclDevFunc_AllReduce_MinMax_f64_RING_LL,
/*  40*/ ncclDevFunc_AllReduce_MinMax_f64_RING_LL128,
/*  41*/ ncclDevFunc_AllReduce_MinMax_f64_RING_SIMPLE,
/*  42*/ ncclDevFunc_AllReduce_MinMax_f64_TREE_LL,
/*  43*/ ncclDevFunc_AllReduce_MinMax_f64_TREE_LL128,
/*  44*/ ncclDevFunc_AllReduce_MinMax_f64_TREE_SIMPLE,
#if CUDART_VERSION >= 11080 && __CUDA_ARCH__ >= 900
/*  45*/ ncclDevFunc_AllReduce_MinMax_f8e4m3_COLLNET_CHAIN_SIMPLE,
#else
/*  45*/ nullptr,
#endif
#if CUDART_VERSION >= 11080 && __CUDA_ARCH__ >= 900
/*  46*/ ncclDevFunc_AllReduce_MinMax_f8e4m3_COLLNET_DIRECT_SIMPLE,
#else
/*  46*/ nullptr,
#endif
#if CUDART_VERSION >= 11080 && __CUDA_ARCH__ >= 900
/*  47*/ ncclDevFunc_AllReduce_MinMax_f8e4m3_RING_LL,
#else
/*  47*/ nullptr,
#endif
#if CUDART_VERSION >= 11080 && __CUDA_ARCH__ >= 900
/*  48*/ ncclDevFunc_AllReduce_MinMax_f8e4m3_RING_LL128,
#else
/*  48*/ nullptr,
#endif
#if CUDART_VERSION >= 11080 && __CUDA_ARCH__ >= 900
/*  49*/ ncclDevFunc_AllReduce_MinMax_f8e4m3_RING_SIMPLE,
#else
/*  49*/ nullptr,
#endif
#if CUDART_VERSION >= 11080 && __CUDA_ARCH__ >= 900
/*  50*/ ncclDevFunc_AllReduce_MinMax_f8e4m3_TREE_LL,
#else
/*  50*/ nullptr,
#endif
#if CUDART_VERSION >= 11080 && __CUDA_ARCH__ >= 900
/*  51*/ ncclDevFunc_AllReduce_MinMax_f8e4m3_TREE_LL128,
#else
/*  51*/ nullptr,
#endif
#if CUDART_VERSION >= 11080 && __CUDA_ARCH__ >= 900
/*  52*/ ncclDevFunc_AllReduce_MinMax_f8e4m3_TREE_SIMPLE,
#else
/*  52*/ nullptr,
#endif
#if CUDART_VERSION >= 11080 && __CUDA_ARCH__ >= 900
/*  53*/ ncclDevFunc_AllReduce_MinMax_f8e5m2_COLLNET_CHAIN_SIMPLE,
#else
/*  53*/ nullptr,
#endif
#if CUDART_VERSION >= 11080 && __CUDA_ARCH__ >= 900
/*  54*/ ncclDevFunc_AllReduce_MinMax_f8e5m2_COLLNET_DIRECT_SIMPLE,
#else
/*  54*/ nullptr,
#endif
#if CUDART_VERSION >= 11080 && __CUDA_ARCH__ >= 900
/*  55*/ ncclDevFunc_AllReduce_MinMax_f8e5m2_RING_LL,
#else
/*  55*/ nullptr,
#endif
#if CUDART_VERSION >= 11080 && __CUDA_ARCH__ >= 900
/*  56*/ ncclDevFunc_AllReduce_MinMax_f8e5m2_RING_LL128,
#else
/*  56*/ nullptr,
#endif
#if CUDART_VERSION >= 11080 && __CUDA_ARCH__ >= 900
/*  57*/ ncclDevFunc_AllReduce_MinMax_f8e5m2_RING_SIMPLE,
#else
/*  57*/ nullptr,
#endif
#if CUDART_VERSION >= 11080 && __CUDA_ARCH__ >= 900
/*  58*/ ncclDevFunc_AllReduce_MinMax_f8e5m2_TREE_LL,
#else
/*  58*/ nullptr,
#endif
#if CUDART_VERSION >= 11080 && __CUDA_ARCH__ >= 900
/*  59*/ ncclDevFunc_AllReduce_MinMax_f8e5m2_TREE_LL128,
#else
/*  59*/ nullptr,
#endif
#if CUDART_VERSION >= 11080 && __CUDA_ARCH__ >= 900
/*  60*/ ncclDevFunc_AllReduce_MinMax_f8e5m2_TREE_SIMPLE,
#else
/*  60*/ nullptr,
#endif
#if CUDART_VERSION >= 12010 && __CUDA_ARCH__ >= 900
/*  61*/ ncclDevFunc_AllReduce_MinMax_i32_NVLS_SIMPLE,
#else
/*  61*/ nullptr,
#endif
#if CUDART_VERSION >= 12010 && __CUDA_ARCH__ >= 900
/*  62*/ ncclDevFunc_AllReduce_MinMax_i32_NVLS_TREE_SIMPLE,
#else
/*  62*/ nullptr,
#endif
#if CUDART_VERSION >= 12010 && __CUDA_ARCH__ >= 900
/*  63*/ ncclDevFunc_AllReduce_MinMax_i64_NVLS_SIMPLE,
#else
/*  63*/ nullptr,
#endif
#if CUDART_VERSION >= 12010 && __CUDA_ARCH__ >= 900
/*  64*/ ncclDevFunc_AllReduce_MinMax_i64_NVLS_TREE_SIMPLE,
#else
/*  64*/ nullptr,
#endif
/*  65*/ ncclDevFunc_AllReduce_MinMax_u32_COLLNET_CHAIN_SIMPLE,
/*  66*/ ncclDevFunc_AllReduce_MinMax_u32_COLLNET_DIRECT_SIMPLE,
#if CUDART_VERSION >= 12010 && __CUDA_ARCH__ >= 900
/*  67*/ ncclDevFunc_AllReduce_MinMax_u32_NVLS_SIMPLE,
#else
/*  67*/ nullptr,
#endif
#if CUDART_VERSION >= 12010 && __CUDA_ARCH__ >= 900
/*  68*/ ncclDevFunc_AllReduce_MinMax_u32_NVLS_TREE_SIMPLE,
#else
/*  68*/ nullptr,
#endif
/*  69*/ ncclDevFunc_AllReduce_MinMax_u32_RING_LL,
/*  70*/ ncclDevFunc_AllReduce_MinMax_u32_RING_LL128,
/*  71*/ ncclDevFunc_AllReduce_MinMax_u32_RING_SIMPLE,
/*  72*/ ncclDevFunc_AllReduce_MinMax_u32_TREE_LL,
/*  73*/ ncclDevFunc_AllReduce_MinMax_u32_TREE_LL128,
/*  74*/ ncclDevFunc_AllReduce_MinMax_u32_TREE_SIMPLE,
/*  75*/ ncclDevFunc_AllReduce_MinMax_u64_COLLNET_CHAIN_SIMPLE,
/*  76*/ ncclDevFunc_AllReduce_MinMax_u64_COLLNET_DIRECT_SIMPLE,
#if CUDART_VERSION >= 12010 && __CUDA_ARCH__ >= 900
/*  77*/ ncclDevFunc_AllReduce_MinMax_u64_NVLS_SIMPLE,
#else
/*  77*/ nullptr,
#endif
#if CUDART_VERSION >= 12010 && __CUDA_ARCH__ >= 900
/*  78*/ ncclDevFunc_AllReduce_MinMax_u64_NVLS_TREE_SIMPLE,
#else
/*  78*/ nullptr,
#endif
/*  79*/ ncclDevFunc_AllReduce_MinMax_u64_RING_LL,
/*  80*/ ncclDevFunc_AllReduce_MinMax_u64_RING_LL128,
/*  81*/ ncclDevFunc_AllReduce_MinMax_u64_RING_SIMPLE,
/*  82*/ ncclDevFunc_AllReduce_MinMax_u64_TREE_LL,
/*  83*/ ncclDevFunc_AllReduce_MinMax_u64_TREE_LL128,
/*  84*/ ncclDevFunc_AllReduce_MinMax_u64_TREE_SIMPLE,
/*  85*/ ncclDevFunc_AllReduce_MinMax_u8_COLLNET_CHAIN_SIMPLE,
/*  86*/ ncclDevFunc_AllReduce_MinMax_u8_COLLNET_DIRECT_SIMPLE,
/*  87*/ ncclDevFunc_AllReduce_MinMax_u8_RING_LL,
/*  88*/ ncclDevFunc_AllReduce_MinMax_u8_RING_LL128,
/*  89*/ ncclDevFunc_AllReduce_MinMax_u8_RING_SIMPLE,
/*  90*/ ncclDevFunc_AllReduce_MinMax_u8_TREE_LL,
/*  91*/ ncclDevFunc_AllReduce_MinMax_u8_TREE_LL128,
/*  92*/ ncclDevFunc_AllReduce_MinMax_u8_TREE_SIMPLE,
#if CUDART_VERSION >= 11000 && __CUDA_ARCH__ >= 0
/*  93*/ ncclDevFunc_AllReduce_PreMulSum_bf16_COLLNET_CHAIN_SIMPLE,
#else
/*  93*/ nullptr,
#endif
#if CUDART_VERSION >= 11000 && __CUDA_ARCH__ >= 0
/*  94*/ ncclDevFunc_AllReduce_PreMulSum_bf16_COLLNET_DIRECT_SIMPLE,
#else
/*  94*/ nullptr,
#endif
#if CUDART_VERSION >= 11000 && __CUDA_ARCH__ >= 0
/*  95*/ ncclDevFunc_AllReduce_PreMulSum_bf16_RING_LL,
#else
/*  95*/ nullptr,
#endif
#if CUDART_VERSION >= 11000 && __CUDA_ARCH__ >= 0
/*  96*/ ncclDevFunc_AllReduce_PreMulSum_bf16_RING_LL128,
#else
/*  96*/ nullptr,
#endif
#if CUDART_VERSION >= 11000 && __CUDA_ARCH__ >= 0
/*  97*/ ncclDevFunc_AllReduce_PreMulSum_bf16_RING_SIMPLE,
#else
/*  97*/ nullptr,
#endif
#if CUDART_VERSION >= 11000 && __CUDA_ARCH__ >= 0
/*  98*/ ncclDevFunc_AllReduce_PreMulSum_bf16_TREE_LL,
#else
/*  98*/ nullptr,
#endif
#if CUDART_VERSION >= 11000 && __CUDA_ARCH__ >= 0
/*  99*/ ncclDevFunc_AllReduce_PreMulSum_bf16_TREE_LL128,
#else
/*  99*/ nullptr,
#endif
#if CUDART_VERSION >= 11000 && __CUDA_ARCH__ >= 0
/* 100*/ ncclDevFunc_AllReduce_PreMulSum_bf16_TREE_SIMPLE,
#else
/* 100*/ nullptr,
#endif
/* 101*/ ncclDevFunc_AllReduce_PreMulSum_f16_COLLNET_CHAIN_SIMPLE,
/* 102*/ ncclDevFunc_AllReduce_PreMulSum_f16_COLLNET_DIRECT_SIMPLE,
/* 103*/ ncclDevFunc_AllReduce_PreMulSum_f16_RING_LL,
/* 104*/ ncclDevFunc_AllReduce_PreMulSum_f16_RING_LL128,
/* 105*/ ncclDevFunc_AllReduce_PreMulSum_f16_RING_SIMPLE,
/* 106*/ ncclDevFunc_AllReduce_PreMulSum_f16_TREE_LL,
/* 107*/ ncclDevFunc_AllReduce_PreMulSum_f16_TREE_LL128,
/* 108*/ ncclDevFunc_AllReduce_PreMulSum_f16_TREE_SIMPLE,
/* 109*/ ncclDevFunc_AllReduce_PreMulSum_f32_COLLNET_CHAIN_SIMPLE,
/* 110*/ ncclDevFunc_AllReduce_PreMulSum_f32_COLLNET_DIRECT_SIMPLE,
/* 111*/ ncclDevFunc_AllReduce_PreMulSum_f32_RING_LL,
/* 112*/ ncclDevFunc_AllReduce_PreMulSum_f32_RING_LL128,
/* 113*/ ncclDevFunc_AllReduce_PreMulSum_f32_RING_SIMPLE,
/* 114*/ ncclDevFunc_AllReduce_PreMulSum_f32_TREE_LL,
/* 115*/ ncclDevFunc_AllReduce_PreMulSum_f32_TREE_LL128,
/* 116*/ ncclDevFunc_AllReduce_PreMulSum_f32_TREE_SIMPLE,
/* 117*/ ncclDevFunc_AllReduce_PreMulSum_f64_COLLNET_CHAIN_SIMPLE,
/* 118*/ ncclDevFunc_AllReduce_PreMulSum_f64_COLLNET_DIRECT_SIMPLE,
/* 119*/ ncclDevFunc_AllReduce_PreMulSum_f64_RING_LL,
/* 120*/ ncclDevFunc_AllReduce_PreMulSum_f64_RING_LL128,
/* 121*/ ncclDevFunc_AllReduce_PreMulSum_f64_RING_SIMPLE,
/* 122*/ ncclDevFunc_AllReduce_PreMulSum_f64_TREE_LL,
/* 123*/ ncclDevFunc_AllReduce_PreMulSum_f64_TREE_LL128,
/* 124*/ ncclDevFunc_AllReduce_PreMulSum_f64_TREE_SIMPLE,
#if CUDART_VERSION >= 11080 && __CUDA_ARCH__ >= 900
/* 125*/ ncclDevFunc_AllReduce_PreMulSum_f8e4m3_COLLNET_CHAIN_SIMPLE,
#else
/* 125*/ nullptr,
#endif
#if CUDART_VERSION >= 11080 && __CUDA_ARCH__ >= 900
/* 126*/ ncclDevFunc_AllReduce_PreMulSum_f8e4m3_COLLNET_DIRECT_SIMPLE,
#else
/* 126*/ nullptr,
#endif
#if CUDART_VERSION >= 11080 && __CUDA_ARCH__ >= 900
/* 127*/ ncclDevFunc_AllReduce_PreMulSum_f8e4m3_RING_LL,
#else
/* 127*/ nullptr,
#endif
#if CUDART_VERSION >= 11080 && __CUDA_ARCH__ >= 900
/* 128*/ ncclDevFunc_AllReduce_PreMulSum_f8e4m3_RING_LL128,
#else
/* 128*/ nullptr,
#endif
#if CUDART_VERSION >= 11080 && __CUDA_ARCH__ >= 900
/* 129*/ ncclDevFunc_AllReduce_PreMulSum_f8e4m3_RING_SIMPLE,
#else
/* 129*/ nullptr,
#endif
#if CUDART_VERSION >= 11080 && __CUDA_ARCH__ >= 900
/* 130*/ ncclDevFunc_AllReduce_PreMulSum_f8e4m3_TREE_LL,
#else
/* 130*/ nullptr,
#endif
#if CUDART_VERSION >= 11080 && __CUDA_ARCH__ >= 900
/* 131*/ ncclDevFunc_AllReduce_PreMulSum_f8e4m3_TREE_LL128,
#else
/* 131*/ nullptr,
#endif
#if CUDART_VERSION >= 11080 && __CUDA_ARCH__ >= 900
/* 132*/ ncclDevFunc_AllReduce_PreMulSum_f8e4m3_TREE_SIMPLE,
#else
/* 132*/ nullptr,
#endif
#if CUDART_VERSION >= 11080 && __CUDA_ARCH__ >= 900
/* 133*/ ncclDevFunc_AllReduce_PreMulSum_f8e5m2_COLLNET_CHAIN_SIMPLE,
#else
/* 133*/ nullptr,
#endif
#if CUDART_VERSION >= 11080 && __CUDA_ARCH__ >= 900
/* 134*/ ncclDevFunc_AllReduce_PreMulSum_f8e5m2_COLLNET_DIRECT_SIMPLE,
#else
/* 134*/ nullptr,
#endif
#if CUDART_VERSION >= 11080 && __CUDA_ARCH__ >= 900
/* 135*/ ncclDevFunc_AllReduce_PreMulSum_f8e5m2_RING_LL,
#else
/* 135*/ nullptr,
#endif
#if CUDART_VERSION >= 11080 && __CUDA_ARCH__ >= 900
/* 136*/ ncclDevFunc_AllReduce_PreMulSum_f8e5m2_RING_LL128,
#else
/* 136*/ nullptr,
#endif
#if CUDART_VERSION >= 11080 && __CUDA_ARCH__ >= 900
/* 137*/ ncclDevFunc_AllReduce_PreMulSum_f8e5m2_RING_SIMPLE,
#else
/* 137*/ nullptr,
#endif
#if CUDART_VERSION >= 11080 && __CUDA_ARCH__ >= 900
/* 138*/ ncclDevFunc_AllReduce_PreMulSum_f8e5m2_TREE_LL,
#else
/* 138*/ nullptr,
#endif
#if CUDART_VERSION >= 11080 && __CUDA_ARCH__ >= 900
/* 139*/ ncclDevFunc_AllReduce_PreMulSum_f8e5m2_TREE_LL128,
#else
/* 139*/ nullptr,
#endif
#if CUDART_VERSION >= 11080 && __CUDA_ARCH__ >= 900
/* 140*/ ncclDevFunc_AllReduce_PreMulSum_f8e5m2_TREE_SIMPLE,
#else
/* 140*/ nullptr,
#endif
/* 141*/ ncclDevFunc_AllReduce_PreMulSum_u32_COLLNET_CHAIN_SIMPLE,
/* 142*/ ncclDevFunc_AllReduce_PreMulSum_u32_COLLNET_DIRECT_SIMPLE,
/* 143*/ ncclDevFunc_AllReduce_PreMulSum_u32_RING_LL,
/* 144*/ ncclDevFunc_AllReduce_PreMulSum_u32_RING_LL128,
/* 145*/ ncclDevFunc_AllReduce_PreMulSum_u32_RING_SIMPLE,
/* 146*/ ncclDevFunc_AllReduce_PreMulSum_u32_TREE_LL,
/* 147*/ ncclDevFunc_AllReduce_PreMulSum_u32_TREE_LL128,
/* 148*/ ncclDevFunc_AllReduce_PreMulSum_u32_TREE_SIMPLE,
/* 149*/ ncclDevFunc_AllReduce_PreMulSum_u64_COLLNET_CHAIN_SIMPLE,
/* 150*/ ncclDevFunc_AllReduce_PreMulSum_u64_COLLNET_DIRECT_SIMPLE,
/* 151*/ ncclDevFunc_AllReduce_PreMulSum_u64_RING_LL,
/* 152*/ ncclDevFunc_AllReduce_PreMulSum_u64_RING_LL128,
/* 153*/ ncclDevFunc_AllReduce_PreMulSum_u64_RING_SIMPLE,
/* 154*/ ncclDevFunc_AllReduce_PreMulSum_u64_TREE_LL,
/* 155*/ ncclDevFunc_AllReduce_PreMulSum_u64_TREE_LL128,
/* 156*/ ncclDevFunc_AllReduce_PreMulSum_u64_TREE_SIMPLE,
/* 157*/ ncclDevFunc_AllReduce_PreMulSum_u8_COLLNET_CHAIN_SIMPLE,
/* 158*/ ncclDevFunc_AllReduce_PreMulSum_u8_COLLNET_DIRECT_SIMPLE,
/* 159*/ ncclDevFunc_AllReduce_PreMulSum_u8_RING_LL,
/* 160*/ ncclDevFunc_AllReduce_PreMulSum_u8_RING_LL128,
/* 161*/ ncclDevFunc_AllReduce_PreMulSum_u8_RING_SIMPLE,
/* 162*/ ncclDevFunc_AllReduce_PreMulSum_u8_TREE_LL,
/* 163*/ ncclDevFunc_AllReduce_PreMulSum_u8_TREE_LL128,
/* 164*/ ncclDevFunc_AllReduce_PreMulSum_u8_TREE_SIMPLE,
#if CUDART_VERSION >= 11000 && __CUDA_ARCH__ >= 0
/* 165*/ ncclDevFunc_AllReduce_Prod_bf16_COLLNET_CHAIN_SIMPLE,
#else
/* 165*/ nullptr,
#endif
#if CUDART_VERSION >= 11000 && __CUDA_ARCH__ >= 0
/* 166*/ ncclDevFunc_AllReduce_Prod_bf16_COLLNET_DIRECT_SIMPLE,
#else
/* 166*/ nullptr,
#endif
#if CUDART_VERSION >= 11000 && __CUDA_ARCH__ >= 0
/* 167*/ ncclDevFunc_AllReduce_Prod_bf16_RING_LL,
#else
/* 167*/ nullptr,
#endif
#if CUDART_VERSION >= 11000 && __CUDA_ARCH__ >= 0
/* 168*/ ncclDevFunc_AllReduce_Prod_bf16_RING_LL128,
#else
/* 168*/ nullptr,
#endif
#if CUDART_VERSION >= 11000 && __CUDA_ARCH__ >= 0
/* 169*/ ncclDevFunc_AllReduce_Prod_bf16_RING_SIMPLE,
#else
/* 169*/ nullptr,
#endif
#if CUDART_VERSION >= 11000 && __CUDA_ARCH__ >= 0
/* 170*/ ncclDevFunc_AllReduce_Prod_bf16_TREE_LL,
#else
/* 170*/ nullptr,
#endif
#if CUDART_VERSION >= 11000 && __CUDA_ARCH__ >= 0
/* 171*/ ncclDevFunc_AllReduce_Prod_bf16_TREE_LL128,
#else
/* 171*/ nullptr,
#endif
#if CUDART_VERSION >= 11000 && __CUDA_ARCH__ >= 0
/* 172*/ ncclDevFunc_AllReduce_Prod_bf16_TREE_SIMPLE,
#else
/* 172*/ nullptr,
#endif
/* 173*/ ncclDevFunc_AllReduce_Prod_f16_COLLNET_CHAIN_SIMPLE,
/* 174*/ ncclDevFunc_AllReduce_Prod_f16_COLLNET_DIRECT_SIMPLE,
/* 175*/ ncclDevFunc_AllReduce_Prod_f16_RING_LL,
/* 176*/ ncclDevFunc_AllReduce_Prod_f16_RING_LL128,
/* 177*/ ncclDevFunc_AllReduce_Prod_f16_RING_SIMPLE,
/* 178*/ ncclDevFunc_AllReduce_Prod_f16_TREE_LL,
/* 179*/ ncclDevFunc_AllReduce_Prod_f16_TREE_LL128,
/* 180*/ ncclDevFunc_AllReduce_Prod_f16_TREE_SIMPLE,
/* 181*/ ncclDevFunc_AllReduce_Prod_f32_COLLNET_CHAIN_SIMPLE,
/* 182*/ ncclDevFunc_AllReduce_Prod_f32_COLLNET_DIRECT_SIMPLE,
/* 183*/ ncclDevFunc_AllReduce_Prod_f32_RING_LL,
/* 184*/ ncclDevFunc_AllReduce_Prod_f32_RING_LL128,
/* 185*/ ncclDevFunc_AllReduce_Prod_f32_RING_SIMPLE,
/* 186*/ ncclDevFunc_AllReduce_Prod_f32_TREE_LL,
/* 187*/ ncclDevFunc_AllReduce_Prod_f32_TREE_LL128,
/* 188*/ ncclDevFunc_AllReduce_Prod_f32_TREE_SIMPLE,
/* 189*/ ncclDevFunc_AllReduce_Prod_f64_COLLNET_CHAIN_SIMPLE,
/* 190*/ ncclDevFunc_AllReduce_Prod_f64_COLLNET_DIRECT_SIMPLE,
/* 191*/ ncclDevFunc_AllReduce_Prod_f64_RING_LL,
/* 192*/ ncclDevFunc_AllReduce_Prod_f64_RING_LL128,
/* 193*/ ncclDevFunc_AllReduce_Prod_f64_RING_SIMPLE,
/* 194*/ ncclDevFunc_AllReduce_Prod_f64_TREE_LL,
/* 195*/ ncclDevFunc_AllReduce_Prod_f64_TREE_LL128,
/* 196*/ ncclDevFunc_AllReduce_Prod_f64_TREE_SIMPLE,
#if CUDART_VERSION >= 11080 && __CUDA_ARCH__ >= 900
/* 197*/ ncclDevFunc_AllReduce_Prod_f8e4m3_COLLNET_CHAIN_SIMPLE,
#else
/* 197*/ nullptr,
#endif
#if CUDART_VERSION >= 11080 && __CUDA_ARCH__ >= 900
/* 198*/ ncclDevFunc_AllReduce_Prod_f8e4m3_COLLNET_DIRECT_SIMPLE,
#else
/* 198*/ nullptr,
#endif
#if CUDART_VERSION >= 11080 && __CUDA_ARCH__ >= 900
/* 199*/ ncclDevFunc_AllReduce_Prod_f8e4m3_RING_LL,
#else
/* 199*/ nullptr,
#endif
#if CUDART_VERSION >= 11080 && __CUDA_ARCH__ >= 900
/* 200*/ ncclDevFunc_AllReduce_Prod_f8e4m3_RING_LL128,
#else
/* 200*/ nullptr,
#endif
#if CUDART_VERSION >= 11080 && __CUDA_ARCH__ >= 900
/* 201*/ ncclDevFunc_AllReduce_Prod_f8e4m3_RING_SIMPLE,
#else
/* 201*/ nullptr,
#endif
#if CUDART_VERSION >= 11080 && __CUDA_ARCH__ >= 900
/* 202*/ ncclDevFunc_AllReduce_Prod_f8e4m3_TREE_LL,
#else
/* 202*/ nullptr,
#endif
#if CUDART_VERSION >= 11080 && __CUDA_ARCH__ >= 900
/* 203*/ ncclDevFunc_AllReduce_Prod_f8e4m3_TREE_LL128,
#else
/* 203*/ nullptr,
#endif
#if CUDART_VERSION >= 11080 && __CUDA_ARCH__ >= 900
/* 204*/ ncclDevFunc_AllReduce_Prod_f8e4m3_TREE_SIMPLE,
#else
/* 204*/ nullptr,
#endif
#if CUDART_VERSION >= 11080 && __CUDA_ARCH__ >= 900
/* 205*/ ncclDevFunc_AllReduce_Prod_f8e5m2_COLLNET_CHAIN_SIMPLE,
#else
/* 205*/ nullptr,
#endif
#if CUDART_VERSION >= 11080 && __CUDA_ARCH__ >= 900
/* 206*/ ncclDevFunc_AllReduce_Prod_f8e5m2_COLLNET_DIRECT_SIMPLE,
#else
/* 206*/ nullptr,
#endif
#if CUDART_VERSION >= 11080 && __CUDA_ARCH__ >= 900
/* 207*/ ncclDevFunc_AllReduce_Prod_f8e5m2_RING_LL,
#else
/* 207*/ nullptr,
#endif
#if CUDART_VERSION >= 11080 && __CUDA_ARCH__ >= 900
/* 208*/ ncclDevFunc_AllReduce_Prod_f8e5m2_RING_LL128,
#else
/* 208*/ nullptr,
#endif
#if CUDART_VERSION >= 11080 && __CUDA_ARCH__ >= 900
/* 209*/ ncclDevFunc_AllReduce_Prod_f8e5m2_RING_SIMPLE,
#else
/* 209*/ nullptr,
#endif
#if CUDART_VERSION >= 11080 && __CUDA_ARCH__ >= 900
/* 210*/ ncclDevFunc_AllReduce_Prod_f8e5m2_TREE_LL,
#else
/* 210*/ nullptr,
#endif
#if CUDART_VERSION >= 11080 && __CUDA_ARCH__ >= 900
/* 211*/ ncclDevFunc_AllReduce_Prod_f8e5m2_TREE_LL128,
#else
/* 211*/ nullptr,
#endif
#if CUDART_VERSION >= 11080 && __CUDA_ARCH__ >= 900
/* 212*/ ncclDevFunc_AllReduce_Prod_f8e5m2_TREE_SIMPLE,
#else
/* 212*/ nullptr,
#endif
/* 213*/ ncclDevFunc_AllReduce_Prod_u32_COLLNET_CHAIN_SIMPLE,
/* 214*/ ncclDevFunc_AllReduce_Prod_u32_COLLNET_DIRECT_SIMPLE,
/* 215*/ ncclDevFunc_AllReduce_Prod_u32_RING_LL,
/* 216*/ ncclDevFunc_AllReduce_Prod_u32_RING_LL128,
/* 217*/ ncclDevFunc_AllReduce_Prod_u32_RING_SIMPLE,
/* 218*/ ncclDevFunc_AllReduce_Prod_u32_TREE_LL,
/* 219*/ ncclDevFunc_AllReduce_Prod_u32_TREE_LL128,
/* 220*/ ncclDevFunc_AllReduce_Prod_u32_TREE_SIMPLE,
/* 221*/ ncclDevFunc_AllReduce_Prod_u64_COLLNET_CHAIN_SIMPLE,
/* 222*/ ncclDevFunc_AllReduce_Prod_u64_COLLNET_DIRECT_SIMPLE,
/* 223*/ ncclDevFunc_AllReduce_Prod_u64_RING_LL,
/* 224*/ ncclDevFunc_AllReduce_Prod_u64_RING_LL128,
/* 225*/ ncclDevFunc_AllReduce_Prod_u64_RING_SIMPLE,
/* 226*/ ncclDevFunc_AllReduce_Prod_u64_TREE_LL,
/* 227*/ ncclDevFunc_AllReduce_Prod_u64_TREE_LL128,
/* 228*/ ncclDevFunc_AllReduce_Prod_u64_TREE_SIMPLE,
/* 229*/ ncclDevFunc_AllReduce_Prod_u8_COLLNET_CHAIN_SIMPLE,
/* 230*/ ncclDevFunc_AllReduce_Prod_u8_COLLNET_DIRECT_SIMPLE,
/* 231*/ ncclDevFunc_AllReduce_Prod_u8_RING_LL,
/* 232*/ ncclDevFunc_AllReduce_Prod_u8_RING_LL128,
/* 233*/ ncclDevFunc_AllReduce_Prod_u8_RING_SIMPLE,
/* 234*/ ncclDevFunc_AllReduce_Prod_u8_TREE_LL,
/* 235*/ ncclDevFunc_AllReduce_Prod_u8_TREE_LL128,
/* 236*/ ncclDevFunc_AllReduce_Prod_u8_TREE_SIMPLE,
#if CUDART_VERSION >= 11000 && __CUDA_ARCH__ >= 0
/* 237*/ ncclDevFunc_AllReduce_Sum_bf16_COLLNET_CHAIN_SIMPLE,
#else
/* 237*/ nullptr,
#endif
#if CUDART_VERSION >= 11000 && __CUDA_ARCH__ >= 0
/* 238*/ ncclDevFunc_AllReduce_Sum_bf16_COLLNET_DIRECT_SIMPLE,
#else
/* 238*/ nullptr,
#endif
#if CUDART_VERSION >= 12010 && __CUDA_ARCH__ >= 900
/* 239*/ ncclDevFunc_AllReduce_Sum_bf16_NVLS_SIMPLE,
#else
/* 239*/ nullptr,
#endif
#if CUDART_VERSION >= 12010 && __CUDA_ARCH__ >= 900
/* 240*/ ncclDevFunc_AllReduce_Sum_bf16_NVLS_TREE_SIMPLE,
#else
/* 240*/ nullptr,
#endif
#if CUDART_VERSION >= 11000 && __CUDA_ARCH__ >= 0
/* 241*/ ncclDevFunc_AllReduce_Sum_bf16_RING_LL,
#else
/* 241*/ nullptr,
#endif
#if CUDART_VERSION >= 11000 && __CUDA_ARCH__ >= 0
/* 242*/ ncclDevFunc_AllReduce_Sum_bf16_RING_LL128,
#else
/* 242*/ nullptr,
#endif
#if CUDART_VERSION >= 11000 && __CUDA_ARCH__ >= 0
/* 243*/ ncclDevFunc_AllReduce_Sum_bf16_RING_SIMPLE,
#else
/* 243*/ nullptr,
#endif
#if CUDART_VERSION >= 11000 && __CUDA_ARCH__ >= 0
/* 244*/ ncclDevFunc_AllReduce_Sum_bf16_TREE_LL,
#else
/* 244*/ nullptr,
#endif
#if CUDART_VERSION >= 11000 && __CUDA_ARCH__ >= 0
/* 245*/ ncclDevFunc_AllReduce_Sum_bf16_TREE_LL128,
#else
/* 245*/ nullptr,
#endif
#if CUDART_VERSION >= 11000 && __CUDA_ARCH__ >= 0
/* 246*/ ncclDevFunc_AllReduce_Sum_bf16_TREE_SIMPLE,
#else
/* 246*/ nullptr,
#endif
/* 247*/ ncclDevFunc_AllReduce_Sum_f16_COLLNET_CHAIN_SIMPLE,
/* 248*/ ncclDevFunc_AllReduce_Sum_f16_COLLNET_DIRECT_SIMPLE,
#if CUDART_VERSION >= 12010 && __CUDA_ARCH__ >= 900
/* 249*/ ncclDevFunc_AllReduce_Sum_f16_NVLS_SIMPLE,
#else
/* 249*/ nullptr,
#endif
#if CUDART_VERSION >= 12010 && __CUDA_ARCH__ >= 900
/* 250*/ ncclDevFunc_AllReduce_Sum_f16_NVLS_TREE_SIMPLE,
#else
/* 250*/ nullptr,
#endif
/* 251*/ ncclDevFunc_AllReduce_Sum_f16_RING_LL,
/* 252*/ ncclDevFunc_AllReduce_Sum_f16_RING_LL128,
/* 253*/ ncclDevFunc_AllReduce_Sum_f16_RING_SIMPLE,
/* 254*/ ncclDevFunc_AllReduce_Sum_f16_TREE_LL,
/* 255*/ ncclDevFunc_AllReduce_Sum_f16_TREE_LL128,
/* 256*/ ncclDevFunc_AllReduce_Sum_f16_TREE_SIMPLE,
/* 257*/ ncclDevFunc_AllReduce_Sum_f32_COLLNET_CHAIN_SIMPLE,
/* 258*/ ncclDevFunc_AllReduce_Sum_f32_COLLNET_DIRECT_SIMPLE,
#if CUDART_VERSION >= 12010 && __CUDA_ARCH__ >= 900
/* 259*/ ncclDevFunc_AllReduce_Sum_f32_NVLS_SIMPLE,
#else
/* 259*/ nullptr,
#endif
#if CUDART_VERSION >= 12010 && __CUDA_ARCH__ >= 900
/* 260*/ ncclDevFunc_AllReduce_Sum_f32_NVLS_TREE_SIMPLE,
#else
/* 260*/ nullptr,
#endif
/* 261*/ ncclDevFunc_AllReduce_Sum_f32_RING_LL,
/* 262*/ ncclDevFunc_AllReduce_Sum_f32_RING_LL128,
/* 263*/ ncclDevFunc_AllReduce_Sum_f32_RING_SIMPLE,
/* 264*/ ncclDevFunc_AllReduce_Sum_f32_TREE_LL,
/* 265*/ ncclDevFunc_AllReduce_Sum_f32_TREE_LL128,
/* 266*/ ncclDevFunc_AllReduce_Sum_f32_TREE_SIMPLE,
/* 267*/ ncclDevFunc_AllReduce_Sum_f64_COLLNET_CHAIN_SIMPLE,
/* 268*/ ncclDevFunc_AllReduce_Sum_f64_COLLNET_DIRECT_SIMPLE,
#if CUDART_VERSION >= 12010 && __CUDA_ARCH__ >= 900
/* 269*/ ncclDevFunc_AllReduce_Sum_f64_NVLS_SIMPLE,
#else
/* 269*/ nullptr,
#endif
#if CUDART_VERSION >= 12010 && __CUDA_ARCH__ >= 900
/* 270*/ ncclDevFunc_AllReduce_Sum_f64_NVLS_TREE_SIMPLE,
#else
/* 270*/ nullptr,
#endif
/* 271*/ ncclDevFunc_AllReduce_Sum_f64_RING_LL,
/* 272*/ ncclDevFunc_AllReduce_Sum_f64_RING_LL128,
/* 273*/ ncclDevFunc_AllReduce_Sum_f64_RING_SIMPLE,
/* 274*/ ncclDevFunc_AllReduce_Sum_f64_TREE_LL,
/* 275*/ ncclDevFunc_AllReduce_Sum_f64_TREE_LL128,
/* 276*/ ncclDevFunc_AllReduce_Sum_f64_TREE_SIMPLE,
#if CUDART_VERSION >= 11080 && __CUDA_ARCH__ >= 900
/* 277*/ ncclDevFunc_AllReduce_Sum_f8e4m3_COLLNET_CHAIN_SIMPLE,
#else
/* 277*/ nullptr,
#endif
#if CUDART_VERSION >= 11080 && __CUDA_ARCH__ >= 900
/* 278*/ ncclDevFunc_AllReduce_Sum_f8e4m3_COLLNET_DIRECT_SIMPLE,
#else
/* 278*/ nullptr,
#endif
#if CUDART_VERSION >= 11080 && __CUDA_ARCH__ >= 900
/* 279*/ ncclDevFunc_AllReduce_Sum_f8e4m3_RING_LL,
#else
/* 279*/ nullptr,
#endif
#if CUDART_VERSION >= 11080 && __CUDA_ARCH__ >= 900
/* 280*/ ncclDevFunc_AllReduce_Sum_f8e4m3_RING_LL128,
#else
/* 280*/ nullptr,
#endif
#if CUDART_VERSION >= 11080 && __CUDA_ARCH__ >= 900
/* 281*/ ncclDevFunc_AllReduce_Sum_f8e4m3_RING_SIMPLE,
#else
/* 281*/ nullptr,
#endif
#if CUDART_VERSION >= 11080 && __CUDA_ARCH__ >= 900
/* 282*/ ncclDevFunc_AllReduce_Sum_f8e4m3_TREE_LL,
#else
/* 282*/ nullptr,
#endif
#if CUDART_VERSION >= 11080 && __CUDA_ARCH__ >= 900
/* 283*/ ncclDevFunc_AllReduce_Sum_f8e4m3_TREE_LL128,
#else
/* 283*/ nullptr,
#endif
#if CUDART_VERSION >= 11080 && __CUDA_ARCH__ >= 900
/* 284*/ ncclDevFunc_AllReduce_Sum_f8e4m3_TREE_SIMPLE,
#else
/* 284*/ nullptr,
#endif
#if CUDART_VERSION >= 11080 && __CUDA_ARCH__ >= 900
/* 285*/ ncclDevFunc_AllReduce_Sum_f8e5m2_COLLNET_CHAIN_SIMPLE,
#else
/* 285*/ nullptr,
#endif
#if CUDART_VERSION >= 11080 && __CUDA_ARCH__ >= 900
/* 286*/ ncclDevFunc_AllReduce_Sum_f8e5m2_COLLNET_DIRECT_SIMPLE,
#else
/* 286*/ nullptr,
#endif
#if CUDART_VERSION >= 11080 && __CUDA_ARCH__ >= 900
/* 287*/ ncclDevFunc_AllReduce_Sum_f8e5m2_RING_LL,
#else
/* 287*/ nullptr,
#endif
#if CUDART_VERSION >= 11080 && __CUDA_ARCH__ >= 900
/* 288*/ ncclDevFunc_AllReduce_Sum_f8e5m2_RING_LL128,
#else
/* 288*/ nullptr,
#endif
#if CUDART_VERSION >= 11080 && __CUDA_ARCH__ >= 900
/* 289*/ ncclDevFunc_AllReduce_Sum_f8e5m2_RING_SIMPLE,
#else
/* 289*/ nullptr,
#endif
#if CUDART_VERSION >= 11080 && __CUDA_ARCH__ >= 900
/* 290*/ ncclDevFunc_AllReduce_Sum_f8e5m2_TREE_LL,
#else
/* 290*/ nullptr,
#endif
#if CUDART_VERSION >= 11080 && __CUDA_ARCH__ >= 900
/* 291*/ ncclDevFunc_AllReduce_Sum_f8e5m2_TREE_LL128,
#else
/* 291*/ nullptr,
#endif
#if CUDART_VERSION >= 11080 && __CUDA_ARCH__ >= 900
/* 292*/ ncclDevFunc_AllReduce_Sum_f8e5m2_TREE_SIMPLE,
#else
/* 292*/ nullptr,
#endif
/* 293*/ ncclDevFunc_AllReduce_Sum_u32_COLLNET_CHAIN_SIMPLE,
/* 294*/ ncclDevFunc_AllReduce_Sum_u32_COLLNET_DIRECT_SIMPLE,
#if CUDART_VERSION >= 12010 && __CUDA_ARCH__ >= 900
/* 295*/ ncclDevFunc_AllReduce_Sum_u32_NVLS_SIMPLE,
#else
/* 295*/ nullptr,
#endif
#if CUDART_VERSION >= 12010 && __CUDA_ARCH__ >= 900
/* 296*/ ncclDevFunc_AllReduce_Sum_u32_NVLS_TREE_SIMPLE,
#else
/* 296*/ nullptr,
#endif
/* 297*/ ncclDevFunc_AllReduce_Sum_u32_RING_LL,
/* 298*/ ncclDevFunc_AllReduce_Sum_u32_RING_LL128,
/* 299*/ ncclDevFunc_AllReduce_Sum_u32_RING_SIMPLE,
/* 300*/ ncclDevFunc_AllReduce_Sum_u32_TREE_LL,
/* 301*/ ncclDevFunc_AllReduce_Sum_u32_TREE_LL128,
/* 302*/ ncclDevFunc_AllReduce_Sum_u32_TREE_SIMPLE,
/* 303*/ ncclDevFunc_AllReduce_Sum_u64_COLLNET_CHAIN_SIMPLE,
/* 304*/ ncclDevFunc_AllReduce_Sum_u64_COLLNET_DIRECT_SIMPLE,
#if CUDART_VERSION >= 12010 && __CUDA_ARCH__ >= 900
/* 305*/ ncclDevFunc_AllReduce_Sum_u64_NVLS_SIMPLE,
#else
/* 305*/ nullptr,
#endif
#if CUDART_VERSION >= 12010 && __CUDA_ARCH__ >= 900
/* 306*/ ncclDevFunc_AllReduce_Sum_u64_NVLS_TREE_SIMPLE,
#else
/* 306*/ nullptr,
#endif
/* 307*/ ncclDevFunc_AllReduce_Sum_u64_RING_LL,
/* 308*/ ncclDevFunc_AllReduce_Sum_u64_RING_LL128,
/* 309*/ ncclDevFunc_AllReduce_Sum_u64_RING_SIMPLE,
/* 310*/ ncclDevFunc_AllReduce_Sum_u64_TREE_LL,
/* 311*/ ncclDevFunc_AllReduce_Sum_u64_TREE_LL128,
/* 312*/ ncclDevFunc_AllReduce_Sum_u64_TREE_SIMPLE,
/* 313*/ ncclDevFunc_AllReduce_Sum_u8_COLLNET_CHAIN_SIMPLE,
/* 314*/ ncclDevFunc_AllReduce_Sum_u8_COLLNET_DIRECT_SIMPLE,
/* 315*/ ncclDevFunc_AllReduce_Sum_u8_RING_LL,
/* 316*/ ncclDevFunc_AllReduce_Sum_u8_RING_LL128,
/* 317*/ ncclDevFunc_AllReduce_Sum_u8_RING_SIMPLE,
/* 318*/ ncclDevFunc_AllReduce_Sum_u8_TREE_LL,
/* 319*/ ncclDevFunc_AllReduce_Sum_u8_TREE_LL128,
/* 320*/ ncclDevFunc_AllReduce_Sum_u8_TREE_SIMPLE,
/* 321*/ ncclDevFunc_AllReduce_SumPostDiv_u32_COLLNET_CHAIN_SIMPLE,
/* 322*/ ncclDevFunc_AllReduce_SumPostDiv_u32_COLLNET_DIRECT_SIMPLE,
/* 323*/ ncclDevFunc_AllReduce_SumPostDiv_u32_RING_LL,
/* 324*/ ncclDevFunc_AllReduce_SumPostDiv_u32_RING_LL128,
/* 325*/ ncclDevFunc_AllReduce_SumPostDiv_u32_RING_SIMPLE,
/* 326*/ ncclDevFunc_AllReduce_SumPostDiv_u32_TREE_LL,
/* 327*/ ncclDevFunc_AllReduce_SumPostDiv_u32_TREE_LL128,
/* 328*/ ncclDevFunc_AllReduce_SumPostDiv_u32_TREE_SIMPLE,
/* 329*/ ncclDevFunc_AllReduce_SumPostDiv_u64_COLLNET_CHAIN_SIMPLE,
/* 330*/ ncclDevFunc_AllReduce_SumPostDiv_u64_COLLNET_DIRECT_SIMPLE,
/* 331*/ ncclDevFunc_AllReduce_SumPostDiv_u64_RING_LL,
/* 332*/ ncclDevFunc_AllReduce_SumPostDiv_u64_RING_LL128,
/* 333*/ ncclDevFunc_AllReduce_SumPostDiv_u64_RING_SIMPLE,
/* 334*/ ncclDevFunc_AllReduce_SumPostDiv_u64_TREE_LL,
/* 335*/ ncclDevFunc_AllReduce_SumPostDiv_u64_TREE_LL128,
/* 336*/ ncclDevFunc_AllReduce_SumPostDiv_u64_TREE_SIMPLE,
/* 337*/ ncclDevFunc_AllReduce_SumPostDiv_u8_COLLNET_CHAIN_SIMPLE,
/* 338*/ ncclDevFunc_AllReduce_SumPostDiv_u8_COLLNET_DIRECT_SIMPLE,
/* 339*/ ncclDevFunc_AllReduce_SumPostDiv_u8_RING_LL,
/* 340*/ ncclDevFunc_AllReduce_SumPostDiv_u8_RING_LL128,
/* 341*/ ncclDevFunc_AllReduce_SumPostDiv_u8_RING_SIMPLE,
/* 342*/ ncclDevFunc_AllReduce_SumPostDiv_u8_TREE_LL,
/* 343*/ ncclDevFunc_AllReduce_SumPostDiv_u8_TREE_LL128,
/* 344*/ ncclDevFunc_AllReduce_SumPostDiv_u8_TREE_SIMPLE,
/* 345*/ ncclDevFunc_Broadcast_RING_LL,
/* 346*/ ncclDevFunc_Broadcast_RING_LL128,
/* 347*/ ncclDevFunc_Broadcast_RING_SIMPLE,
#if CUDART_VERSION >= 11000 && __CUDA_ARCH__ >= 0
/* 348*/ ncclDevFunc_Reduce_MinMax_bf16_RING_LL,
#else
/* 348*/ nullptr,
#endif
#if CUDART_VERSION >= 11000 && __CUDA_ARCH__ >= 0
/* 349*/ ncclDevFunc_Reduce_MinMax_bf16_RING_LL128,
#else
/* 349*/ nullptr,
#endif
#if CUDART_VERSION >= 11000 && __CUDA_ARCH__ >= 0
/* 350*/ ncclDevFunc_Reduce_MinMax_bf16_RING_SIMPLE,
#else
/* 350*/ nullptr,
#endif
/* 351*/ ncclDevFunc_Reduce_MinMax_f16_RING_LL,
/* 352*/ ncclDevFunc_Reduce_MinMax_f16_RING_LL128,
/* 353*/ ncclDevFunc_Reduce_MinMax_f16_RING_SIMPLE,
/* 354*/ ncclDevFunc_Reduce_MinMax_f32_RING_LL,
/* 355*/ ncclDevFunc_Reduce_MinMax_f32_RING_LL128,
/* 356*/ ncclDevFunc_Reduce_MinMax_f32_RING_SIMPLE,
/* 357*/ ncclDevFunc_Reduce_MinMax_f64_RING_LL,
/* 358*/ ncclDevFunc_Reduce_MinMax_f64_RING_LL128,
/* 359*/ ncclDevFunc_Reduce_MinMax_f64_RING_SIMPLE,
#if CUDART_VERSION >= 11080 && __CUDA_ARCH__ >= 900
/* 360*/ ncclDevFunc_Reduce_MinMax_f8e4m3_RING_LL,
#else
/* 360*/ nullptr,
#endif
#if CUDART_VERSION >= 11080 && __CUDA_ARCH__ >= 900
/* 361*/ ncclDevFunc_Reduce_MinMax_f8e4m3_RING_LL128,
#else
/* 361*/ nullptr,
#endif
#if CUDART_VERSION >= 11080 && __CUDA_ARCH__ >= 900
/* 362*/ ncclDevFunc_Reduce_MinMax_f8e4m3_RING_SIMPLE,
#else
/* 362*/ nullptr,
#endif
#if CUDART_VERSION >= 11080 && __CUDA_ARCH__ >= 900
/* 363*/ ncclDevFunc_Reduce_MinMax_f8e5m2_RING_LL,
#else
/* 363*/ nullptr,
#endif
#if CUDART_VERSION >= 11080 && __CUDA_ARCH__ >= 900
/* 364*/ ncclDevFunc_Reduce_MinMax_f8e5m2_RING_LL128,
#else
/* 364*/ nullptr,
#endif
#if CUDART_VERSION >= 11080 && __CUDA_ARCH__ >= 900
/* 365*/ ncclDevFunc_Reduce_MinMax_f8e5m2_RING_SIMPLE,
#else
/* 365*/ nullptr,
#endif
/* 366*/ ncclDevFunc_Reduce_MinMax_u32_RING_LL,
/* 367*/ ncclDevFunc_Reduce_MinMax_u32_RING_LL128,
/* 368*/ ncclDevFunc_Reduce_MinMax_u32_RING_SIMPLE,
/* 369*/ ncclDevFunc_Reduce_MinMax_u64_RING_LL,
/* 370*/ ncclDevFunc_Reduce_MinMax_u64_RING_LL128,
/* 371*/ ncclDevFunc_Reduce_MinMax_u64_RING_SIMPLE,
/* 372*/ ncclDevFunc_Reduce_MinMax_u8_RING_LL,
/* 373*/ ncclDevFunc_Reduce_MinMax_u8_RING_LL128,
/* 374*/ ncclDevFunc_Reduce_MinMax_u8_RING_SIMPLE,
#if CUDART_VERSION >= 11000 && __CUDA_ARCH__ >= 0
/* 375*/ ncclDevFunc_Reduce_PreMulSum_bf16_RING_LL,
#else
/* 375*/ nullptr,
#endif
#if CUDART_VERSION >= 11000 && __CUDA_ARCH__ >= 0
/* 376*/ ncclDevFunc_Reduce_PreMulSum_bf16_RING_LL128,
#else
/* 376*/ nullptr,
#endif
#if CUDART_VERSION >= 11000 && __CUDA_ARCH__ >= 0
/* 377*/ ncclDevFunc_Reduce_PreMulSum_bf16_RING_SIMPLE,
#else
/* 377*/ nullptr,
#endif
/* 378*/ ncclDevFunc_Reduce_PreMulSum_f16_RING_LL,
/* 379*/ ncclDevFunc_Reduce_PreMulSum_f16_RING_LL128,
/* 380*/ ncclDevFunc_Reduce_PreMulSum_f16_RING_SIMPLE,
/* 381*/ ncclDevFunc_Reduce_PreMulSum_f32_RING_LL,
/* 382*/ ncclDevFunc_Reduce_PreMulSum_f32_RING_LL128,
/* 383*/ ncclDevFunc_Reduce_PreMulSum_f32_RING_SIMPLE,
/* 384*/ ncclDevFunc_Reduce_PreMulSum_f64_RING_LL,
/* 385*/ ncclDevFunc_Reduce_PreMulSum_f64_RING_LL128,
/* 386*/ ncclDevFunc_Reduce_PreMulSum_f64_RING_SIMPLE,
#if CUDART_VERSION >= 11080 && __CUDA_ARCH__ >= 900
/* 387*/ ncclDevFunc_Reduce_PreMulSum_f8e4m3_RING_LL,
#else
/* 387*/ nullptr,
#endif
#if CUDART_VERSION >= 11080 && __CUDA_ARCH__ >= 900
/* 388*/ ncclDevFunc_Reduce_PreMulSum_f8e4m3_RING_LL128,
#else
/* 388*/ nullptr,
#endif
#if CUDART_VERSION >= 11080 && __CUDA_ARCH__ >= 900
/* 389*/ ncclDevFunc_Reduce_PreMulSum_f8e4m3_RING_SIMPLE,
#else
/* 389*/ nullptr,
#endif
#if CUDART_VERSION >= 11080 && __CUDA_ARCH__ >= 900
/* 390*/ ncclDevFunc_Reduce_PreMulSum_f8e5m2_RING_LL,
#else
/* 390*/ nullptr,
#endif
#if CUDART_VERSION >= 11080 && __CUDA_ARCH__ >= 900
/* 391*/ ncclDevFunc_Reduce_PreMulSum_f8e5m2_RING_LL128,
#else
/* 391*/ nullptr,
#endif
#if CUDART_VERSION >= 11080 && __CUDA_ARCH__ >= 900
/* 392*/ ncclDevFunc_Reduce_PreMulSum_f8e5m2_RING_SIMPLE,
#else
/* 392*/ nullptr,
#endif
/* 393*/ ncclDevFunc_Reduce_PreMulSum_u32_RING_LL,
/* 394*/ ncclDevFunc_Reduce_PreMulSum_u32_RING_LL128,
/* 395*/ ncclDevFunc_Reduce_PreMulSum_u32_RING_SIMPLE,
/* 396*/ ncclDevFunc_Reduce_PreMulSum_u64_RING_LL,
/* 397*/ ncclDevFunc_Reduce_PreMulSum_u64_RING_LL128,
/* 398*/ ncclDevFunc_Reduce_PreMulSum_u64_RING_SIMPLE,
/* 399*/ ncclDevFunc_Reduce_PreMulSum_u8_RING_LL,
/* 400*/ ncclDevFunc_Reduce_PreMulSum_u8_RING_LL128,
/* 401*/ ncclDevFunc_Reduce_PreMulSum_u8_RING_SIMPLE,
#if CUDART_VERSION >= 11000 && __CUDA_ARCH__ >= 0
/* 402*/ ncclDevFunc_Reduce_Prod_bf16_RING_LL,
#else
/* 402*/ nullptr,
#endif
#if CUDART_VERSION >= 11000 && __CUDA_ARCH__ >= 0
/* 403*/ ncclDevFunc_Reduce_Prod_bf16_RING_LL128,
#else
/* 403*/ nullptr,
#endif
#if CUDART_VERSION >= 11000 && __CUDA_ARCH__ >= 0
/* 404*/ ncclDevFunc_Reduce_Prod_bf16_RING_SIMPLE,
#else
/* 404*/ nullptr,
#endif
/* 405*/ ncclDevFunc_Reduce_Prod_f16_RING_LL,
/* 406*/ ncclDevFunc_Reduce_Prod_f16_RING_LL128,
/* 407*/ ncclDevFunc_Reduce_Prod_f16_RING_SIMPLE,
/* 408*/ ncclDevFunc_Reduce_Prod_f32_RING_LL,
/* 409*/ ncclDevFunc_Reduce_Prod_f32_RING_LL128,
/* 410*/ ncclDevFunc_Reduce_Prod_f32_RING_SIMPLE,
/* 411*/ ncclDevFunc_Reduce_Prod_f64_RING_LL,
/* 412*/ ncclDevFunc_Reduce_Prod_f64_RING_LL128,
/* 413*/ ncclDevFunc_Reduce_Prod_f64_RING_SIMPLE,
#if CUDART_VERSION >= 11080 && __CUDA_ARCH__ >= 900
/* 414*/ ncclDevFunc_Reduce_Prod_f8e4m3_RING_LL,
#else
/* 414*/ nullptr,
#endif
#if CUDART_VERSION >= 11080 && __CUDA_ARCH__ >= 900
/* 415*/ ncclDevFunc_Reduce_Prod_f8e4m3_RING_LL128,
#else
/* 415*/ nullptr,
#endif
#if CUDART_VERSION >= 11080 && __CUDA_ARCH__ >= 900
/* 416*/ ncclDevFunc_Reduce_Prod_f8e4m3_RING_SIMPLE,
#else
/* 416*/ nullptr,
#endif
#if CUDART_VERSION >= 11080 && __CUDA_ARCH__ >= 900
/* 417*/ ncclDevFunc_Reduce_Prod_f8e5m2_RING_LL,
#else
/* 417*/ nullptr,
#endif
#if CUDART_VERSION >= 11080 && __CUDA_ARCH__ >= 900
/* 418*/ ncclDevFunc_Reduce_Prod_f8e5m2_RING_LL128,
#else
/* 418*/ nullptr,
#endif
#if CUDART_VERSION >= 11080 && __CUDA_ARCH__ >= 900
/* 419*/ ncclDevFunc_Reduce_Prod_f8e5m2_RING_SIMPLE,
#else
/* 419*/ nullptr,
#endif
/* 420*/ ncclDevFunc_Reduce_Prod_u32_RING_LL,
/* 421*/ ncclDevFunc_Reduce_Prod_u32_RING_LL128,
/* 422*/ ncclDevFunc_Reduce_Prod_u32_RING_SIMPLE,
/* 423*/ ncclDevFunc_Reduce_Prod_u64_RING_LL,
/* 424*/ ncclDevFunc_Reduce_Prod_u64_RING_LL128,
/* 425*/ ncclDevFunc_Reduce_Prod_u64_RING_SIMPLE,
/* 426*/ ncclDevFunc_Reduce_Prod_u8_RING_LL,
/* 427*/ ncclDevFunc_Reduce_Prod_u8_RING_LL128,
/* 428*/ ncclDevFunc_Reduce_Prod_u8_RING_SIMPLE,
#if CUDART_VERSION >= 11000 && __CUDA_ARCH__ >= 0
/* 429*/ ncclDevFunc_Reduce_Sum_bf16_RING_LL,
#else
/* 429*/ nullptr,
#endif
#if CUDART_VERSION >= 11000 && __CUDA_ARCH__ >= 0
/* 430*/ ncclDevFunc_Reduce_Sum_bf16_RING_LL128,
#else
/* 430*/ nullptr,
#endif
#if CUDART_VERSION >= 11000 && __CUDA_ARCH__ >= 0
/* 431*/ ncclDevFunc_Reduce_Sum_bf16_RING_SIMPLE,
#else
/* 431*/ nullptr,
#endif
/* 432*/ ncclDevFunc_Reduce_Sum_f16_RING_LL,
/* 433*/ ncclDevFunc_Reduce_Sum_f16_RING_LL128,
/* 434*/ ncclDevFunc_Reduce_Sum_f16_RING_SIMPLE,
/* 435*/ ncclDevFunc_Reduce_Sum_f32_RING_LL,
/* 436*/ ncclDevFunc_Reduce_Sum_f32_RING_LL128,
/* 437*/ ncclDevFunc_Reduce_Sum_f32_RING_SIMPLE,
/* 438*/ ncclDevFunc_Reduce_Sum_f64_RING_LL,
/* 439*/ ncclDevFunc_Reduce_Sum_f64_RING_LL128,
/* 440*/ ncclDevFunc_Reduce_Sum_f64_RING_SIMPLE,
#if CUDART_VERSION >= 11080 && __CUDA_ARCH__ >= 900
/* 441*/ ncclDevFunc_Reduce_Sum_f8e4m3_RING_LL,
#else
/* 441*/ nullptr,
#endif
#if CUDART_VERSION >= 11080 && __CUDA_ARCH__ >= 900
/* 442*/ ncclDevFunc_Reduce_Sum_f8e4m3_RING_LL128,
#else
/* 442*/ nullptr,
#endif
#if CUDART_VERSION >= 11080 && __CUDA_ARCH__ >= 900
/* 443*/ ncclDevFunc_Reduce_Sum_f8e4m3_RING_SIMPLE,
#else
/* 443*/ nullptr,
#endif
#if CUDART_VERSION >= 11080 && __CUDA_ARCH__ >= 900
/* 444*/ ncclDevFunc_Reduce_Sum_f8e5m2_RING_LL,
#else
/* 444*/ nullptr,
#endif
#if CUDART_VERSION >= 11080 && __CUDA_ARCH__ >= 900
/* 445*/ ncclDevFunc_Reduce_Sum_f8e5m2_RING_LL128,
#else
/* 445*/ nullptr,
#endif
#if CUDART_VERSION >= 11080 && __CUDA_ARCH__ >= 900
/* 446*/ ncclDevFunc_Reduce_Sum_f8e5m2_RING_SIMPLE,
#else
/* 446*/ nullptr,
#endif
/* 447*/ ncclDevFunc_Reduce_Sum_u32_RING_LL,
/* 448*/ ncclDevFunc_Reduce_Sum_u32_RING_LL128,
/* 449*/ ncclDevFunc_Reduce_Sum_u32_RING_SIMPLE,
/* 450*/ ncclDevFunc_Reduce_Sum_u64_RING_LL,
/* 451*/ ncclDevFunc_Reduce_Sum_u64_RING_LL128,
/* 452*/ ncclDevFunc_Reduce_Sum_u64_RING_SIMPLE,
/* 453*/ ncclDevFunc_Reduce_Sum_u8_RING_LL,
/* 454*/ ncclDevFunc_Reduce_Sum_u8_RING_LL128,
/* 455*/ ncclDevFunc_Reduce_Sum_u8_RING_SIMPLE,
/* 456*/ ncclDevFunc_Reduce_SumPostDiv_u32_RING_LL,
/* 457*/ ncclDevFunc_Reduce_SumPostDiv_u32_RING_LL128,
/* 458*/ ncclDevFunc_Reduce_SumPostDiv_u32_RING_SIMPLE,
/* 459*/ ncclDevFunc_Reduce_SumPostDiv_u64_RING_LL,
/* 460*/ ncclDevFunc_Reduce_SumPostDiv_u64_RING_LL128,
/* 461*/ ncclDevFunc_Reduce_SumPostDiv_u64_RING_SIMPLE,
/* 462*/ ncclDevFunc_Reduce_SumPostDiv_u8_RING_LL,
/* 463*/ ncclDevFunc_Reduce_SumPostDiv_u8_RING_LL128,
/* 464*/ ncclDevFunc_Reduce_SumPostDiv_u8_RING_SIMPLE,
#if CUDART_VERSION >= 11000 && __CUDA_ARCH__ >= 0
/* 465*/ ncclDevFunc_ReduceScatter_MinMax_bf16_COLLNET_DIRECT_SIMPLE,
#else
/* 465*/ nullptr,
#endif
#if CUDART_VERSION >= 12010 && __CUDA_ARCH__ >= 900
/* 466*/ ncclDevFunc_ReduceScatter_MinMax_bf16_NVLS_SIMPLE,
#else
/* 466*/ nullptr,
#endif
#if CUDART_VERSION >= 11000 && __CUDA_ARCH__ >= 0
/* 467*/ ncclDevFunc_ReduceScatter_MinMax_bf16_PAT_SIMPLE,
#else
/* 467*/ nullptr,
#endif
#if CUDART_VERSION >= 11000 && __CUDA_ARCH__ >= 0
/* 468*/ ncclDevFunc_ReduceScatter_MinMax_bf16_RING_LL,
#else
/* 468*/ nullptr,
#endif
#if CUDART_VERSION >= 11000 && __CUDA_ARCH__ >= 0
/* 469*/ ncclDevFunc_ReduceScatter_MinMax_bf16_RING_LL128,
#else
/* 469*/ nullptr,
#endif
#if CUDART_VERSION >= 11000 && __CUDA_ARCH__ >= 0
/* 470*/ ncclDevFunc_ReduceScatter_MinMax_bf16_RING_SIMPLE,
#else
/* 470*/ nullptr,
#endif
/* 471*/ ncclDevFunc_ReduceScatter_MinMax_f16_COLLNET_DIRECT_SIMPLE,
#if CUDART_VERSION >= 12010 && __CUDA_ARCH__ >= 900
/* 472*/ ncclDevFunc_ReduceScatter_MinMax_f16_NVLS_SIMPLE,
#else
/* 472*/ nullptr,
#endif
/* 473*/ ncclDevFunc_ReduceScatter_MinMax_f16_PAT_SIMPLE,
/* 474*/ ncclDevFunc_ReduceScatter_MinMax_f16_RING_LL,
/* 475*/ ncclDevFunc_ReduceScatter_MinMax_f16_RING_LL128,
/* 476*/ ncclDevFunc_ReduceScatter_MinMax_f16_RING_SIMPLE,
/* 477*/ ncclDevFunc_ReduceScatter_MinMax_f32_COLLNET_DIRECT_SIMPLE,
/* 478*/ ncclDevFunc_ReduceScatter_MinMax_f32_PAT_SIMPLE,
/* 479*/ ncclDevFunc_ReduceScatter_MinMax_f32_RING_LL,
/* 480*/ ncclDevFunc_ReduceScatter_MinMax_f32_RING_LL128,
/* 481*/ ncclDevFunc_ReduceScatter_MinMax_f32_RING_SIMPLE,
/* 482*/ ncclDevFunc_ReduceScatter_MinMax_f64_COLLNET_DIRECT_SIMPLE,
/* 483*/ ncclDevFunc_ReduceScatter_MinMax_f64_PAT_SIMPLE,
/* 484*/ ncclDevFunc_ReduceScatter_MinMax_f64_RING_LL,
/* 485*/ ncclDevFunc_ReduceScatter_MinMax_f64_RING_LL128,
/* 486*/ ncclDevFunc_ReduceScatter_MinMax_f64_RING_SIMPLE,
#if CUDART_VERSION >= 11080 && __CUDA_ARCH__ >= 900
/* 487*/ ncclDevFunc_ReduceScatter_MinMax_f8e4m3_COLLNET_DIRECT_SIMPLE,
#else
/* 487*/ nullptr,
#endif
#if CUDART_VERSION >= 11080 && __CUDA_ARCH__ >= 900
/* 488*/ ncclDevFunc_ReduceScatter_MinMax_f8e4m3_PAT_SIMPLE,
#else
/* 488*/ nullptr,
#endif
#if CUDART_VERSION >= 11080 && __CUDA_ARCH__ >= 900
/* 489*/ ncclDevFunc_ReduceScatter_MinMax_f8e4m3_RING_LL,
#else
/* 489*/ nullptr,
#endif
#if CUDART_VERSION >= 11080 && __CUDA_ARCH__ >= 900
/* 490*/ ncclDevFunc_ReduceScatter_MinMax_f8e4m3_RING_LL128,
#else
/* 490*/ nullptr,
#endif
#if CUDART_VERSION >= 11080 && __CUDA_ARCH__ >= 900
/* 491*/ ncclDevFunc_ReduceScatter_MinMax_f8e4m3_RING_SIMPLE,
#else
/* 491*/ nullptr,
#endif
#if CUDART_VERSION >= 11080 && __CUDA_ARCH__ >= 900
/* 492*/ ncclDevFunc_ReduceScatter_MinMax_f8e5m2_COLLNET_DIRECT_SIMPLE,
#else
/* 492*/ nullptr,
#endif
#if CUDART_VERSION >= 11080 && __CUDA_ARCH__ >= 900
/* 493*/ ncclDevFunc_ReduceScatter_MinMax_f8e5m2_PAT_SIMPLE,
#else
/* 493*/ nullptr,
#endif
#if CUDART_VERSION >= 11080 && __CUDA_ARCH__ >= 900
/* 494*/ ncclDevFunc_ReduceScatter_MinMax_f8e5m2_RING_LL,
#else
/* 494*/ nullptr,
#endif
#if CUDART_VERSION >= 11080 && __CUDA_ARCH__ >= 900
/* 495*/ ncclDevFunc_ReduceScatter_MinMax_f8e5m2_RING_LL128,
#else
/* 495*/ nullptr,
#endif
#if CUDART_VERSION >= 11080 && __CUDA_ARCH__ >= 900
/* 496*/ ncclDevFunc_ReduceScatter_MinMax_f8e5m2_RING_SIMPLE,
#else
/* 496*/ nullptr,
#endif
#if CUDART_VERSION >= 12010 && __CUDA_ARCH__ >= 900
/* 497*/ ncclDevFunc_ReduceScatter_MinMax_i32_NVLS_SIMPLE,
#else
/* 497*/ nullptr,
#endif
#if CUDART_VERSION >= 12010 && __CUDA_ARCH__ >= 900
/* 498*/ ncclDevFunc_ReduceScatter_MinMax_i64_NVLS_SIMPLE,
#else
/* 498*/ nullptr,
#endif
/* 499*/ ncclDevFunc_ReduceScatter_MinMax_u32_COLLNET_DIRECT_SIMPLE,
#if CUDART_VERSION >= 12010 && __CUDA_ARCH__ >= 900
/* 500*/ ncclDevFunc_ReduceScatter_MinMax_u32_NVLS_SIMPLE,
#else
/* 500*/ nullptr,
#endif
/* 501*/ ncclDevFunc_ReduceScatter_MinMax_u32_PAT_SIMPLE,
/* 502*/ ncclDevFunc_ReduceScatter_MinMax_u32_RING_LL,
/* 503*/ ncclDevFunc_ReduceScatter_MinMax_u32_RING_LL128,
/* 504*/ ncclDevFunc_ReduceScatter_MinMax_u32_RING_SIMPLE,
/* 505*/ ncclDevFunc_ReduceScatter_MinMax_u64_COLLNET_DIRECT_SIMPLE,
#if CUDART_VERSION >= 12010 && __CUDA_ARCH__ >= 900
/* 506*/ ncclDevFunc_ReduceScatter_MinMax_u64_NVLS_SIMPLE,
#else
/* 506*/ nullptr,
#endif
/* 507*/ ncclDevFunc_ReduceScatter_MinMax_u64_PAT_SIMPLE,
/* 508*/ ncclDevFunc_ReduceScatter_MinMax_u64_RING_LL,
/* 509*/ ncclDevFunc_ReduceScatter_MinMax_u64_RING_LL128,
/* 510*/ ncclDevFunc_ReduceScatter_MinMax_u64_RING_SIMPLE,
/* 511*/ ncclDevFunc_ReduceScatter_MinMax_u8_COLLNET_DIRECT_SIMPLE,
/* 512*/ ncclDevFunc_ReduceScatter_MinMax_u8_PAT_SIMPLE,
/* 513*/ ncclDevFunc_ReduceScatter_MinMax_u8_RING_LL,
/* 514*/ ncclDevFunc_ReduceScatter_MinMax_u8_RING_LL128,
/* 515*/ ncclDevFunc_ReduceScatter_MinMax_u8_RING_SIMPLE,
#if CUDART_VERSION >= 11000 && __CUDA_ARCH__ >= 0
/* 516*/ ncclDevFunc_ReduceScatter_PreMulSum_bf16_COLLNET_DIRECT_SIMPLE,
#else
/* 516*/ nullptr,
#endif
#if CUDART_VERSION >= 11000 && __CUDA_ARCH__ >= 0
/* 517*/ ncclDevFunc_ReduceScatter_PreMulSum_bf16_PAT_SIMPLE,
#else
/* 517*/ nullptr,
#endif
#if CUDART_VERSION >= 11000 && __CUDA_ARCH__ >= 0
/* 518*/ ncclDevFunc_ReduceScatter_PreMulSum_bf16_RING_LL,
#else
/* 518*/ nullptr,
#endif
#if CUDART_VERSION >= 11000 && __CUDA_ARCH__ >= 0
/* 519*/ ncclDevFunc_ReduceScatter_PreMulSum_bf16_RING_LL128,
#else
/* 519*/ nullptr,
#endif
#if CUDART_VERSION >= 11000 && __CUDA_ARCH__ >= 0
/* 520*/ ncclDevFunc_ReduceScatter_PreMulSum_bf16_RING_SIMPLE,
#else
/* 520*/ nullptr,
#endif
/* 521*/ ncclDevFunc_ReduceScatter_PreMulSum_f16_COLLNET_DIRECT_SIMPLE,
/* 522*/ ncclDevFunc_ReduceScatter_PreMulSum_f16_PAT_SIMPLE,
/* 523*/ ncclDevFunc_ReduceScatter_PreMulSum_f16_RING_LL,
/* 524*/ ncclDevFunc_ReduceScatter_PreMulSum_f16_RING_LL128,
/* 525*/ ncclDevFunc_ReduceScatter_PreMulSum_f16_RING_SIMPLE,
/* 526*/ ncclDevFunc_ReduceScatter_PreMulSum_f32_COLLNET_DIRECT_SIMPLE,
/* 527*/ ncclDevFunc_ReduceScatter_PreMulSum_f32_PAT_SIMPLE,
/* 528*/ ncclDevFunc_ReduceScatter_PreMulSum_f32_RING_LL,
/* 529*/ ncclDevFunc_ReduceScatter_PreMulSum_f32_RING_LL128,
/* 530*/ ncclDevFunc_ReduceScatter_PreMulSum_f32_RING_SIMPLE,
/* 531*/ ncclDevFunc_ReduceScatter_PreMulSum_f64_COLLNET_DIRECT_SIMPLE,
/* 532*/ ncclDevFunc_ReduceScatter_PreMulSum_f64_PAT_SIMPLE,
/* 533*/ ncclDevFunc_ReduceScatter_PreMulSum_f64_RING_LL,
/* 534*/ ncclDevFunc_ReduceScatter_PreMulSum_f64_RING_LL128,
/* 535*/ ncclDevFunc_ReduceScatter_PreMulSum_f64_RING_SIMPLE,
#if CUDART_VERSION >= 11080 && __CUDA_ARCH__ >= 900
/* 536*/ ncclDevFunc_ReduceScatter_PreMulSum_f8e4m3_COLLNET_DIRECT_SIMPLE,
#else
/* 536*/ nullptr,
#endif
#if CUDART_VERSION >= 11080 && __CUDA_ARCH__ >= 900
/* 537*/ ncclDevFunc_ReduceScatter_PreMulSum_f8e4m3_PAT_SIMPLE,
#else
/* 537*/ nullptr,
#endif
#if CUDART_VERSION >= 11080 && __CUDA_ARCH__ >= 900
/* 538*/ ncclDevFunc_ReduceScatter_PreMulSum_f8e4m3_RING_LL,
#else
/* 538*/ nullptr,
#endif
#if CUDART_VERSION >= 11080 && __CUDA_ARCH__ >= 900
/* 539*/ ncclDevFunc_ReduceScatter_PreMulSum_f8e4m3_RING_LL128,
#else
/* 539*/ nullptr,
#endif
#if CUDART_VERSION >= 11080 && __CUDA_ARCH__ >= 900
/* 540*/ ncclDevFunc_ReduceScatter_PreMulSum_f8e4m3_RING_SIMPLE,
#else
/* 540*/ nullptr,
#endif
#if CUDART_VERSION >= 11080 && __CUDA_ARCH__ >= 900
/* 541*/ ncclDevFunc_ReduceScatter_PreMulSum_f8e5m2_COLLNET_DIRECT_SIMPLE,
#else
/* 541*/ nullptr,
#endif
#if CUDART_VERSION >= 11080 && __CUDA_ARCH__ >= 900
/* 542*/ ncclDevFunc_ReduceScatter_PreMulSum_f8e5m2_PAT_SIMPLE,
#else
/* 542*/ nullptr,
#endif
#if CUDART_VERSION >= 11080 && __CUDA_ARCH__ >= 900
/* 543*/ ncclDevFunc_ReduceScatter_PreMulSum_f8e5m2_RING_LL,
#else
/* 543*/ nullptr,
#endif
#if CUDART_VERSION >= 11080 && __CUDA_ARCH__ >= 900
/* 544*/ ncclDevFunc_ReduceScatter_PreMulSum_f8e5m2_RING_LL128,
#else
/* 544*/ nullptr,
#endif
#if CUDART_VERSION >= 11080 && __CUDA_ARCH__ >= 900
/* 545*/ ncclDevFunc_ReduceScatter_PreMulSum_f8e5m2_RING_SIMPLE,
#else
/* 545*/ nullptr,
#endif
/* 546*/ ncclDevFunc_ReduceScatter_PreMulSum_u32_COLLNET_DIRECT_SIMPLE,
/* 547*/ ncclDevFunc_ReduceScatter_PreMulSum_u32_PAT_SIMPLE,
/* 548*/ ncclDevFunc_ReduceScatter_PreMulSum_u32_RING_LL,
/* 549*/ ncclDevFunc_ReduceScatter_PreMulSum_u32_RING_LL128,
/* 550*/ ncclDevFunc_ReduceScatter_PreMulSum_u32_RING_SIMPLE,
/* 551*/ ncclDevFunc_ReduceScatter_PreMulSum_u64_COLLNET_DIRECT_SIMPLE,
/* 552*/ ncclDevFunc_ReduceScatter_PreMulSum_u64_PAT_SIMPLE,
/* 553*/ ncclDevFunc_ReduceScatter_PreMulSum_u64_RING_LL,
/* 554*/ ncclDevFunc_ReduceScatter_PreMulSum_u64_RING_LL128,
/* 555*/ ncclDevFunc_ReduceScatter_PreMulSum_u64_RING_SIMPLE,
/* 556*/ ncclDevFunc_ReduceScatter_PreMulSum_u8_COLLNET_DIRECT_SIMPLE,
/* 557*/ ncclDevFunc_ReduceScatter_PreMulSum_u8_PAT_SIMPLE,
/* 558*/ ncclDevFunc_ReduceScatter_PreMulSum_u8_RING_LL,
/* 559*/ ncclDevFunc_ReduceScatter_PreMulSum_u8_RING_LL128,
/* 560*/ ncclDevFunc_ReduceScatter_PreMulSum_u8_RING_SIMPLE,
#if CUDART_VERSION >= 11000 && __CUDA_ARCH__ >= 0
/* 561*/ ncclDevFunc_ReduceScatter_Prod_bf16_COLLNET_DIRECT_SIMPLE,
#else
/* 561*/ nullptr,
#endif
#if CUDART_VERSION >= 11000 && __CUDA_ARCH__ >= 0
/* 562*/ ncclDevFunc_ReduceScatter_Prod_bf16_PAT_SIMPLE,
#else
/* 562*/ nullptr,
#endif
#if CUDART_VERSION >= 11000 && __CUDA_ARCH__ >= 0
/* 563*/ ncclDevFunc_ReduceScatter_Prod_bf16_RING_LL,
#else
/* 563*/ nullptr,
#endif
#if CUDART_VERSION >= 11000 && __CUDA_ARCH__ >= 0
/* 564*/ ncclDevFunc_ReduceScatter_Prod_bf16_RING_LL128,
#else
/* 564*/ nullptr,
#endif
#if CUDART_VERSION >= 11000 && __CUDA_ARCH__ >= 0
/* 565*/ ncclDevFunc_ReduceScatter_Prod_bf16_RING_SIMPLE,
#else
/* 565*/ nullptr,
#endif
/* 566*/ ncclDevFunc_ReduceScatter_Prod_f16_COLLNET_DIRECT_SIMPLE,
/* 567*/ ncclDevFunc_ReduceScatter_Prod_f16_PAT_SIMPLE,
/* 568*/ ncclDevFunc_ReduceScatter_Prod_f16_RING_LL,
/* 569*/ ncclDevFunc_ReduceScatter_Prod_f16_RING_LL128,
/* 570*/ ncclDevFunc_ReduceScatter_Prod_f16_RING_SIMPLE,
/* 571*/ ncclDevFunc_ReduceScatter_Prod_f32_COLLNET_DIRECT_SIMPLE,
/* 572*/ ncclDevFunc_ReduceScatter_Prod_f32_PAT_SIMPLE,
/* 573*/ ncclDevFunc_ReduceScatter_Prod_f32_RING_LL,
/* 574*/ ncclDevFunc_ReduceScatter_Prod_f32_RING_LL128,
/* 575*/ ncclDevFunc_ReduceScatter_Prod_f32_RING_SIMPLE,
/* 576*/ ncclDevFunc_ReduceScatter_Prod_f64_COLLNET_DIRECT_SIMPLE,
/* 577*/ ncclDevFunc_ReduceScatter_Prod_f64_PAT_SIMPLE,
/* 578*/ ncclDevFunc_ReduceScatter_Prod_f64_RING_LL,
/* 579*/ ncclDevFunc_ReduceScatter_Prod_f64_RING_LL128,
/* 580*/ ncclDevFunc_ReduceScatter_Prod_f64_RING_SIMPLE,
#if CUDART_VERSION >= 11080 && __CUDA_ARCH__ >= 900
/* 581*/ ncclDevFunc_ReduceScatter_Prod_f8e4m3_COLLNET_DIRECT_SIMPLE,
#else
/* 581*/ nullptr,
#endif
#if CUDART_VERSION >= 11080 && __CUDA_ARCH__ >= 900
/* 582*/ ncclDevFunc_ReduceScatter_Prod_f8e4m3_PAT_SIMPLE,
#else
/* 582*/ nullptr,
#endif
#if CUDART_VERSION >= 11080 && __CUDA_ARCH__ >= 900
/* 583*/ ncclDevFunc_ReduceScatter_Prod_f8e4m3_RING_LL,
#else
/* 583*/ nullptr,
#endif
#if CUDART_VERSION >= 11080 && __CUDA_ARCH__ >= 900
/* 584*/ ncclDevFunc_ReduceScatter_Prod_f8e4m3_RING_LL128,
#else
/* 584*/ nullptr,
#endif
#if CUDART_VERSION >= 11080 && __CUDA_ARCH__ >= 900
/* 585*/ ncclDevFunc_ReduceScatter_Prod_f8e4m3_RING_SIMPLE,
#else
/* 585*/ nullptr,
#endif
#if CUDART_VERSION >= 11080 && __CUDA_ARCH__ >= 900
/* 586*/ ncclDevFunc_ReduceScatter_Prod_f8e5m2_COLLNET_DIRECT_SIMPLE,
#else
/* 586*/ nullptr,
#endif
#if CUDART_VERSION >= 11080 && __CUDA_ARCH__ >= 900
/* 587*/ ncclDevFunc_ReduceScatter_Prod_f8e5m2_PAT_SIMPLE,
#else
/* 587*/ nullptr,
#endif
#if CUDART_VERSION >= 11080 && __CUDA_ARCH__ >= 900
/* 588*/ ncclDevFunc_ReduceScatter_Prod_f8e5m2_RING_LL,
#else
/* 588*/ nullptr,
#endif
#if CUDART_VERSION >= 11080 && __CUDA_ARCH__ >= 900
/* 589*/ ncclDevFunc_ReduceScatter_Prod_f8e5m2_RING_LL128,
#else
/* 589*/ nullptr,
#endif
#if CUDART_VERSION >= 11080 && __CUDA_ARCH__ >= 900
/* 590*/ ncclDevFunc_ReduceScatter_Prod_f8e5m2_RING_SIMPLE,
#else
/* 590*/ nullptr,
#endif
/* 591*/ ncclDevFunc_ReduceScatter_Prod_u32_COLLNET_DIRECT_SIMPLE,
/* 592*/ ncclDevFunc_ReduceScatter_Prod_u32_PAT_SIMPLE,
/* 593*/ ncclDevFunc_ReduceScatter_Prod_u32_RING_LL,
/* 594*/ ncclDevFunc_ReduceScatter_Prod_u32_RING_LL128,
/* 595*/ ncclDevFunc_ReduceScatter_Prod_u32_RING_SIMPLE,
/* 596*/ ncclDevFunc_ReduceScatter_Prod_u64_COLLNET_DIRECT_SIMPLE,
/* 597*/ ncclDevFunc_ReduceScatter_Prod_u64_PAT_SIMPLE,
/* 598*/ ncclDevFunc_ReduceScatter_Prod_u64_RING_LL,
/* 599*/ ncclDevFunc_ReduceScatter_Prod_u64_RING_LL128,
/* 600*/ ncclDevFunc_ReduceScatter_Prod_u64_RING_SIMPLE,
/* 601*/ ncclDevFunc_ReduceScatter_Prod_u8_COLLNET_DIRECT_SIMPLE,
/* 602*/ ncclDevFunc_ReduceScatter_Prod_u8_PAT_SIMPLE,
/* 603*/ ncclDevFunc_ReduceScatter_Prod_u8_RING_LL,
/* 604*/ ncclDevFunc_ReduceScatter_Prod_u8_RING_LL128,
/* 605*/ ncclDevFunc_ReduceScatter_Prod_u8_RING_SIMPLE,
#if CUDART_VERSION >= 11000 && __CUDA_ARCH__ >= 0
/* 606*/ ncclDevFunc_ReduceScatter_Sum_bf16_COLLNET_DIRECT_SIMPLE,
#else
/* 606*/ nullptr,
#endif
#if CUDART_VERSION >= 12010 && __CUDA_ARCH__ >= 900
/* 607*/ ncclDevFunc_ReduceScatter_Sum_bf16_NVLS_SIMPLE,
#else
/* 607*/ nullptr,
#endif
#if CUDART_VERSION >= 11000 && __CUDA_ARCH__ >= 0
/* 608*/ ncclDevFunc_ReduceScatter_Sum_bf16_PAT_SIMPLE,
#else
/* 608*/ nullptr,
#endif
#if CUDART_VERSION >= 11000 && __CUDA_ARCH__ >= 0
/* 609*/ ncclDevFunc_ReduceScatter_Sum_bf16_RING_LL,
#else
/* 609*/ nullptr,
#endif
#if CUDART_VERSION >= 11000 && __CUDA_ARCH__ >= 0
/* 610*/ ncclDevFunc_ReduceScatter_Sum_bf16_RING_LL128,
#else
/* 610*/ nullptr,
#endif
#if CUDART_VERSION >= 11000 && __CUDA_ARCH__ >= 0
/* 611*/ ncclDevFunc_ReduceScatter_Sum_bf16_RING_SIMPLE,
#else
/* 611*/ nullptr,
#endif
/* 612*/ ncclDevFunc_ReduceScatter_Sum_f16_COLLNET_DIRECT_SIMPLE,
#if CUDART_VERSION >= 12010 && __CUDA_ARCH__ >= 900
/* 613*/ ncclDevFunc_ReduceScatter_Sum_f16_NVLS_SIMPLE,
#else
/* 613*/ nullptr,
#endif
/* 614*/ ncclDevFunc_ReduceScatter_Sum_f16_PAT_SIMPLE,
/* 615*/ ncclDevFunc_ReduceScatter_Sum_f16_RING_LL,
/* 616*/ ncclDevFunc_ReduceScatter_Sum_f16_RING_LL128,
/* 617*/ ncclDevFunc_ReduceScatter_Sum_f16_RING_SIMPLE,
/* 618*/ ncclDevFunc_ReduceScatter_Sum_f32_COLLNET_DIRECT_SIMPLE,
#if CUDART_VERSION >= 12010 && __CUDA_ARCH__ >= 900
/* 619*/ ncclDevFunc_ReduceScatter_Sum_f32_NVLS_SIMPLE,
#else
/* 619*/ nullptr,
#endif
/* 620*/ ncclDevFunc_ReduceScatter_Sum_f32_PAT_SIMPLE,
/* 621*/ ncclDevFunc_ReduceScatter_Sum_f32_RING_LL,
/* 622*/ ncclDevFunc_ReduceScatter_Sum_f32_RING_LL128,
/* 623*/ ncclDevFunc_ReduceScatter_Sum_f32_RING_SIMPLE,
/* 624*/ ncclDevFunc_ReduceScatter_Sum_f64_COLLNET_DIRECT_SIMPLE,
#if CUDART_VERSION >= 12010 && __CUDA_ARCH__ >= 900
/* 625*/ ncclDevFunc_ReduceScatter_Sum_f64_NVLS_SIMPLE,
#else
/* 625*/ nullptr,
#endif
/* 626*/ ncclDevFunc_ReduceScatter_Sum_f64_PAT_SIMPLE,
/* 627*/ ncclDevFunc_ReduceScatter_Sum_f64_RING_LL,
/* 628*/ ncclDevFunc_ReduceScatter_Sum_f64_RING_LL128,
/* 629*/ ncclDevFunc_ReduceScatter_Sum_f64_RING_SIMPLE,
#if CUDART_VERSION >= 11080 && __CUDA_ARCH__ >= 900
/* 630*/ ncclDevFunc_ReduceScatter_Sum_f8e4m3_COLLNET_DIRECT_SIMPLE,
#else
/* 630*/ nullptr,
#endif
#if CUDART_VERSION >= 11080 && __CUDA_ARCH__ >= 900
/* 631*/ ncclDevFunc_ReduceScatter_Sum_f8e4m3_PAT_SIMPLE,
#else
/* 631*/ nullptr,
#endif
#if CUDART_VERSION >= 11080 && __CUDA_ARCH__ >= 900
/* 632*/ ncclDevFunc_ReduceScatter_Sum_f8e4m3_RING_LL,
#else
/* 632*/ nullptr,
#endif
#if CUDART_VERSION >= 11080 && __CUDA_ARCH__ >= 900
/* 633*/ ncclDevFunc_ReduceScatter_Sum_f8e4m3_RING_LL128,
#else
/* 633*/ nullptr,
#endif
#if CUDART_VERSION >= 11080 && __CUDA_ARCH__ >= 900
/* 634*/ ncclDevFunc_ReduceScatter_Sum_f8e4m3_RING_SIMPLE,
#else
/* 634*/ nullptr,
#endif
#if CUDART_VERSION >= 11080 && __CUDA_ARCH__ >= 900
/* 635*/ ncclDevFunc_ReduceScatter_Sum_f8e5m2_COLLNET_DIRECT_SIMPLE,
#else
/* 635*/ nullptr,
#endif
#if CUDART_VERSION >= 11080 && __CUDA_ARCH__ >= 900
/* 636*/ ncclDevFunc_ReduceScatter_Sum_f8e5m2_PAT_SIMPLE,
#else
/* 636*/ nullptr,
#endif
#if CUDART_VERSION >= 11080 && __CUDA_ARCH__ >= 900
/* 637*/ ncclDevFunc_ReduceScatter_Sum_f8e5m2_RING_LL,
#else
/* 637*/ nullptr,
#endif
#if CUDART_VERSION >= 11080 && __CUDA_ARCH__ >= 900
/* 638*/ ncclDevFunc_ReduceScatter_Sum_f8e5m2_RING_LL128,
#else
/* 638*/ nullptr,
#endif
#if CUDART_VERSION >= 11080 && __CUDA_ARCH__ >= 900
/* 639*/ ncclDevFunc_ReduceScatter_Sum_f8e5m2_RING_SIMPLE,
#else
/* 639*/ nullptr,
#endif
/* 640*/ ncclDevFunc_ReduceScatter_Sum_u32_COLLNET_DIRECT_SIMPLE,
#if CUDART_VERSION >= 12010 && __CUDA_ARCH__ >= 900
/* 641*/ ncclDevFunc_ReduceScatter_Sum_u32_NVLS_SIMPLE,
#else
/* 641*/ nullptr,
#endif
/* 642*/ ncclDevFunc_ReduceScatter_Sum_u32_PAT_SIMPLE,
/* 643*/ ncclDevFunc_ReduceScatter_Sum_u32_RING_LL,
/* 644*/ ncclDevFunc_ReduceScatter_Sum_u32_RING_LL128,
/* 645*/ ncclDevFunc_ReduceScatter_Sum_u32_RING_SIMPLE,
/* 646*/ ncclDevFunc_ReduceScatter_Sum_u64_COLLNET_DIRECT_SIMPLE,
#if CUDART_VERSION >= 12010 && __CUDA_ARCH__ >= 900
/* 647*/ ncclDevFunc_ReduceScatter_Sum_u64_NVLS_SIMPLE,
#else
/* 647*/ nullptr,
#endif
/* 648*/ ncclDevFunc_ReduceScatter_Sum_u64_PAT_SIMPLE,
/* 649*/ ncclDevFunc_ReduceScatter_Sum_u64_RING_LL,
/* 650*/ ncclDevFunc_ReduceScatter_Sum_u64_RING_LL128,
/* 651*/ ncclDevFunc_ReduceScatter_Sum_u64_RING_SIMPLE,
/* 652*/ ncclDevFunc_ReduceScatter_Sum_u8_COLLNET_DIRECT_SIMPLE,
/* 653*/ ncclDevFunc_ReduceScatter_Sum_u8_PAT_SIMPLE,
/* 654*/ ncclDevFunc_ReduceScatter_Sum_u8_RING_LL,
/* 655*/ ncclDevFunc_ReduceScatter_Sum_u8_RING_LL128,
/* 656*/ ncclDevFunc_ReduceScatter_Sum_u8_RING_SIMPLE,
/* 657*/ ncclDevFunc_ReduceScatter_SumPostDiv_u32_COLLNET_DIRECT_SIMPLE,
/* 658*/ ncclDevFunc_ReduceScatter_SumPostDiv_u32_PAT_SIMPLE,
/* 659*/ ncclDevFunc_ReduceScatter_SumPostDiv_u32_RING_LL,
/* 660*/ ncclDevFunc_ReduceScatter_SumPostDiv_u32_RING_LL128,
/* 661*/ ncclDevFunc_ReduceScatter_SumPostDiv_u32_RING_SIMPLE,
/* 662*/ ncclDevFunc_ReduceScatter_SumPostDiv_u64_COLLNET_DIRECT_SIMPLE,
/* 663*/ ncclDevFunc_ReduceScatter_SumPostDiv_u64_PAT_SIMPLE,
/* 664*/ ncclDevFunc_ReduceScatter_SumPostDiv_u64_RING_LL,
/* 665*/ ncclDevFunc_ReduceScatter_SumPostDiv_u64_RING_LL128,
/* 666*/ ncclDevFunc_ReduceScatter_SumPostDiv_u64_RING_SIMPLE,
/* 667*/ ncclDevFunc_ReduceScatter_SumPostDiv_u8_COLLNET_DIRECT_SIMPLE,
/* 668*/ ncclDevFunc_ReduceScatter_SumPostDiv_u8_PAT_SIMPLE,
/* 669*/ ncclDevFunc_ReduceScatter_SumPostDiv_u8_RING_LL,
/* 670*/ ncclDevFunc_ReduceScatter_SumPostDiv_u8_RING_LL128,
/* 671*/ ncclDevFunc_ReduceScatter_SumPostDiv_u8_RING_SIMPLE,
/* 672*/ ncclDevFunc_SendRecv,
nullptr};

// Workaround for https://reviews.llvm.org/D55580
__device__ void ncclWorkaroundClangD55580() {}
