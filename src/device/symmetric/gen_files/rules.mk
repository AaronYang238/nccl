LIB_OBJS_SYM_GEN = $(patsubst %,$(OBJDIR)/genobj/symmetric/%.o,all_gather.cu all_gather_gin.cu all_reduce_sum_bf16.cu all_reduce_sum_f16.cu all_reduce_sum_f32.cu all_reduce_sum_f8e4m3.cu all_reduce_sum_f8e4m3_RSxLDMC_AGxSTMC.cu all_reduce_sum_f8e5m2.cu all_reduce_sum_f8e5m2_RSxLDMC_AGxSTMC.cu reduce_scatter_sum_bf16.cu reduce_scatter_sum_f16.cu reduce_scatter_sum_f32.cu reduce_scatter_sum_f8e4m3.cu reduce_scatter_sum_f8e4m3_LDMC.cu reduce_scatter_sum_f8e5m2.cu reduce_scatter_sum_f8e5m2_LDMC.cu sym_kernels_host.cc)

$(OBJDIR)/genobj/symmetric/all_gather.cu.o: $(OBJDIR)/gensrc/symmetric $(OBJDIR)/genobj/symmetric/all_gather.cu.d
	$(call COMPILE_SYM,$@,$(OBJDIR)/gensrc/symmetric/all_gather.cu,$(NVCC_GENCODE))

$(OBJDIR)/genobj/symmetric/all_gather_gin.cu.o: $(OBJDIR)/gensrc/symmetric $(OBJDIR)/genobj/symmetric/all_gather_gin.cu.d
	$(call COMPILE_SYM,$@,$(OBJDIR)/gensrc/symmetric/all_gather_gin.cu,$(NVCC_GENCODE))

$(OBJDIR)/genobj/symmetric/all_reduce_sum_bf16.cu.o: $(OBJDIR)/gensrc/symmetric $(OBJDIR)/genobj/symmetric/all_reduce.cu.d
	$(call COMPILE_SYM,$@,$(OBJDIR)/gensrc/symmetric/all_reduce_sum_bf16.cu,$(NVCC_GENCODE))

$(OBJDIR)/genobj/symmetric/all_reduce_sum_f16.cu.o: $(OBJDIR)/gensrc/symmetric $(OBJDIR)/genobj/symmetric/all_reduce.cu.d
	$(call COMPILE_SYM,$@,$(OBJDIR)/gensrc/symmetric/all_reduce_sum_f16.cu,$(NVCC_GENCODE))

$(OBJDIR)/genobj/symmetric/all_reduce_sum_f32.cu.o: $(OBJDIR)/gensrc/symmetric $(OBJDIR)/genobj/symmetric/all_reduce.cu.d
	$(call COMPILE_SYM,$@,$(OBJDIR)/gensrc/symmetric/all_reduce_sum_f32.cu,$(NVCC_GENCODE))

$(OBJDIR)/genobj/symmetric/all_reduce_sum_f8e4m3.cu.o: $(OBJDIR)/gensrc/symmetric $(OBJDIR)/genobj/symmetric/all_reduce.cu.d
	$(call COMPILE_SYM,$@,$(OBJDIR)/gensrc/symmetric/all_reduce_sum_f8e4m3.cu,$(NVCC_GENCODE))

$(OBJDIR)/genobj/symmetric/all_reduce_sum_f8e4m3_RSxLDMC_AGxSTMC.cu.o: $(OBJDIR)/gensrc/symmetric $(OBJDIR)/genobj/symmetric/all_reduce.cu.d
	$(call COMPILE_SYM,$@,$(OBJDIR)/gensrc/symmetric/all_reduce_sum_f8e4m3_RSxLDMC_AGxSTMC.cu,$(NVCC_GENCODE_LDMC_FP8))

$(OBJDIR)/genobj/symmetric/all_reduce_sum_f8e5m2.cu.o: $(OBJDIR)/gensrc/symmetric $(OBJDIR)/genobj/symmetric/all_reduce.cu.d
	$(call COMPILE_SYM,$@,$(OBJDIR)/gensrc/symmetric/all_reduce_sum_f8e5m2.cu,$(NVCC_GENCODE))

$(OBJDIR)/genobj/symmetric/all_reduce_sum_f8e5m2_RSxLDMC_AGxSTMC.cu.o: $(OBJDIR)/gensrc/symmetric $(OBJDIR)/genobj/symmetric/all_reduce.cu.d
	$(call COMPILE_SYM,$@,$(OBJDIR)/gensrc/symmetric/all_reduce_sum_f8e5m2_RSxLDMC_AGxSTMC.cu,$(NVCC_GENCODE_LDMC_FP8))

$(OBJDIR)/genobj/symmetric/reduce_scatter_sum_bf16.cu.o: $(OBJDIR)/gensrc/symmetric $(OBJDIR)/genobj/symmetric/reduce_scatter.cu.d
	$(call COMPILE_SYM,$@,$(OBJDIR)/gensrc/symmetric/reduce_scatter_sum_bf16.cu,$(NVCC_GENCODE))

$(OBJDIR)/genobj/symmetric/reduce_scatter_sum_f16.cu.o: $(OBJDIR)/gensrc/symmetric $(OBJDIR)/genobj/symmetric/reduce_scatter.cu.d
	$(call COMPILE_SYM,$@,$(OBJDIR)/gensrc/symmetric/reduce_scatter_sum_f16.cu,$(NVCC_GENCODE))

$(OBJDIR)/genobj/symmetric/reduce_scatter_sum_f32.cu.o: $(OBJDIR)/gensrc/symmetric $(OBJDIR)/genobj/symmetric/reduce_scatter.cu.d
	$(call COMPILE_SYM,$@,$(OBJDIR)/gensrc/symmetric/reduce_scatter_sum_f32.cu,$(NVCC_GENCODE))

$(OBJDIR)/genobj/symmetric/reduce_scatter_sum_f8e4m3.cu.o: $(OBJDIR)/gensrc/symmetric $(OBJDIR)/genobj/symmetric/reduce_scatter.cu.d
	$(call COMPILE_SYM,$@,$(OBJDIR)/gensrc/symmetric/reduce_scatter_sum_f8e4m3.cu,$(NVCC_GENCODE))

$(OBJDIR)/genobj/symmetric/reduce_scatter_sum_f8e4m3_LDMC.cu.o: $(OBJDIR)/gensrc/symmetric $(OBJDIR)/genobj/symmetric/reduce_scatter.cu.d
	$(call COMPILE_SYM,$@,$(OBJDIR)/gensrc/symmetric/reduce_scatter_sum_f8e4m3_LDMC.cu,$(NVCC_GENCODE_LDMC_FP8))

$(OBJDIR)/genobj/symmetric/reduce_scatter_sum_f8e5m2.cu.o: $(OBJDIR)/gensrc/symmetric $(OBJDIR)/genobj/symmetric/reduce_scatter.cu.d
	$(call COMPILE_SYM,$@,$(OBJDIR)/gensrc/symmetric/reduce_scatter_sum_f8e5m2.cu,$(NVCC_GENCODE))

$(OBJDIR)/genobj/symmetric/reduce_scatter_sum_f8e5m2_LDMC.cu.o: $(OBJDIR)/gensrc/symmetric $(OBJDIR)/genobj/symmetric/reduce_scatter.cu.d
	$(call COMPILE_SYM,$@,$(OBJDIR)/gensrc/symmetric/reduce_scatter_sum_f8e5m2_LDMC.cu,$(NVCC_GENCODE_LDMC_FP8))

