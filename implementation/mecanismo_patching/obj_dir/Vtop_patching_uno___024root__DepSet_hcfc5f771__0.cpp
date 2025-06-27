// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop_patching_uno.h for the primary calling header

#include "Vtop_patching_uno__pch.h"
#include "Vtop_patching_uno__Syms.h"
#include "Vtop_patching_uno___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop_patching_uno___024root___dump_triggers__ico(Vtop_patching_uno___024root* vlSelf);
#endif  // VL_DEBUG

void Vtop_patching_uno___024root___eval_triggers__ico(Vtop_patching_uno___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop_patching_uno__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_patching_uno___024root___eval_triggers__ico\n"); );
    // Body
    vlSelf->__VicoTriggered.set(0U, (IData)(vlSelf->__VicoFirstIteration));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtop_patching_uno___024root___dump_triggers__ico(vlSelf);
    }
#endif
}

void Vtop_patching_uno_cache_tfg___ico_sequent__TOP__top_patching_uno__patch_cache__0(Vtop_patching_uno_cache_tfg* vlSelf);
void Vtop_patching_uno___024root___ico_sequent__TOP__0(Vtop_patching_uno___024root* vlSelf);

void Vtop_patching_uno___024root___eval_ico(Vtop_patching_uno___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop_patching_uno__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_patching_uno___024root___eval_ico\n"); );
    // Body
    if ((1ULL & vlSelf->__VicoTriggered.word(0U))) {
        Vtop_patching_uno_cache_tfg___ico_sequent__TOP__top_patching_uno__patch_cache__0((&vlSymsp->TOP__top_patching_uno__patch_cache));
        Vtop_patching_uno___024root___ico_sequent__TOP__0(vlSelf);
    }
}

VL_INLINE_OPT void Vtop_patching_uno___024root___ico_sequent__TOP__0(Vtop_patching_uno___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop_patching_uno__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_patching_uno___024root___ico_sequent__TOP__0\n"); );
    // Body
    vlSelf->valid = vlSymsp->TOP__top_patching_uno__patch_cache.__PVT__valid;
    vlSelf->chosen_activation = ((IData)(vlSelf->p)
                                  ? ((IData)(vlSymsp->TOP__top_patching_uno__patch_cache.__PVT__enable_ram_output)
                                      ? ((4U & (IData)(vlSymsp->TOP__top_patching_uno__patch_cache.__PVT__valid_way))
                                          ? ((2U & (IData)(vlSymsp->TOP__top_patching_uno__patch_cache.__PVT__valid_way))
                                              ? 0U : 
                                             ((1U & (IData)(vlSymsp->TOP__top_patching_uno__patch_cache.__PVT__valid_way))
                                               ? 0U
                                               : (IData)(vlSymsp->TOP__top_patching_uno__patch_cache__ways__BRA__4__KET____DOT__way_instance__data_bram.__PVT__data_out)))
                                          : ((2U & (IData)(vlSymsp->TOP__top_patching_uno__patch_cache.__PVT__valid_way))
                                              ? ((1U 
                                                  & (IData)(vlSymsp->TOP__top_patching_uno__patch_cache.__PVT__valid_way))
                                                  ? (IData)(vlSymsp->TOP__top_patching_uno__patch_cache__ways__BRA__3__KET____DOT__way_instance__data_bram.__PVT__data_out)
                                                  : (IData)(vlSymsp->TOP__top_patching_uno__patch_cache__ways__BRA__2__KET____DOT__way_instance__data_bram.__PVT__data_out))
                                              : ((1U 
                                                  & (IData)(vlSymsp->TOP__top_patching_uno__patch_cache.__PVT__valid_way))
                                                  ? (IData)(vlSymsp->TOP__top_patching_uno__patch_cache__ways__BRA__1__KET____DOT__way_instance__data_bram.__PVT__data_out)
                                                  : (IData)(vlSymsp->TOP__top_patching_uno__patch_cache__ways__BRA__0__KET____DOT__way_instance__data_bram.__PVT__data_out))))
                                      : 0xffffU) : (IData)(vlSelf->activation_org));
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop_patching_uno___024root___dump_triggers__act(Vtop_patching_uno___024root* vlSelf);
#endif  // VL_DEBUG

void Vtop_patching_uno___024root___eval_triggers__act(Vtop_patching_uno___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop_patching_uno__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_patching_uno___024root___eval_triggers__act\n"); );
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
        Vtop_patching_uno___024root___dump_triggers__act(vlSelf);
    }
#endif
}

void Vtop_patching_uno_bram__D100_Wd___nba_sequent__TOP__top_patching_uno__patch_cache__ways__BRA__0__KET____DOT__way_instance__tag_bram__0(Vtop_patching_uno_bram__D100_Wd* vlSelf);
void Vtop_patching_uno_bram__D100_Wd___nba_sequent__TOP__top_patching_uno__patch_cache__ways__BRA__1__KET____DOT__way_instance__tag_bram__0(Vtop_patching_uno_bram__D100_Wd* vlSelf);
void Vtop_patching_uno_bram__D100_Wd___nba_sequent__TOP__top_patching_uno__patch_cache__ways__BRA__2__KET____DOT__way_instance__tag_bram__0(Vtop_patching_uno_bram__D100_Wd* vlSelf);
void Vtop_patching_uno_bram__D100_Wd___nba_sequent__TOP__top_patching_uno__patch_cache__ways__BRA__3__KET____DOT__way_instance__tag_bram__0(Vtop_patching_uno_bram__D100_Wd* vlSelf);
void Vtop_patching_uno_bram__D100_Wd___nba_sequent__TOP__top_patching_uno__patch_cache__ways__BRA__4__KET____DOT__way_instance__tag_bram__0(Vtop_patching_uno_bram__D100_Wd* vlSelf);
void Vtop_patching_uno_bram__D100_W10___nba_sequent__TOP__top_patching_uno__patch_cache__ways__BRA__0__KET____DOT__way_instance__data_bram__0(Vtop_patching_uno_bram__D100_W10* vlSelf);
void Vtop_patching_uno_bram__D100_W10___nba_sequent__TOP__top_patching_uno__patch_cache__ways__BRA__1__KET____DOT__way_instance__data_bram__0(Vtop_patching_uno_bram__D100_W10* vlSelf);
void Vtop_patching_uno_bram__D100_W10___nba_sequent__TOP__top_patching_uno__patch_cache__ways__BRA__2__KET____DOT__way_instance__data_bram__0(Vtop_patching_uno_bram__D100_W10* vlSelf);
void Vtop_patching_uno_bram__D100_W10___nba_sequent__TOP__top_patching_uno__patch_cache__ways__BRA__3__KET____DOT__way_instance__data_bram__0(Vtop_patching_uno_bram__D100_W10* vlSelf);
void Vtop_patching_uno_bram__D100_W10___nba_sequent__TOP__top_patching_uno__patch_cache__ways__BRA__4__KET____DOT__way_instance__data_bram__0(Vtop_patching_uno_bram__D100_W10* vlSelf);
void Vtop_patching_uno_cache_tfg___nba_sequent__TOP__top_patching_uno__patch_cache__0(Vtop_patching_uno_cache_tfg* vlSelf);
void Vtop_patching_uno_cache_tfg___nba_sequent__TOP__top_patching_uno__patch_cache__1(Vtop_patching_uno_cache_tfg* vlSelf);
void Vtop_patching_uno___024root___nba_sequent__TOP__0(Vtop_patching_uno___024root* vlSelf);
void Vtop_patching_uno_cache_tfg___nba_comb__TOP__top_patching_uno__patch_cache__0(Vtop_patching_uno_cache_tfg* vlSelf);
void Vtop_patching_uno___024root___nba_comb__TOP__0(Vtop_patching_uno___024root* vlSelf);

void Vtop_patching_uno___024root___eval_nba(Vtop_patching_uno___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop_patching_uno__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_patching_uno___024root___eval_nba\n"); );
    // Body
    if ((2ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtop_patching_uno_bram__D100_Wd___nba_sequent__TOP__top_patching_uno__patch_cache__ways__BRA__0__KET____DOT__way_instance__tag_bram__0((&vlSymsp->TOP__top_patching_uno__patch_cache__ways__BRA__0__KET____DOT__way_instance__tag_bram));
        Vtop_patching_uno_bram__D100_Wd___nba_sequent__TOP__top_patching_uno__patch_cache__ways__BRA__1__KET____DOT__way_instance__tag_bram__0((&vlSymsp->TOP__top_patching_uno__patch_cache__ways__BRA__1__KET____DOT__way_instance__tag_bram));
        Vtop_patching_uno_bram__D100_Wd___nba_sequent__TOP__top_patching_uno__patch_cache__ways__BRA__2__KET____DOT__way_instance__tag_bram__0((&vlSymsp->TOP__top_patching_uno__patch_cache__ways__BRA__2__KET____DOT__way_instance__tag_bram));
        Vtop_patching_uno_bram__D100_Wd___nba_sequent__TOP__top_patching_uno__patch_cache__ways__BRA__3__KET____DOT__way_instance__tag_bram__0((&vlSymsp->TOP__top_patching_uno__patch_cache__ways__BRA__3__KET____DOT__way_instance__tag_bram));
        Vtop_patching_uno_bram__D100_Wd___nba_sequent__TOP__top_patching_uno__patch_cache__ways__BRA__4__KET____DOT__way_instance__tag_bram__0((&vlSymsp->TOP__top_patching_uno__patch_cache__ways__BRA__4__KET____DOT__way_instance__tag_bram));
        Vtop_patching_uno_bram__D100_W10___nba_sequent__TOP__top_patching_uno__patch_cache__ways__BRA__0__KET____DOT__way_instance__data_bram__0((&vlSymsp->TOP__top_patching_uno__patch_cache__ways__BRA__0__KET____DOT__way_instance__data_bram));
        Vtop_patching_uno_bram__D100_W10___nba_sequent__TOP__top_patching_uno__patch_cache__ways__BRA__1__KET____DOT__way_instance__data_bram__0((&vlSymsp->TOP__top_patching_uno__patch_cache__ways__BRA__1__KET____DOT__way_instance__data_bram));
        Vtop_patching_uno_bram__D100_W10___nba_sequent__TOP__top_patching_uno__patch_cache__ways__BRA__2__KET____DOT__way_instance__data_bram__0((&vlSymsp->TOP__top_patching_uno__patch_cache__ways__BRA__2__KET____DOT__way_instance__data_bram));
        Vtop_patching_uno_bram__D100_W10___nba_sequent__TOP__top_patching_uno__patch_cache__ways__BRA__3__KET____DOT__way_instance__data_bram__0((&vlSymsp->TOP__top_patching_uno__patch_cache__ways__BRA__3__KET____DOT__way_instance__data_bram));
        Vtop_patching_uno_bram__D100_W10___nba_sequent__TOP__top_patching_uno__patch_cache__ways__BRA__4__KET____DOT__way_instance__data_bram__0((&vlSymsp->TOP__top_patching_uno__patch_cache__ways__BRA__4__KET____DOT__way_instance__data_bram));
        Vtop_patching_uno_cache_tfg___nba_sequent__TOP__top_patching_uno__patch_cache__0((&vlSymsp->TOP__top_patching_uno__patch_cache));
    }
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtop_patching_uno_cache_tfg___nba_sequent__TOP__top_patching_uno__patch_cache__1((&vlSymsp->TOP__top_patching_uno__patch_cache));
        Vtop_patching_uno___024root___nba_sequent__TOP__0(vlSelf);
    }
    if ((3ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtop_patching_uno_cache_tfg___nba_comb__TOP__top_patching_uno__patch_cache__0((&vlSymsp->TOP__top_patching_uno__patch_cache));
        Vtop_patching_uno___024root___nba_comb__TOP__0(vlSelf);
    }
}

VL_INLINE_OPT void Vtop_patching_uno___024root___nba_sequent__TOP__0(Vtop_patching_uno___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop_patching_uno__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_patching_uno___024root___nba_sequent__TOP__0\n"); );
    // Body
    vlSelf->error = vlSymsp->TOP__top_patching_uno__patch_cache.__PVT__error_reg;
    vlSelf->valid = vlSymsp->TOP__top_patching_uno__patch_cache.__PVT__valid;
}

VL_INLINE_OPT void Vtop_patching_uno___024root___nba_comb__TOP__0(Vtop_patching_uno___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop_patching_uno__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_patching_uno___024root___nba_comb__TOP__0\n"); );
    // Body
    vlSelf->chosen_activation = ((IData)(vlSelf->p)
                                  ? ((IData)(vlSymsp->TOP__top_patching_uno__patch_cache.__PVT__enable_ram_output)
                                      ? ((4U & (IData)(vlSymsp->TOP__top_patching_uno__patch_cache.__PVT__valid_way))
                                          ? ((2U & (IData)(vlSymsp->TOP__top_patching_uno__patch_cache.__PVT__valid_way))
                                              ? 0U : 
                                             ((1U & (IData)(vlSymsp->TOP__top_patching_uno__patch_cache.__PVT__valid_way))
                                               ? 0U
                                               : (IData)(vlSymsp->TOP__top_patching_uno__patch_cache__ways__BRA__4__KET____DOT__way_instance__data_bram.__PVT__data_out)))
                                          : ((2U & (IData)(vlSymsp->TOP__top_patching_uno__patch_cache.__PVT__valid_way))
                                              ? ((1U 
                                                  & (IData)(vlSymsp->TOP__top_patching_uno__patch_cache.__PVT__valid_way))
                                                  ? (IData)(vlSymsp->TOP__top_patching_uno__patch_cache__ways__BRA__3__KET____DOT__way_instance__data_bram.__PVT__data_out)
                                                  : (IData)(vlSymsp->TOP__top_patching_uno__patch_cache__ways__BRA__2__KET____DOT__way_instance__data_bram.__PVT__data_out))
                                              : ((1U 
                                                  & (IData)(vlSymsp->TOP__top_patching_uno__patch_cache.__PVT__valid_way))
                                                  ? (IData)(vlSymsp->TOP__top_patching_uno__patch_cache__ways__BRA__1__KET____DOT__way_instance__data_bram.__PVT__data_out)
                                                  : (IData)(vlSymsp->TOP__top_patching_uno__patch_cache__ways__BRA__0__KET____DOT__way_instance__data_bram.__PVT__data_out))))
                                      : 0xffffU) : (IData)(vlSelf->activation_org));
}
