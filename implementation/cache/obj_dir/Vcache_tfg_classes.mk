# Verilated -*- Makefile -*-
# DESCRIPTION: Verilator output: Make include file with class lists
#
# This file lists generated Verilated files, for including in higher level makefiles.
# See Vcache_tfg.mk for the caller.

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
	Vcache_tfg \
	Vcache_tfg___024root__DepSet_h20e31565__0 \
	Vcache_tfg___024root__DepSet_h0de6afe9__0 \
	Vcache_tfg_cache_tfg__DepSet_h79b76bb5__0 \
	Vcache_tfg_bram__D100_Wd__DepSet_h78a7041b__0 \
	Vcache_tfg_bram__D100_W10__DepSet_hc8514217__0 \

# Generated module classes, non-fast-path, compile with low/medium optimization
VM_CLASSES_SLOW += \
	Vcache_tfg__ConstPool_0 \
	Vcache_tfg___024root__Slow \
	Vcache_tfg___024root__DepSet_h20e31565__0__Slow \
	Vcache_tfg___024root__DepSet_h0de6afe9__0__Slow \
	Vcache_tfg_cache_tfg__Slow \
	Vcache_tfg_cache_tfg__DepSet_h79b76bb5__0__Slow \
	Vcache_tfg_cache_tfg__DepSet_h46b2f119__0__Slow \
	Vcache_tfg_cache_way__Td_D10_S8__Slow \
	Vcache_tfg_cache_way__Td_D10_S8__DepSet_ha4fa5aee__0__Slow \
	Vcache_tfg_bram__D100_Wd__Slow \
	Vcache_tfg_bram__D100_Wd__DepSet_h45a2a0bf__0__Slow \
	Vcache_tfg_bram__D100_W10__Slow \
	Vcache_tfg_bram__D100_W10__DepSet_hb558dabb__0__Slow \

# Generated support classes, fast-path, compile with highest optimization
VM_SUPPORT_FAST += \
	Vcache_tfg__Dpi \

# Generated support classes, non-fast-path, compile with low/medium optimization
VM_SUPPORT_SLOW += \
	Vcache_tfg__Syms \

# Global classes, need linked once per executable, fast-path, compile with highest optimization
VM_GLOBAL_FAST += \
	verilated \
	verilated_dpi \
	verilated_threads \

# Global classes, need linked once per executable, non-fast-path, compile with low/medium optimization
VM_GLOBAL_SLOW += \


# Verilated -*- Makefile -*-
