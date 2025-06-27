// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vflipflops_top.h for the primary calling header

#include "Vflipflops_top__pch.h"
#include "Vflipflops_top___024root.h"

VL_ATTR_COLD void Vflipflops_top___024root___eval_static(Vflipflops_top___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vflipflops_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vflipflops_top___024root___eval_static\n"); );
}

VL_ATTR_COLD void Vflipflops_top___024root___eval_initial(Vflipflops_top___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vflipflops_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vflipflops_top___024root___eval_initial\n"); );
}

VL_ATTR_COLD void Vflipflops_top___024root___eval_final(Vflipflops_top___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vflipflops_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vflipflops_top___024root___eval_final\n"); );
}

VL_ATTR_COLD void Vflipflops_top___024root___eval_settle(Vflipflops_top___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vflipflops_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vflipflops_top___024root___eval_settle\n"); );
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vflipflops_top___024root___dump_triggers__act(Vflipflops_top___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vflipflops_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vflipflops_top___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ vlSelf->__VactTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vflipflops_top___024root___dump_triggers__nba(Vflipflops_top___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vflipflops_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vflipflops_top___024root___dump_triggers__nba\n"); );
    // Body
    if ((1U & (~ vlSelf->__VnbaTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vflipflops_top___024root___ctor_var_reset(Vflipflops_top___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vflipflops_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vflipflops_top___024root___ctor_var_reset\n"); );
}
