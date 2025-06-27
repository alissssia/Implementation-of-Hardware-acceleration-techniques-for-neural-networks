// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vmecanismo_flipping_flipflop.h for the primary calling header

#include "Vmecanismo_flipping_flipflop__pch.h"
#include "Vmecanismo_flipping_flipflop___024root.h"

VL_ATTR_COLD void Vmecanismo_flipping_flipflop___024root___eval_static(Vmecanismo_flipping_flipflop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vmecanismo_flipping_flipflop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmecanismo_flipping_flipflop___024root___eval_static\n"); );
}

VL_ATTR_COLD void Vmecanismo_flipping_flipflop___024root___eval_initial(Vmecanismo_flipping_flipflop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vmecanismo_flipping_flipflop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmecanismo_flipping_flipflop___024root___eval_initial\n"); );
    // Body
    vlSelf->__Vtrigprevexpr___TOP__clk__0 = vlSelf->clk;
    vlSelf->__Vtrigprevexpr___TOP__rst__0 = vlSelf->rst;
}

VL_ATTR_COLD void Vmecanismo_flipping_flipflop___024root___eval_final(Vmecanismo_flipping_flipflop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vmecanismo_flipping_flipflop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmecanismo_flipping_flipflop___024root___eval_final\n"); );
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vmecanismo_flipping_flipflop___024root___dump_triggers__stl(Vmecanismo_flipping_flipflop___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vmecanismo_flipping_flipflop___024root___eval_phase__stl(Vmecanismo_flipping_flipflop___024root* vlSelf);

VL_ATTR_COLD void Vmecanismo_flipping_flipflop___024root___eval_settle(Vmecanismo_flipping_flipflop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vmecanismo_flipping_flipflop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmecanismo_flipping_flipflop___024root___eval_settle\n"); );
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
            Vmecanismo_flipping_flipflop___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("mecanismo_flipping_flipflop.sv", 4, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (Vmecanismo_flipping_flipflop___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelf->__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vmecanismo_flipping_flipflop___024root___dump_triggers__stl(Vmecanismo_flipping_flipflop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vmecanismo_flipping_flipflop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmecanismo_flipping_flipflop___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ vlSelf->__VstlTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vmecanismo_flipping_flipflop___024root___stl_sequent__TOP__0(Vmecanismo_flipping_flipflop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vmecanismo_flipping_flipflop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmecanismo_flipping_flipflop___024root___stl_sequent__TOP__0\n"); );
    // Body
    vlSelf->salida_flip_flop_con_activaciones_procesadas[0U] 
        = vlSelf->mecanismo_flipping_flipflop__DOT__u3__DOT____Vcellout__genblk1__BRA__0__KET____DOT__u0__q;
    vlSelf->salida_flip_flop_con_activaciones_procesadas[1U] 
        = vlSelf->mecanismo_flipping_flipflop__DOT__u3__DOT____Vcellout__genblk1__BRA__1__KET____DOT__u0__q;
    vlSelf->salida_flip_flop_con_activaciones_procesadas[2U] 
        = vlSelf->mecanismo_flipping_flipflop__DOT__u3__DOT____Vcellout__genblk1__BRA__2__KET____DOT__u0__q;
    vlSelf->salida_flip_flop_con_activaciones_procesadas[3U] 
        = vlSelf->mecanismo_flipping_flipflop__DOT__u3__DOT____Vcellout__genblk1__BRA__3__KET____DOT__u0__q;
    vlSelf->salida_flip_flop_con_activaciones_procesadas[4U] 
        = vlSelf->mecanismo_flipping_flipflop__DOT__u3__DOT____Vcellout__genblk1__BRA__4__KET____DOT__u0__q;
    vlSelf->salida_flip_flop_con_activaciones_procesadas[5U] 
        = vlSelf->mecanismo_flipping_flipflop__DOT__u3__DOT____Vcellout__genblk1__BRA__5__KET____DOT__u0__q;
    vlSelf->salida_flip_flop_con_activaciones_procesadas[6U] 
        = vlSelf->mecanismo_flipping_flipflop__DOT__u3__DOT____Vcellout__genblk1__BRA__6__KET____DOT__u0__q;
    vlSelf->salida_flip_flop_con_activaciones_procesadas[7U] 
        = vlSelf->mecanismo_flipping_flipflop__DOT__u3__DOT____Vcellout__genblk1__BRA__7__KET____DOT__u0__q;
    vlSelf->salida_flip_flop_con_activaciones_procesadas[8U] 
        = vlSelf->mecanismo_flipping_flipflop__DOT__u3__DOT____Vcellout__genblk1__BRA__8__KET____DOT__u0__q;
    vlSelf->salida_flip_flop_con_activaciones_procesadas[9U] 
        = vlSelf->mecanismo_flipping_flipflop__DOT__u3__DOT____Vcellout__genblk1__BRA__9__KET____DOT__u0__q;
    vlSelf->salida_flip_flop_con_activaciones_procesadas[0xaU] 
        = vlSelf->mecanismo_flipping_flipflop__DOT__u3__DOT____Vcellout__genblk1__BRA__10__KET____DOT__u0__q;
    vlSelf->salida_flip_flop_con_activaciones_procesadas[0xbU] 
        = vlSelf->mecanismo_flipping_flipflop__DOT__u3__DOT____Vcellout__genblk1__BRA__11__KET____DOT__u0__q;
    vlSelf->salida_flip_flop_con_activaciones_procesadas[0xcU] 
        = vlSelf->mecanismo_flipping_flipflop__DOT__u3__DOT____Vcellout__genblk1__BRA__12__KET____DOT__u0__q;
    vlSelf->salida_flip_flop_con_activaciones_procesadas[0xdU] 
        = vlSelf->mecanismo_flipping_flipflop__DOT__u3__DOT____Vcellout__genblk1__BRA__13__KET____DOT__u0__q;
    vlSelf->salida_flip_flop_con_activaciones_procesadas[0xeU] 
        = vlSelf->mecanismo_flipping_flipflop__DOT__u3__DOT____Vcellout__genblk1__BRA__14__KET____DOT__u0__q;
    vlSelf->salida_flip_flop_con_activaciones_procesadas[0xfU] 
        = vlSelf->mecanismo_flipping_flipflop__DOT__u3__DOT____Vcellout__genblk1__BRA__15__KET____DOT__u0__q;
}

VL_ATTR_COLD void Vmecanismo_flipping_flipflop___024root___eval_triggers__stl(Vmecanismo_flipping_flipflop___024root* vlSelf);
VL_ATTR_COLD void Vmecanismo_flipping_flipflop___024root___eval_stl(Vmecanismo_flipping_flipflop___024root* vlSelf);

VL_ATTR_COLD bool Vmecanismo_flipping_flipflop___024root___eval_phase__stl(Vmecanismo_flipping_flipflop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vmecanismo_flipping_flipflop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmecanismo_flipping_flipflop___024root___eval_phase__stl\n"); );
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    Vmecanismo_flipping_flipflop___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelf->__VstlTriggered.any();
    if (__VstlExecute) {
        Vmecanismo_flipping_flipflop___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vmecanismo_flipping_flipflop___024root___dump_triggers__act(Vmecanismo_flipping_flipflop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vmecanismo_flipping_flipflop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmecanismo_flipping_flipflop___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ vlSelf->__VactTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge clk or posedge rst)\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vmecanismo_flipping_flipflop___024root___dump_triggers__nba(Vmecanismo_flipping_flipflop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vmecanismo_flipping_flipflop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmecanismo_flipping_flipflop___024root___dump_triggers__nba\n"); );
    // Body
    if ((1U & (~ vlSelf->__VnbaTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge clk or posedge rst)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vmecanismo_flipping_flipflop___024root___ctor_var_reset(Vmecanismo_flipping_flipflop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vmecanismo_flipping_flipflop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmecanismo_flipping_flipflop___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->rst = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->input_f_bits[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->input_activaciones[__Vi0] = VL_RAND_RESET_I(16);
    }
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->salida_flip_flop_con_activaciones_procesadas[__Vi0] = VL_RAND_RESET_I(16);
    }
    vlSelf->mecanismo_flipping_flipflop__DOT__u1__DOT____Vcellout__genblk1__BRA__0__KET____DOT__u0__q = VL_RAND_RESET_I(1);
    vlSelf->mecanismo_flipping_flipflop__DOT__u1__DOT____Vcellout__genblk1__BRA__1__KET____DOT__u0__q = VL_RAND_RESET_I(1);
    vlSelf->mecanismo_flipping_flipflop__DOT__u1__DOT____Vcellout__genblk1__BRA__2__KET____DOT__u0__q = VL_RAND_RESET_I(1);
    vlSelf->mecanismo_flipping_flipflop__DOT__u1__DOT____Vcellout__genblk1__BRA__3__KET____DOT__u0__q = VL_RAND_RESET_I(1);
    vlSelf->mecanismo_flipping_flipflop__DOT__u1__DOT____Vcellout__genblk1__BRA__4__KET____DOT__u0__q = VL_RAND_RESET_I(1);
    vlSelf->mecanismo_flipping_flipflop__DOT__u1__DOT____Vcellout__genblk1__BRA__5__KET____DOT__u0__q = VL_RAND_RESET_I(1);
    vlSelf->mecanismo_flipping_flipflop__DOT__u1__DOT____Vcellout__genblk1__BRA__6__KET____DOT__u0__q = VL_RAND_RESET_I(1);
    vlSelf->mecanismo_flipping_flipflop__DOT__u1__DOT____Vcellout__genblk1__BRA__7__KET____DOT__u0__q = VL_RAND_RESET_I(1);
    vlSelf->mecanismo_flipping_flipflop__DOT__u1__DOT____Vcellout__genblk1__BRA__8__KET____DOT__u0__q = VL_RAND_RESET_I(1);
    vlSelf->mecanismo_flipping_flipflop__DOT__u1__DOT____Vcellout__genblk1__BRA__9__KET____DOT__u0__q = VL_RAND_RESET_I(1);
    vlSelf->mecanismo_flipping_flipflop__DOT__u1__DOT____Vcellout__genblk1__BRA__10__KET____DOT__u0__q = VL_RAND_RESET_I(1);
    vlSelf->mecanismo_flipping_flipflop__DOT__u1__DOT____Vcellout__genblk1__BRA__11__KET____DOT__u0__q = VL_RAND_RESET_I(1);
    vlSelf->mecanismo_flipping_flipflop__DOT__u1__DOT____Vcellout__genblk1__BRA__12__KET____DOT__u0__q = VL_RAND_RESET_I(1);
    vlSelf->mecanismo_flipping_flipflop__DOT__u1__DOT____Vcellout__genblk1__BRA__13__KET____DOT__u0__q = VL_RAND_RESET_I(1);
    vlSelf->mecanismo_flipping_flipflop__DOT__u1__DOT____Vcellout__genblk1__BRA__14__KET____DOT__u0__q = VL_RAND_RESET_I(1);
    vlSelf->mecanismo_flipping_flipflop__DOT__u1__DOT____Vcellout__genblk1__BRA__15__KET____DOT__u0__q = VL_RAND_RESET_I(1);
    vlSelf->mecanismo_flipping_flipflop__DOT__u0__DOT____Vcellout__genblk1__BRA__0__KET____DOT__u0__q = VL_RAND_RESET_I(16);
    vlSelf->mecanismo_flipping_flipflop__DOT__u0__DOT____Vcellout__genblk1__BRA__1__KET____DOT__u0__q = VL_RAND_RESET_I(16);
    vlSelf->mecanismo_flipping_flipflop__DOT__u0__DOT____Vcellout__genblk1__BRA__2__KET____DOT__u0__q = VL_RAND_RESET_I(16);
    vlSelf->mecanismo_flipping_flipflop__DOT__u0__DOT____Vcellout__genblk1__BRA__3__KET____DOT__u0__q = VL_RAND_RESET_I(16);
    vlSelf->mecanismo_flipping_flipflop__DOT__u0__DOT____Vcellout__genblk1__BRA__4__KET____DOT__u0__q = VL_RAND_RESET_I(16);
    vlSelf->mecanismo_flipping_flipflop__DOT__u0__DOT____Vcellout__genblk1__BRA__5__KET____DOT__u0__q = VL_RAND_RESET_I(16);
    vlSelf->mecanismo_flipping_flipflop__DOT__u0__DOT____Vcellout__genblk1__BRA__6__KET____DOT__u0__q = VL_RAND_RESET_I(16);
    vlSelf->mecanismo_flipping_flipflop__DOT__u0__DOT____Vcellout__genblk1__BRA__7__KET____DOT__u0__q = VL_RAND_RESET_I(16);
    vlSelf->mecanismo_flipping_flipflop__DOT__u0__DOT____Vcellout__genblk1__BRA__8__KET____DOT__u0__q = VL_RAND_RESET_I(16);
    vlSelf->mecanismo_flipping_flipflop__DOT__u0__DOT____Vcellout__genblk1__BRA__9__KET____DOT__u0__q = VL_RAND_RESET_I(16);
    vlSelf->mecanismo_flipping_flipflop__DOT__u0__DOT____Vcellout__genblk1__BRA__10__KET____DOT__u0__q = VL_RAND_RESET_I(16);
    vlSelf->mecanismo_flipping_flipflop__DOT__u0__DOT____Vcellout__genblk1__BRA__11__KET____DOT__u0__q = VL_RAND_RESET_I(16);
    vlSelf->mecanismo_flipping_flipflop__DOT__u0__DOT____Vcellout__genblk1__BRA__12__KET____DOT__u0__q = VL_RAND_RESET_I(16);
    vlSelf->mecanismo_flipping_flipflop__DOT__u0__DOT____Vcellout__genblk1__BRA__13__KET____DOT__u0__q = VL_RAND_RESET_I(16);
    vlSelf->mecanismo_flipping_flipflop__DOT__u0__DOT____Vcellout__genblk1__BRA__14__KET____DOT__u0__q = VL_RAND_RESET_I(16);
    vlSelf->mecanismo_flipping_flipflop__DOT__u0__DOT____Vcellout__genblk1__BRA__15__KET____DOT__u0__q = VL_RAND_RESET_I(16);
    vlSelf->mecanismo_flipping_flipflop__DOT__u3__DOT____Vcellout__genblk1__BRA__0__KET____DOT__u0__q = VL_RAND_RESET_I(16);
    vlSelf->mecanismo_flipping_flipflop__DOT__u3__DOT____Vcellout__genblk1__BRA__1__KET____DOT__u0__q = VL_RAND_RESET_I(16);
    vlSelf->mecanismo_flipping_flipflop__DOT__u3__DOT____Vcellout__genblk1__BRA__2__KET____DOT__u0__q = VL_RAND_RESET_I(16);
    vlSelf->mecanismo_flipping_flipflop__DOT__u3__DOT____Vcellout__genblk1__BRA__3__KET____DOT__u0__q = VL_RAND_RESET_I(16);
    vlSelf->mecanismo_flipping_flipflop__DOT__u3__DOT____Vcellout__genblk1__BRA__4__KET____DOT__u0__q = VL_RAND_RESET_I(16);
    vlSelf->mecanismo_flipping_flipflop__DOT__u3__DOT____Vcellout__genblk1__BRA__5__KET____DOT__u0__q = VL_RAND_RESET_I(16);
    vlSelf->mecanismo_flipping_flipflop__DOT__u3__DOT____Vcellout__genblk1__BRA__6__KET____DOT__u0__q = VL_RAND_RESET_I(16);
    vlSelf->mecanismo_flipping_flipflop__DOT__u3__DOT____Vcellout__genblk1__BRA__7__KET____DOT__u0__q = VL_RAND_RESET_I(16);
    vlSelf->mecanismo_flipping_flipflop__DOT__u3__DOT____Vcellout__genblk1__BRA__8__KET____DOT__u0__q = VL_RAND_RESET_I(16);
    vlSelf->mecanismo_flipping_flipflop__DOT__u3__DOT____Vcellout__genblk1__BRA__9__KET____DOT__u0__q = VL_RAND_RESET_I(16);
    vlSelf->mecanismo_flipping_flipflop__DOT__u3__DOT____Vcellout__genblk1__BRA__10__KET____DOT__u0__q = VL_RAND_RESET_I(16);
    vlSelf->mecanismo_flipping_flipflop__DOT__u3__DOT____Vcellout__genblk1__BRA__11__KET____DOT__u0__q = VL_RAND_RESET_I(16);
    vlSelf->mecanismo_flipping_flipflop__DOT__u3__DOT____Vcellout__genblk1__BRA__12__KET____DOT__u0__q = VL_RAND_RESET_I(16);
    vlSelf->mecanismo_flipping_flipflop__DOT__u3__DOT____Vcellout__genblk1__BRA__13__KET____DOT__u0__q = VL_RAND_RESET_I(16);
    vlSelf->mecanismo_flipping_flipflop__DOT__u3__DOT____Vcellout__genblk1__BRA__14__KET____DOT__u0__q = VL_RAND_RESET_I(16);
    vlSelf->mecanismo_flipping_flipflop__DOT__u3__DOT____Vcellout__genblk1__BRA__15__KET____DOT__u0__q = VL_RAND_RESET_I(16);
    vlSelf->__Vtrigprevexpr___TOP__clk__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__rst__0 = VL_RAND_RESET_I(1);
}
