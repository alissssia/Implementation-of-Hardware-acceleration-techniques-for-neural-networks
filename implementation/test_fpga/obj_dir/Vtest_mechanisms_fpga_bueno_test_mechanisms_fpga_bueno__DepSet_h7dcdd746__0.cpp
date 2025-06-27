// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtest_mechanisms_fpga_bueno.h for the primary calling header

#include "Vtest_mechanisms_fpga_bueno__pch.h"
#include "Vtest_mechanisms_fpga_bueno__Syms.h"
#include "Vtest_mechanisms_fpga_bueno_test_mechanisms_fpga_bueno.h"

VL_INLINE_OPT void Vtest_mechanisms_fpga_bueno_test_mechanisms_fpga_bueno___nba_sequent__TOP__test_mechanisms_fpga_bueno__0(Vtest_mechanisms_fpga_bueno_test_mechanisms_fpga_bueno* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtest_mechanisms_fpga_bueno__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vtest_mechanisms_fpga_bueno_test_mechanisms_fpga_bueno___nba_sequent__TOP__test_mechanisms_fpga_bueno__0\n"); );
    // Body
    if (vlSymsp->TOP.reset) {
        vlSelf->flipped_out = 0U;
        vlSelf->__PVT__flip_inst__DOT__salida_flip_flop_activaciones_sin_procesar = 0U;
    } else {
        vlSelf->flipped_out = ((0x8000U & (((IData)(vlSelf->__PVT__flip_inst__DOT__salida_flip_flop_con_bit_f)
                                             ? (IData)(vlSelf->__PVT__flip_inst__DOT__salida_flip_flop_activaciones_sin_procesar)
                                             : ((IData)(vlSelf->__PVT__flip_inst__DOT__salida_flip_flop_activaciones_sin_procesar) 
                                                >> 0xfU)) 
                                           << 0xfU)) 
                               | ((0x4000U & (((IData)(vlSelf->__PVT__flip_inst__DOT__salida_flip_flop_con_bit_f)
                                                ? ((IData)(vlSelf->__PVT__flip_inst__DOT__salida_flip_flop_activaciones_sin_procesar) 
                                                   >> 1U)
                                                : ((IData)(vlSelf->__PVT__flip_inst__DOT__salida_flip_flop_activaciones_sin_procesar) 
                                                   >> 0xeU)) 
                                              << 0xeU)) 
                                  | ((0x2000U & (((IData)(vlSelf->__PVT__flip_inst__DOT__salida_flip_flop_con_bit_f)
                                                   ? 
                                                  ((IData)(vlSelf->__PVT__flip_inst__DOT__salida_flip_flop_activaciones_sin_procesar) 
                                                   >> 2U)
                                                   : 
                                                  ((IData)(vlSelf->__PVT__flip_inst__DOT__salida_flip_flop_activaciones_sin_procesar) 
                                                   >> 0xdU)) 
                                                 << 0xdU)) 
                                     | ((0x1000U & 
                                         (((IData)(vlSelf->__PVT__flip_inst__DOT__salida_flip_flop_con_bit_f)
                                            ? ((IData)(vlSelf->__PVT__flip_inst__DOT__salida_flip_flop_activaciones_sin_procesar) 
                                               >> 3U)
                                            : ((IData)(vlSelf->__PVT__flip_inst__DOT__salida_flip_flop_activaciones_sin_procesar) 
                                               >> 0xcU)) 
                                          << 0xcU)) 
                                        | ((0x800U 
                                            & (((IData)(vlSelf->__PVT__flip_inst__DOT__salida_flip_flop_con_bit_f)
                                                 ? 
                                                ((IData)(vlSelf->__PVT__flip_inst__DOT__salida_flip_flop_activaciones_sin_procesar) 
                                                 >> 4U)
                                                 : 
                                                ((IData)(vlSelf->__PVT__flip_inst__DOT__salida_flip_flop_activaciones_sin_procesar) 
                                                 >> 0xbU)) 
                                               << 0xbU)) 
                                           | ((0x400U 
                                               & (((IData)(vlSelf->__PVT__flip_inst__DOT__salida_flip_flop_con_bit_f)
                                                    ? 
                                                   ((IData)(vlSelf->__PVT__flip_inst__DOT__salida_flip_flop_activaciones_sin_procesar) 
                                                    >> 5U)
                                                    : 
                                                   ((IData)(vlSelf->__PVT__flip_inst__DOT__salida_flip_flop_activaciones_sin_procesar) 
                                                    >> 0xaU)) 
                                                  << 0xaU)) 
                                              | ((0x200U 
                                                  & (((IData)(vlSelf->__PVT__flip_inst__DOT__salida_flip_flop_con_bit_f)
                                                       ? 
                                                      ((IData)(vlSelf->__PVT__flip_inst__DOT__salida_flip_flop_activaciones_sin_procesar) 
                                                       >> 6U)
                                                       : 
                                                      ((IData)(vlSelf->__PVT__flip_inst__DOT__salida_flip_flop_activaciones_sin_procesar) 
                                                       >> 9U)) 
                                                     << 9U)) 
                                                 | ((0x100U 
                                                     & (((IData)(vlSelf->__PVT__flip_inst__DOT__salida_flip_flop_con_bit_f)
                                                          ? 
                                                         ((IData)(vlSelf->__PVT__flip_inst__DOT__salida_flip_flop_activaciones_sin_procesar) 
                                                          >> 7U)
                                                          : 
                                                         ((IData)(vlSelf->__PVT__flip_inst__DOT__salida_flip_flop_activaciones_sin_procesar) 
                                                          >> 8U)) 
                                                        << 8U)) 
                                                    | ((0x80U 
                                                        & (((IData)(vlSelf->__PVT__flip_inst__DOT__salida_flip_flop_con_bit_f)
                                                             ? 
                                                            ((IData)(vlSelf->__PVT__flip_inst__DOT__salida_flip_flop_activaciones_sin_procesar) 
                                                             >> 8U)
                                                             : 
                                                            ((IData)(vlSelf->__PVT__flip_inst__DOT__salida_flip_flop_activaciones_sin_procesar) 
                                                             >> 7U)) 
                                                           << 7U)) 
                                                       | ((0x40U 
                                                           & (((IData)(vlSelf->__PVT__flip_inst__DOT__salida_flip_flop_con_bit_f)
                                                                ? 
                                                               ((IData)(vlSelf->__PVT__flip_inst__DOT__salida_flip_flop_activaciones_sin_procesar) 
                                                                >> 9U)
                                                                : 
                                                               ((IData)(vlSelf->__PVT__flip_inst__DOT__salida_flip_flop_activaciones_sin_procesar) 
                                                                >> 6U)) 
                                                              << 6U)) 
                                                          | ((0x20U 
                                                              & (((IData)(vlSelf->__PVT__flip_inst__DOT__salida_flip_flop_con_bit_f)
                                                                   ? 
                                                                  ((IData)(vlSelf->__PVT__flip_inst__DOT__salida_flip_flop_activaciones_sin_procesar) 
                                                                   >> 0xaU)
                                                                   : 
                                                                  ((IData)(vlSelf->__PVT__flip_inst__DOT__salida_flip_flop_activaciones_sin_procesar) 
                                                                   >> 5U)) 
                                                                 << 5U)) 
                                                             | ((0x10U 
                                                                 & (((IData)(vlSelf->__PVT__flip_inst__DOT__salida_flip_flop_con_bit_f)
                                                                      ? 
                                                                     ((IData)(vlSelf->__PVT__flip_inst__DOT__salida_flip_flop_activaciones_sin_procesar) 
                                                                      >> 0xbU)
                                                                      : 
                                                                     ((IData)(vlSelf->__PVT__flip_inst__DOT__salida_flip_flop_activaciones_sin_procesar) 
                                                                      >> 4U)) 
                                                                    << 4U)) 
                                                                | ((8U 
                                                                    & (((IData)(vlSelf->__PVT__flip_inst__DOT__salida_flip_flop_con_bit_f)
                                                                         ? 
                                                                        ((IData)(vlSelf->__PVT__flip_inst__DOT__salida_flip_flop_activaciones_sin_procesar) 
                                                                         >> 0xcU)
                                                                         : 
                                                                        ((IData)(vlSelf->__PVT__flip_inst__DOT__salida_flip_flop_activaciones_sin_procesar) 
                                                                         >> 3U)) 
                                                                       << 3U)) 
                                                                   | ((4U 
                                                                       & (((IData)(vlSelf->__PVT__flip_inst__DOT__salida_flip_flop_con_bit_f)
                                                                            ? 
                                                                           ((IData)(vlSelf->__PVT__flip_inst__DOT__salida_flip_flop_activaciones_sin_procesar) 
                                                                            >> 0xdU)
                                                                            : 
                                                                           ((IData)(vlSelf->__PVT__flip_inst__DOT__salida_flip_flop_activaciones_sin_procesar) 
                                                                            >> 2U)) 
                                                                          << 2U)) 
                                                                      | ((2U 
                                                                          & (((IData)(vlSelf->__PVT__flip_inst__DOT__salida_flip_flop_con_bit_f)
                                                                               ? 
                                                                              ((IData)(vlSelf->__PVT__flip_inst__DOT__salida_flip_flop_activaciones_sin_procesar) 
                                                                               >> 0xeU)
                                                                               : 
                                                                              ((IData)(vlSelf->__PVT__flip_inst__DOT__salida_flip_flop_activaciones_sin_procesar) 
                                                                               >> 1U)) 
                                                                             << 1U)) 
                                                                         | (1U 
                                                                            & ((IData)(vlSelf->__PVT__flip_inst__DOT__salida_flip_flop_con_bit_f)
                                                                                ? 
                                                                               ((IData)(vlSelf->__PVT__flip_inst__DOT__salida_flip_flop_activaciones_sin_procesar) 
                                                                                >> 0xfU)
                                                                                : (IData)(vlSelf->__PVT__flip_inst__DOT__salida_flip_flop_activaciones_sin_procesar))))))))))))))))));
        vlSelf->__PVT__flip_inst__DOT__salida_flip_flop_activaciones_sin_procesar 
            = vlSymsp->TOP.activation_org;
    }
    vlSelf->__PVT__flip_inst__DOT__salida_flip_flop_con_bit_f 
        = ((1U & (~ (IData)(vlSymsp->TOP.reset))) && (IData)(vlSymsp->TOP.f));
}
