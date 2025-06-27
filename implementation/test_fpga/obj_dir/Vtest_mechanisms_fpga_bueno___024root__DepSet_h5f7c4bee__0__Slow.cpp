// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtest_mechanisms_fpga_bueno.h for the primary calling header

#include "Vtest_mechanisms_fpga_bueno__pch.h"
#include "Vtest_mechanisms_fpga_bueno__Syms.h"
#include "Vtest_mechanisms_fpga_bueno___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtest_mechanisms_fpga_bueno___024root___dump_triggers__stl(Vtest_mechanisms_fpga_bueno___024root* vlSelf);
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtest_mechanisms_fpga_bueno___024root___eval_triggers__stl(Vtest_mechanisms_fpga_bueno___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtest_mechanisms_fpga_bueno__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtest_mechanisms_fpga_bueno___024root___eval_triggers__stl\n"); );
    // Body
    vlSelf->__VstlTriggered.set(0U, (IData)(vlSelf->__VstlFirstIteration));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtest_mechanisms_fpga_bueno___024root___dump_triggers__stl(vlSelf);
    }
#endif
}

VL_ATTR_COLD void Vtest_mechanisms_fpga_bueno___024root___stl_sequent__TOP__0(Vtest_mechanisms_fpga_bueno___024root* vlSelf);
VL_ATTR_COLD void Vtest_mechanisms_fpga_bueno_cache_tfg___stl_sequent__TOP__test_mechanisms_fpga_bueno__patch_inst__patch_cache__0(Vtest_mechanisms_fpga_bueno_cache_tfg* vlSelf);
void Vtest_mechanisms_fpga_bueno___024root___ico_sequent__TOP__0(Vtest_mechanisms_fpga_bueno___024root* vlSelf);
void Vtest_mechanisms_fpga_bueno_top_patching_uno___ico_sequent__TOP__test_mechanisms_fpga_bueno__patch_inst__0(Vtest_mechanisms_fpga_bueno_top_patching_uno* vlSelf);
void Vtest_mechanisms_fpga_bueno___024root___ico_sequent__TOP__1(Vtest_mechanisms_fpga_bueno___024root* vlSelf);

VL_ATTR_COLD void Vtest_mechanisms_fpga_bueno___024root___eval_stl(Vtest_mechanisms_fpga_bueno___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtest_mechanisms_fpga_bueno__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtest_mechanisms_fpga_bueno___024root___eval_stl\n"); );
    // Body
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        Vtest_mechanisms_fpga_bueno___024root___stl_sequent__TOP__0(vlSelf);
        Vtest_mechanisms_fpga_bueno_cache_tfg___stl_sequent__TOP__test_mechanisms_fpga_bueno__patch_inst__patch_cache__0((&vlSymsp->TOP__test_mechanisms_fpga_bueno__patch_inst__patch_cache));
        Vtest_mechanisms_fpga_bueno___024root___ico_sequent__TOP__0(vlSelf);
        Vtest_mechanisms_fpga_bueno_top_patching_uno___ico_sequent__TOP__test_mechanisms_fpga_bueno__patch_inst__0((&vlSymsp->TOP__test_mechanisms_fpga_bueno__patch_inst));
        Vtest_mechanisms_fpga_bueno___024root___ico_sequent__TOP__1(vlSelf);
    }
}

VL_ATTR_COLD void Vtest_mechanisms_fpga_bueno___024root___stl_sequent__TOP__0(Vtest_mechanisms_fpga_bueno___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtest_mechanisms_fpga_bueno__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtest_mechanisms_fpga_bueno___024root___stl_sequent__TOP__0\n"); );
    // Body
    vlSelf->error = vlSymsp->TOP__test_mechanisms_fpga_bueno__patch_inst__patch_cache.__PVT__error_reg;
    vlSelf->flipped_out = vlSymsp->TOP__test_mechanisms_fpga_bueno.flipped_out;
}
