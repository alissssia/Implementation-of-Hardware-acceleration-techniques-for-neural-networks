// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vmecanismo_flipping_flipflop.h for the primary calling header

#include "Vmecanismo_flipping_flipflop__pch.h"
#include "Vmecanismo_flipping_flipflop__Syms.h"
#include "Vmecanismo_flipping_flipflop___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void Vmecanismo_flipping_flipflop___024root___dump_triggers__act(Vmecanismo_flipping_flipflop___024root* vlSelf);
#endif  // VL_DEBUG

void Vmecanismo_flipping_flipflop___024root___eval_triggers__act(Vmecanismo_flipping_flipflop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vmecanismo_flipping_flipflop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmecanismo_flipping_flipflop___024root___eval_triggers__act\n"); );
    // Body
    vlSelf->__VactTriggered.set(0U, (((IData)(vlSelf->clk) 
                                      & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__clk__0))) 
                                     | ((IData)(vlSelf->rst) 
                                        & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__rst__0)))));
    vlSelf->__Vtrigprevexpr___TOP__clk__0 = vlSelf->clk;
    vlSelf->__Vtrigprevexpr___TOP__rst__0 = vlSelf->rst;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vmecanismo_flipping_flipflop___024root___dump_triggers__act(vlSelf);
    }
#endif
}

void Vmecanismo_flipping_flipflop___024root___nba_sequent__TOP__0(Vmecanismo_flipping_flipflop___024root* vlSelf);
void Vmecanismo_flipping_flipflop_mecanismo_flipping_uno___nba_sequent__TOP__mecanismo_flipping_flipflop__DOT__u2__DOT__genblk1__BRA__15__KET____DOT__u0__0(Vmecanismo_flipping_flipflop_mecanismo_flipping_uno* vlSelf);
void Vmecanismo_flipping_flipflop_mecanismo_flipping_uno___nba_sequent__TOP__mecanismo_flipping_flipflop__DOT__u2__DOT__genblk1__BRA__14__KET____DOT__u0__0(Vmecanismo_flipping_flipflop_mecanismo_flipping_uno* vlSelf);
void Vmecanismo_flipping_flipflop_mecanismo_flipping_uno___nba_sequent__TOP__mecanismo_flipping_flipflop__DOT__u2__DOT__genblk1__BRA__13__KET____DOT__u0__0(Vmecanismo_flipping_flipflop_mecanismo_flipping_uno* vlSelf);
void Vmecanismo_flipping_flipflop_mecanismo_flipping_uno___nba_sequent__TOP__mecanismo_flipping_flipflop__DOT__u2__DOT__genblk1__BRA__12__KET____DOT__u0__0(Vmecanismo_flipping_flipflop_mecanismo_flipping_uno* vlSelf);
void Vmecanismo_flipping_flipflop_mecanismo_flipping_uno___nba_sequent__TOP__mecanismo_flipping_flipflop__DOT__u2__DOT__genblk1__BRA__11__KET____DOT__u0__0(Vmecanismo_flipping_flipflop_mecanismo_flipping_uno* vlSelf);
void Vmecanismo_flipping_flipflop_mecanismo_flipping_uno___nba_sequent__TOP__mecanismo_flipping_flipflop__DOT__u2__DOT__genblk1__BRA__10__KET____DOT__u0__0(Vmecanismo_flipping_flipflop_mecanismo_flipping_uno* vlSelf);
void Vmecanismo_flipping_flipflop_mecanismo_flipping_uno___nba_sequent__TOP__mecanismo_flipping_flipflop__DOT__u2__DOT__genblk1__BRA__9__KET____DOT__u0__0(Vmecanismo_flipping_flipflop_mecanismo_flipping_uno* vlSelf);
void Vmecanismo_flipping_flipflop_mecanismo_flipping_uno___nba_sequent__TOP__mecanismo_flipping_flipflop__DOT__u2__DOT__genblk1__BRA__8__KET____DOT__u0__0(Vmecanismo_flipping_flipflop_mecanismo_flipping_uno* vlSelf);
void Vmecanismo_flipping_flipflop_mecanismo_flipping_uno___nba_sequent__TOP__mecanismo_flipping_flipflop__DOT__u2__DOT__genblk1__BRA__7__KET____DOT__u0__0(Vmecanismo_flipping_flipflop_mecanismo_flipping_uno* vlSelf);
void Vmecanismo_flipping_flipflop_mecanismo_flipping_uno___nba_sequent__TOP__mecanismo_flipping_flipflop__DOT__u2__DOT__genblk1__BRA__6__KET____DOT__u0__0(Vmecanismo_flipping_flipflop_mecanismo_flipping_uno* vlSelf);
void Vmecanismo_flipping_flipflop_mecanismo_flipping_uno___nba_sequent__TOP__mecanismo_flipping_flipflop__DOT__u2__DOT__genblk1__BRA__5__KET____DOT__u0__0(Vmecanismo_flipping_flipflop_mecanismo_flipping_uno* vlSelf);
void Vmecanismo_flipping_flipflop_mecanismo_flipping_uno___nba_sequent__TOP__mecanismo_flipping_flipflop__DOT__u2__DOT__genblk1__BRA__4__KET____DOT__u0__0(Vmecanismo_flipping_flipflop_mecanismo_flipping_uno* vlSelf);
void Vmecanismo_flipping_flipflop_mecanismo_flipping_uno___nba_sequent__TOP__mecanismo_flipping_flipflop__DOT__u2__DOT__genblk1__BRA__3__KET____DOT__u0__0(Vmecanismo_flipping_flipflop_mecanismo_flipping_uno* vlSelf);
void Vmecanismo_flipping_flipflop_mecanismo_flipping_uno___nba_sequent__TOP__mecanismo_flipping_flipflop__DOT__u2__DOT__genblk1__BRA__2__KET____DOT__u0__0(Vmecanismo_flipping_flipflop_mecanismo_flipping_uno* vlSelf);
void Vmecanismo_flipping_flipflop_mecanismo_flipping_uno___nba_sequent__TOP__mecanismo_flipping_flipflop__DOT__u2__DOT__genblk1__BRA__1__KET____DOT__u0__0(Vmecanismo_flipping_flipflop_mecanismo_flipping_uno* vlSelf);
void Vmecanismo_flipping_flipflop_mecanismo_flipping_uno___nba_sequent__TOP__mecanismo_flipping_flipflop__DOT__u2__DOT__genblk1__BRA__0__KET____DOT__u0__0(Vmecanismo_flipping_flipflop_mecanismo_flipping_uno* vlSelf);

void Vmecanismo_flipping_flipflop___024root___eval_nba(Vmecanismo_flipping_flipflop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vmecanismo_flipping_flipflop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmecanismo_flipping_flipflop___024root___eval_nba\n"); );
    // Body
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vmecanismo_flipping_flipflop___024root___nba_sequent__TOP__0(vlSelf);
        Vmecanismo_flipping_flipflop_mecanismo_flipping_uno___nba_sequent__TOP__mecanismo_flipping_flipflop__DOT__u2__DOT__genblk1__BRA__15__KET____DOT__u0__0((&vlSymsp->TOP__mecanismo_flipping_flipflop__DOT__u2__DOT__genblk1__BRA__15__KET____DOT__u0));
        Vmecanismo_flipping_flipflop_mecanismo_flipping_uno___nba_sequent__TOP__mecanismo_flipping_flipflop__DOT__u2__DOT__genblk1__BRA__14__KET____DOT__u0__0((&vlSymsp->TOP__mecanismo_flipping_flipflop__DOT__u2__DOT__genblk1__BRA__14__KET____DOT__u0));
        Vmecanismo_flipping_flipflop_mecanismo_flipping_uno___nba_sequent__TOP__mecanismo_flipping_flipflop__DOT__u2__DOT__genblk1__BRA__13__KET____DOT__u0__0((&vlSymsp->TOP__mecanismo_flipping_flipflop__DOT__u2__DOT__genblk1__BRA__13__KET____DOT__u0));
        Vmecanismo_flipping_flipflop_mecanismo_flipping_uno___nba_sequent__TOP__mecanismo_flipping_flipflop__DOT__u2__DOT__genblk1__BRA__12__KET____DOT__u0__0((&vlSymsp->TOP__mecanismo_flipping_flipflop__DOT__u2__DOT__genblk1__BRA__12__KET____DOT__u0));
        Vmecanismo_flipping_flipflop_mecanismo_flipping_uno___nba_sequent__TOP__mecanismo_flipping_flipflop__DOT__u2__DOT__genblk1__BRA__11__KET____DOT__u0__0((&vlSymsp->TOP__mecanismo_flipping_flipflop__DOT__u2__DOT__genblk1__BRA__11__KET____DOT__u0));
        Vmecanismo_flipping_flipflop_mecanismo_flipping_uno___nba_sequent__TOP__mecanismo_flipping_flipflop__DOT__u2__DOT__genblk1__BRA__10__KET____DOT__u0__0((&vlSymsp->TOP__mecanismo_flipping_flipflop__DOT__u2__DOT__genblk1__BRA__10__KET____DOT__u0));
        Vmecanismo_flipping_flipflop_mecanismo_flipping_uno___nba_sequent__TOP__mecanismo_flipping_flipflop__DOT__u2__DOT__genblk1__BRA__9__KET____DOT__u0__0((&vlSymsp->TOP__mecanismo_flipping_flipflop__DOT__u2__DOT__genblk1__BRA__9__KET____DOT__u0));
        Vmecanismo_flipping_flipflop_mecanismo_flipping_uno___nba_sequent__TOP__mecanismo_flipping_flipflop__DOT__u2__DOT__genblk1__BRA__8__KET____DOT__u0__0((&vlSymsp->TOP__mecanismo_flipping_flipflop__DOT__u2__DOT__genblk1__BRA__8__KET____DOT__u0));
        Vmecanismo_flipping_flipflop_mecanismo_flipping_uno___nba_sequent__TOP__mecanismo_flipping_flipflop__DOT__u2__DOT__genblk1__BRA__7__KET____DOT__u0__0((&vlSymsp->TOP__mecanismo_flipping_flipflop__DOT__u2__DOT__genblk1__BRA__7__KET____DOT__u0));
        Vmecanismo_flipping_flipflop_mecanismo_flipping_uno___nba_sequent__TOP__mecanismo_flipping_flipflop__DOT__u2__DOT__genblk1__BRA__6__KET____DOT__u0__0((&vlSymsp->TOP__mecanismo_flipping_flipflop__DOT__u2__DOT__genblk1__BRA__6__KET____DOT__u0));
        Vmecanismo_flipping_flipflop_mecanismo_flipping_uno___nba_sequent__TOP__mecanismo_flipping_flipflop__DOT__u2__DOT__genblk1__BRA__5__KET____DOT__u0__0((&vlSymsp->TOP__mecanismo_flipping_flipflop__DOT__u2__DOT__genblk1__BRA__5__KET____DOT__u0));
        Vmecanismo_flipping_flipflop_mecanismo_flipping_uno___nba_sequent__TOP__mecanismo_flipping_flipflop__DOT__u2__DOT__genblk1__BRA__4__KET____DOT__u0__0((&vlSymsp->TOP__mecanismo_flipping_flipflop__DOT__u2__DOT__genblk1__BRA__4__KET____DOT__u0));
        Vmecanismo_flipping_flipflop_mecanismo_flipping_uno___nba_sequent__TOP__mecanismo_flipping_flipflop__DOT__u2__DOT__genblk1__BRA__3__KET____DOT__u0__0((&vlSymsp->TOP__mecanismo_flipping_flipflop__DOT__u2__DOT__genblk1__BRA__3__KET____DOT__u0));
        Vmecanismo_flipping_flipflop_mecanismo_flipping_uno___nba_sequent__TOP__mecanismo_flipping_flipflop__DOT__u2__DOT__genblk1__BRA__2__KET____DOT__u0__0((&vlSymsp->TOP__mecanismo_flipping_flipflop__DOT__u2__DOT__genblk1__BRA__2__KET____DOT__u0));
        Vmecanismo_flipping_flipflop_mecanismo_flipping_uno___nba_sequent__TOP__mecanismo_flipping_flipflop__DOT__u2__DOT__genblk1__BRA__1__KET____DOT__u0__0((&vlSymsp->TOP__mecanismo_flipping_flipflop__DOT__u2__DOT__genblk1__BRA__1__KET____DOT__u0));
        Vmecanismo_flipping_flipflop_mecanismo_flipping_uno___nba_sequent__TOP__mecanismo_flipping_flipflop__DOT__u2__DOT__genblk1__BRA__0__KET____DOT__u0__0((&vlSymsp->TOP__mecanismo_flipping_flipflop__DOT__u2__DOT__genblk1__BRA__0__KET____DOT__u0));
    }
}

VL_INLINE_OPT void Vmecanismo_flipping_flipflop___024root___nba_sequent__TOP__0(Vmecanismo_flipping_flipflop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vmecanismo_flipping_flipflop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmecanismo_flipping_flipflop___024root___nba_sequent__TOP__0\n"); );
    // Body
    if (vlSelf->rst) {
        vlSelf->mecanismo_flipping_flipflop__DOT__u0__DOT____Vcellout__genblk1__BRA__15__KET____DOT__u0__q = 0U;
        vlSelf->mecanismo_flipping_flipflop__DOT__u0__DOT____Vcellout__genblk1__BRA__14__KET____DOT__u0__q = 0U;
        vlSelf->mecanismo_flipping_flipflop__DOT__u0__DOT____Vcellout__genblk1__BRA__13__KET____DOT__u0__q = 0U;
        vlSelf->mecanismo_flipping_flipflop__DOT__u0__DOT____Vcellout__genblk1__BRA__12__KET____DOT__u0__q = 0U;
        vlSelf->mecanismo_flipping_flipflop__DOT__u0__DOT____Vcellout__genblk1__BRA__11__KET____DOT__u0__q = 0U;
        vlSelf->mecanismo_flipping_flipflop__DOT__u0__DOT____Vcellout__genblk1__BRA__10__KET____DOT__u0__q = 0U;
        vlSelf->mecanismo_flipping_flipflop__DOT__u0__DOT____Vcellout__genblk1__BRA__9__KET____DOT__u0__q = 0U;
        vlSelf->mecanismo_flipping_flipflop__DOT__u0__DOT____Vcellout__genblk1__BRA__8__KET____DOT__u0__q = 0U;
        vlSelf->mecanismo_flipping_flipflop__DOT__u0__DOT____Vcellout__genblk1__BRA__7__KET____DOT__u0__q = 0U;
        vlSelf->mecanismo_flipping_flipflop__DOT__u0__DOT____Vcellout__genblk1__BRA__6__KET____DOT__u0__q = 0U;
        vlSelf->mecanismo_flipping_flipflop__DOT__u0__DOT____Vcellout__genblk1__BRA__5__KET____DOT__u0__q = 0U;
        vlSelf->mecanismo_flipping_flipflop__DOT__u0__DOT____Vcellout__genblk1__BRA__4__KET____DOT__u0__q = 0U;
        vlSelf->mecanismo_flipping_flipflop__DOT__u0__DOT____Vcellout__genblk1__BRA__3__KET____DOT__u0__q = 0U;
        vlSelf->mecanismo_flipping_flipflop__DOT__u0__DOT____Vcellout__genblk1__BRA__2__KET____DOT__u0__q = 0U;
        vlSelf->mecanismo_flipping_flipflop__DOT__u0__DOT____Vcellout__genblk1__BRA__1__KET____DOT__u0__q = 0U;
        vlSelf->mecanismo_flipping_flipflop__DOT__u0__DOT____Vcellout__genblk1__BRA__0__KET____DOT__u0__q = 0U;
        vlSelf->mecanismo_flipping_flipflop__DOT__u3__DOT____Vcellout__genblk1__BRA__15__KET____DOT__u0__q = 0U;
        vlSelf->mecanismo_flipping_flipflop__DOT__u3__DOT____Vcellout__genblk1__BRA__14__KET____DOT__u0__q = 0U;
        vlSelf->mecanismo_flipping_flipflop__DOT__u3__DOT____Vcellout__genblk1__BRA__13__KET____DOT__u0__q = 0U;
        vlSelf->mecanismo_flipping_flipflop__DOT__u3__DOT____Vcellout__genblk1__BRA__12__KET____DOT__u0__q = 0U;
        vlSelf->mecanismo_flipping_flipflop__DOT__u3__DOT____Vcellout__genblk1__BRA__11__KET____DOT__u0__q = 0U;
        vlSelf->mecanismo_flipping_flipflop__DOT__u3__DOT____Vcellout__genblk1__BRA__10__KET____DOT__u0__q = 0U;
        vlSelf->mecanismo_flipping_flipflop__DOT__u3__DOT____Vcellout__genblk1__BRA__9__KET____DOT__u0__q = 0U;
        vlSelf->mecanismo_flipping_flipflop__DOT__u3__DOT____Vcellout__genblk1__BRA__8__KET____DOT__u0__q = 0U;
        vlSelf->mecanismo_flipping_flipflop__DOT__u3__DOT____Vcellout__genblk1__BRA__7__KET____DOT__u0__q = 0U;
        vlSelf->mecanismo_flipping_flipflop__DOT__u3__DOT____Vcellout__genblk1__BRA__6__KET____DOT__u0__q = 0U;
        vlSelf->mecanismo_flipping_flipflop__DOT__u3__DOT____Vcellout__genblk1__BRA__5__KET____DOT__u0__q = 0U;
        vlSelf->mecanismo_flipping_flipflop__DOT__u3__DOT____Vcellout__genblk1__BRA__4__KET____DOT__u0__q = 0U;
        vlSelf->mecanismo_flipping_flipflop__DOT__u3__DOT____Vcellout__genblk1__BRA__3__KET____DOT__u0__q = 0U;
        vlSelf->mecanismo_flipping_flipflop__DOT__u3__DOT____Vcellout__genblk1__BRA__2__KET____DOT__u0__q = 0U;
        vlSelf->mecanismo_flipping_flipflop__DOT__u3__DOT____Vcellout__genblk1__BRA__1__KET____DOT__u0__q = 0U;
        vlSelf->mecanismo_flipping_flipflop__DOT__u3__DOT____Vcellout__genblk1__BRA__0__KET____DOT__u0__q = 0U;
    } else {
        vlSelf->mecanismo_flipping_flipflop__DOT__u0__DOT____Vcellout__genblk1__BRA__15__KET____DOT__u0__q 
            = vlSelf->input_activaciones[0xfU];
        vlSelf->mecanismo_flipping_flipflop__DOT__u0__DOT____Vcellout__genblk1__BRA__14__KET____DOT__u0__q 
            = vlSelf->input_activaciones[0xeU];
        vlSelf->mecanismo_flipping_flipflop__DOT__u0__DOT____Vcellout__genblk1__BRA__13__KET____DOT__u0__q 
            = vlSelf->input_activaciones[0xdU];
        vlSelf->mecanismo_flipping_flipflop__DOT__u0__DOT____Vcellout__genblk1__BRA__12__KET____DOT__u0__q 
            = vlSelf->input_activaciones[0xcU];
        vlSelf->mecanismo_flipping_flipflop__DOT__u0__DOT____Vcellout__genblk1__BRA__11__KET____DOT__u0__q 
            = vlSelf->input_activaciones[0xbU];
        vlSelf->mecanismo_flipping_flipflop__DOT__u0__DOT____Vcellout__genblk1__BRA__10__KET____DOT__u0__q 
            = vlSelf->input_activaciones[0xaU];
        vlSelf->mecanismo_flipping_flipflop__DOT__u0__DOT____Vcellout__genblk1__BRA__9__KET____DOT__u0__q 
            = vlSelf->input_activaciones[9U];
        vlSelf->mecanismo_flipping_flipflop__DOT__u0__DOT____Vcellout__genblk1__BRA__8__KET____DOT__u0__q 
            = vlSelf->input_activaciones[8U];
        vlSelf->mecanismo_flipping_flipflop__DOT__u0__DOT____Vcellout__genblk1__BRA__7__KET____DOT__u0__q 
            = vlSelf->input_activaciones[7U];
        vlSelf->mecanismo_flipping_flipflop__DOT__u0__DOT____Vcellout__genblk1__BRA__6__KET____DOT__u0__q 
            = vlSelf->input_activaciones[6U];
        vlSelf->mecanismo_flipping_flipflop__DOT__u0__DOT____Vcellout__genblk1__BRA__5__KET____DOT__u0__q 
            = vlSelf->input_activaciones[5U];
        vlSelf->mecanismo_flipping_flipflop__DOT__u0__DOT____Vcellout__genblk1__BRA__4__KET____DOT__u0__q 
            = vlSelf->input_activaciones[4U];
        vlSelf->mecanismo_flipping_flipflop__DOT__u0__DOT____Vcellout__genblk1__BRA__3__KET____DOT__u0__q 
            = vlSelf->input_activaciones[3U];
        vlSelf->mecanismo_flipping_flipflop__DOT__u0__DOT____Vcellout__genblk1__BRA__2__KET____DOT__u0__q 
            = vlSelf->input_activaciones[2U];
        vlSelf->mecanismo_flipping_flipflop__DOT__u0__DOT____Vcellout__genblk1__BRA__1__KET____DOT__u0__q 
            = vlSelf->input_activaciones[1U];
        vlSelf->mecanismo_flipping_flipflop__DOT__u0__DOT____Vcellout__genblk1__BRA__0__KET____DOT__u0__q 
            = vlSelf->input_activaciones[0U];
        vlSelf->mecanismo_flipping_flipflop__DOT__u3__DOT____Vcellout__genblk1__BRA__15__KET____DOT__u0__q 
            = vlSymsp->TOP__mecanismo_flipping_flipflop__DOT__u2__DOT__genblk1__BRA__15__KET____DOT__u0.b;
        vlSelf->mecanismo_flipping_flipflop__DOT__u3__DOT____Vcellout__genblk1__BRA__14__KET____DOT__u0__q 
            = vlSymsp->TOP__mecanismo_flipping_flipflop__DOT__u2__DOT__genblk1__BRA__14__KET____DOT__u0.b;
        vlSelf->mecanismo_flipping_flipflop__DOT__u3__DOT____Vcellout__genblk1__BRA__13__KET____DOT__u0__q 
            = vlSymsp->TOP__mecanismo_flipping_flipflop__DOT__u2__DOT__genblk1__BRA__13__KET____DOT__u0.b;
        vlSelf->mecanismo_flipping_flipflop__DOT__u3__DOT____Vcellout__genblk1__BRA__12__KET____DOT__u0__q 
            = vlSymsp->TOP__mecanismo_flipping_flipflop__DOT__u2__DOT__genblk1__BRA__12__KET____DOT__u0.b;
        vlSelf->mecanismo_flipping_flipflop__DOT__u3__DOT____Vcellout__genblk1__BRA__11__KET____DOT__u0__q 
            = vlSymsp->TOP__mecanismo_flipping_flipflop__DOT__u2__DOT__genblk1__BRA__11__KET____DOT__u0.b;
        vlSelf->mecanismo_flipping_flipflop__DOT__u3__DOT____Vcellout__genblk1__BRA__10__KET____DOT__u0__q 
            = vlSymsp->TOP__mecanismo_flipping_flipflop__DOT__u2__DOT__genblk1__BRA__10__KET____DOT__u0.b;
        vlSelf->mecanismo_flipping_flipflop__DOT__u3__DOT____Vcellout__genblk1__BRA__9__KET____DOT__u0__q 
            = vlSymsp->TOP__mecanismo_flipping_flipflop__DOT__u2__DOT__genblk1__BRA__9__KET____DOT__u0.b;
        vlSelf->mecanismo_flipping_flipflop__DOT__u3__DOT____Vcellout__genblk1__BRA__8__KET____DOT__u0__q 
            = vlSymsp->TOP__mecanismo_flipping_flipflop__DOT__u2__DOT__genblk1__BRA__8__KET____DOT__u0.b;
        vlSelf->mecanismo_flipping_flipflop__DOT__u3__DOT____Vcellout__genblk1__BRA__7__KET____DOT__u0__q 
            = vlSymsp->TOP__mecanismo_flipping_flipflop__DOT__u2__DOT__genblk1__BRA__7__KET____DOT__u0.b;
        vlSelf->mecanismo_flipping_flipflop__DOT__u3__DOT____Vcellout__genblk1__BRA__6__KET____DOT__u0__q 
            = vlSymsp->TOP__mecanismo_flipping_flipflop__DOT__u2__DOT__genblk1__BRA__6__KET____DOT__u0.b;
        vlSelf->mecanismo_flipping_flipflop__DOT__u3__DOT____Vcellout__genblk1__BRA__5__KET____DOT__u0__q 
            = vlSymsp->TOP__mecanismo_flipping_flipflop__DOT__u2__DOT__genblk1__BRA__5__KET____DOT__u0.b;
        vlSelf->mecanismo_flipping_flipflop__DOT__u3__DOT____Vcellout__genblk1__BRA__4__KET____DOT__u0__q 
            = vlSymsp->TOP__mecanismo_flipping_flipflop__DOT__u2__DOT__genblk1__BRA__4__KET____DOT__u0.b;
        vlSelf->mecanismo_flipping_flipflop__DOT__u3__DOT____Vcellout__genblk1__BRA__3__KET____DOT__u0__q 
            = vlSymsp->TOP__mecanismo_flipping_flipflop__DOT__u2__DOT__genblk1__BRA__3__KET____DOT__u0.b;
        vlSelf->mecanismo_flipping_flipflop__DOT__u3__DOT____Vcellout__genblk1__BRA__2__KET____DOT__u0__q 
            = vlSymsp->TOP__mecanismo_flipping_flipflop__DOT__u2__DOT__genblk1__BRA__2__KET____DOT__u0.b;
        vlSelf->mecanismo_flipping_flipflop__DOT__u3__DOT____Vcellout__genblk1__BRA__1__KET____DOT__u0__q 
            = vlSymsp->TOP__mecanismo_flipping_flipflop__DOT__u2__DOT__genblk1__BRA__1__KET____DOT__u0.b;
        vlSelf->mecanismo_flipping_flipflop__DOT__u3__DOT____Vcellout__genblk1__BRA__0__KET____DOT__u0__q 
            = vlSymsp->TOP__mecanismo_flipping_flipflop__DOT__u2__DOT__genblk1__BRA__0__KET____DOT__u0.b;
    }
    vlSelf->mecanismo_flipping_flipflop__DOT__u1__DOT____Vcellout__genblk1__BRA__15__KET____DOT__u0__q 
        = ((1U & (~ (IData)(vlSelf->rst))) && vlSelf->input_f_bits
           [0xfU]);
    vlSelf->mecanismo_flipping_flipflop__DOT__u1__DOT____Vcellout__genblk1__BRA__14__KET____DOT__u0__q 
        = ((1U & (~ (IData)(vlSelf->rst))) && vlSelf->input_f_bits
           [0xeU]);
    vlSelf->mecanismo_flipping_flipflop__DOT__u1__DOT____Vcellout__genblk1__BRA__13__KET____DOT__u0__q 
        = ((1U & (~ (IData)(vlSelf->rst))) && vlSelf->input_f_bits
           [0xdU]);
    vlSelf->mecanismo_flipping_flipflop__DOT__u1__DOT____Vcellout__genblk1__BRA__12__KET____DOT__u0__q 
        = ((1U & (~ (IData)(vlSelf->rst))) && vlSelf->input_f_bits
           [0xcU]);
    vlSelf->mecanismo_flipping_flipflop__DOT__u1__DOT____Vcellout__genblk1__BRA__11__KET____DOT__u0__q 
        = ((1U & (~ (IData)(vlSelf->rst))) && vlSelf->input_f_bits
           [0xbU]);
    vlSelf->mecanismo_flipping_flipflop__DOT__u1__DOT____Vcellout__genblk1__BRA__10__KET____DOT__u0__q 
        = ((1U & (~ (IData)(vlSelf->rst))) && vlSelf->input_f_bits
           [0xaU]);
    vlSelf->mecanismo_flipping_flipflop__DOT__u1__DOT____Vcellout__genblk1__BRA__9__KET____DOT__u0__q 
        = ((1U & (~ (IData)(vlSelf->rst))) && vlSelf->input_f_bits
           [9U]);
    vlSelf->mecanismo_flipping_flipflop__DOT__u1__DOT____Vcellout__genblk1__BRA__8__KET____DOT__u0__q 
        = ((1U & (~ (IData)(vlSelf->rst))) && vlSelf->input_f_bits
           [8U]);
    vlSelf->mecanismo_flipping_flipflop__DOT__u1__DOT____Vcellout__genblk1__BRA__7__KET____DOT__u0__q 
        = ((1U & (~ (IData)(vlSelf->rst))) && vlSelf->input_f_bits
           [7U]);
    vlSelf->mecanismo_flipping_flipflop__DOT__u1__DOT____Vcellout__genblk1__BRA__6__KET____DOT__u0__q 
        = ((1U & (~ (IData)(vlSelf->rst))) && vlSelf->input_f_bits
           [6U]);
    vlSelf->mecanismo_flipping_flipflop__DOT__u1__DOT____Vcellout__genblk1__BRA__5__KET____DOT__u0__q 
        = ((1U & (~ (IData)(vlSelf->rst))) && vlSelf->input_f_bits
           [5U]);
    vlSelf->mecanismo_flipping_flipflop__DOT__u1__DOT____Vcellout__genblk1__BRA__4__KET____DOT__u0__q 
        = ((1U & (~ (IData)(vlSelf->rst))) && vlSelf->input_f_bits
           [4U]);
    vlSelf->mecanismo_flipping_flipflop__DOT__u1__DOT____Vcellout__genblk1__BRA__3__KET____DOT__u0__q 
        = ((1U & (~ (IData)(vlSelf->rst))) && vlSelf->input_f_bits
           [3U]);
    vlSelf->mecanismo_flipping_flipflop__DOT__u1__DOT____Vcellout__genblk1__BRA__2__KET____DOT__u0__q 
        = ((1U & (~ (IData)(vlSelf->rst))) && vlSelf->input_f_bits
           [2U]);
    vlSelf->mecanismo_flipping_flipflop__DOT__u1__DOT____Vcellout__genblk1__BRA__1__KET____DOT__u0__q 
        = ((1U & (~ (IData)(vlSelf->rst))) && vlSelf->input_f_bits
           [1U]);
    vlSelf->mecanismo_flipping_flipflop__DOT__u1__DOT____Vcellout__genblk1__BRA__0__KET____DOT__u0__q 
        = ((1U & (~ (IData)(vlSelf->rst))) && vlSelf->input_f_bits
           [0U]);
    vlSelf->salida_flip_flop_con_activaciones_procesadas[0xfU] 
        = vlSelf->mecanismo_flipping_flipflop__DOT__u3__DOT____Vcellout__genblk1__BRA__15__KET____DOT__u0__q;
    vlSelf->salida_flip_flop_con_activaciones_procesadas[0xeU] 
        = vlSelf->mecanismo_flipping_flipflop__DOT__u3__DOT____Vcellout__genblk1__BRA__14__KET____DOT__u0__q;
    vlSelf->salida_flip_flop_con_activaciones_procesadas[0xdU] 
        = vlSelf->mecanismo_flipping_flipflop__DOT__u3__DOT____Vcellout__genblk1__BRA__13__KET____DOT__u0__q;
    vlSelf->salida_flip_flop_con_activaciones_procesadas[0xcU] 
        = vlSelf->mecanismo_flipping_flipflop__DOT__u3__DOT____Vcellout__genblk1__BRA__12__KET____DOT__u0__q;
    vlSelf->salida_flip_flop_con_activaciones_procesadas[0xbU] 
        = vlSelf->mecanismo_flipping_flipflop__DOT__u3__DOT____Vcellout__genblk1__BRA__11__KET____DOT__u0__q;
    vlSelf->salida_flip_flop_con_activaciones_procesadas[0xaU] 
        = vlSelf->mecanismo_flipping_flipflop__DOT__u3__DOT____Vcellout__genblk1__BRA__10__KET____DOT__u0__q;
    vlSelf->salida_flip_flop_con_activaciones_procesadas[9U] 
        = vlSelf->mecanismo_flipping_flipflop__DOT__u3__DOT____Vcellout__genblk1__BRA__9__KET____DOT__u0__q;
    vlSelf->salida_flip_flop_con_activaciones_procesadas[8U] 
        = vlSelf->mecanismo_flipping_flipflop__DOT__u3__DOT____Vcellout__genblk1__BRA__8__KET____DOT__u0__q;
    vlSelf->salida_flip_flop_con_activaciones_procesadas[7U] 
        = vlSelf->mecanismo_flipping_flipflop__DOT__u3__DOT____Vcellout__genblk1__BRA__7__KET____DOT__u0__q;
    vlSelf->salida_flip_flop_con_activaciones_procesadas[6U] 
        = vlSelf->mecanismo_flipping_flipflop__DOT__u3__DOT____Vcellout__genblk1__BRA__6__KET____DOT__u0__q;
    vlSelf->salida_flip_flop_con_activaciones_procesadas[5U] 
        = vlSelf->mecanismo_flipping_flipflop__DOT__u3__DOT____Vcellout__genblk1__BRA__5__KET____DOT__u0__q;
    vlSelf->salida_flip_flop_con_activaciones_procesadas[4U] 
        = vlSelf->mecanismo_flipping_flipflop__DOT__u3__DOT____Vcellout__genblk1__BRA__4__KET____DOT__u0__q;
    vlSelf->salida_flip_flop_con_activaciones_procesadas[3U] 
        = vlSelf->mecanismo_flipping_flipflop__DOT__u3__DOT____Vcellout__genblk1__BRA__3__KET____DOT__u0__q;
    vlSelf->salida_flip_flop_con_activaciones_procesadas[2U] 
        = vlSelf->mecanismo_flipping_flipflop__DOT__u3__DOT____Vcellout__genblk1__BRA__2__KET____DOT__u0__q;
    vlSelf->salida_flip_flop_con_activaciones_procesadas[1U] 
        = vlSelf->mecanismo_flipping_flipflop__DOT__u3__DOT____Vcellout__genblk1__BRA__1__KET____DOT__u0__q;
    vlSelf->salida_flip_flop_con_activaciones_procesadas[0U] 
        = vlSelf->mecanismo_flipping_flipflop__DOT__u3__DOT____Vcellout__genblk1__BRA__0__KET____DOT__u0__q;
}
