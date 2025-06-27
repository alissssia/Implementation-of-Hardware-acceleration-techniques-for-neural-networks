// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vflipflop_uno.h for the primary calling header

#include "Vflipflop_uno__pch.h"
#include "Vflipflop_uno___024root.h"

VL_ATTR_COLD void Vflipflop_uno___024root___eval_static(Vflipflop_uno___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vflipflop_uno__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vflipflop_uno___024root___eval_static\n"); );
}

VL_ATTR_COLD void Vflipflop_uno___024root___eval_initial(Vflipflop_uno___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vflipflop_uno__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vflipflop_uno___024root___eval_initial\n"); );
    // Body
    vlSelf->__Vtrigprevexpr___TOP__flipflop_vector__02Eclk__0 
        = vlSelf->flipflop_vector__02Eclk;
    vlSelf->__Vtrigprevexpr___TOP__flipflop_vector__02Erst__0 
        = vlSelf->flipflop_vector__02Erst;
    vlSelf->__Vtrigprevexpr___TOP__flipflop_bloque__02Eclk__0 
        = vlSelf->flipflop_bloque__02Eclk;
    vlSelf->__Vtrigprevexpr___TOP__flipflop_bloque__02Erst__0 
        = vlSelf->flipflop_bloque__02Erst;
}

VL_ATTR_COLD void Vflipflop_uno___024root___eval_final(Vflipflop_uno___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vflipflop_uno__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vflipflop_uno___024root___eval_final\n"); );
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vflipflop_uno___024root___dump_triggers__stl(Vflipflop_uno___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vflipflop_uno___024root___eval_phase__stl(Vflipflop_uno___024root* vlSelf);

VL_ATTR_COLD void Vflipflop_uno___024root___eval_settle(Vflipflop_uno___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vflipflop_uno__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vflipflop_uno___024root___eval_settle\n"); );
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
            Vflipflop_uno___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("flipflop_vector.sv", 6, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (Vflipflop_uno___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelf->__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vflipflop_uno___024root___dump_triggers__stl(Vflipflop_uno___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vflipflop_uno__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vflipflop_uno___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ vlSelf->__VstlTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vflipflop_uno___024root___stl_sequent__TOP__0(Vflipflop_uno___024root* vlSelf);

VL_ATTR_COLD void Vflipflop_uno___024root___eval_stl(Vflipflop_uno___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vflipflop_uno__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vflipflop_uno___024root___eval_stl\n"); );
    // Body
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        Vflipflop_uno___024root___stl_sequent__TOP__0(vlSelf);
    }
}

VL_ATTR_COLD void Vflipflop_uno___024root___stl_sequent__TOP__0(Vflipflop_uno___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vflipflop_uno__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vflipflop_uno___024root___stl_sequent__TOP__0\n"); );
    // Body
    vlSelf->flipflop_vector__02Eq[0U] = vlSelf->flipflop_vector__DOT____Vcellout__genblk1__BRA__0__KET____DOT__u0__q;
    vlSelf->flipflop_vector__02Eq[1U] = vlSelf->flipflop_vector__DOT____Vcellout__genblk1__BRA__1__KET____DOT__u0__q;
    vlSelf->flipflop_vector__02Eq[2U] = vlSelf->flipflop_vector__DOT____Vcellout__genblk1__BRA__2__KET____DOT__u0__q;
    vlSelf->flipflop_vector__02Eq[3U] = vlSelf->flipflop_vector__DOT____Vcellout__genblk1__BRA__3__KET____DOT__u0__q;
    vlSelf->flipflop_vector__02Eq[4U] = vlSelf->flipflop_vector__DOT____Vcellout__genblk1__BRA__4__KET____DOT__u0__q;
    vlSelf->flipflop_vector__02Eq[5U] = vlSelf->flipflop_vector__DOT____Vcellout__genblk1__BRA__5__KET____DOT__u0__q;
    vlSelf->flipflop_vector__02Eq[6U] = vlSelf->flipflop_vector__DOT____Vcellout__genblk1__BRA__6__KET____DOT__u0__q;
    vlSelf->flipflop_vector__02Eq[7U] = vlSelf->flipflop_vector__DOT____Vcellout__genblk1__BRA__7__KET____DOT__u0__q;
    vlSelf->flipflop_vector__02Eq[8U] = vlSelf->flipflop_vector__DOT____Vcellout__genblk1__BRA__8__KET____DOT__u0__q;
    vlSelf->flipflop_vector__02Eq[9U] = vlSelf->flipflop_vector__DOT____Vcellout__genblk1__BRA__9__KET____DOT__u0__q;
    vlSelf->flipflop_vector__02Eq[0xaU] = vlSelf->flipflop_vector__DOT____Vcellout__genblk1__BRA__10__KET____DOT__u0__q;
    vlSelf->flipflop_vector__02Eq[0xbU] = vlSelf->flipflop_vector__DOT____Vcellout__genblk1__BRA__11__KET____DOT__u0__q;
    vlSelf->flipflop_vector__02Eq[0xcU] = vlSelf->flipflop_vector__DOT____Vcellout__genblk1__BRA__12__KET____DOT__u0__q;
    vlSelf->flipflop_vector__02Eq[0xdU] = vlSelf->flipflop_vector__DOT____Vcellout__genblk1__BRA__13__KET____DOT__u0__q;
    vlSelf->flipflop_vector__02Eq[0xeU] = vlSelf->flipflop_vector__DOT____Vcellout__genblk1__BRA__14__KET____DOT__u0__q;
    vlSelf->flipflop_vector__02Eq[0xfU] = vlSelf->flipflop_vector__DOT____Vcellout__genblk1__BRA__15__KET____DOT__u0__q;
    vlSelf->flipflop_bloque__02Eq[0U] = vlSelf->flipflop_bloque__DOT____Vcellout__genblk1__BRA__0__KET____DOT__u0__q;
    vlSelf->flipflop_bloque__02Eq[1U] = vlSelf->flipflop_bloque__DOT____Vcellout__genblk1__BRA__1__KET____DOT__u0__q;
    vlSelf->flipflop_bloque__02Eq[2U] = vlSelf->flipflop_bloque__DOT____Vcellout__genblk1__BRA__2__KET____DOT__u0__q;
    vlSelf->flipflop_bloque__02Eq[3U] = vlSelf->flipflop_bloque__DOT____Vcellout__genblk1__BRA__3__KET____DOT__u0__q;
    vlSelf->flipflop_bloque__02Eq[4U] = vlSelf->flipflop_bloque__DOT____Vcellout__genblk1__BRA__4__KET____DOT__u0__q;
    vlSelf->flipflop_bloque__02Eq[5U] = vlSelf->flipflop_bloque__DOT____Vcellout__genblk1__BRA__5__KET____DOT__u0__q;
    vlSelf->flipflop_bloque__02Eq[6U] = vlSelf->flipflop_bloque__DOT____Vcellout__genblk1__BRA__6__KET____DOT__u0__q;
    vlSelf->flipflop_bloque__02Eq[7U] = vlSelf->flipflop_bloque__DOT____Vcellout__genblk1__BRA__7__KET____DOT__u0__q;
    vlSelf->flipflop_bloque__02Eq[8U] = vlSelf->flipflop_bloque__DOT____Vcellout__genblk1__BRA__8__KET____DOT__u0__q;
    vlSelf->flipflop_bloque__02Eq[9U] = vlSelf->flipflop_bloque__DOT____Vcellout__genblk1__BRA__9__KET____DOT__u0__q;
    vlSelf->flipflop_bloque__02Eq[0xaU] = vlSelf->flipflop_bloque__DOT____Vcellout__genblk1__BRA__10__KET____DOT__u0__q;
    vlSelf->flipflop_bloque__02Eq[0xbU] = vlSelf->flipflop_bloque__DOT____Vcellout__genblk1__BRA__11__KET____DOT__u0__q;
    vlSelf->flipflop_bloque__02Eq[0xcU] = vlSelf->flipflop_bloque__DOT____Vcellout__genblk1__BRA__12__KET____DOT__u0__q;
    vlSelf->flipflop_bloque__02Eq[0xdU] = vlSelf->flipflop_bloque__DOT____Vcellout__genblk1__BRA__13__KET____DOT__u0__q;
    vlSelf->flipflop_bloque__02Eq[0xeU] = vlSelf->flipflop_bloque__DOT____Vcellout__genblk1__BRA__14__KET____DOT__u0__q;
    vlSelf->flipflop_bloque__02Eq[0xfU] = vlSelf->flipflop_bloque__DOT____Vcellout__genblk1__BRA__15__KET____DOT__u0__q;
}

VL_ATTR_COLD void Vflipflop_uno___024root___eval_triggers__stl(Vflipflop_uno___024root* vlSelf);

VL_ATTR_COLD bool Vflipflop_uno___024root___eval_phase__stl(Vflipflop_uno___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vflipflop_uno__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vflipflop_uno___024root___eval_phase__stl\n"); );
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    Vflipflop_uno___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelf->__VstlTriggered.any();
    if (__VstlExecute) {
        Vflipflop_uno___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vflipflop_uno___024root___dump_triggers__act(Vflipflop_uno___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vflipflop_uno__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vflipflop_uno___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ vlSelf->__VactTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge flipflop_vector.clk or posedge flipflop_vector.rst)\n");
    }
    if ((2ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @(posedge flipflop_bloque.clk or posedge flipflop_bloque.rst)\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vflipflop_uno___024root___dump_triggers__nba(Vflipflop_uno___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vflipflop_uno__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vflipflop_uno___024root___dump_triggers__nba\n"); );
    // Body
    if ((1U & (~ vlSelf->__VnbaTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge flipflop_vector.clk or posedge flipflop_vector.rst)\n");
    }
    if ((2ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @(posedge flipflop_bloque.clk or posedge flipflop_bloque.rst)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vflipflop_uno___024root___ctor_var_reset(Vflipflop_uno___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vflipflop_uno__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vflipflop_uno___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->flipflop_vector__02Eclk = VL_RAND_RESET_I(1);
    vlSelf->flipflop_vector__02Erst = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->flipflop_vector__02Ed[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->flipflop_vector__02Eq[__Vi0] = VL_RAND_RESET_I(1);
    }
    vlSelf->flipflop_bloque__02Eclk = VL_RAND_RESET_I(1);
    vlSelf->flipflop_bloque__02Erst = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->flipflop_bloque__02Ed[__Vi0] = VL_RAND_RESET_I(16);
    }
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->flipflop_bloque__02Eq[__Vi0] = VL_RAND_RESET_I(16);
    }
    vlSelf->flipflop_vector__DOT____Vcellout__genblk1__BRA__0__KET____DOT__u0__q = VL_RAND_RESET_I(1);
    vlSelf->flipflop_vector__DOT____Vcellout__genblk1__BRA__1__KET____DOT__u0__q = VL_RAND_RESET_I(1);
    vlSelf->flipflop_vector__DOT____Vcellout__genblk1__BRA__2__KET____DOT__u0__q = VL_RAND_RESET_I(1);
    vlSelf->flipflop_vector__DOT____Vcellout__genblk1__BRA__3__KET____DOT__u0__q = VL_RAND_RESET_I(1);
    vlSelf->flipflop_vector__DOT____Vcellout__genblk1__BRA__4__KET____DOT__u0__q = VL_RAND_RESET_I(1);
    vlSelf->flipflop_vector__DOT____Vcellout__genblk1__BRA__5__KET____DOT__u0__q = VL_RAND_RESET_I(1);
    vlSelf->flipflop_vector__DOT____Vcellout__genblk1__BRA__6__KET____DOT__u0__q = VL_RAND_RESET_I(1);
    vlSelf->flipflop_vector__DOT____Vcellout__genblk1__BRA__7__KET____DOT__u0__q = VL_RAND_RESET_I(1);
    vlSelf->flipflop_vector__DOT____Vcellout__genblk1__BRA__8__KET____DOT__u0__q = VL_RAND_RESET_I(1);
    vlSelf->flipflop_vector__DOT____Vcellout__genblk1__BRA__9__KET____DOT__u0__q = VL_RAND_RESET_I(1);
    vlSelf->flipflop_vector__DOT____Vcellout__genblk1__BRA__10__KET____DOT__u0__q = VL_RAND_RESET_I(1);
    vlSelf->flipflop_vector__DOT____Vcellout__genblk1__BRA__11__KET____DOT__u0__q = VL_RAND_RESET_I(1);
    vlSelf->flipflop_vector__DOT____Vcellout__genblk1__BRA__12__KET____DOT__u0__q = VL_RAND_RESET_I(1);
    vlSelf->flipflop_vector__DOT____Vcellout__genblk1__BRA__13__KET____DOT__u0__q = VL_RAND_RESET_I(1);
    vlSelf->flipflop_vector__DOT____Vcellout__genblk1__BRA__14__KET____DOT__u0__q = VL_RAND_RESET_I(1);
    vlSelf->flipflop_vector__DOT____Vcellout__genblk1__BRA__15__KET____DOT__u0__q = VL_RAND_RESET_I(1);
    vlSelf->flipflop_bloque__DOT____Vcellout__genblk1__BRA__0__KET____DOT__u0__q = VL_RAND_RESET_I(16);
    vlSelf->flipflop_bloque__DOT____Vcellout__genblk1__BRA__1__KET____DOT__u0__q = VL_RAND_RESET_I(16);
    vlSelf->flipflop_bloque__DOT____Vcellout__genblk1__BRA__2__KET____DOT__u0__q = VL_RAND_RESET_I(16);
    vlSelf->flipflop_bloque__DOT____Vcellout__genblk1__BRA__3__KET____DOT__u0__q = VL_RAND_RESET_I(16);
    vlSelf->flipflop_bloque__DOT____Vcellout__genblk1__BRA__4__KET____DOT__u0__q = VL_RAND_RESET_I(16);
    vlSelf->flipflop_bloque__DOT____Vcellout__genblk1__BRA__5__KET____DOT__u0__q = VL_RAND_RESET_I(16);
    vlSelf->flipflop_bloque__DOT____Vcellout__genblk1__BRA__6__KET____DOT__u0__q = VL_RAND_RESET_I(16);
    vlSelf->flipflop_bloque__DOT____Vcellout__genblk1__BRA__7__KET____DOT__u0__q = VL_RAND_RESET_I(16);
    vlSelf->flipflop_bloque__DOT____Vcellout__genblk1__BRA__8__KET____DOT__u0__q = VL_RAND_RESET_I(16);
    vlSelf->flipflop_bloque__DOT____Vcellout__genblk1__BRA__9__KET____DOT__u0__q = VL_RAND_RESET_I(16);
    vlSelf->flipflop_bloque__DOT____Vcellout__genblk1__BRA__10__KET____DOT__u0__q = VL_RAND_RESET_I(16);
    vlSelf->flipflop_bloque__DOT____Vcellout__genblk1__BRA__11__KET____DOT__u0__q = VL_RAND_RESET_I(16);
    vlSelf->flipflop_bloque__DOT____Vcellout__genblk1__BRA__12__KET____DOT__u0__q = VL_RAND_RESET_I(16);
    vlSelf->flipflop_bloque__DOT____Vcellout__genblk1__BRA__13__KET____DOT__u0__q = VL_RAND_RESET_I(16);
    vlSelf->flipflop_bloque__DOT____Vcellout__genblk1__BRA__14__KET____DOT__u0__q = VL_RAND_RESET_I(16);
    vlSelf->flipflop_bloque__DOT____Vcellout__genblk1__BRA__15__KET____DOT__u0__q = VL_RAND_RESET_I(16);
    vlSelf->__Vtrigprevexpr___TOP__flipflop_vector__02Eclk__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__flipflop_vector__02Erst__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__flipflop_bloque__02Eclk__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__flipflop_bloque__02Erst__0 = VL_RAND_RESET_I(1);
}
