# Verilated -*- Makefile -*-
# DESCRIPTION: Verilator output: Make include file with class lists
#
# This file lists generated Verilated files, for including in higher level makefiles.
# See Vcache.mk for the caller.

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
	Vcache \
	Vcache___024root__DepSet_h0ce690a1__0 \
	Vcache___024root__DepSet_h94f5c8ee__0 \
	Vcache_cache__DepSet_hc36977ea__0 \
	Vcache_bram__D100_Wd__DepSet_h1fbc3dbd__0 \
	Vcache_bram__D100_W10__DepSet_haf60b194__0 \

# Generated module classes, non-fast-path, compile with low/medium optimization
VM_CLASSES_SLOW += \
	Vcache__ConstPool_0 \
	Vcache___024root__Slow \
	Vcache___024root__DepSet_h0ce690a1__0__Slow \
	Vcache___024root__DepSet_h94f5c8ee__0__Slow \
	Vcache_cache__Slow \
	Vcache_cache__DepSet_hc36977ea__0__Slow \
	Vcache_cache__DepSet_h477ef027__0__Slow \
	Vcache_cache_way__Td_D10_S8__Slow \
	Vcache_cache_way__Td_D10_S8__DepSet_h2a2e1a97__0__Slow \
	Vcache_bram__D100_Wd__Slow \
	Vcache_bram__D100_Wd__DepSet_h83ac35d2__0__Slow \
	Vcache_bram__D100_W10__Slow \
	Vcache_bram__D100_W10__DepSet_h3377a9f9__0__Slow \

# Generated support classes, fast-path, compile with highest optimization
VM_SUPPORT_FAST += \
	Vcache__Dpi \

# Generated support classes, non-fast-path, compile with low/medium optimization
VM_SUPPORT_SLOW += \
	Vcache__Syms \

# Global classes, need linked once per executable, fast-path, compile with highest optimization
VM_GLOBAL_FAST += \
	verilated \
	verilated_dpi \
	verilated_threads \

# Global classes, need linked once per executable, non-fast-path, compile with low/medium optimization
VM_GLOBAL_SLOW += \


# Verilated -*- Makefile -*-
