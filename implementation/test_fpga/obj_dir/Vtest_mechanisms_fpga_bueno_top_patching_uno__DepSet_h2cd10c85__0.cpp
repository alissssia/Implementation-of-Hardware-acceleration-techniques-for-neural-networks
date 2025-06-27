// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtest_mechanisms_fpga_bueno.h for the primary calling header

#include "Vtest_mechanisms_fpga_bueno__pch.h"
#include "Vtest_mechanisms_fpga_bueno__Syms.h"
#include "Vtest_mechanisms_fpga_bueno_top_patching_uno.h"

VL_INLINE_OPT void Vtest_mechanisms_fpga_bueno_top_patching_uno___ico_sequent__TOP__test_mechanisms_fpga_bueno__patch_inst__0(Vtest_mechanisms_fpga_bueno_top_patching_uno* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtest_mechanisms_fpga_bueno__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtest_mechanisms_fpga_bueno_top_patching_uno___ico_sequent__TOP__test_mechanisms_fpga_bueno__patch_inst__0\n"); );
    // Body
    vlSelf->__PVT__chosen_activation = ((IData)(vlSymsp->TOP.p)
                                         ? ((IData)(vlSymsp->TOP__test_mechanisms_fpga_bueno__patch_inst__patch_cache.__PVT__enable_ram_output)
                                             ? ((4U 
                                                 & (IData)(vlSymsp->TOP__test_mechanisms_fpga_bueno__patch_inst__patch_cache.__PVT__valid_way))
                                                 ? 
                                                ((2U 
                                                  & (IData)(vlSymsp->TOP__test_mechanisms_fpga_bueno__patch_inst__patch_cache.__PVT__valid_way))
                                                  ? 0U
                                                  : 
                                                 ((1U 
                                                   & (IData)(vlSymsp->TOP__test_mechanisms_fpga_bueno__patch_inst__patch_cache.__PVT__valid_way))
                                                   ? 0U
                                                   : (IData)(vlSymsp->TOP__test_mechanisms_fpga_bueno__patch_inst__patch_cache__ways__BRA__4__KET____DOT__way_instance__data_bram.__PVT__data_out)))
                                                 : 
                                                ((2U 
                                                  & (IData)(vlSymsp->TOP__test_mechanisms_fpga_bueno__patch_inst__patch_cache.__PVT__valid_way))
                                                  ? 
                                                 ((1U 
                                                   & (IData)(vlSymsp->TOP__test_mechanisms_fpga_bueno__patch_inst__patch_cache.__PVT__valid_way))
                                                   ? (IData)(vlSymsp->TOP__test_mechanisms_fpga_bueno__patch_inst__patch_cache__ways__BRA__3__KET____DOT__way_instance__data_bram.__PVT__data_out)
                                                   : (IData)(vlSymsp->TOP__test_mechanisms_fpga_bueno__patch_inst__patch_cache__ways__BRA__2__KET____DOT__way_instance__data_bram.__PVT__data_out))
                                                  : 
                                                 ((1U 
                                                   & (IData)(vlSymsp->TOP__test_mechanisms_fpga_bueno__patch_inst__patch_cache.__PVT__valid_way))
                                                   ? (IData)(vlSymsp->TOP__test_mechanisms_fpga_bueno__patch_inst__patch_cache__ways__BRA__1__KET____DOT__way_instance__data_bram.__PVT__data_out)
                                                   : (IData)(vlSymsp->TOP__test_mechanisms_fpga_bueno__patch_inst__patch_cache__ways__BRA__0__KET____DOT__way_instance__data_bram.__PVT__data_out))))
                                             : 0xffffU)
                                         : (IData)(vlSymsp->TOP.activation_org));
}
