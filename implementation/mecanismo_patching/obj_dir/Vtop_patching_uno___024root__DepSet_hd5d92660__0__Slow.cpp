// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop_patching_uno.h for the primary calling header

#include "Vtop_patching_uno__pch.h"
#include "Vtop_patching_uno___024root.h"

VL_ATTR_COLD void Vtop_patching_uno___024root___eval_static(Vtop_patching_uno___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop_patching_uno__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_patching_uno___024root___eval_static\n"); );
}

VL_ATTR_COLD void Vtop_patching_uno___024root___eval_initial(Vtop_patching_uno___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop_patching_uno__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_patching_uno___024root___eval_initial\n"); );
    // Body
    vlSelf->__Vtrigprevexpr___TOP__clk__0 = vlSelf->clk;
    vlSelf->__Vtrigprevexpr___TOP__reset__0 = vlSelf->reset;
}

VL_ATTR_COLD void Vtop_patching_uno___024root___eval_final(Vtop_patching_uno___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop_patching_uno__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_patching_uno___024root___eval_final\n"); );
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop_patching_uno___024root___dump_triggers__stl(Vtop_patching_uno___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vtop_patching_uno___024root___eval_phase__stl(Vtop_patching_uno___024root* vlSelf);

VL_ATTR_COLD void Vtop_patching_uno___024root___eval_settle(Vtop_patching_uno___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop_patching_uno__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_patching_uno___024root___eval_settle\n"); );
    // Init
    IData/*31:0*/ __VstlIterCount;
    CData/*0:0*/ __VstlContinue;
    // Body
    __VstlIterCount = 0U;
    vlSelf->__VstlFirstIteration = 1U;
    __VstlContinue = 1U;
    while (__VstlContinue) {
        if (VL_UNLIKELY((0x64U < __VstlIterCount))) {
#ifdef VL_DEBUG
            Vtop_patching_uno___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("top_patching_uno.sv", 2, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (Vtop_patching_uno___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelf->__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop_patching_uno___024root___dump_triggers__stl(Vtop_patching_uno___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop_patching_uno__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_patching_uno___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ vlSelf->__VstlTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtop_patching_uno___024root___eval_triggers__stl(Vtop_patching_uno___024root* vlSelf);
VL_ATTR_COLD void Vtop_patching_uno___024root___eval_stl(Vtop_patching_uno___024root* vlSelf);

VL_ATTR_COLD bool Vtop_patching_uno___024root___eval_phase__stl(Vtop_patching_uno___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop_patching_uno__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_patching_uno___024root___eval_phase__stl\n"); );
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    Vtop_patching_uno___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelf->__VstlTriggered.any();
    if (__VstlExecute) {
        Vtop_patching_uno___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop_patching_uno___024root___dump_triggers__ico(Vtop_patching_uno___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop_patching_uno__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_patching_uno___024root___dump_triggers__ico\n"); );
    // Body
    if ((1U & (~ vlSelf->__VicoTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VicoTriggered.word(0U))) {
        VL_DBG_MSGF("         'ico' region trigger index 0 is active: Internal 'ico' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop_patching_uno___024root___dump_triggers__act(Vtop_patching_uno___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop_patching_uno__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_patching_uno___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ vlSelf->__VactTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge clk or posedge reset)\n");
    }
    if ((2ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @(posedge clk)\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop_patching_uno___024root___dump_triggers__nba(Vtop_patching_uno___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop_patching_uno__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_patching_uno___024root___dump_triggers__nba\n"); );
    // Body
    if ((1U & (~ vlSelf->__VnbaTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge clk or posedge reset)\n");
    }
    if ((2ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @(posedge clk)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtop_patching_uno___024root___ctor_var_reset(Vtop_patching_uno___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop_patching_uno__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_patching_uno___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->reset = VL_RAND_RESET_I(1);
    vlSelf->request = VL_RAND_RESET_I(1);
    vlSelf->read_write = VL_RAND_RESET_I(1);
    vlSelf->address = VL_RAND_RESET_I(21);
    vlSelf->activation_in = VL_RAND_RESET_I(16);
    vlSelf->p = VL_RAND_RESET_I(1);
    vlSelf->activation_org = VL_RAND_RESET_I(16);
    vlSelf->chosen_activation = VL_RAND_RESET_I(16);
    vlSelf->valid = VL_RAND_RESET_I(1);
    vlSelf->error = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__clk__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__reset__0 = VL_RAND_RESET_I(1);
}
