#include "common.h"
#include "sendrecv.h"
DEFINE_ncclDevKernel(SendRecv, ncclFuncSendRecv, FuncCopy, int8_t, NCCL_ALGO_RING, NCCL_PROTO_SIMPLE, 672)
DEFINE_ncclDevFunc(SendRecv, ncclFuncSendRecv, FuncCopy, int8_t, NCCL_ALGO_RING, NCCL_PROTO_SIMPLE)
