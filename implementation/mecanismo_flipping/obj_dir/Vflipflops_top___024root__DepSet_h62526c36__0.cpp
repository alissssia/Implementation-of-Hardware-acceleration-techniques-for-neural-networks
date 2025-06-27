// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vflipflops_top.h for the primary calling header

#include "Vflipflops_top__pch.h"
#include "Vflipflops_top__Syms.h"
#include "Vflipflops_top___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void Vflipflops_top___024root___dump_triggers__act(Vflipflops_top___024root* vlSelf);
#endif  // VL_DEBUG

void Vflipflops_top___024root___eval_triggers__act(Vflipflops_top___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vflipflops_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vflipflops_top___024root___eval_triggers__act\n"); );
    // Body
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vflipflops_top___024root___dump_triggers__act(vlSelf);
    }
#endif
}
