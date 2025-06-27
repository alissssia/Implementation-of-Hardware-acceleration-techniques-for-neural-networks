# Verilated -*- Makefile -*-
# DESCRIPTION: Verilator output: Make include file with class lists
#
# This file lists generated Verilated files, for including in higher level makefiles.
# See Vtop_patching_uno.mk for the caller.

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
	Vtop_patching_uno \
	Vtop_patching_uno___024root__DepSet_hcfc5f771__0 \
	Vtop_patching_uno___024root__DepSet_hd5d92660__0 \
	Vtop_patching_uno_cache_tfg__DepSet_h0efb97cb__0 \
	Vtop_patching_uno_bram__D100_Wd__DepSet_hbc4baa93__0 \
	Vtop_patching_uno_bram__D100_W10__DepSet_h9becb361__0 \

# Generated module classes, non-fast-path, compile with low/medium optimization
VM_CLASSES_SLOW += \
	Vtop_patching_uno__ConstPool_0 \
	Vtop_patching_uno___024root__Slow \
	Vtop_patching_uno___024root__DepSet_hcfc5f771__0__Slow \
	Vtop_patching_uno___024root__DepSet_hd5d92660__0__Slow \
	Vtop_patching_uno_top_patching_uno__Slow \
	Vtop_patching_uno_top_patching_uno__DepSet_h3990c79f__0__Slow \
	Vtop_patching_uno_cache_tfg__Slow \
	Vtop_patching_uno_cache_tfg__DepSet_h0efb97cb__0__Slow \
	Vtop_patching_uno_cache_tfg__DepSet_h94c34606__0__Slow \
	Vtop_patching_uno_cache_way__Td_D10_S8__Slow \
	Vtop_patching_uno_cache_way__Td_D10_S8__DepSet_h4302db6e__0__Slow \
	Vtop_patching_uno_bram__D100_Wd__Slow \
	Vtop_patching_uno_bram__D100_Wd__DepSet_he7536abe__0__Slow \
	Vtop_patching_uno_bram__D100_W10__Slow \
	Vtop_patching_uno_bram__D100_W10__DepSet_h09b06270__0__Slow \

# Generated support classes, fast-path, compile with highest optimization
VM_SUPPORT_FAST += \
	Vtop_patching_uno__Dpi \

# Generated support classes, non-fast-path, compile with low/medium optimization
VM_SUPPORT_SLOW += \
	Vtop_patching_uno__Syms \

# Global classes, need linked once per executable, fast-path, compile with highest optimization
VM_GLOBAL_FAST += \
	verilated \
	verilated_dpi \
	verilated_threads \

# Global classes, need linked once per executable, non-fast-path, compile with low/medium optimization
VM_GLOBAL_SLOW += \


# Verilated -*- Makefile -*-
