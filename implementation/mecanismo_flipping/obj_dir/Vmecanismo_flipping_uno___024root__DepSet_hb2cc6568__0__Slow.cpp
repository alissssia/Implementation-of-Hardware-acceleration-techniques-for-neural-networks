// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vmecanismo_flipping_uno.h for the primary calling header

#include "Vmecanismo_flipping_uno__pch.h"
#include "Vmecanismo_flipping_uno___024root.h"

VL_ATTR_COLD void Vmecanismo_flipping_uno___024root___eval_static(Vmecanismo_flipping_uno___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vmecanismo_flipping_uno__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmecanismo_flipping_uno___024root___eval_static\n"); );
}

VL_ATTR_COLD void Vmecanismo_flipping_uno___024root___eval_initial(Vmecanismo_flipping_uno___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vmecanismo_flipping_uno__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmecanismo_flipping_uno___024root___eval_initial\n"); );
}

VL_ATTR_COLD void Vmecanismo_flipping_uno___024root___eval_final(Vmecanismo_flipping_uno___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vmecanismo_flipping_uno__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmecanismo_flipping_uno___024root___eval_final\n"); );
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vmecanismo_flipping_uno___024root___dump_triggers__stl(Vmecanismo_flipping_uno___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vmecanismo_flipping_uno___024root___eval_phase__stl(Vmecanismo_flipping_uno___024root* vlSelf);

VL_ATTR_COLD void Vmecanismo_flipping_uno___024root___eval_settle(Vmecanismo_flipping_uno___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vmecanismo_flipping_uno__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmecanismo_flipping_uno___024root___eval_settle\n"); );
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
            Vmecanismo_flipping_uno___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("mecanismo_flipping_uno.sv", 4, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (Vmecanismo_flipping_uno___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelf->__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vmecanismo_flipping_uno___024root___dump_triggers__stl(Vmecanismo_flipping_uno___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vmecanismo_flipping_uno__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmecanismo_flipping_uno___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ vlSelf->__VstlTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

void Vmecanismo_flipping_uno___024root___ico_sequent__TOP__0(Vmecanismo_flipping_uno___024root* vlSelf);

VL_ATTR_COLD void Vmecanismo_flipping_uno___024root___eval_stl(Vmecanismo_flipping_uno___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vmecanismo_flipping_uno__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmecanismo_flipping_uno___024root___eval_stl\n"); );
    // Body
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        Vmecanismo_flipping_uno___024root___ico_sequent__TOP__0(vlSelf);
    }
}

VL_ATTR_COLD void Vmecanismo_flipping_uno___024root___eval_triggers__stl(Vmecanismo_flipping_uno___024root* vlSelf);

VL_ATTR_COLD bool Vmecanismo_flipping_uno___024root___eval_phase__stl(Vmecanismo_flipping_uno___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vmecanismo_flipping_uno__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmecanismo_flipping_uno___024root___eval_phase__stl\n"); );
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    Vmecanismo_flipping_uno___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelf->__VstlTriggered.any();
    if (__VstlExecute) {
        Vmecanismo_flipping_uno___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vmecanismo_flipping_uno___024root___dump_triggers__ico(Vmecanismo_flipping_uno___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vmecanismo_flipping_uno__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmecanismo_flipping_uno___024root___dump_triggers__ico\n"); );
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
VL_ATTR_COLD void Vmecanismo_flipping_uno___024root___dump_triggers__act(Vmecanismo_flipping_uno___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vmecanismo_flipping_uno__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmecanismo_flipping_uno___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ vlSelf->__VactTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vmecanismo_flipping_uno___024root___dump_triggers__nba(Vmecanismo_flipping_uno___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vmecanismo_flipping_uno__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmecanismo_flipping_uno___024root___dump_triggers__nba\n"); );
    // Body
    if ((1U & (~ vlSelf->__VnbaTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vmecanismo_flipping_uno___024root___ctor_var_reset(Vmecanismo_flipping_uno___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vmecanismo_flipping_uno__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmecanismo_flipping_uno___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->a = VL_RAND_RESET_I(16);
    vlSelf->f = VL_RAND_RESET_I(1);
    vlSelf->b = VL_RAND_RESET_I(16);
}
