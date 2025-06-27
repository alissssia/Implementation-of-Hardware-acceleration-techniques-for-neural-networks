// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vflipflop_uno.h for the primary calling header

#include "Vflipflop_uno__pch.h"
#include "Vflipflop_uno___024root.h"

void Vflipflop_uno___024root___eval_act(Vflipflop_uno___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vflipflop_uno__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vflipflop_uno___024root___eval_act\n"); );
}

void Vflipflop_uno___024root___nba_sequent__TOP__0(Vflipflop_uno___024root* vlSelf);
void Vflipflop_uno___024root___nba_sequent__TOP__1(Vflipflop_uno___024root* vlSelf);

void Vflipflop_uno___024root___eval_nba(Vflipflop_uno___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vflipflop_uno__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vflipflop_uno___024root___eval_nba\n"); );
    // Body
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vflipflop_uno___024root___nba_sequent__TOP__0(vlSelf);
    }
    if ((2ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vflipflop_uno___024root___nba_sequent__TOP__1(vlSelf);
    }
}

VL_INLINE_OPT void Vflipflop_uno___024root___nba_sequent__TOP__0(Vflipflop_uno___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vflipflop_uno__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vflipflop_uno___024root___nba_sequent__TOP__0\n"); );
    // Body
    vlSelf->flipflop_vector__DOT____Vcellout__genblk1__BRA__15__KET____DOT__u0__q 
        = ((1U & (~ (IData)(vlSelf->flipflop_vector__02Erst))) 
           && vlSelf->flipflop_vector__02Ed[0xfU]);
    vlSelf->flipflop_vector__DOT____Vcellout__genblk1__BRA__14__KET____DOT__u0__q 
        = ((1U & (~ (IData)(vlSelf->flipflop_vector__02Erst))) 
           && vlSelf->flipflop_vector__02Ed[0xeU]);
    vlSelf->flipflop_vector__DOT____Vcellout__genblk1__BRA__13__KET____DOT__u0__q 
        = ((1U & (~ (IData)(vlSelf->flipflop_vector__02Erst))) 
           && vlSelf->flipflop_vector__02Ed[0xdU]);
    vlSelf->flipflop_vector__DOT____Vcellout__genblk1__BRA__12__KET____DOT__u0__q 
        = ((1U & (~ (IData)(vlSelf->flipflop_vector__02Erst))) 
           && vlSelf->flipflop_vector__02Ed[0xcU]);
    vlSelf->flipflop_vector__DOT____Vcellout__genblk1__BRA__11__KET____DOT__u0__q 
        = ((1U & (~ (IData)(vlSelf->flipflop_vector__02Erst))) 
           && vlSelf->flipflop_vector__02Ed[0xbU]);
    vlSelf->flipflop_vector__DOT____Vcellout__genblk1__BRA__10__KET____DOT__u0__q 
        = ((1U & (~ (IData)(vlSelf->flipflop_vector__02Erst))) 
           && vlSelf->flipflop_vector__02Ed[0xaU]);
    vlSelf->flipflop_vector__DOT____Vcellout__genblk1__BRA__9__KET____DOT__u0__q 
        = ((1U & (~ (IData)(vlSelf->flipflop_vector__02Erst))) 
           && vlSelf->flipflop_vector__02Ed[9U]);
    vlSelf->flipflop_vector__DOT____Vcellout__genblk1__BRA__8__KET____DOT__u0__q 
        = ((1U & (~ (IData)(vlSelf->flipflop_vector__02Erst))) 
           && vlSelf->flipflop_vector__02Ed[8U]);
    vlSelf->flipflop_vector__DOT____Vcellout__genblk1__BRA__7__KET____DOT__u0__q 
        = ((1U & (~ (IData)(vlSelf->flipflop_vector__02Erst))) 
           && vlSelf->flipflop_vector__02Ed[7U]);
    vlSelf->flipflop_vector__DOT____Vcellout__genblk1__BRA__6__KET____DOT__u0__q 
        = ((1U & (~ (IData)(vlSelf->flipflop_vector__02Erst))) 
           && vlSelf->flipflop_vector__02Ed[6U]);
    vlSelf->flipflop_vector__DOT____Vcellout__genblk1__BRA__5__KET____DOT__u0__q 
        = ((1U & (~ (IData)(vlSelf->flipflop_vector__02Erst))) 
           && vlSelf->flipflop_vector__02Ed[5U]);
    vlSelf->flipflop_vector__DOT____Vcellout__genblk1__BRA__4__KET____DOT__u0__q 
        = ((1U & (~ (IData)(vlSelf->flipflop_vector__02Erst))) 
           && vlSelf->flipflop_vector__02Ed[4U]);
    vlSelf->flipflop_vector__DOT____Vcellout__genblk1__BRA__3__KET____DOT__u0__q 
        = ((1U & (~ (IData)(vlSelf->flipflop_vector__02Erst))) 
           && vlSelf->flipflop_vector__02Ed[3U]);
    vlSelf->flipflop_vector__DOT____Vcellout__genblk1__BRA__2__KET____DOT__u0__q 
        = ((1U & (~ (IData)(vlSelf->flipflop_vector__02Erst))) 
           && vlSelf->flipflop_vector__02Ed[2U]);
    vlSelf->flipflop_vector__DOT____Vcellout__genblk1__BRA__1__KET____DOT__u0__q 
        = ((1U & (~ (IData)(vlSelf->flipflop_vector__02Erst))) 
           && vlSelf->flipflop_vector__02Ed[1U]);
    vlSelf->flipflop_vector__DOT____Vcellout__genblk1__BRA__0__KET____DOT__u0__q 
        = ((1U & (~ (IData)(vlSelf->flipflop_vector__02Erst))) 
           && vlSelf->flipflop_vector__02Ed[0U]);
    vlSelf->flipflop_vector__02Eq[0xfU] = vlSelf->flipflop_vector__DOT____Vcellout__genblk1__BRA__15__KET____DOT__u0__q;
    vlSelf->flipflop_vector__02Eq[0xeU] = vlSelf->flipflop_vector__DOT____Vcellout__genblk1__BRA__14__KET____DOT__u0__q;
    vlSelf->flipflop_vector__02Eq[0xdU] = vlSelf->flipflop_vector__DOT____Vcellout__genblk1__BRA__13__KET____DOT__u0__q;
    vlSelf->flipflop_vector__02Eq[0xcU] = vlSelf->flipflop_vector__DOT____Vcellout__genblk1__BRA__12__KET____DOT__u0__q;
    vlSelf->flipflop_vector__02Eq[0xbU] = vlSelf->flipflop_vector__DOT____Vcellout__genblk1__BRA__11__KET____DOT__u0__q;
    vlSelf->flipflop_vector__02Eq[0xaU] = vlSelf->flipflop_vector__DOT____Vcellout__genblk1__BRA__10__KET____DOT__u0__q;
    vlSelf->flipflop_vector__02Eq[9U] = vlSelf->flipflop_vector__DOT____Vcellout__genblk1__BRA__9__KET____DOT__u0__q;
    vlSelf->flipflop_vector__02Eq[8U] = vlSelf->flipflop_vector__DOT____Vcellout__genblk1__BRA__8__KET____DOT__u0__q;
    vlSelf->flipflop_vector__02Eq[7U] = vlSelf->flipflop_vector__DOT____Vcellout__genblk1__BRA__7__KET____DOT__u0__q;
    vlSelf->flipflop_vector__02Eq[6U] = vlSelf->flipflop_vector__DOT____Vcellout__genblk1__BRA__6__KET____DOT__u0__q;
    vlSelf->flipflop_vector__02Eq[5U] = vlSelf->flipflop_vector__DOT____Vcellout__genblk1__BRA__5__KET____DOT__u0__q;
    vlSelf->flipflop_vector__02Eq[4U] = vlSelf->flipflop_vector__DOT____Vcellout__genblk1__BRA__4__KET____DOT__u0__q;
    vlSelf->flipflop_vector__02Eq[3U] = vlSelf->flipflop_vector__DOT____Vcellout__genblk1__BRA__3__KET____DOT__u0__q;
    vlSelf->flipflop_vector__02Eq[2U] = vlSelf->flipflop_vector__DOT____Vcellout__genblk1__BRA__2__KET____DOT__u0__q;
    vlSelf->flipflop_vector__02Eq[1U] = vlSelf->flipflop_vector__DOT____Vcellout__genblk1__BRA__1__KET____DOT__u0__q;
    vlSelf->flipflop_vector__02Eq[0U] = vlSelf->flipflop_vector__DOT____Vcellout__genblk1__BRA__0__KET____DOT__u0__q;
}

VL_INLINE_OPT void Vflipflop_uno___024root___nba_sequent__TOP__1(Vflipflop_uno___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vflipflop_uno__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vflipflop_uno___024root___nba_sequent__TOP__1\n"); );
    // Body
    if (vlSelf->flipflop_bloque__02Erst) {
        vlSelf->flipflop_bloque__DOT____Vcellout__genblk1__BRA__15__KET____DOT__u0__q = 0U;
        vlSelf->flipflop_bloque__DOT____Vcellout__genblk1__BRA__14__KET____DOT__u0__q = 0U;
        vlSelf->flipflop_bloque__DOT____Vcellout__genblk1__BRA__13__KET____DOT__u0__q = 0U;
        vlSelf->flipflop_bloque__DOT____Vcellout__genblk1__BRA__12__KET____DOT__u0__q = 0U;
        vlSelf->flipflop_bloque__DOT____Vcellout__genblk1__BRA__11__KET____DOT__u0__q = 0U;
        vlSelf->flipflop_bloque__DOT____Vcellout__genblk1__BRA__10__KET____DOT__u0__q = 0U;
        vlSelf->flipflop_bloque__DOT____Vcellout__genblk1__BRA__9__KET____DOT__u0__q = 0U;
        vlSelf->flipflop_bloque__DOT____Vcellout__genblk1__BRA__8__KET____DOT__u0__q = 0U;
        vlSelf->flipflop_bloque__DOT____Vcellout__genblk1__BRA__7__KET____DOT__u0__q = 0U;
        vlSelf->flipflop_bloque__DOT____Vcellout__genblk1__BRA__6__KET____DOT__u0__q = 0U;
        vlSelf->flipflop_bloque__DOT____Vcellout__genblk1__BRA__5__KET____DOT__u0__q = 0U;
        vlSelf->flipflop_bloque__DOT____Vcellout__genblk1__BRA__4__KET____DOT__u0__q = 0U;
        vlSelf->flipflop_bloque__DOT____Vcellout__genblk1__BRA__3__KET____DOT__u0__q = 0U;
        vlSelf->flipflop_bloque__DOT____Vcellout__genblk1__BRA__2__KET____DOT__u0__q = 0U;
        vlSelf->flipflop_bloque__DOT____Vcellout__genblk1__BRA__1__KET____DOT__u0__q = 0U;
        vlSelf->flipflop_bloque__DOT____Vcellout__genblk1__BRA__0__KET____DOT__u0__q = 0U;
    } else {
        vlSelf->flipflop_bloque__DOT____Vcellout__genblk1__BRA__15__KET____DOT__u0__q 
            = vlSelf->flipflop_bloque__02Ed[0xfU];
        vlSelf->flipflop_bloque__DOT____Vcellout__genblk1__BRA__14__KET____DOT__u0__q 
            = vlSelf->flipflop_bloque__02Ed[0xeU];
        vlSelf->flipflop_bloque__DOT____Vcellout__genblk1__BRA__13__KET____DOT__u0__q 
            = vlSelf->flipflop_bloque__02Ed[0xdU];
        vlSelf->flipflop_bloque__DOT____Vcellout__genblk1__BRA__12__KET____DOT__u0__q 
            = vlSelf->flipflop_bloque__02Ed[0xcU];
        vlSelf->flipflop_bloque__DOT____Vcellout__genblk1__BRA__11__KET____DOT__u0__q 
            = vlSelf->flipflop_bloque__02Ed[0xbU];
        vlSelf->flipflop_bloque__DOT____Vcellout__genblk1__BRA__10__KET____DOT__u0__q 
            = vlSelf->flipflop_bloque__02Ed[0xaU];
        vlSelf->flipflop_bloque__DOT____Vcellout__genblk1__BRA__9__KET____DOT__u0__q 
            = vlSelf->flipflop_bloque__02Ed[9U];
        vlSelf->flipflop_bloque__DOT____Vcellout__genblk1__BRA__8__KET____DOT__u0__q 
            = vlSelf->flipflop_bloque__02Ed[8U];
        vlSelf->flipflop_bloque__DOT____Vcellout__genblk1__BRA__7__KET____DOT__u0__q 
            = vlSelf->flipflop_bloque__02Ed[7U];
        vlSelf->flipflop_bloque__DOT____Vcellout__genblk1__BRA__6__KET____DOT__u0__q 
            = vlSelf->flipflop_bloque__02Ed[6U];
        vlSelf->flipflop_bloque__DOT____Vcellout__genblk1__BRA__5__KET____DOT__u0__q 
            = vlSelf->flipflop_bloque__02Ed[5U];
        vlSelf->flipflop_bloque__DOT____Vcellout__genblk1__BRA__4__KET____DOT__u0__q 
            = vlSelf->flipflop_bloque__02Ed[4U];
        vlSelf->flipflop_bloque__DOT____Vcellout__genblk1__BRA__3__KET____DOT__u0__q 
            = vlSelf->flipflop_bloque__02Ed[3U];
        vlSelf->flipflop_bloque__DOT____Vcellout__genblk1__BRA__2__KET____DOT__u0__q 
            = vlSelf->flipflop_bloque__02Ed[2U];
        vlSelf->flipflop_bloque__DOT____Vcellout__genblk1__BRA__1__KET____DOT__u0__q 
            = vlSelf->flipflop_bloque__02Ed[1U];
        vlSelf->flipflop_bloque__DOT____Vcellout__genblk1__BRA__0__KET____DOT__u0__q 
            = vlSelf->flipflop_bloque__02Ed[0U];
    }
    vlSelf->flipflop_bloque__02Eq[0xfU] = vlSelf->flipflop_bloque__DOT____Vcellout__genblk1__BRA__15__KET____DOT__u0__q;
    vlSelf->flipflop_bloque__02Eq[0xeU] = vlSelf->flipflop_bloque__DOT____Vcellout__genblk1__BRA__14__KET____DOT__u0__q;
    vlSelf->flipflop_bloque__02Eq[0xdU] = vlSelf->flipflop_bloque__DOT____Vcellout__genblk1__BRA__13__KET____DOT__u0__q;
    vlSelf->flipflop_bloque__02Eq[0xcU] = vlSelf->flipflop_bloque__DOT____Vcellout__genblk1__BRA__12__KET____DOT__u0__q;
    vlSelf->flipflop_bloque__02Eq[0xbU] = vlSelf->flipflop_bloque__DOT____Vcellout__genblk1__BRA__11__KET____DOT__u0__q;
    vlSelf->flipflop_bloque__02Eq[0xaU] = vlSelf->flipflop_bloque__DOT____Vcellout__genblk1__BRA__10__KET____DOT__u0__q;
    vlSelf->flipflop_bloque__02Eq[9U] = vlSelf->flipflop_bloque__DOT____Vcellout__genblk1__BRA__9__KET____DOT__u0__q;
    vlSelf->flipflop_bloque__02Eq[8U] = vlSelf->flipflop_bloque__DOT____Vcellout__genblk1__BRA__8__KET____DOT__u0__q;
    vlSelf->flipflop_bloque__02Eq[7U] = vlSelf->flipflop_bloque__DOT____Vcellout__genblk1__BRA__7__KET____DOT__u0__q;
    vlSelf->flipflop_bloque__02Eq[6U] = vlSelf->flipflop_bloque__DOT____Vcellout__genblk1__BRA__6__KET____DOT__u0__q;
    vlSelf->flipflop_bloque__02Eq[5U] = vlSelf->flipflop_bloque__DOT____Vcellout__genblk1__BRA__5__KET____DOT__u0__q;
    vlSelf->flipflop_bloque__02Eq[4U] = vlSelf->flipflop_bloque__DOT____Vcellout__genblk1__BRA__4__KET____DOT__u0__q;
    vlSelf->flipflop_bloque__02Eq[3U] = vlSelf->flipflop_bloque__DOT____Vcellout__genblk1__BRA__3__KET____DOT__u0__q;
    vlSelf->flipflop_bloque__02Eq[2U] = vlSelf->flipflop_bloque__DOT____Vcellout__genblk1__BRA__2__KET____DOT__u0__q;
    vlSelf->flipflop_bloque__02Eq[1U] = vlSelf->flipflop_bloque__DOT____Vcellout__genblk1__BRA__1__KET____DOT__u0__q;
    vlSelf->flipflop_bloque__02Eq[0U] = vlSelf->flipflop_bloque__DOT____Vcellout__genblk1__BRA__0__KET____DOT__u0__q;
}

void Vflipflop_uno___024root___eval_triggers__act(Vflipflop_uno___024root* vlSelf);

bool Vflipflop_uno___024root___eval_phase__act(Vflipflop_uno___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vflipflop_uno__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vflipflop_uno___024root___eval_phase__act\n"); );
    // Init
    VlTriggerVec<2> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vflipflop_uno___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelf->__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
        vlSelf->__VnbaTriggered.thisOr(vlSelf->__VactTriggered);
        Vflipflop_uno___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vflipflop_uno___024root___eval_phase__nba(Vflipflop_uno___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vflipflop_uno__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vflipflop_uno___024root___eval_phase__nba\n"); );
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelf->__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vflipflop_uno___024root___eval_nba(vlSelf);
        vlSelf->__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vflipflop_uno___024root___dump_triggers__nba(Vflipflop_uno___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vflipflop_uno___024root___dump_triggers__act(Vflipflop_uno___024root* vlSelf);
#endif  // VL_DEBUG

void Vflipflop_uno___024root___eval(Vflipflop_uno___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vflipflop_uno__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vflipflop_uno___024root___eval\n"); );
    // Init
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
            Vflipflop_uno___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("flipflop_vector.sv", 6, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                Vflipflop_uno___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("flipflop_vector.sv", 6, "", "Active region did not converge.");
            }
            vlSelf->__VactIterCount = ((IData)(1U) 
                                       + vlSelf->__VactIterCount);
            vlSelf->__VactContinue = 0U;
            if (Vflipflop_uno___024root___eval_phase__act(vlSelf)) {
                vlSelf->__VactContinue = 1U;
            }
        }
        if (Vflipflop_uno___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vflipflop_uno___024root___eval_debug_assertions(Vflipflop_uno___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vflipflop_uno__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vflipflop_uno___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->flipflop_vector__02Eclk 
                     & 0xfeU))) {
        Verilated::overWidthError("flipflop_vector.clk");}
    if (VL_UNLIKELY((vlSelf->flipflop_vector__02Erst 
                     & 0xfeU))) {
        Verilated::overWidthError("flipflop_vector.rst");}
    if (VL_UNLIKELY((vlSelf->flipflop_bloque__02Eclk 
                     & 0xfeU))) {
        Verilated::overWidthError("flipflop_bloque.clk");}
    if (VL_UNLIKELY((vlSelf->flipflop_bloque__02Erst 
                     & 0xfeU))) {
        Verilated::overWidthError("flipflop_bloque.rst");}
}
#endif  // VL_DEBUG
