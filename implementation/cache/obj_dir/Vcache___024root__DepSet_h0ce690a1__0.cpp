// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcache.h for the primary calling header

#include "Vcache__pch.h"
#include "Vcache__Syms.h"
#include "Vcache___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void Vcache___024root___dump_triggers__ico(Vcache___024root* vlSelf);
#endif  // VL_DEBUG

void Vcache___024root___eval_triggers__ico(Vcache___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vcache__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcache___024root___eval_triggers__ico\n"); );
    // Body
    vlSelf->__VicoTriggered.set(0U, (IData)(vlSelf->__VicoFirstIteration));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vcache___024root___dump_triggers__ico(vlSelf);
    }
#endif
}

void Vcache_cache___ico_sequent__TOP__cache__0(Vcache_cache* vlSelf);
void Vcache___024root___ico_sequent__TOP__0(Vcache___024root* vlSelf);

void Vcache___024root___eval_ico(Vcache___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vcache__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcache___024root___eval_ico\n"); );
    // Body
    if ((1ULL & vlSelf->__VicoTriggered.word(0U))) {
        Vcache_cache___ico_sequent__TOP__cache__0((&vlSymsp->TOP__cache));
        Vcache___024root___ico_sequent__TOP__0(vlSelf);
    }
}

VL_INLINE_OPT void Vcache___024root___ico_sequent__TOP__0(Vcache___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vcache__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcache___024root___ico_sequent__TOP__0\n"); );
    // Body
    vlSelf->valid = vlSymsp->TOP__cache.valid;
    vlSelf->activation_out = ((IData)(vlSymsp->TOP__cache.__PVT__enable_ram_output)
                               ? ((4U & (IData)(vlSymsp->TOP__cache.__PVT__valid_way))
                                   ? ((2U & (IData)(vlSymsp->TOP__cache.__PVT__valid_way))
                                       ? 0U : ((1U 
                                                & (IData)(vlSymsp->TOP__cache.__PVT__valid_way))
                                                ? 0U
                                                : (IData)(vlSymsp->TOP__cache__ways__BRA__4__KET____DOT__way_instance__data_bram.__PVT__data_out)))
                                   : ((2U & (IData)(vlSymsp->TOP__cache.__PVT__valid_way))
                                       ? ((1U & (IData)(vlSymsp->TOP__cache.__PVT__valid_way))
                                           ? (IData)(vlSymsp->TOP__cache__ways__BRA__3__KET____DOT__way_instance__data_bram.__PVT__data_out)
                                           : (IData)(vlSymsp->TOP__cache__ways__BRA__2__KET____DOT__way_instance__data_bram.__PVT__data_out))
                                       : ((1U & (IData)(vlSymsp->TOP__cache.__PVT__valid_way))
                                           ? (IData)(vlSymsp->TOP__cache__ways__BRA__1__KET____DOT__way_instance__data_bram.__PVT__data_out)
                                           : (IData)(vlSymsp->TOP__cache__ways__BRA__0__KET____DOT__way_instance__data_bram.__PVT__data_out))))
                               : 0xffffU);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vcache___024root___dump_triggers__act(Vcache___024root* vlSelf);
#endif  // VL_DEBUG

void Vcache___024root___eval_triggers__act(Vcache___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vcache__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcache___024root___eval_triggers__act\n"); );
    // Body
    vlSelf->__VactTriggered.set(0U, (((IData)(vlSelf->clk) 
                                      & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__clk__0))) 
                                     | ((IData)(vlSelf->reset) 
                                        & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__reset__0)))));
    vlSelf->__VactTriggered.set(1U, ((IData)(vlSelf->clk) 
                                     & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__clk__0))));
    vlSelf->__Vtrigprevexpr___TOP__clk__0 = vlSelf->clk;
    vlSelf->__Vtrigprevexpr___TOP__reset__0 = vlSelf->reset;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vcache___024root___dump_triggers__act(vlSelf);
    }
#endif
}

void Vcache_bram__D100_Wd___nba_sequent__TOP__cache__ways__BRA__0__KET____DOT__way_instance__tag_bram__0(Vcache_bram__D100_Wd* vlSelf);
void Vcache_bram__D100_Wd___nba_sequent__TOP__cache__ways__BRA__1__KET____DOT__way_instance__tag_bram__0(Vcache_bram__D100_Wd* vlSelf);
void Vcache_bram__D100_Wd___nba_sequent__TOP__cache__ways__BRA__2__KET____DOT__way_instance__tag_bram__0(Vcache_bram__D100_Wd* vlSelf);
void Vcache_bram__D100_Wd___nba_sequent__TOP__cache__ways__BRA__3__KET____DOT__way_instance__tag_bram__0(Vcache_bram__D100_Wd* vlSelf);
void Vcache_bram__D100_Wd___nba_sequent__TOP__cache__ways__BRA__4__KET____DOT__way_instance__tag_bram__0(Vcache_bram__D100_Wd* vlSelf);
void Vcache_bram__D100_W10___nba_sequent__TOP__cache__ways__BRA__0__KET____DOT__way_instance__data_bram__0(Vcache_bram__D100_W10* vlSelf);
void Vcache_bram__D100_W10___nba_sequent__TOP__cache__ways__BRA__1__KET____DOT__way_instance__data_bram__0(Vcache_bram__D100_W10* vlSelf);
void Vcache_bram__D100_W10___nba_sequent__TOP__cache__ways__BRA__2__KET____DOT__way_instance__data_bram__0(Vcache_bram__D100_W10* vlSelf);
void Vcache_bram__D100_W10___nba_sequent__TOP__cache__ways__BRA__3__KET____DOT__way_instance__data_bram__0(Vcache_bram__D100_W10* vlSelf);
void Vcache_bram__D100_W10___nba_sequent__TOP__cache__ways__BRA__4__KET____DOT__way_instance__data_bram__0(Vcache_bram__D100_W10* vlSelf);
void Vcache_cache___nba_sequent__TOP__cache__0(Vcache_cache* vlSelf);
void Vcache_cache___nba_sequent__TOP__cache__1(Vcache_cache* vlSelf);
void Vcache___024root___nba_sequent__TOP__0(Vcache___024root* vlSelf);
void Vcache_cache___nba_comb__TOP__cache__0(Vcache_cache* vlSelf);
void Vcache___024root___nba_comb__TOP__0(Vcache___024root* vlSelf);

void Vcache___024root___eval_nba(Vcache___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vcache__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcache___024root___eval_nba\n"); );
    // Body
    if ((2ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vcache_bram__D100_Wd___nba_sequent__TOP__cache__ways__BRA__0__KET____DOT__way_instance__tag_bram__0((&vlSymsp->TOP__cache__ways__BRA__0__KET____DOT__way_instance__tag_bram));
        Vcache_bram__D100_Wd___nba_sequent__TOP__cache__ways__BRA__1__KET____DOT__way_instance__tag_bram__0((&vlSymsp->TOP__cache__ways__BRA__1__KET____DOT__way_instance__tag_bram));
        Vcache_bram__D100_Wd___nba_sequent__TOP__cache__ways__BRA__2__KET____DOT__way_instance__tag_bram__0((&vlSymsp->TOP__cache__ways__BRA__2__KET____DOT__way_instance__tag_bram));
        Vcache_bram__D100_Wd___nba_sequent__TOP__cache__ways__BRA__3__KET____DOT__way_instance__tag_bram__0((&vlSymsp->TOP__cache__ways__BRA__3__KET____DOT__way_instance__tag_bram));
        Vcache_bram__D100_Wd___nba_sequent__TOP__cache__ways__BRA__4__KET____DOT__way_instance__tag_bram__0((&vlSymsp->TOP__cache__ways__BRA__4__KET____DOT__way_instance__tag_bram));
        Vcache_bram__D100_W10___nba_sequent__TOP__cache__ways__BRA__0__KET____DOT__way_instance__data_bram__0((&vlSymsp->TOP__cache__ways__BRA__0__KET____DOT__way_instance__data_bram));
        Vcache_bram__D100_W10___nba_sequent__TOP__cache__ways__BRA__1__KET____DOT__way_instance__data_bram__0((&vlSymsp->TOP__cache__ways__BRA__1__KET____DOT__way_instance__data_bram));
        Vcache_bram__D100_W10___nba_sequent__TOP__cache__ways__BRA__2__KET____DOT__way_instance__data_bram__0((&vlSymsp->TOP__cache__ways__BRA__2__KET____DOT__way_instance__data_bram));
        Vcache_bram__D100_W10___nba_sequent__TOP__cache__ways__BRA__3__KET____DOT__way_instance__data_bram__0((&vlSymsp->TOP__cache__ways__BRA__3__KET____DOT__way_instance__data_bram));
        Vcache_bram__D100_W10___nba_sequent__TOP__cache__ways__BRA__4__KET____DOT__way_instance__data_bram__0((&vlSymsp->TOP__cache__ways__BRA__4__KET____DOT__way_instance__data_bram));
        Vcache_cache___nba_sequent__TOP__cache__0((&vlSymsp->TOP__cache));
    }
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vcache_cache___nba_sequent__TOP__cache__1((&vlSymsp->TOP__cache));
        Vcache___024root___nba_sequent__TOP__0(vlSelf);
    }
    if ((3ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vcache_cache___nba_comb__TOP__cache__0((&vlSymsp->TOP__cache));
        Vcache___024root___nba_comb__TOP__0(vlSelf);
    }
}

VL_INLINE_OPT void Vcache___024root___nba_sequent__TOP__0(Vcache___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vcache__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcache___024root___nba_sequent__TOP__0\n"); );
    // Body
    vlSelf->error = vlSymsp->TOP__cache.__PVT__error_reg;
    vlSelf->valid = vlSymsp->TOP__cache.valid;
}

VL_INLINE_OPT void Vcache___024root___nba_comb__TOP__0(Vcache___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vcache__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcache___024root___nba_comb__TOP__0\n"); );
    // Body
    vlSelf->activation_out = ((IData)(vlSymsp->TOP__cache.__PVT__enable_ram_output)
                               ? ((4U & (IData)(vlSymsp->TOP__cache.__PVT__valid_way))
                                   ? ((2U & (IData)(vlSymsp->TOP__cache.__PVT__valid_way))
                                       ? 0U : ((1U 
                                                & (IData)(vlSymsp->TOP__cache.__PVT__valid_way))
                                                ? 0U
                                                : (IData)(vlSymsp->TOP__cache__ways__BRA__4__KET____DOT__way_instance__data_bram.__PVT__data_out)))
                                   : ((2U & (IData)(vlSymsp->TOP__cache.__PVT__valid_way))
                                       ? ((1U & (IData)(vlSymsp->TOP__cache.__PVT__valid_way))
                                           ? (IData)(vlSymsp->TOP__cache__ways__BRA__3__KET____DOT__way_instance__data_bram.__PVT__data_out)
                                           : (IData)(vlSymsp->TOP__cache__ways__BRA__2__KET____DOT__way_instance__data_bram.__PVT__data_out))
                                       : ((1U & (IData)(vlSymsp->TOP__cache.__PVT__valid_way))
                                           ? (IData)(vlSymsp->TOP__cache__ways__BRA__1__KET____DOT__way_instance__data_bram.__PVT__data_out)
                                           : (IData)(vlSymsp->TOP__cache__ways__BRA__0__KET____DOT__way_instance__data_bram.__PVT__data_out))))
                               : 0xffffU);
}
