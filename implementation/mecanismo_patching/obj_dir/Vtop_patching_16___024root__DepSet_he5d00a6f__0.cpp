// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop_patching_16.h for the primary calling header

#include "Vtop_patching_16__pch.h"
#include "Vtop_patching_16__Syms.h"
#include "Vtop_patching_16___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop_patching_16___024root___dump_triggers__ico(Vtop_patching_16___024root* vlSelf);
#endif  // VL_DEBUG

void Vtop_patching_16___024root___eval_triggers__ico(Vtop_patching_16___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop_patching_16__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_patching_16___024root___eval_triggers__ico\n"); );
    // Body
    vlSelf->__VicoTriggered.set(0U, (IData)(vlSelf->__VicoFirstIteration));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtop_patching_16___024root___dump_triggers__ico(vlSelf);
    }
#endif
}

void Vtop_patching_16_cache_tfg___ico_sequent__TOP__top_patching_16__patch_cache__0(Vtop_patching_16_cache_tfg* vlSelf);
void Vtop_patching_16___024root___ico_sequent__TOP__0(Vtop_patching_16___024root* vlSelf);
void Vtop_patching_16_top_patching_16___ico_sequent__TOP__top_patching_16__0(Vtop_patching_16_top_patching_16* vlSelf);
void Vtop_patching_16___024root___ico_sequent__TOP__1(Vtop_patching_16___024root* vlSelf);

void Vtop_patching_16___024root___eval_ico(Vtop_patching_16___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop_patching_16__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_patching_16___024root___eval_ico\n"); );
    // Body
    if ((1ULL & vlSelf->__VicoTriggered.word(0U))) {
        Vtop_patching_16_cache_tfg___ico_sequent__TOP__top_patching_16__patch_cache__0((&vlSymsp->TOP__top_patching_16__patch_cache));
        Vtop_patching_16___024root___ico_sequent__TOP__0(vlSelf);
        Vtop_patching_16_top_patching_16___ico_sequent__TOP__top_patching_16__0((&vlSymsp->TOP__top_patching_16));
        Vtop_patching_16___024root___ico_sequent__TOP__1(vlSelf);
    }
}

VL_INLINE_OPT void Vtop_patching_16___024root___ico_sequent__TOP__0(Vtop_patching_16___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop_patching_16__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_patching_16___024root___ico_sequent__TOP__0\n"); );
    // Body
    vlSymsp->TOP__top_patching_16.activation_org[0xfU] 
        = vlSelf->activation_org[0xfU];
    vlSymsp->TOP__top_patching_16.activation_org[0xeU] 
        = vlSelf->activation_org[0xeU];
    vlSymsp->TOP__top_patching_16.activation_org[0xdU] 
        = vlSelf->activation_org[0xdU];
    vlSymsp->TOP__top_patching_16.activation_org[0xcU] 
        = vlSelf->activation_org[0xcU];
    vlSymsp->TOP__top_patching_16.activation_org[0xbU] 
        = vlSelf->activation_org[0xbU];
    vlSymsp->TOP__top_patching_16.activation_org[0xaU] 
        = vlSelf->activation_org[0xaU];
    vlSymsp->TOP__top_patching_16.activation_org[9U] 
        = vlSelf->activation_org[9U];
    vlSymsp->TOP__top_patching_16.activation_org[8U] 
        = vlSelf->activation_org[8U];
    vlSymsp->TOP__top_patching_16.activation_org[7U] 
        = vlSelf->activation_org[7U];
    vlSymsp->TOP__top_patching_16.activation_org[6U] 
        = vlSelf->activation_org[6U];
    vlSymsp->TOP__top_patching_16.activation_org[5U] 
        = vlSelf->activation_org[5U];
    vlSymsp->TOP__top_patching_16.activation_org[4U] 
        = vlSelf->activation_org[4U];
    vlSymsp->TOP__top_patching_16.activation_org[3U] 
        = vlSelf->activation_org[3U];
    vlSymsp->TOP__top_patching_16.activation_org[2U] 
        = vlSelf->activation_org[2U];
    vlSymsp->TOP__top_patching_16.activation_org[1U] 
        = vlSelf->activation_org[1U];
    vlSymsp->TOP__top_patching_16.activation_org[0U] 
        = vlSelf->activation_org[0U];
    vlSymsp->TOP__top_patching_16.p[0xfU] = vlSelf->p
        [0xfU];
    vlSymsp->TOP__top_patching_16.p[0xeU] = vlSelf->p
        [0xeU];
    vlSymsp->TOP__top_patching_16.p[0xdU] = vlSelf->p
        [0xdU];
    vlSymsp->TOP__top_patching_16.p[0xcU] = vlSelf->p
        [0xcU];
    vlSymsp->TOP__top_patching_16.p[0xbU] = vlSelf->p
        [0xbU];
    vlSymsp->TOP__top_patching_16.p[0xaU] = vlSelf->p
        [0xaU];
    vlSymsp->TOP__top_patching_16.p[9U] = vlSelf->p
        [9U];
    vlSymsp->TOP__top_patching_16.p[8U] = vlSelf->p
        [8U];
    vlSymsp->TOP__top_patching_16.p[7U] = vlSelf->p
        [7U];
    vlSymsp->TOP__top_patching_16.p[6U] = vlSelf->p
        [6U];
    vlSymsp->TOP__top_patching_16.p[5U] = vlSelf->p
        [5U];
    vlSymsp->TOP__top_patching_16.p[4U] = vlSelf->p
        [4U];
    vlSymsp->TOP__top_patching_16.p[3U] = vlSelf->p
        [3U];
    vlSymsp->TOP__top_patching_16.p[2U] = vlSelf->p
        [2U];
    vlSymsp->TOP__top_patching_16.p[1U] = vlSelf->p
        [1U];
    vlSymsp->TOP__top_patching_16.p[0U] = vlSelf->p
        [0U];
    vlSelf->valid = vlSymsp->TOP__top_patching_16__patch_cache.__PVT__valid;
}

VL_INLINE_OPT void Vtop_patching_16___024root___ico_sequent__TOP__1(Vtop_patching_16___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop_patching_16__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_patching_16___024root___ico_sequent__TOP__1\n"); );
    // Body
    vlSelf->chosen_activation[0xfU] = vlSymsp->TOP__top_patching_16.chosen_activation
        [0xfU];
    vlSelf->chosen_activation[0xeU] = vlSymsp->TOP__top_patching_16.chosen_activation
        [0xeU];
    vlSelf->chosen_activation[0xdU] = vlSymsp->TOP__top_patching_16.chosen_activation
        [0xdU];
    vlSelf->chosen_activation[0xcU] = vlSymsp->TOP__top_patching_16.chosen_activation
        [0xcU];
    vlSelf->chosen_activation[0xbU] = vlSymsp->TOP__top_patching_16.chosen_activation
        [0xbU];
    vlSelf->chosen_activation[0xaU] = vlSymsp->TOP__top_patching_16.chosen_activation
        [0xaU];
    vlSelf->chosen_activation[9U] = vlSymsp->TOP__top_patching_16.chosen_activation
        [9U];
    vlSelf->chosen_activation[8U] = vlSymsp->TOP__top_patching_16.chosen_activation
        [8U];
    vlSelf->chosen_activation[7U] = vlSymsp->TOP__top_patching_16.chosen_activation
        [7U];
    vlSelf->chosen_activation[6U] = vlSymsp->TOP__top_patching_16.chosen_activation
        [6U];
    vlSelf->chosen_activation[5U] = vlSymsp->TOP__top_patching_16.chosen_activation
        [5U];
    vlSelf->chosen_activation[4U] = vlSymsp->TOP__top_patching_16.chosen_activation
        [4U];
    vlSelf->chosen_activation[3U] = vlSymsp->TOP__top_patching_16.chosen_activation
        [3U];
    vlSelf->chosen_activation[2U] = vlSymsp->TOP__top_patching_16.chosen_activation
        [2U];
    vlSelf->chosen_activation[1U] = vlSymsp->TOP__top_patching_16.chosen_activation
        [1U];
    vlSelf->chosen_activation[0U] = vlSymsp->TOP__top_patching_16.chosen_activation
        [0U];
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop_patching_16___024root___dump_triggers__act(Vtop_patching_16___024root* vlSelf);
#endif  // VL_DEBUG

void Vtop_patching_16___024root___eval_triggers__act(Vtop_patching_16___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop_patching_16__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_patching_16___024root___eval_triggers__act\n"); );
    // Body
    vlSelf->__VactTriggered.set(0U, ((IData)(vlSelf->clk) 
                                     & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__clk__0))));
    vlSelf->__VactTriggered.set(1U, (((IData)(vlSelf->clk) 
                                      & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__clk__0))) 
                                     | ((IData)(vlSelf->reset) 
                                        & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__reset__0)))));
    vlSelf->__Vtrigprevexpr___TOP__clk__0 = vlSelf->clk;
    vlSelf->__Vtrigprevexpr___TOP__reset__0 = vlSelf->reset;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtop_patching_16___024root___dump_triggers__act(vlSelf);
    }
#endif
}

void Vtop_patching_16_bram__D100_Wd___nba_sequent__TOP__top_patching_16__patch_cache__ways__BRA__0__KET____DOT__way_instance__tag_bram__0(Vtop_patching_16_bram__D100_Wd* vlSelf);
void Vtop_patching_16_bram__D100_Wd___nba_sequent__TOP__top_patching_16__patch_cache__ways__BRA__1__KET____DOT__way_instance__tag_bram__0(Vtop_patching_16_bram__D100_Wd* vlSelf);
void Vtop_patching_16_bram__D100_Wd___nba_sequent__TOP__top_patching_16__patch_cache__ways__BRA__2__KET____DOT__way_instance__tag_bram__0(Vtop_patching_16_bram__D100_Wd* vlSelf);
void Vtop_patching_16_bram__D100_Wd___nba_sequent__TOP__top_patching_16__patch_cache__ways__BRA__3__KET____DOT__way_instance__tag_bram__0(Vtop_patching_16_bram__D100_Wd* vlSelf);
void Vtop_patching_16_bram__D100_Wd___nba_sequent__TOP__top_patching_16__patch_cache__ways__BRA__4__KET____DOT__way_instance__tag_bram__0(Vtop_patching_16_bram__D100_Wd* vlSelf);
void Vtop_patching_16_bram__D100_W10___nba_sequent__TOP__top_patching_16__patch_cache__ways__BRA__0__KET____DOT__way_instance__data_bram__0(Vtop_patching_16_bram__D100_W10* vlSelf);
void Vtop_patching_16_bram__D100_W10___nba_sequent__TOP__top_patching_16__patch_cache__ways__BRA__1__KET____DOT__way_instance__data_bram__0(Vtop_patching_16_bram__D100_W10* vlSelf);
void Vtop_patching_16_bram__D100_W10___nba_sequent__TOP__top_patching_16__patch_cache__ways__BRA__2__KET____DOT__way_instance__data_bram__0(Vtop_patching_16_bram__D100_W10* vlSelf);
void Vtop_patching_16_bram__D100_W10___nba_sequent__TOP__top_patching_16__patch_cache__ways__BRA__3__KET____DOT__way_instance__data_bram__0(Vtop_patching_16_bram__D100_W10* vlSelf);
void Vtop_patching_16_bram__D100_W10___nba_sequent__TOP__top_patching_16__patch_cache__ways__BRA__4__KET____DOT__way_instance__data_bram__0(Vtop_patching_16_bram__D100_W10* vlSelf);
void Vtop_patching_16_top_patching_16___nba_sequent__TOP__top_patching_16__0(Vtop_patching_16_top_patching_16* vlSelf);
void Vtop_patching_16_cache_tfg___nba_sequent__TOP__top_patching_16__patch_cache__0(Vtop_patching_16_cache_tfg* vlSelf);
void Vtop_patching_16_bram__D100_W10___nba_sequent__TOP__top_patching_16__patch_cache__ways__BRA__0__KET____DOT__way_instance__data_bram__1(Vtop_patching_16_bram__D100_W10* vlSelf);
void Vtop_patching_16_cache_tfg___nba_sequent__TOP__top_patching_16__patch_cache__1(Vtop_patching_16_cache_tfg* vlSelf);
void Vtop_patching_16___024root___nba_sequent__TOP__1(Vtop_patching_16___024root* vlSelf);
void Vtop_patching_16_cache_tfg___nba_comb__TOP__top_patching_16__patch_cache__0(Vtop_patching_16_cache_tfg* vlSelf);

void Vtop_patching_16___024root___eval_nba(Vtop_patching_16___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop_patching_16__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_patching_16___024root___eval_nba\n"); );
    // Body
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtop_patching_16_bram__D100_Wd___nba_sequent__TOP__top_patching_16__patch_cache__ways__BRA__0__KET____DOT__way_instance__tag_bram__0((&vlSymsp->TOP__top_patching_16__patch_cache__ways__BRA__0__KET____DOT__way_instance__tag_bram));
        Vtop_patching_16_bram__D100_Wd___nba_sequent__TOP__top_patching_16__patch_cache__ways__BRA__1__KET____DOT__way_instance__tag_bram__0((&vlSymsp->TOP__top_patching_16__patch_cache__ways__BRA__1__KET____DOT__way_instance__tag_bram));
        Vtop_patching_16_bram__D100_Wd___nba_sequent__TOP__top_patching_16__patch_cache__ways__BRA__2__KET____DOT__way_instance__tag_bram__0((&vlSymsp->TOP__top_patching_16__patch_cache__ways__BRA__2__KET____DOT__way_instance__tag_bram));
        Vtop_patching_16_bram__D100_Wd___nba_sequent__TOP__top_patching_16__patch_cache__ways__BRA__3__KET____DOT__way_instance__tag_bram__0((&vlSymsp->TOP__top_patching_16__patch_cache__ways__BRA__3__KET____DOT__way_instance__tag_bram));
        Vtop_patching_16_bram__D100_Wd___nba_sequent__TOP__top_patching_16__patch_cache__ways__BRA__4__KET____DOT__way_instance__tag_bram__0((&vlSymsp->TOP__top_patching_16__patch_cache__ways__BRA__4__KET____DOT__way_instance__tag_bram));
        Vtop_patching_16_bram__D100_W10___nba_sequent__TOP__top_patching_16__patch_cache__ways__BRA__0__KET____DOT__way_instance__data_bram__0((&vlSymsp->TOP__top_patching_16__patch_cache__ways__BRA__0__KET____DOT__way_instance__data_bram));
        Vtop_patching_16_bram__D100_W10___nba_sequent__TOP__top_patching_16__patch_cache__ways__BRA__1__KET____DOT__way_instance__data_bram__0((&vlSymsp->TOP__top_patching_16__patch_cache__ways__BRA__1__KET____DOT__way_instance__data_bram));
        Vtop_patching_16_bram__D100_W10___nba_sequent__TOP__top_patching_16__patch_cache__ways__BRA__2__KET____DOT__way_instance__data_bram__0((&vlSymsp->TOP__top_patching_16__patch_cache__ways__BRA__2__KET____DOT__way_instance__data_bram));
        Vtop_patching_16_bram__D100_W10___nba_sequent__TOP__top_patching_16__patch_cache__ways__BRA__3__KET____DOT__way_instance__data_bram__0((&vlSymsp->TOP__top_patching_16__patch_cache__ways__BRA__3__KET____DOT__way_instance__data_bram));
        Vtop_patching_16_bram__D100_W10___nba_sequent__TOP__top_patching_16__patch_cache__ways__BRA__4__KET____DOT__way_instance__data_bram__0((&vlSymsp->TOP__top_patching_16__patch_cache__ways__BRA__4__KET____DOT__way_instance__data_bram));
        Vtop_patching_16_top_patching_16___nba_sequent__TOP__top_patching_16__0((&vlSymsp->TOP__top_patching_16));
        Vtop_patching_16_cache_tfg___nba_sequent__TOP__top_patching_16__patch_cache__0((&vlSymsp->TOP__top_patching_16__patch_cache));
        Vtop_patching_16_bram__D100_W10___nba_sequent__TOP__top_patching_16__patch_cache__ways__BRA__0__KET____DOT__way_instance__data_bram__1((&vlSymsp->TOP__top_patching_16__patch_cache__ways__BRA__4__KET____DOT__way_instance__data_bram));
        Vtop_patching_16_bram__D100_W10___nba_sequent__TOP__top_patching_16__patch_cache__ways__BRA__0__KET____DOT__way_instance__data_bram__1((&vlSymsp->TOP__top_patching_16__patch_cache__ways__BRA__3__KET____DOT__way_instance__data_bram));
        Vtop_patching_16_bram__D100_W10___nba_sequent__TOP__top_patching_16__patch_cache__ways__BRA__0__KET____DOT__way_instance__data_bram__1((&vlSymsp->TOP__top_patching_16__patch_cache__ways__BRA__2__KET____DOT__way_instance__data_bram));
        Vtop_patching_16_bram__D100_W10___nba_sequent__TOP__top_patching_16__patch_cache__ways__BRA__0__KET____DOT__way_instance__data_bram__1((&vlSymsp->TOP__top_patching_16__patch_cache__ways__BRA__1__KET____DOT__way_instance__data_bram));
        Vtop_patching_16_bram__D100_W10___nba_sequent__TOP__top_patching_16__patch_cache__ways__BRA__0__KET____DOT__way_instance__data_bram__1((&vlSymsp->TOP__top_patching_16__patch_cache__ways__BRA__0__KET____DOT__way_instance__data_bram));
        Vtop_patching_16___024root___ico_sequent__TOP__1(vlSelf);
    }
    if ((2ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtop_patching_16_cache_tfg___nba_sequent__TOP__top_patching_16__patch_cache__1((&vlSymsp->TOP__top_patching_16__patch_cache));
        Vtop_patching_16___024root___nba_sequent__TOP__1(vlSelf);
    }
    if ((3ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtop_patching_16_cache_tfg___nba_comb__TOP__top_patching_16__patch_cache__0((&vlSymsp->TOP__top_patching_16__patch_cache));
    }
}

VL_INLINE_OPT void Vtop_patching_16___024root___nba_sequent__TOP__1(Vtop_patching_16___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop_patching_16__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_patching_16___024root___nba_sequent__TOP__1\n"); );
    // Body
    vlSelf->error = vlSymsp->TOP__top_patching_16__patch_cache.__PVT__error_reg;
    vlSelf->valid = vlSymsp->TOP__top_patching_16__patch_cache.__PVT__valid;
}
