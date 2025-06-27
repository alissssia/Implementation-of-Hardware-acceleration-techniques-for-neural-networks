# Verilated -*- Makefile -*-
# DESCRIPTION: Verilator output: Make include file with class lists
#
# This file lists generated Verilated files, for including in higher level makefiles.
# See Vtest_mechanisms_fpga_bueno.mk for the caller.

### Switches...
# C11 constructs required?  0/1 (always on now)
VM_C11 = 1
# Timing enabled?  0/1
VM_TIMING = 0
# Coverage output mode?  0/1 (from --coverage)
VM_COVERAGE = 0
# Parallel builds?  0/1 (from --output-split)
VM_PARALLEL_BUILDS = 0
# Tracing output mode?  0/1 (from --trace/--trace-fst)
VM_TRACE = 0
# Tracing output mode in VCD format?  0/1 (from --trace)
VM_TRACE_VCD = 0
# Tracing output mode in FST format?  0/1 (from --trace-fst)
VM_TRACE_FST = 0

### Object file lists...
# Generated module classes, fast-path, compile with highest optimization
VM_CLASSES_FAST += \
	Vtest_mechanisms_fpga_bueno \
	Vtest_mechanisms_fpga_bueno___024root__DepSet_h5f7c4bee__0 \
	Vtest_mechanisms_fpga_bueno___024root__DepSet_h666acc48__0 \
	Vtest_mechanisms_fpga_bueno_test_mechanisms_fpga_bueno__DepSet_h7dcdd746__0 \
	Vtest_mechanisms_fpga_bueno_top_patching_uno__DepSet_h2cd10c85__0 \
	Vtest_mechanisms_fpga_bueno_cache_tfg__DepSet_hf0312626__0 \
	Vtest_mechanisms_fpga_bueno_bram__D100_Wd__DepSet_ha9cd5957__0 \
	Vtest_mechanisms_fpga_bueno_bram__D100_W10__DepSet_h32f633a8__0 \

# Generated module classes, non-fast-path, compile with low/medium optimization
VM_CLASSES_SLOW += \
	Vtest_mechanisms_fpga_bueno__ConstPool_0 \
	Vtest_mechanisms_fpga_bueno___024root__Slow \
	Vtest_mechanisms_fpga_bueno___024root__DepSet_h5f7c4bee__0__Slow \
	Vtest_mechanisms_fpga_bueno___024root__DepSet_h666acc48__0__Slow \
	Vtest_mechanisms_fpga_bueno_test_mechanisms_fpga_bueno__Slow \
	Vtest_mechanisms_fpga_bueno_test_mechanisms_fpga_bueno__DepSet_h44b930a0__0__Slow \
	Vtest_mechanisms_fpga_bueno_top_patching_uno__Slow \
	Vtest_mechanisms_fpga_bueno_top_patching_uno__DepSet_h15c60763__0__Slow \
	Vtest_mechanisms_fpga_bueno_cache_tfg__Slow \
	Vtest_mechanisms_fpga_bueno_cache_tfg__DepSet_hf0312626__0__Slow \
	Vtest_mechanisms_fpga_bueno_cache_tfg__DepSet_hc9a5e200__0__Slow \
	Vtest_mechanisms_fpga_bueno_cache_way__Td_D10_S8__Slow \
	Vtest_mechanisms_fpga_bueno_cache_way__Td_D10_S8__DepSet_ha1948877__0__Slow \
	Vtest_mechanisms_fpga_bueno_bram__D100_Wd__Slow \
	Vtest_mechanisms_fpga_bueno_bram__D100_Wd__DepSet_h90b9ba91__0__Slow \
	Vtest_mechanisms_fpga_bueno_bram__D100_W10__Slow \
	Vtest_mechanisms_fpga_bueno_bram__D100_W10__DepSet_h0be4d486__0__Slow \

# Generated support classes, fast-path, compile with highest optimization
VM_SUPPORT_FAST += \
	Vtest_mechanisms_fpga_bueno__Dpi \

# Generated support classes, non-fast-path, compile with low/medium optimization
VM_SUPPORT_SLOW += \
	Vtest_mechanisms_fpga_bueno__Syms \

# Global classes, need linked once per executable, fast-path, compile with highest optimization
VM_GLOBAL_FAST += \
	verilated \
	verilated_dpi \
	verilated_threads \

# Global classes, need linked once per executable, non-fast-path, compile with low/medium optimization
VM_GLOBAL_SLOW += \


# Verilated -*- Makefile -*-
