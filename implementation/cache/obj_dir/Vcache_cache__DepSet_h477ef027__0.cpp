// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcache.h for the primary calling header

#include "Vcache__pch.h"
#include "Vcache_cache.h"

VL_INLINE_OPT void Vcache_cache___nba_comb__TOP__cache__0(Vcache_cache* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vcache__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vcache_cache___nba_comb__TOP__cache__0\n"); );
    // Init
    CData/*4:0*/ __PVT__write_way_selector_inst__DOT__unnamedblk1__DOT__tmp_valid_bits;
    __PVT__write_way_selector_inst__DOT__unnamedblk1__DOT__tmp_valid_bits = 0;
    // Body
    __PVT__write_way_selector_inst__DOT__unnamedblk1__DOT__tmp_valid_bits 
        = vlSelf->valid_bits_out;
    vlSelf->__PVT__way_to_write = 0U;
    if ((1U & (IData)(vlSelf->__Vcellout__control_sync__ctrl_out))) {
        vlSelf->__PVT__write_way_selector_inst__DOT__unnamedblk1__DOT__unnamedblk2__DOT__i = 0U;
        {
            while ((5U > vlSelf->__PVT__write_way_selector_inst__DOT__unnamedblk1__DOT__unnamedblk2__DOT__i)) {
                if ((1U & (~ ((4U >= (7U & vlSelf->__PVT__write_way_selector_inst__DOT__unnamedblk1__DOT__unnamedblk2__DOT__i)) 
                              && (1U & ((IData)(vlSelf->valid_bits_out) 
                                        >> (7U & vlSelf->__PVT__write_way_selector_inst__DOT__unnamedblk1__DOT__unnamedblk2__DOT__i))))))) {
                    vlSelf->__PVT__way_to_write = (7U 
                                                   & vlSelf->__PVT__write_way_selector_inst__DOT__unnamedblk1__DOT__unnamedblk2__DOT__i);
                    vlSelf->write_way_selector_inst__DOT____Vlvbound_hcc6fd8b1__0 = 1U;
                    if (VL_LIKELY((4U >= (7U & vlSelf->__PVT__write_way_selector_inst__DOT__unnamedblk1__DOT__unnamedblk2__DOT__i)))) {
                        __PVT__write_way_selector_inst__DOT__unnamedblk1__DOT__tmp_valid_bits 
                            = (((~ ((IData)(1U) << 
                                    (7U & vlSelf->__PVT__write_way_selector_inst__DOT__unnamedblk1__DOT__unnamedblk2__DOT__i))) 
                                & (IData)(__PVT__write_way_selector_inst__DOT__unnamedblk1__DOT__tmp_valid_bits)) 
                               | (0x1fU & ((IData)(vlSelf->write_way_selector_inst__DOT____Vlvbound_hcc6fd8b1__0) 
                                           << (7U & vlSelf->__PVT__write_way_selector_inst__DOT__unnamedblk1__DOT__unnamedblk2__DOT__i))));
                    }
                    goto __Vlabel2;
                }
                vlSelf->__PVT__write_way_selector_inst__DOT__unnamedblk1__DOT__unnamedblk2__DOT__i 
                    = ((IData)(1U) + vlSelf->__PVT__write_way_selector_inst__DOT__unnamedblk1__DOT__unnamedblk2__DOT__i);
            }
            __Vlabel2: ;
        }
    }
    vlSelf->valid_bits_out = __PVT__write_way_selector_inst__DOT__unnamedblk1__DOT__tmp_valid_bits;
    vlSelf->__PVT__write_enable_data = 0U;
    vlSelf->__PVT__write_enable_tag = 0U;
    if (vlSelf->__PVT__enable_write) {
        vlSelf->write_enable_generator_inst__DOT____Vlvbound_h4ac1e79a__0 = 1U;
        vlSelf->write_enable_generator_inst__DOT____Vlvbound_hd1dcecc8__0 = 1U;
        if ((4U >= (IData)(vlSelf->__PVT__way_to_write))) {
            vlSelf->__PVT__write_enable_data = (((~ 
                                                  ((IData)(1U) 
                                                   << (IData)(vlSelf->__PVT__way_to_write))) 
                                                 & (IData)(vlSelf->__PVT__write_enable_data)) 
                                                | (0x1fU 
                                                   & ((IData)(vlSelf->write_enable_generator_inst__DOT____Vlvbound_h4ac1e79a__0) 
                                                      << (IData)(vlSelf->__PVT__way_to_write))));
            vlSelf->__PVT__write_enable_tag = (((~ 
                                                 ((IData)(1U) 
                                                  << (IData)(vlSelf->__PVT__way_to_write))) 
                                                & (IData)(vlSelf->__PVT__write_enable_tag)) 
                                               | (0x1fU 
                                                  & ((IData)(vlSelf->write_enable_generator_inst__DOT____Vlvbound_hd1dcecc8__0) 
                                                     << (IData)(vlSelf->__PVT__way_to_write))));
        }
    }
}
