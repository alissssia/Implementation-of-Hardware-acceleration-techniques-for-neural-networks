// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtest_mechanisms_fpga_bueno.h for the primary calling header

#include "Vtest_mechanisms_fpga_bueno__pch.h"
#include "Vtest_mechanisms_fpga_bueno__Syms.h"
#include "Vtest_mechanisms_fpga_bueno___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtest_mechanisms_fpga_bueno___024root___dump_triggers__ico(Vtest_mechanisms_fpga_bueno___024root* vlSelf);
#endif  // VL_DEBUG

void Vtest_mechanisms_fpga_bueno___024root___eval_triggers__ico(Vtest_mechanisms_fpga_bueno___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtest_mechanisms_fpga_bueno__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtest_mechanisms_fpga_bueno___024root___eval_triggers__ico\n"); );
    // Body
    vlSelf->__VicoTriggered.set(0U, (IData)(vlSelf->__VicoFirstIteration));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtest_mechanisms_fpga_bueno___024root___dump_triggers__ico(vlSelf);
    }
#endif
}

void Vtest_mechanisms_fpga_bueno_cache_tfg___ico_sequent__TOP__test_mechanisms_fpga_bueno__patch_inst__patch_cache__0(Vtest_mechanisms_fpga_bueno_cache_tfg* vlSelf);
void Vtest_mechanisms_fpga_bueno___024root___ico_sequent__TOP__0(Vtest_mechanisms_fpga_bueno___024root* vlSelf);
void Vtest_mechanisms_fpga_bueno_top_patching_uno___ico_sequent__TOP__test_mechanisms_fpga_bueno__patch_inst__0(Vtest_mechanisms_fpga_bueno_top_patching_uno* vlSelf);
void Vtest_mechanisms_fpga_bueno___024root___ico_sequent__TOP__1(Vtest_mechanisms_fpga_bueno___024root* vlSelf);

void Vtest_mechanisms_fpga_bueno___024root___eval_ico(Vtest_mechanisms_fpga_bueno___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtest_mechanisms_fpga_bueno__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtest_mechanisms_fpga_bueno___024root___eval_ico\n"); );
    // Body
    if ((1ULL & vlSelf->__VicoTriggered.word(0U))) {
        Vtest_mechanisms_fpga_bueno_cache_tfg___ico_sequent__TOP__test_mechanisms_fpga_bueno__patch_inst__patch_cache__0((&vlSymsp->TOP__test_mechanisms_fpga_bueno__patch_inst__patch_cache));
        Vtest_mechanisms_fpga_bueno___024root___ico_sequent__TOP__0(vlSelf);
        Vtest_mechanisms_fpga_bueno_top_patching_uno___ico_sequent__TOP__test_mechanisms_fpga_bueno__patch_inst__0((&vlSymsp->TOP__test_mechanisms_fpga_bueno__patch_inst));
        Vtest_mechanisms_fpga_bueno___024root___ico_sequent__TOP__1(vlSelf);
    }
}

VL_INLINE_OPT void Vtest_mechanisms_fpga_bueno___024root___ico_sequent__TOP__0(Vtest_mechanisms_fpga_bueno___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtest_mechanisms_fpga_bueno__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtest_mechanisms_fpga_bueno___024root___ico_sequent__TOP__0\n"); );
    // Body
    vlSelf->valid = vlSymsp->TOP__test_mechanisms_fpga_bueno__patch_inst__patch_cache.__PVT__valid;
}

VL_INLINE_OPT void Vtest_mechanisms_fpga_bueno___024root___ico_sequent__TOP__1(Vtest_mechanisms_fpga_bueno___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtest_mechanisms_fpga_bueno__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtest_mechanisms_fpga_bueno___024root___ico_sequent__TOP__1\n"); );
    // Body
    vlSelf->patched_out = vlSymsp->TOP__test_mechanisms_fpga_bueno__patch_inst.__PVT__chosen_activation;
    vlSelf->activation_final = ((IData)(vlSelf->p) ? (IData)(vlSymsp->TOP__test_mechanisms_fpga_bueno__patch_inst.__PVT__chosen_activation)
                                 : ((IData)(vlSelf->f)
                                     ? (IData)(vlSymsp->TOP__test_mechanisms_fpga_bueno.flipped_out)
                                     : (((IData)(vlSelf->f) 
                                         | (IData)(vlSelf->p))
                                         ? 0xffffU : (IData)(vlSelf->activation_org))));
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtest_mechanisms_fpga_bueno___024root___dump_triggers__act(Vtest_mechanisms_fpga_bueno___024root* vlSelf);
#endif  // VL_DEBUG

void Vtest_mechanisms_fpga_bueno___024root___eval_triggers__act(Vtest_mechanisms_fpga_bueno___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtest_mechanisms_fpga_bueno__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtest_mechanisms_fpga_bueno___024root___eval_triggers__act\n"); );
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
        Vtest_mechanisms_fpga_bueno___024root___dump_triggers__act(vlSelf);
    }
#endif
}

void Vtest_mechanisms_fpga_bueno_bram__D100_Wd___nba_sequent__TOP__test_mechanisms_fpga_bueno__patch_inst__patch_cache__ways__BRA__0__KET____DOT__way_instance__tag_bram__0(Vtest_mechanisms_fpga_bueno_bram__D100_Wd* vlSelf);
void Vtest_mechanisms_fpga_bueno_bram__D100_Wd___nba_sequent__TOP__test_mechanisms_fpga_bueno__patch_inst__patch_cache__ways__BRA__1__KET____DOT__way_instance__tag_bram__0(Vtest_mechanisms_fpga_bueno_bram__D100_Wd* vlSelf);
void Vtest_mechanisms_fpga_bueno_bram__D100_Wd___nba_sequent__TOP__test_mechanisms_fpga_bueno__patch_inst__patch_cache__ways__BRA__2__KET____DOT__way_instance__tag_bram__0(Vtest_mechanisms_fpga_bueno_bram__D100_Wd* vlSelf);
void Vtest_mechanisms_fpga_bueno_bram__D100_Wd___nba_sequent__TOP__test_mechanisms_fpga_bueno__patch_inst__patch_cache__ways__BRA__3__KET____DOT__way_instance__tag_bram__0(Vtest_mechanisms_fpga_bueno_bram__D100_Wd* vlSelf);
void Vtest_mechanisms_fpga_bueno_bram__D100_Wd___nba_sequent__TOP__test_mechanisms_fpga_bueno__patch_inst__patch_cache__ways__BRA__4__KET____DOT__way_instance__tag_bram__0(Vtest_mechanisms_fpga_bueno_bram__D100_Wd* vlSelf);
void Vtest_mechanisms_fpga_bueno_bram__D100_W10___nba_sequent__TOP__test_mechanisms_fpga_bueno__patch_inst__patch_cache__ways__BRA__0__KET____DOT__way_instance__data_bram__0(Vtest_mechanisms_fpga_bueno_bram__D100_W10* vlSelf);
void Vtest_mechanisms_fpga_bueno_bram__D100_W10___nba_sequent__TOP__test_mechanisms_fpga_bueno__patch_inst__patch_cache__ways__BRA__1__KET____DOT__way_instance__data_bram__0(Vtest_mechanisms_fpga_bueno_bram__D100_W10* vlSelf);
void Vtest_mechanisms_fpga_bueno_bram__D100_W10___nba_sequent__TOP__test_mechanisms_fpga_bueno__patch_inst__patch_cache__ways__BRA__2__KET____DOT__way_instance__data_bram__0(Vtest_mechanisms_fpga_bueno_bram__D100_W10* vlSelf);
void Vtest_mechanisms_fpga_bueno_bram__D100_W10___nba_sequent__TOP__test_mechanisms_fpga_bueno__patch_inst__patch_cache__ways__BRA__3__KET____DOT__way_instance__data_bram__0(Vtest_mechanisms_fpga_bueno_bram__D100_W10* vlSelf);
void Vtest_mechanisms_fpga_bueno_bram__D100_W10___nba_sequent__TOP__test_mechanisms_fpga_bueno__patch_inst__patch_cache__ways__BRA__4__KET____DOT__way_instance__data_bram__0(Vtest_mechanisms_fpga_bueno_bram__D100_W10* vlSelf);
void Vtest_mechanisms_fpga_bueno_cache_tfg___nba_sequent__TOP__test_mechanisms_fpga_bueno__patch_inst__patch_cache__0(Vtest_mechanisms_fpga_bueno_cache_tfg* vlSelf);
void Vtest_mechanisms_fpga_bueno_cache_tfg___nba_sequent__TOP__test_mechanisms_fpga_bueno__patch_inst__patch_cache__1(Vtest_mechanisms_fpga_bueno_cache_tfg* vlSelf);
void Vtest_mechanisms_fpga_bueno_test_mechanisms_fpga_bueno___nba_sequent__TOP__test_mechanisms_fpga_bueno__0(Vtest_mechanisms_fpga_bueno_test_mechanisms_fpga_bueno* vlSelf);
void Vtest_mechanisms_fpga_bueno___024root___nba_sequent__TOP__0(Vtest_mechanisms_fpga_bueno___024root* vlSelf);
void Vtest_mechanisms_fpga_bueno_cache_tfg___nba_comb__TOP__test_mechanisms_fpga_bueno__patch_inst__patch_cache__0(Vtest_mechanisms_fpga_bueno_cache_tfg* vlSelf);

void Vtest_mechanisms_fpga_bueno___024root___eval_nba(Vtest_mechanisms_fpga_bueno___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtest_mechanisms_fpga_bueno__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtest_mechanisms_fpga_bueno___024root___eval_nba\n"); );
    // Body
    if ((2ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtest_mechanisms_fpga_bueno_bram__D100_Wd___nba_sequent__TOP__test_mechanisms_fpga_bueno__patch_inst__patch_cache__ways__BRA__0__KET____DOT__way_instance__tag_bram__0((&vlSymsp->TOP__test_mechanisms_fpga_bueno__patch_inst__patch_cache__ways__BRA__0__KET____DOT__way_instance__tag_bram));
        Vtest_mechanisms_fpga_bueno_bram__D100_Wd___nba_sequent__TOP__test_mechanisms_fpga_bueno__patch_inst__patch_cache__ways__BRA__1__KET____DOT__way_instance__tag_bram__0((&vlSymsp->TOP__test_mechanisms_fpga_bueno__patch_inst__patch_cache__ways__BRA__1__KET____DOT__way_instance__tag_bram));
        Vtest_mechanisms_fpga_bueno_bram__D100_Wd___nba_sequent__TOP__test_mechanisms_fpga_bueno__patch_inst__patch_cache__ways__BRA__2__KET____DOT__way_instance__tag_bram__0((&vlSymsp->TOP__test_mechanisms_fpga_bueno__patch_inst__patch_cache__ways__BRA__2__KET____DOT__way_instance__tag_bram));
        Vtest_mechanisms_fpga_bueno_bram__D100_Wd___nba_sequent__TOP__test_mechanisms_fpga_bueno__patch_inst__patch_cache__ways__BRA__3__KET____DOT__way_instance__tag_bram__0((&vlSymsp->TOP__test_mechanisms_fpga_bueno__patch_inst__patch_cache__ways__BRA__3__KET____DOT__way_instance__tag_bram));
        Vtest_mechanisms_fpga_bueno_bram__D100_Wd___nba_sequent__TOP__test_mechanisms_fpga_bueno__patch_inst__patch_cache__ways__BRA__4__KET____DOT__way_instance__tag_bram__0((&vlSymsp->TOP__test_mechanisms_fpga_bueno__patch_inst__patch_cache__ways__BRA__4__KET____DOT__way_instance__tag_bram));
        Vtest_mechanisms_fpga_bueno_bram__D100_W10___nba_sequent__TOP__test_mechanisms_fpga_bueno__patch_inst__patch_cache__ways__BRA__0__KET____DOT__way_instance__data_bram__0((&vlSymsp->TOP__test_mechanisms_fpga_bueno__patch_inst__patch_cache__ways__BRA__0__KET____DOT__way_instance__data_bram));
        Vtest_mechanisms_fpga_bueno_bram__D100_W10___nba_sequent__TOP__test_mechanisms_fpga_bueno__patch_inst__patch_cache__ways__BRA__1__KET____DOT__way_instance__data_bram__0((&vlSymsp->TOP__test_mechanisms_fpga_bueno__patch_inst__patch_cache__ways__BRA__1__KET____DOT__way_instance__data_bram));
        Vtest_mechanisms_fpga_bueno_bram__D100_W10___nba_sequent__TOP__test_mechanisms_fpga_bueno__patch_inst__patch_cache__ways__BRA__2__KET____DOT__way_instance__data_bram__0((&vlSymsp->TOP__test_mechanisms_fpga_bueno__patch_inst__patch_cache__ways__BRA__2__KET____DOT__way_instance__data_bram));
        Vtest_mechanisms_fpga_bueno_bram__D100_W10___nba_sequent__TOP__test_mechanisms_fpga_bueno__patch_inst__patch_cache__ways__BRA__3__KET____DOT__way_instance__data_bram__0((&vlSymsp->TOP__test_mechanisms_fpga_bueno__patch_inst__patch_cache__ways__BRA__3__KET____DOT__way_instance__data_bram));
        Vtest_mechanisms_fpga_bueno_bram__D100_W10___nba_sequent__TOP__test_mechanisms_fpga_bueno__patch_inst__patch_cache__ways__BRA__4__KET____DOT__way_instance__data_bram__0((&vlSymsp->TOP__test_mechanisms_fpga_bueno__patch_inst__patch_cache__ways__BRA__4__KET____DOT__way_instance__data_bram));
        Vtest_mechanisms_fpga_bueno_cache_tfg___nba_sequent__TOP__test_mechanisms_fpga_bueno__patch_inst__patch_cache__0((&vlSymsp->TOP__test_mechanisms_fpga_bueno__patch_inst__patch_cache));
    }
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtest_mechanisms_fpga_bueno_cache_tfg___nba_sequent__TOP__test_mechanisms_fpga_bueno__patch_inst__patch_cache__1((&vlSymsp->TOP__test_mechanisms_fpga_bueno__patch_inst__patch_cache));
        Vtest_mechanisms_fpga_bueno_test_mechanisms_fpga_bueno___nba_sequent__TOP__test_mechanisms_fpga_bueno__0((&vlSymsp->TOP__test_mechanisms_fpga_bueno));
        Vtest_mechanisms_fpga_bueno___024root___nba_sequent__TOP__0(vlSelf);
    }
    if ((3ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtest_mechanisms_fpga_bueno_cache_tfg___nba_comb__TOP__test_mechanisms_fpga_bueno__patch_inst__patch_cache__0((&vlSymsp->TOP__test_mechanisms_fpga_bueno__patch_inst__patch_cache));
        Vtest_mechanisms_fpga_bueno_top_patching_uno___ico_sequent__TOP__test_mechanisms_fpga_bueno__patch_inst__0((&vlSymsp->TOP__test_mechanisms_fpga_bueno__patch_inst));
        Vtest_mechanisms_fpga_bueno___024root___ico_sequent__TOP__1(vlSelf);
    }
}

VL_INLINE_OPT void Vtest_mechanisms_fpga_bueno___024root___nba_sequent__TOP__0(Vtest_mechanisms_fpga_bueno___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtest_mechanisms_fpga_bueno__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtest_mechanisms_fpga_bueno___024root___nba_sequent__TOP__0\n"); );
    // Body
    vlSelf->error = vlSymsp->TOP__test_mechanisms_fpga_bueno__patch_inst__patch_cache.__PVT__error_reg;
    vlSelf->valid = vlSymsp->TOP__test_mechanisms_fpga_bueno__patch_inst__patch_cache.__PVT__valid;
    vlSelf->flipped_out = vlSymsp->TOP__test_mechanisms_fpga_bueno.flipped_out;
}
