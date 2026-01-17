#include "common.h"
#include "all_gather_v.h"
DEFINE_ncclDevKernel(AllGatherV_RING_LL, ncclFuncAllGatherV, FuncCopy, int8_t, NCCL_ALGO_RING, NCCL_PROTO_LL, 6)
DEFINE_ncclDevFunc(AllGatherV_RING_LL, ncclFuncAllGatherV, FuncCopy, int8_t, NCCL_ALGO_RING, NCCL_PROTO_LL)
DEFINE_ncclDevFunc(AllGatherV_RING_LL128, ncclFuncAllGatherV, FuncCopy, int8_t, NCCL_ALGO_RING, NCCL_PROTO_LL128)
DEFINE_ncclDevFunc(AllGatherV_RING_SIMPLE, ncclFuncAllGatherV, FuncCopy, int8_t, NCCL_ALGO_RING, NCCL_PROTO_SIMPLE)
