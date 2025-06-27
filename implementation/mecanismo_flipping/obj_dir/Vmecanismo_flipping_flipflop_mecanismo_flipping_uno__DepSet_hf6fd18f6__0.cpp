// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vmecanismo_flipping_flipflop.h for the primary calling header

#include "Vmecanismo_flipping_flipflop__pch.h"
#include "Vmecanismo_flipping_flipflop__Syms.h"
#include "Vmecanismo_flipping_flipflop_mecanismo_flipping_uno.h"

VL_INLINE_OPT void Vmecanismo_flipping_flipflop_mecanismo_flipping_uno___nba_sequent__TOP__mecanismo_flipping_flipflop__DOT__u2__DOT__genblk1__BRA__0__KET____DOT__u0__0(Vmecanismo_flipping_flipflop_mecanismo_flipping_uno* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vmecanismo_flipping_flipflop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmecanismo_flipping_flipflop_mecanismo_flipping_uno___nba_sequent__TOP__mecanismo_flipping_flipflop__DOT__u2__DOT__genblk1__BRA__0__KET____DOT__u0__0\n"); );
    // Body
    vlSelf->b = ((0x8000U & (((IData)(vlSymsp->TOP.mecanismo_flipping_flipflop__DOT__u1__DOT____Vcellout__genblk1__BRA__0__KET____DOT__u0__q)
                               ? (IData)(vlSymsp->TOP.mecanismo_flipping_flipflop__DOT__u0__DOT____Vcellout__genblk1__BRA__0__KET____DOT__u0__q)
                               : ((IData)(vlSymsp->TOP.mecanismo_flipping_flipflop__DOT__u0__DOT____Vcellout__genblk1__BRA__0__KET____DOT__u0__q) 
                                  >> 0xfU)) << 0xfU)) 
                 | ((0x4000U & (((IData)(vlSymsp->TOP.mecanismo_flipping_flipflop__DOT__u1__DOT____Vcellout__genblk1__BRA__0__KET____DOT__u0__q)
                                  ? ((IData)(vlSymsp->TOP.mecanismo_flipping_flipflop__DOT__u0__DOT____Vcellout__genblk1__BRA__0__KET____DOT__u0__q) 
                                     >> 1U) : ((IData)(vlSymsp->TOP.mecanismo_flipping_flipflop__DOT__u0__DOT____Vcellout__genblk1__BRA__0__KET____DOT__u0__q) 
                                               >> 0xeU)) 
                                << 0xeU)) | ((0x2000U 
                                              & (((IData)(vlSymsp->TOP.mecanismo_flipping_flipflop__DOT__u1__DOT____Vcellout__genblk1__BRA__0__KET____DOT__u0__q)
                                                   ? 
                                                  ((IData)(vlSymsp->TOP.mecanismo_flipping_flipflop__DOT__u0__DOT____Vcellout__genblk1__BRA__0__KET____DOT__u0__q) 
                                                   >> 2U)
                                                   : 
                                                  ((IData)(vlSymsp->TOP.mecanismo_flipping_flipflop__DOT__u0__DOT____Vcellout__genblk1__BRA__0__KET____DOT__u0__q) 
                                                   >> 0xdU)) 
                                                 << 0xdU)) 
                                             | ((0x1000U 
                                                 & (((IData)(vlSymsp->TOP.mecanismo_flipping_flipflop__DOT__u1__DOT____Vcellout__genblk1__BRA__0__KET____DOT__u0__q)
                                                      ? 
                                                     ((IData)(vlSymsp->TOP.mecanismo_flipping_flipflop__DOT__u0__DOT____Vcellout__genblk1__BRA__0__KET____DOT__u0__q) 
                                                      >> 3U)
                                                      : 
                                                     ((IData)(vlSymsp->TOP.mecanismo_flipping_flipflop__DOT__u0__DOT____Vcellout__genblk1__BRA__0__KET____DOT__u0__q) 
                                                      >> 0xcU)) 
                                                    << 0xcU)) 
                                                | ((0x800U 
                                                    & (((IData)(vlSymsp->TOP.mecanismo_flipping_flipflop__DOT__u1__DOT____Vcellout__genblk1__BRA__0__KET____DOT__u0__q)
                                                         ? 
                                                        ((IData)(vlSymsp->TOP.mecanismo_flipping_flipflop__DOT__u0__DOT____Vcellout__genblk1__BRA__0__KET____DOT__u0__q) 
                                                         >> 4U)
                                                         : 
                                                        ((IData)(vlSymsp->TOP.mecanismo_flipping_flipflop__DOT__u0__DOT____Vcellout__genblk1__BRA__0__KET____DOT__u0__q) 
                                                         >> 0xbU)) 
                                                       << 0xbU)) 
                                                   | ((0x400U 
                                                       & (((IData)(vlSymsp->TOP.mecanismo_flipping_flipflop__DOT__u1__DOT____Vcellout__genblk1__BRA__0__KET____DOT__u0__q)
                                                            ? 
                                                           ((IData)(vlSymsp->TOP.mecanismo_flipping_flipflop__DOT__u0__DOT____Vcellout__genblk1__BRA__0__KET____DOT__u0__q) 
                                                            >> 5U)
                                                            : 
                                                           ((IData)(vlSymsp->TOP.mecanismo_flipping_flipflop__DOT__u0__DOT____Vcellout__genblk1__BRA__0__KET____DOT__u0__q) 
                                                            >> 0xaU)) 
                                                          << 0xaU)) 
                                                      | ((0x200U 
                                                          & (((IData)(vlSymsp->TOP.mecanismo_flipping_flipflop__DOT__u1__DOT____Vcellout__genblk1__BRA__0__KET____DOT__u0__q)
                                                               ? 
                                                              ((IData)(vlSymsp->TOP.mecanismo_flipping_flipflop__DOT__u0__DOT____Vcellout__genblk1__BRA__0__KET____DOT__u0__q) 
                                                               >> 6U)
                                                               : 
                                                              ((IData)(vlSymsp->TOP.mecanismo_flipping_flipflop__DOT__u0__DOT____Vcellout__genblk1__BRA__0__KET____DOT__u0__q) 
                                                               >> 9U)) 
                                                             << 9U)) 
                                                         | ((0x100U 
                                                             & (((IData)(vlSymsp->TOP.mecanismo_flipping_flipflop__DOT__u1__DOT____Vcellout__genblk1__BRA__0__KET____DOT__u0__q)
                                                                  ? 
                                                                 ((IData)(vlSymsp->TOP.mecanismo_flipping_flipflop__DOT__u0__DOT____Vcellout__genblk1__BRA__0__KET____DOT__u0__q) 
                                                                  >> 7U)
                                                                  : 
                                                                 ((IData)(vlSymsp->TOP.mecanismo_flipping_flipflop__DOT__u0__DOT____Vcellout__genblk1__BRA__0__KET____DOT__u0__q) 
                                                                  >> 8U)) 
                                                                << 8U)) 
                                                            | ((0x80U 
                                                                & (((IData)(vlSymsp->TOP.mecanismo_flipping_flipflop__DOT__u1__DOT____Vcellout__genblk1__BRA__0__KET____DOT__u0__q)
                                                                     ? 
                                                                    ((IData)(vlSymsp->TOP.mecanismo_flipping_flipflop__DOT__u0__DOT____Vcellout__genblk1__BRA__0__KET____DOT__u0__q) 
                                                                     >> 8U)
                                                                     : 
                                                                    ((IData)(vlSymsp->TOP.mecanismo_flipping_flipflop__DOT__u0__DOT____Vcellout__genblk1__BRA__0__KET____DOT__u0__q) 
                                                                     >> 7U)) 
                                                                   << 7U)) 
                                                               | ((0x40U 
                                                                   & (((IData)(vlSymsp->TOP.mecanismo_flipping_flipflop__DOT__u1__DOT____Vcellout__genblk1__BRA__0__KET____DOT__u0__q)
                                                                        ? 
                                                                       ((IData)(vlSymsp->TOP.mecanismo_flipping_flipflop__DOT__u0__DOT____Vcellout__genblk1__BRA__0__KET____DOT__u0__q) 
                                                                        >> 9U)
                                                                        : 
                                                                       ((IData)(vlSymsp->TOP.mecanismo_flipping_flipflop__DOT__u0__DOT____Vcellout__genblk1__BRA__0__KET____DOT__u0__q) 
                                                                        >> 6U)) 
                                                                      << 6U)) 
                                                                  | ((0x20U 
                                                                      & (((IData)(vlSymsp->TOP.mecanismo_flipping_flipflop__DOT__u1__DOT____Vcellout__genblk1__BRA__0__KET____DOT__u0__q)
                                                                           ? 
                                                                          ((IData)(vlSymsp->TOP.mecanismo_flipping_flipflop__DOT__u0__DOT____Vcellout__genblk1__BRA__0__KET____DOT__u0__q) 
                                                                           >> 0xaU)
                                                                           : 
                                                                          ((IData)(vlSymsp->TOP.mecanismo_flipping_flipflop__DOT__u0__DOT____Vcellout__genblk1__BRA__0__KET____DOT__u0__q) 
                                                                           >> 5U)) 
                                                                         << 5U)) 
                                                                     | ((0x10U 
                                                                         & (((IData)(vlSymsp->TOP.mecanismo_flipping_flipflop__DOT__u1__DOT____Vcellout__genblk1__BRA__0__KET____DOT__u0__q)
                                                                              ? 
                                                                             ((IData)(vlSymsp->TOP.mecanismo_flipping_flipflop__DOT__u0__DOT____Vcellout__genblk1__BRA__0__KET____DOT__u0__q) 
                                                                              >> 0xbU)
                                                                              : 
                                                                             ((IData)(vlSymsp->TOP.mecanismo_flipping_flipflop__DOT__u0__DOT____Vcellout__genblk1__BRA__0__KET____DOT__u0__q) 
                                                                              >> 4U)) 
                                                                            << 4U)) 
                                                                        | ((8U 
                                                                            & (((IData)(vlSymsp->TOP.mecanismo_flipping_flipflop__DOT__u1__DOT____Vcellout__genblk1__BRA__0__KET____DOT__u0__q)
                                                                                 ? 
                                                                                ((IData)(vlSymsp->TOP.mecanismo_flipping_flipflop__DOT__u0__DOT____Vcellout__genblk1__BRA__0__KET____DOT__u0__q) 
                                                                                >> 0xcU)
                                                                                 : 
                                                                                ((IData)(vlSymsp->TOP.mecanismo_flipping_flipflop__DOT__u0__DOT____Vcellout__genblk1__BRA__0__KET____DOT__u0__q) 
                                                                                >> 3U)) 
                                                                               << 3U)) 
                                                                           | ((4U 
                                                                               & (((IData)(vlSymsp->TOP.mecanismo_flipping_flipflop__DOT__u1__DOT____Vcellout__genblk1__BRA__0__KET____DOT__u0__q)
                                                                                 ? 
                                                                                ((IData)(vlSymsp->TOP.mecanismo_flipping_flipflop__DOT__u0__DOT____Vcellout__genblk1__BRA__0__KET____DOT__u0__q) 
                                                                                >> 0xdU)
                                                                                 : 
                                                                                ((IData)(vlSymsp->TOP.mecanismo_flipping_flipflop__DOT__u0__DOT____Vcellout__genblk1__BRA__0__KET____DOT__u0__q) 
                                                                                >> 2U)) 
                                                                                << 2U)) 
                                                                              | ((2U 
                                                                                & (((IData)(vlSymsp->TOP.mecanismo_flipping_flipflop__DOT__u1__DOT____Vcellout__genblk1__BRA__0__KET____DOT__u0__q)
                                                                                 ? 
                                                                                ((IData)(vlSymsp->TOP.mecanismo_flipping_flipflop__DOT__u0__DOT____Vcellout__genblk1__BRA__0__KET____DOT__u0__q) 
                                                                                >> 0xeU)
                                                                                 : 
                                                                                ((IData)(vlSymsp->TOP.mecanismo_flipping_flipflop__DOT__u0__DOT____Vcellout__genblk1__BRA__0__KET____DOT__u0__q) 
                                                                                >> 1U)) 
                                                                                << 1U)) 
                                                                                | (1U 
                                                                                & ((IData)(vlSymsp->TOP.mecanismo_flipping_flipflop__DOT__u1__DOT____Vcellout__genblk1__BRA__0__KET____DOT__u0__q)
                                                                                 ? 
                                                                                ((IData)(vlSymsp->TOP.mecanismo_flipping_flipflop__DOT__u0__DOT____Vcellout__genblk1__BRA__0__KET____DOT__u0__q) 
                                                                                >> 0xfU)
                                                                                 : (IData)(vlSymsp->TOP.mecanismo_flipping_flipflop__DOT__u0__DOT____Vcellout__genblk1__BRA__0__KET____DOT__u0__q))))))))))))))))));
}

VL_INLINE_OPT void Vmecanismo_flipping_flipflop_mecanismo_flipping_uno___nba_sequent__TOP__mecanismo_flipping_flipflop__DOT__u2__DOT__genblk1__BRA__1__KET____DOT__u0__0(Vmecanismo_flipping_flipflop_mecanismo_flipping_uno* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vmecanismo_flipping_flipflop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmecanismo_flipping_flipflop_mecanismo_flipping_uno___nba_sequent__TOP__mecanismo_flipping_flipflop__DOT__u2__DOT__genblk1__BRA__1__KET____DOT__u0__0\n"); );
    // Body
    vlSelf->b = ((0x8000U & (((IData)(vlSymsp->TOP.mecanismo_flipping_flipflop__DOT__u1__DOT____Vcellout__genblk1__BRA__1__KET____DOT__u0__q)
                               ? (IData)(vlSymsp->TOP.mecanismo_flipping_flipflop__DOT__u0__DOT____Vcellout__genblk1__BRA__1__KET____DOT__u0__q)
                               : ((IData)(vlSymsp->TOP.mecanismo_flipping_flipflop__DOT__u0__DOT____Vcellout__genblk1__BRA__1__KET____DOT__u0__q) 
                                  >> 0xfU)) << 0xfU)) 
                 | ((0x4000U & (((IData)(vlSymsp->TOP.mecanismo_flipping_flipflop__DOT__u1__DOT____Vcellout__genblk1__BRA__1__KET____DOT__u0__q)
                                  ? ((IData)(vlSymsp->TOP.mecanismo_flipping_flipflop__DOT__u0__DOT____Vcellout__genblk1__BRA__1__KET____DOT__u0__q) 
                                     >> 1U) : ((IData)(vlSymsp->TOP.mecanismo_flipping_flipflop__DOT__u0__DOT____Vcellout__genblk1__BRA__1__KET____DOT__u0__q) 
                                               >> 0xeU)) 
                                << 0xeU)) | ((0x2000U 
                                              & (((IData)(vlSymsp->TOP.mecanismo_flipping_flipflop__DOT__u1__DOT____Vcellout__genblk1__BRA__1__KET____DOT__u0__q)
                                                   ? 
                                                  ((IData)(vlSymsp->TOP.mecanismo_flipping_flipflop__DOT__u0__DOT____Vcellout__genblk1__BRA__1__KET____DOT__u0__q) 
                                                   >> 2U)
                                                   : 
                                                  ((IData)(vlSymsp->TOP.mecanismo_flipping_flipflop__DOT__u0__DOT____Vcellout__genblk1__BRA__1__KET____DOT__u0__q) 
                                                   >> 0xdU)) 
                                                 << 0xdU)) 
                                             | ((0x1000U 
                                                 & (((IData)(vlSymsp->TOP.mecanismo_flipping_flipflop__DOT__u1__DOT____Vcellout__genblk1__BRA__1__KET____DOT__u0__q)
                                                      ? 
                                                     ((IData)(vlSymsp->TOP.mecanismo_flipping_flipflop__DOT__u0__DOT____Vcellout__genblk1__BRA__1__KET____DOT__u0__q) 
                                                      >> 3U)
                                                      : 
                                                     ((IData)(vlSymsp->TOP.mecanismo_flipping_flipflop__DOT__u0__DOT____Vcellout__genblk1__BRA__1__KET____DOT__u0__q) 
                                                      >> 0xcU)) 
                                                    << 0xcU)) 
                                                | ((0x800U 
                                                    & (((IData)(vlSymsp->TOP.mecanismo_flipping_flipflop__DOT__u1__DOT____Vcellout__genblk1__BRA__1__KET____DOT__u0__q)
                                                         ? 
                                                        ((IData)(vlSymsp->TOP.mecanismo_flipping_flipflop__DOT__u0__DOT____Vcellout__genblk1__BRA__1__KET____DOT__u0__q) 
                                                         >> 4U)
                                                         : 
                                                        ((IData)(vlSymsp->TOP.mecanismo_flipping_flipflop__DOT__u0__DOT____Vcellout__genblk1__BRA__1__KET____DOT__u0__q) 
                                                         >> 0xbU)) 
                                                       << 0xbU)) 
                                                   | ((0x400U 
                                                       & (((IData)(vlSymsp->TOP.mecanismo_flipping_flipflop__DOT__u1__DOT____Vcellout__genblk1__BRA__1__KET____DOT__u0__q)
                                                            ? 
                                                           ((IData)(vlSymsp->TOP.mecanismo_flipping_flipflop__DOT__u0__DOT____Vcellout__genblk1__BRA__1__KET____DOT__u0__q) 
                                                            >> 5U)
                                                            : 
                                                           ((IData)(vlSymsp->TOP.mecanismo_flipping_flipflop__DOT__u0__DOT____Vcellout__genblk1__BRA__1__KET____DOT__u0__q) 
                                                            >> 0xaU)) 
                                                          << 0xaU)) 
                                                      | ((0x200U 
                                                          & (((IData)(vlSymsp->TOP.mecanismo_flipping_flipflop__DOT__u1__DOT____Vcellout__genblk1__BRA__1__KET____DOT__u0__q)
                                                               ? 
                                                              ((IData)(vlSymsp->TOP.mecanismo_flipping_flipflop__DOT__u0__DOT____Vcellout__genblk1__BRA__1__KET____DOT__u0__q) 
                                                               >> 6U)
                                                               : 
                                                              ((IData)(vlSymsp->TOP.mecanismo_flipping_flipflop__DOT__u0__DOT____Vcellout__genblk1__BRA__1__KET____DOT__u0__q) 
                                                               >> 9U)) 
                                                             << 9U)) 
                                                         | ((0x100U 
                                                             & (((IData)(vlSymsp->TOP.mecanismo_flipping_flipflop__DOT__u1__DOT____Vcellout__genblk1__BRA__1__KET____DOT__u0__q)
                                                                  ? 
                                                                 ((IData)(vlSymsp->TOP.mecanismo_flipping_flipflop__DOT__u0__DOT____Vcellout__genblk1__BRA__1__KET____DOT__u0__q) 
                                                                  >> 7U)
                                                                  : 
                                                                 ((IData)(vlSymsp->TOP.mecanismo_flipping_flipflop__DOT__u0__DOT____Vcellout__genblk1__BRA__1__KET____DOT__u0__q) 
                                                                  >> 8U)) 
                                                                << 8U)) 
                                                            | ((0x80U 
                                                                & (((IData)(vlSymsp->TOP.mecanismo_flipping_flipflop__DOT__u1__DOT____Vcellout__genblk1__BRA__1__KET____DOT__u0__q)
                                                                     ? 
                                                                    ((IData)(vlSymsp->TOP.mecanismo_flipping_flipflop__DOT__u0__DOT____Vcellout__genblk1__BRA__1__KET____DOT__u0__q) 
                                                                     >> 8U)
                                                                     : 
                                                                    ((IData)(vlSymsp->TOP.mecanismo_flipping_flipflop__DOT__u0__DOT____Vcellout__genblk1__BRA__1__KET____DOT__u0__q) 
                                                                     >> 7U)) 
                                                                   << 7U)) 
                                                               | ((0x40U 
                                                                   & (((IData)(vlSymsp->TOP.mecanismo_flipping_flipflop__DOT__u1__DOT____Vcellout__genblk1__BRA__1__KET____DOT__u0__q)
                                                                        ? 
                                                                       ((IData)(vlSymsp->TOP.mecanismo_flipping_flipflop__DOT__u0__DOT____Vcellout__genblk1__BRA__1__KET____DOT__u0__q) 
                                                                        >> 9U)
                                                                        : 
                                                                       ((IData)(vlSymsp->TOP.mecanismo_flipping_flipflop__DOT__u0__DOT____Vcellout__genblk1__BRA__1__KET____DOT__u0__q) 
                                                                        >> 6U)) 
                                                                      << 6U)) 
                                                                  | ((0x20U 
                                                                      & (((IData)(vlSymsp->TOP.mecanismo_flipping_flipflop__DOT__u1__DOT____Vcellout__genblk1__BRA__1__KET____DOT__u0__q)
                                                                           ? 
                                                                          ((IData)(vlSymsp->TOP.mecanismo_flipping_flipflop__DOT__u0__DOT____Vcellout__genblk1__BRA__1__KET____DOT__u0__q) 
                                                                           >> 0xaU)
                                                                           : 
                                                                          ((IData)(vlSymsp->TOP.mecanismo_flipping_flipflop__DOT__u0__DOT____Vcellout__genblk1__BRA__1__KET____DOT__u0__q) 
                                                                           >> 5U)) 
                                                                         << 5U)) 
                                                                     | ((0x10U 
                                                                         & (((IData)(vlSymsp->TOP.mecanismo_flipping_flipflop__DOT__u1__DOT____Vcellout__genblk1__BRA__1__KET____DOT__u0__q)
                                                                              ? 
                                                                             ((IData)(vlSymsp->TOP.mecanismo_flipping_flipflop__DOT__u0__DOT____Vcellout__genblk1__BRA__1__KET____DOT__u0__q) 
                                                                              >> 0xbU)
                                                                              : 
                                                                             ((IData)(vlSymsp->TOP.mecanismo_flipping_flipflop__DOT__u0__DOT____Vcellout__genblk1__BRA__1__KET____DOT__u0__q) 
                                                                              >> 4U)) 
                                                                            << 4U)) 
                                                                        | ((8U 
                                                                            & (((IData)(vlSymsp->TOP.mecanismo_flipping_flipflop__DOT__u1__DOT____Vcellout__genblk1__BRA__1__KET____DOT__u0__q)
                                                                                 ? 
                                                                                ((IData)(vlSymsp->TOP.mecanismo_flipping_flipflop__DOT__u0__DOT____Vcellout__genblk1__BRA__1__KET____DOT__u0__q) 
                                                                                >> 0xcU)
                                                                                 : 
                                                                                ((IData)(vlSymsp->TOP.mecanismo_flipping_flipflop__DOT__u0__DOT____Vcellout__genblk1__BRA__1__KET____DOT__u0__q) 
                                                                                >> 3U)) 
                                                                               << 3U)) 
                                                                           | ((4U 
                                                                               & (((IData)(vlSymsp->TOP.mecanismo_flipping_flipflop__DOT__u1__DOT____Vcellout__genblk1__BRA__1__KET____DOT__u0__q)
                                                                                 ? 
                                                                                ((IData)(vlSymsp->TOP.mecanismo_flipping_flipflop__DOT__u0__DOT____Vcellout__genblk1__BRA__1__KET____DOT__u0__q) 
                                                                                >> 0xdU)
                                                                                 : 
                                                                                ((IData)(vlSymsp->TOP.mecanismo_flipping_flipflop__DOT__u0__DOT____Vcellout__genblk1__BRA__1__KET____DOT__u0__q) 
                                                                                >> 2U)) 
                                                                                << 2U)) 
                                                                              | ((2U 
                                                                                & (((IData)(vlSymsp->TOP.mecanismo_flipping_flipflop__DOT__u1__DOT____Vcellout__genblk1__BRA__1__KET____DOT__u0__q)
                                                                                 ? 
                                                                                ((IData)(vlSymsp->TOP.mecanismo_flipping_flipflop__DOT__u0__DOT____Vcellout__genblk1__BRA__1__KET____DOT__u0__q) 
                                                                                >> 0xeU)
                                                                                 : 
                                                                                ((IData)(vlSymsp->TOP.mecanismo_flipping_flipflop__DOT__u0__DOT____Vcellout__genblk1__BRA__1__KET____DOT__u0__q) 
                                                                                >> 1U)) 
                                                                                << 1U)) 
                                                                                | (1U 
                                                                                & ((IData)(vlSymsp->TOP.mecanismo_flipping_flipflop__DOT__u1__DOT____Vcellout__genblk1__BRA__1__KET____DOT__u0__q)
                                                                                 ? 
                                                                                ((IData)(vlSymsp->TOP.mecanismo_flipping_flipflop__DOT__u0__DOT____Vcellout__genblk1__BRA__1__KET____DOT__u0__q) 
                                                                                >> 0xfU)
                                                                                 : (IData)(vlSymsp->TOP.mecanismo_flipping_flipflop__DOT__u0__DOT____Vcellout__genblk1__BRA__1__KET____DOT__u0__q))))))))))))))))));
}

VL_INLINE_OPT void Vmecanismo_flipping_flipflop_mecanismo_flipping_uno___nba_sequent__TOP__mecanismo_flipping_flipflop__DOT__u2__DOT__genblk1__BRA__2__KET____DOT__u0__0(Vmecanismo_flipping_flipflop_mecanismo_flipping_uno* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vmecanismo_flipping_flipflop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmecanismo_flipping_flipflop_mecanismo_flipping_uno___nba_sequent__TOP__mecanismo_flipping_flipflop__DOT__u2__DOT__genblk1__BRA__2__KET____DOT__u0__0\n"); );
    // Body
    vlSelf->b = ((0x8000U & (((IData)(vlSymsp->TOP.mecanismo_flipping_flipflop__DOT__u1__DOT____Vcellout__genblk1__BRA__2__KET____DOT__u0__q)
                               ? (IData)(vlSymsp->TOP.mecanismo_flipping_flipflop__DOT__u0__DOT____Vcellout__genblk1__BRA__2__KET____DOT__u0__q)
                               : ((IData)(vlSymsp->TOP.mecanismo_flipping_flipflop__DOT__u0__DOT____Vcellout__genblk1__BRA__2__KET____DOT__u0__q) 
                                  >> 0xfU)) << 0xfU)) 
                 | ((0x4000U & (((IData)(vlSymsp->TOP.mecanismo_flipping_flipflop__DOT__u1__DOT____Vcellout__genblk1__BRA__2__KET____DOT__u0__q)
                                  ? ((IData)(vlSymsp->TOP.mecanismo_flipping_flipflop__DOT__u0__DOT____Vcellout__genblk1__BRA__2__KET____DOT__u0__q) 
                                     >> 1U) : ((IData)(vlSymsp->TOP.mecanismo_flipping_flipflop__DOT__u0__DOT____Vcellout__genblk1__BRA__2__KET____DOT__u0__q) 
                                               >> 0xeU)) 
                                << 0xeU)) | ((0x2000U 
                                              & (((IData)(vlSymsp->TOP.mecanismo_flipping_flipflop__DOT__u1__DOT____Vcellout__genblk1__BRA__2__KET____DOT__u0__q)
                                                   ? 
                                                  ((IData)(vlSymsp->TOP.mecanismo_flipping_flipflop__DOT__u0__DOT____Vcellout__genblk1__BRA__2__KET____DOT__u0__q) 
                                                   >> 2U)
                                                   : 
                                                  ((IData)(vlSymsp->TOP.mecanismo_flipping_flipflop__DOT__u0__DOT____Vcellout__genblk1__BRA__2__KET____DOT__u0__q) 
                                                   >> 0xdU)) 
                                                 << 0xdU)) 
                                             | ((0x1000U 
                                                 & (((IData)(vlSymsp->TOP.mecanismo_flipping_flipflop__DOT__u1__DOT____Vcellout__genblk1__BRA__2__KET____DOT__u0__q)
                                                      ? 
                                                     ((IData)(vlSymsp->TOP.mecanismo_flipping_flipflop__DOT__u0__DOT____Vcellout__genblk1__BRA__2__KET____DOT__u0__q) 
                                                      >> 3U)
                                                      : 
                                                     ((IData)(vlSymsp->TOP.mecanismo_flipping_flipflop__DOT__u0__DOT____Vcellout__genblk1__BRA__2__KET____DOT__u0__q) 
                                                      >> 0xcU)) 
                                                    << 0xcU)) 
                                                | ((0x800U 
                                                    & (((IData)(vlSymsp->TOP.mecanismo_flipping_flipflop__DOT__u1__DOT____Vcellout__genblk1__BRA__2__KET____DOT__u0__q)
                                                         ? 
                                                        ((IData)(vlSymsp->TOP.mecanismo_flipping_flipflop__DOT__u0__DOT____Vcellout__genblk1__BRA__2__KET____DOT__u0__q) 
                                                         >> 4U)
                                                         : 
                                                        ((IData)(vlSymsp->TOP.mecanismo_flipping_flipflop__DOT__u0__DOT____Vcellout__genblk1__BRA__2__KET____DOT__u0__q) 
                                                         >> 0xbU)) 
                                                       << 0xbU)) 
                                                   | ((0x400U 
                                                       & (((IData)(vlSymsp->TOP.mecanismo_flipping_flipflop__DOT__u1__DOT____Vcellout__genblk1__BRA__2__KET____DOT__u0__q)
                                                            ? 
                                                           ((IData)(vlSymsp->TOP.mecanismo_flipping_flipflop__DOT__u0__DOT____Vcellout__genblk1__BRA__2__KET____DOT__u0__q) 
                                                            >> 5U)
                                                            : 
                                                           ((IData)(vlSymsp->TOP.mecanismo_flipping_flipflop__DOT__u0__DOT____Vcellout__genblk1__BRA__2__KET____DOT__u0__q) 
                                                            >> 0xaU)) 
                                                          << 0xaU)) 
                                                      | ((0x200U 
                                                          & (((IData)(vlSymsp->TOP.mecanismo_flipping_flipflop__DOT__u1__DOT____Vcellout__genblk1__BRA__2__KET____DOT__u0__q)
                                                               ? 
                                                              ((IData)(vlSymsp->TOP.mecanismo_flipping_flipflop__DOT__u0__DOT____Vcellout__genblk1__BRA__2__KET____DOT__u0__q) 
                                                               >> 6U)
                                                               : 
                                                              ((IData)(vlSymsp->TOP.mecanismo_flipping_flipflop__DOT__u0__DOT____Vcellout__genblk1__BRA__2__KET____DOT__u0__q) 
                                                               >> 9U)) 
                                                             << 9U)) 
                                                         | ((0x100U 
                                                             & (((IData)(vlSymsp->TOP.mecanismo_flipping_flipflop__DOT__u1__DOT____Vcellout__genblk1__BRA__2__KET____DOT__u0__q)
                                                                  ? 
                                                                 ((IData)(vlSymsp->TOP.mecanismo_flipping_flipflop__DOT__u0__DOT____Vcellout__genblk1__BRA__2__KET____DOT__u0__q) 
                                                                  >> 7U)
                                                                  : 
                                                                 ((IData)(vlSymsp->TOP.mecanismo_flipping_flipflop__DOT__u0__DOT____Vcellout__genblk1__BRA__2__KET____DOT__u0__q) 
                                                                  >> 8U)) 
                                                                << 8U)) 
                                                            | ((0x80U 
                                                                & (((IData)(vlSymsp->TOP.mecanismo_flipping_flipflop__DOT__u1__DOT____Vcellout__genblk1__BRA__2__KET____DOT__u0__q)
                                                                     ? 
                                                                    ((IData)(vlSymsp->TOP.mecanismo_flipping_flipflop__DOT__u0__DOT____Vcellout__genblk1__BRA__2__KET____DOT__u0__q) 
                                                                     >> 8U)
                                                                     : 
                                                                    ((IData)(vlSymsp->TOP.mecanismo_flipping_flipflop__DOT__u0__DOT____Vcellout__genblk1__BRA__2__KET____DOT__u0__q) 
                                                                     >> 7U)) 
                                                                   << 7U)) 
                                                               | ((0x40U 
                                                                   & (((IData)(vlSymsp->TOP.mecanismo_flipping_flipflop__DOT__u1__DOT____Vcellout__genblk1__BRA__2__KET____DOT__u0__q)
                                                                        ? 
                                                                       ((IData)(vlSymsp->TOP.mecanismo_flipping_flipflop__DOT__u0__DOT____Vcellout__genblk1__BRA__2__KET____DOT__u0__q) 
                                                                        >> 9U)
                                                                        : 
                                                                       ((IData)(vlSymsp->TOP.mecanismo_flipping_flipflop__DOT__u0__DOT____Vcellout__genblk1__BRA__2__KET____DOT__u0__q) 
                                                                        >> 6U)) 
                                                                      << 6U)) 
                                                                  | ((0x20U 
                                                                      & (((IData)(vlSymsp->TOP.mecanismo_flipping_flipflop__DOT__u1__DOT____Vcellout__genblk1__BRA__2__KET____DOT__u0__q)
                                                                           ? 
                                                                          ((IData)(vlSymsp->TOP.mecanismo_flipping_flipflop__DOT__u0__DOT____Vcellout__genblk1__BRA__2__KET____DOT__u0__q) 
                                                                           >> 0xaU)
                                                                           : 
                                                                          ((IData)(vlSymsp->TOP.mecanismo_flipping_flipflop__DOT__u0__DOT____Vcellout__genblk1__BRA__2__KET____DOT__u0__q) 
                                                                           >> 5U)) 
                                                                         << 5U)) 
                                                                     | ((0x10U 
                                                                         & (((IData)(vlSymsp->TOP.mecanismo_flipping_flipflop__DOT__u1__DOT____Vcellout__genblk1__BRA__2__KET____DOT__u0__q)
                                                                              ? 
                                                                             ((IData)(vlSymsp->TOP.mecanismo_flipping_flipflop__DOT__u0__DOT____Vcellout__genblk1__BRA__2__KET____DOT__u0__q) 
                                                                              >> 0xbU)
                                                                              : 
                                                                             ((IData)(vlSymsp->TOP.mecanismo_flipping_flipflop__DOT__u0__DOT____Vcellout__genblk1__BRA__2__KET____DOT__u0__q) 
                                                                              >> 4U)) 
                                                                            << 4U)) 
                                                                        | ((8U 
                                                                            & (((IData)(vlSymsp->TOP.mecanismo_flipping_flipflop__DOT__u1__DOT____Vcellout__genblk1__BRA__2__KET____DOT__u0__q)
                                                                                 ? 
                                                                                ((IData)(vlSymsp->TOP.mecanismo_flipping_flipflop__DOT__u0__DOT____Vcellout__genblk1__BRA__2__KET____DOT__u0__q) 
                                                                                >> 0xcU)
                                                                                 : 
                                                                                ((IData)(vlSymsp->TOP.mecanismo_flipping_flipflop__DOT__u0__DOT____Vcellout__genblk1__BRA__2__KET____DOT__u0__q) 
                                                                                >> 3U)) 
                                                                               << 3U)) 
                                                                           | ((4U 
                                                                               & (((IData)(vlSymsp->TOP.mecanismo_flipping_flipflop__DOT__u1__DOT____Vcellout__genblk1__BRA__2__KET____DOT__u0__q)
                                                                                 ? 
                                                                                ((IData)(vlSymsp->TOP.mecanismo_flipping_flipflop__DOT__u0__DOT____Vcellout__genblk1__BRA__2__KET____DOT__u0__q) 
                                                                                >> 0xdU)
                                                                                 : 
                                                                                ((IData)(vlSymsp->TOP.mecanismo_flipping_flipflop__DOT__u0__DOT____Vcellout__genblk1__BRA__2__KET____DOT__u0__q) 
                                                                                >> 2U)) 
                                                                                << 2U)) 
                                                                              | ((2U 
                                                                                & (((IData)(vlSymsp->TOP.mecanismo_flipping_flipflop__DOT__u1__DOT____Vcellout__genblk1__BRA__2__KET____DOT__u0__q)
                                                                                 ? 
                                                                                ((IData)(vlSymsp->TOP.mecanismo_flipping_flipflop__DOT__u0__DOT____Vcellout__genblk1__BRA__2__KET____DOT__u0__q) 
                                                                                >> 0xeU)
                                                                                 : 
                                                                                ((IData)(vlSymsp->TOP.mecanismo_flipping_flipflop__DOT__u0__DOT____Vcellout__genblk1__BRA__2__KET____DOT__u0__q) 
                                                                                >> 1U)) 
                                                                                << 1U)) 
                                                                                | (1U 
                                                                                & ((IData)(vlSymsp->TOP.mecanismo_flipping_flipflop__DOT__u1__DOT____Vcellout__genblk1__BRA__2__KET____DOT__u0__q)
                                                                                 ? 
                                                                                ((IData)(vlSymsp->TOP.mecanismo_flipping_flipflop__DOT__u0__DOT____Vcellout__genblk1__BRA__2__KET____DOT__u0__q) 
                                                                                >> 0xfU)
                                                                                 : (IData)(vlSymsp->TOP.mecanismo_flipping_flipflop__DOT__u0__DOT____Vcellout__genblk1__BRA__2__KET____DOT__u0__q))))))))))))))))));
}

VL_INLINE_OPT void Vmecanismo_flipping_flipflop_mecanismo_flipping_uno___nba_sequent__TOP__mecanismo_flipping_flipflop__DOT__u2__DOT__genblk1__BRA__3__KET____DOT__u0__0(Vmecanismo_flipping_flipflop_mecanismo_flipping_uno* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vmecanismo_flipping_flipflop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmecanismo_flipping_flipflop_mecanismo_flipping_uno___nba_sequent__TOP__mecanismo_flipping_flipflop__DOT__u2__DOT__genblk1__BRA__3__KET____DOT__u0__0\n"); );
    // Body
    vlSelf->b = ((0x8000U & (((IData)(vlSymsp->TOP.mecanismo_flipping_flipflop__DOT__u1__DOT____Vcellout__genblk1__BRA__3__KET____DOT__u0__q)
                               ? (IData)(vlSymsp->TOP.mecanismo_flipping_flipflop__DOT__u0__DOT____Vcellout__genblk1__BRA__3__KET____DOT__u0__q)
                               : ((IData)(vlSymsp->TOP.mecanismo_flipping_flipflop__DOT__u0__DOT____Vcellout__genblk1__BRA__3__KET____DOT__u0__q) 
                                  >> 0xfU)) << 0xfU)) 
                 | ((0x4000U & (((IData)(vlSymsp->TOP.mecanismo_flipping_flipflop__DOT__u1__DOT____Vcellout__genblk1__BRA__3__KET____DOT__u0__q)
                                  ? ((IData)(vlSymsp->TOP.mecanismo_flipping_flipflop__DOT__u0__DOT____Vcellout__genblk1__BRA__3__KET____DOT__u0__q) 
                                     >> 1U) : ((IData)(vlSymsp->TOP.mecanismo_flipping_flipflop__DOT__u0__DOT____Vcellout__genblk1__BRA__3__KET____DOT__u0__q) 
                                               >> 0xeU)) 
                                << 0xeU)) | ((0x2000U 
                                              & (((IData)(vlSymsp->TOP.mecanismo_flipping_flipflop__DOT__u1__DOT____Vcellout__genblk1__BRA__3__KET____DOT__u0__q)
                                                   ? 
                                                  ((IData)(vlSymsp->TOP.mecanismo_flipping_flipflop__DOT__u0__DOT____Vcellout__genblk1__BRA__3__KET____DOT__u0__q) 
                                                   >> 2U)
                                                   : 
                                                  ((IData)(vlSymsp->TOP.mecanismo_flipping_flipflop__DOT__u0__DOT____Vcellout__genblk1__BRA__3__KET____DOT__u0__q) 
                                                   >> 0xdU)) 
                                                 << 0xdU)) 
                                             | ((0x1000U 
                                                 & (((IData)(vlSymsp->TOP.mecanismo_flipping_flipflop__DOT__u1__DOT____Vcellout__genblk1__BRA__3__KET____DOT__u0__q)
                                                      ? 
                                                     ((IData)(vlSymsp->TOP.mecanismo_flipping_flipflop__DOT__u0__DOT____Vcellout__genblk1__BRA__3__KET____DOT__u0__q) 
                                                      >> 3U)
                                                      : 
                                                     ((IData)(vlSymsp->TOP.mecanismo_flipping_flipflop__DOT__u0__DOT____Vcellout__genblk1__BRA__3__KET____DOT__u0__q) 
                                                      >> 0xcU)) 
                                                    << 0xcU)) 
                                                | ((0x800U 
                                                    & (((IData)(vlSymsp->TOP.mecanismo_flipping_flipflop__DOT__u1__DOT____Vcellout__genblk1__BRA__3__KET____DOT__u0__q)
                                                         ? 
                                                        ((IData)(vlSymsp->TOP.mecanismo_flipping_flipflop__DOT__u0__DOT____Vcellout__genblk1__BRA__3__KET____DOT__u0__q) 
                                                         >> 4U)
                                                         : 
                                                        ((IData)(vlSymsp->TOP.mecanismo_flipping_flipflop__DOT__u0__DOT____Vcellout__genblk1__BRA__3__KET____DOT__u0__q) 
                                                         >> 0xbU)) 
                                                       << 0xbU)) 
                                                   | ((0x400U 
                                                       & (((IData)(vlSymsp->TOP.mecanismo_flipping_flipflop__DOT__u1__DOT____Vcellout__genblk1__BRA__3__KET____DOT__u0__q)
                                                            ? 
                                                           ((IData)(vlSymsp->TOP.mecanismo_flipping_flipflop__DOT__u0__DOT____Vcellout__genblk1__BRA__3__KET____DOT__u0__q) 
                                                            >> 5U)
                                                            : 
                                                           ((IData)(vlSymsp->TOP.mecanismo_flipping_flipflop__DOT__u0__DOT____Vcellout__genblk1__BRA__3__KET____DOT__u0__q) 
                                                            >> 0xaU)) 
                                                          << 0xaU)) 
                                                      | ((0x200U 
                                                          & (((IData)(vlSymsp->TOP.mecanismo_flipping_flipflop__DOT__u1__DOT____Vcellout__genblk1__BRA__3__KET____DOT__u0__q)
                                                               ? 
                                                              ((IData)(vlSymsp->TOP.mecanismo_flipping_flipflop__DOT__u0__DOT____Vcellout__genblk1__BRA__3__KET____DOT__u0__q) 
                                                               >> 6U)
                                                               : 
                                                              ((IData)(vlSymsp->TOP.mecanismo_flipping_flipflop__DOT__u0__DOT____Vcellout__genblk1__BRA__3__KET____DOT__u0__q) 
                                                               >> 9U)) 
                                                             << 9U)) 
                                                         | ((0x100U 
                                                             & (((IData)(vlSymsp->TOP.mecanismo_flipping_flipflop__DOT__u1__DOT____Vcellout__genblk1__BRA__3__KET____DOT__u0__q)
                                                                  ? 
                                                                 ((IData)(vlSymsp->TOP.mecanismo_flipping_flipflop__DOT__u0__DOT____Vcellout__genblk1__BRA__3__KET____DOT__u0__q) 
                                                                  >> 7U)
                                                                  : 
                                                                 ((IData)(vlSymsp->TOP.mecanismo_flipping_flipflop__DOT__u0__DOT____Vcellout__genblk1__BRA__3__KET____DOT__u0__q) 
                                                                  >> 8U)) 
                                                                << 8U)) 
                                                            | ((0x80U 
                                                                & (((IData)(vlSymsp->TOP.mecanismo_flipping_flipflop__DOT__u1__DOT____Vcellout__genblk1__BRA__3__KET____DOT__u0__q)
                                                                     ? 
                                                                    ((IData)(vlSymsp->TOP.mecanismo_flipping_flipflop__DOT__u0__DOT____Vcellout__genblk1__BRA__3__KET____DOT__u0__q) 
                                                                     >> 8U)
                                                                     : 
                                                                    ((IData)(vlSymsp->TOP.mecanismo_flipping_flipflop__DOT__u0__DOT____Vcellout__genblk1__BRA__3__KET____DOT__u0__q) 
                                                                     >> 7U)) 
                                                                   << 7U)) 
                                                               | ((0x40U 
                                                                   & (((IData)(vlSymsp->TOP.mecanismo_flipping_flipflop__DOT__u1__DOT____Vcellout__genblk1__BRA__3__KET____DOT__u0__q)
                                                                        ? 
                                                                       ((IData)(vlSymsp->TOP.mecanismo_flipping_flipflop__DOT__u0__DOT____Vcellout__genblk1__BRA__3__KET____DOT__u0__q) 
                                                                        >> 9U)
                                                                        : 
                                                                       ((IData)(vlSymsp->TOP.mecanismo_flipping_flipflop__DOT__u0__DOT____Vcellout__genblk1__BRA__3__KET____DOT__u0__q) 
                                                                        >> 6U)) 
                                                                      << 6U)) 
                                                                  | ((0x20U 
                                                                      & (((IData)(vlSymsp->TOP.mecanismo_flipping_flipflop__DOT__u1__DOT____Vcellout__genblk1__BRA__3__KET____DOT__u0__q)
                                                                           ? 
                                                                          ((IData)(vlSymsp->TOP.mecanismo_flipping_flipflop__DOT__u0__DOT____Vcellout__genblk1__BRA__3__KET____DOT__u0__q) 
                                                                           >> 0xaU)
                                                                           : 
                                                                          ((IData)(vlSymsp->TOP.mecanismo_flipping_flipflop__DOT__u0__DOT____Vcellout__genblk1__BRA__3__KET____DOT__u0__q) 
                                                                           >> 5U)) 
                                                                         << 5U)) 
                                                                     | ((0x10U 
                                                                         & (((IData)(vlSymsp->TOP.mecanismo_flipping_flipflop__DOT__u1__DOT____Vcellout__genblk1__BRA__3__KET____DOT__u0__q)
                                                                              ? 
                                                                             ((IData)(vlSymsp->TOP.mecanismo_flipping_flipflop__DOT__u0__DOT____Vcellout__genblk1__BRA__3__KET____DOT__u0__q) 
                                                                              >> 0xbU)
                                                                              : 
                                                                             ((IData)(vlSymsp->TOP.mecanismo_flipping_flipflop__DOT__u0__DOT____Vcellout__genblk1__BRA__3__KET____DOT__u0__q) 
                                                                              >> 4U)) 
                                                                            << 4U)) 
                                                                        | ((8U 
                                                                            & (((IData)(vlSymsp->TOP.mecanismo_flipping_flipflop__DOT__u1__DOT____Vcellout__genblk1__BRA__3__KET____DOT__u0__q)
                                                                                 ? 
                                                                                ((IData)(vlSymsp->TOP.mecanismo_flipping_flipflop__DOT__u0__DOT____Vcellout__genblk1__BRA__3__KET____DOT__u0__q) 
                                                                                >> 0xcU)
                                                                                 : 
                                                                                ((IData)(vlSymsp->TOP.mecanismo_flipping_flipflop__DOT__u0__DOT____Vcellout__genblk1__BRA__3__KET____DOT__u0__q) 
                                                                                >> 3U)) 
                                                                               << 3U)) 
                                                                           | ((4U 
                                                                               & (((IData)(vlSymsp->TOP.mecanismo_flipping_flipflop__DOT__u1__DOT____Vcellout__genblk1__BRA__3__KET____DOT__u0__q)
                                                                                 ? 
                                                                                ((IData)(vlSymsp->TOP.mecanismo_flipping_flipflop__DOT__u0__DOT____Vcellout__genblk1__BRA__3__KET____DOT__u0__q) 
                                                                                >> 0xdU)
                                                                                 : 
                                                                                ((IData)(vlSymsp->TOP.mecanismo_flipping_flipflop__DOT__u0__DOT____Vcellout__genblk1__BRA__3__KET____DOT__u0__q) 
                                                                                >> 2U)) 
                                                                                << 2U)) 
                                                                              | ((2U 
                                                                                & (((IData)(vlSymsp->TOP.mecanismo_flipping_flipflop__DOT__u1__DOT____Vcellout__genblk1__BRA__3__KET____DOT__u0__q)
                                                                                 ? 
                                                                                ((IData)(vlSymsp->TOP.mecanismo_flipping_flipflop__DOT__u0__DOT____Vcellout__genblk1__BRA__3__KET____DOT__u0__q) 
                                                                                >> 0xeU)
                                                                                 : 
                                                                                ((IData)(vlSymsp->TOP.mecanismo_flipping_flipflop__DOT__u0__DOT____Vcellout__genblk1__BRA__3__KET____DOT__u0__q) 
                                                                                >> 1U)) 
                                                                                << 1U)) 
                                                                                | (1U 
                                                                                & ((IData)(vlSymsp->TOP.mecanismo_flipping_flipflop__DOT__u1__DOT____Vcellout__genblk1__BRA__3__KET____DOT__u0__q)
                                                                                 ? 
                                                                                ((IData)(vlSymsp->TOP.mecanismo_flipping_flipflop__DOT__u0__DOT____Vcellout__genblk1__BRA__3__KET____DOT__u0__q) 
                                                                                >> 0xfU)
                                                                                 : (IData)(vlSymsp->TOP.mecanismo_flipping_flipflop__DOT__u0__DOT____Vcellout__genblk1__BRA__3__KET____DOT__u0__q))))))))))))))))));
}

VL_INLINE_OPT void Vmecanismo_flipping_flipflop_mecanismo_flipping_uno___nba_sequent__TOP__mecanismo_flipping_flipflop__DOT__u2__DOT__genblk1__BRA__4__KET____DOT__u0__0(Vmecanismo_flipping_flipflop_mecanismo_flipping_uno* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vmecanismo_flipping_flipflop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmecanismo_flipping_flipflop_mecanismo_flipping_uno___nba_sequent__TOP__mecanismo_flipping_flipflop__DOT__u2__DOT__genblk1__BRA__4__KET____DOT__u0__0\n"); );
    // Body
    vlSelf->b = ((0x8000U & (((IData)(vlSymsp->TOP.mecanismo_flipping_flipflop__DOT__u1__DOT____Vcellout__genblk1__BRA__4__KET____DOT__u0__q)
                               ? (IData)(vlSymsp->TOP.mecanismo_flipping_flipflop__DOT__u0__DOT____Vcellout__genblk1__BRA__4__KET____DOT__u0__q)
                               : ((IData)(vlSymsp->TOP.mecanismo_flipping_flipflop__DOT__u0__DOT____Vcellout__genblk1__BRA__4__KET____DOT__u0__q) 
                                  >> 0xfU)) << 0xfU)) 
                 | ((0x4000U & (((IData)(vlSymsp->TOP.mecanismo_flipping_flipflop__DOT__u1__DOT____Vcellout__genblk1__BRA__4__KET____DOT__u0__q)
                                  ? ((IData)(vlSymsp->TOP.mecanismo_flipping_flipflop__DOT__u0__DOT____Vcellout__genblk1__BRA__4__KET____DOT__u0__q) 
                                     >> 1U) : ((IData)(vlSymsp->TOP.mecanismo_flipping_flipflop__DOT__u0__DOT____Vcellout__genblk1__BRA__4__KET____DOT__u0__q) 
                                               >> 0xeU)) 
                                << 0xeU)) | ((0x2000U 
                                              & (((IData)(vlSymsp->TOP.mecanismo_flipping_flipflop__DOT__u1__DOT____Vcellout__genblk1__BRA__4__KET____DOT__u0__q)
                                                   ? 
                                                  ((IData)(vlSymsp->TOP.mecanismo_flipping_flipflop__DOT__u0__DOT____Vcellout__genblk1__BRA__4__KET____DOT__u0__q) 
                                                   >> 2U)
                                                   : 
                                                  ((IData)(vlSymsp->TOP.mecanismo_flipping_flipflop__DOT__u0__DOT____Vcellout__genblk1__BRA__4__KET____DOT__u0__q) 
                                                   >> 0xdU)) 
                                                 << 0xdU)) 
                                             | ((0x1000U 
                                                 & (((IData)(vlSymsp->TOP.mecanismo_flipping_flipflop__DOT__u1__DOT____Vcellout__genblk1__BRA__4__KET____DOT__u0__q)
                                                      ? 
                                                     ((IData)(vlSymsp->TOP.mecanismo_flipping_flipflop__DOT__u0__DOT____Vcellout__genblk1__BRA__4__KET____DOT__u0__q) 
                                                      >> 3U)
                                                      : 
                                                     ((IData)(vlSymsp->TOP.mecanismo_flipping_flipflop__DOT__u0__DOT____Vcellout__genblk1__BRA__4__KET____DOT__u0__q) 
                                                      >> 0xcU)) 
                                                    << 0xcU)) 
                                                | ((0x800U 
                                                    & (((IData)(vlSymsp->TOP.mecanismo_flipping_flipflop__DOT__u1__DOT____Vcellout__genblk1__BRA__4__KET____DOT__u0__q)
                                                         ? 
                                                        ((IData)(vlSymsp->TOP.mecanismo_flipping_flipflop__DOT__u0__DOT____Vcellout__genblk1__BRA__4__KET____DOT__u0__q) 
                                                         >> 4U)
                                                         : 
                                                        ((IData)(vlSymsp->TOP.mecanismo_flipping_flipflop__DOT__u0__DOT____Vcellout__genblk1__BRA__4__KET____DOT__u0__q) 
                                                         >> 0xbU)) 
                                                       << 0xbU)) 
                                                   | ((0x400U 
                                                       & (((IData)(vlSymsp->TOP.mecanismo_flipping_flipflop__DOT__u1__DOT____Vcellout__genblk1__BRA__4__KET____DOT__u0__q)
                                                            ? 
                                                           ((IData)(vlSymsp->TOP.mecanismo_flipping_flipflop__DOT__u0__DOT____Vcellout__genblk1__BRA__4__KET____DOT__u0__q) 
                                                            >> 5U)
                                                            : 
                                                           ((IData)(vlSymsp->TOP.mecanismo_flipping_flipflop__DOT__u0__DOT____Vcellout__genblk1__BRA__4__KET____DOT__u0__q) 
                                                            >> 0xaU)) 
                                                          << 0xaU)) 
                                                      | ((0x200U 
                                                          & (((IData)(vlSymsp->TOP.mecanismo_flipping_flipflop__DOT__u1__DOT____Vcellout__genblk1__BRA__4__KET____DOT__u0__q)
                                                               ? 
                                                              ((IData)(vlSymsp->TOP.mecanismo_flipping_flipflop__DOT__u0__DOT____Vcellout__genblk1__BRA__4__KET____DOT__u0__q) 
                                                               >> 6U)
                                                               : 
                                                              ((IData)(vlSymsp->TOP.mecanismo_flipping_flipflop__DOT__u0__DOT____Vcellout__genblk1__BRA__4__KET____DOT__u0__q) 
                                                               >> 9U)) 
                                                             << 9U)) 
                                                         | ((0x100U 
                                                             & (((IData)(vlSymsp->TOP.mecanismo_flipping_flipflop__DOT__u1__DOT____Vcellout__genblk1__BRA__4__KET____DOT__u0__q)
                                                                  ? 
                                                                 ((IData)(vlSymsp->TOP.mecanismo_flipping_flipflop__DOT__u0__DOT____Vcellout__genblk1__BRA__4__KET____DOT__u0__q) 
                                                                  >> 7U)
                                                                  : 
                                                                 ((IData)(vlSymsp->TOP.mecanismo_flipping_flipflop__DOT__u0__DOT____Vcellout__genblk1__BRA__4__KET____DOT__u0__q) 
                                                                  >> 8U)) 
                                                                << 8U)) 
                                                            | ((0x80U 
                                                                & (((IData)(vlSymsp->TOP.mecanismo_flipping_flipflop__DOT__u1__DOT____Vcellout__genblk1__BRA__4__KET____DOT__u0__q)
                                                                     ? 
                                                                    ((IData)(vlSymsp->TOP.mecanismo_flipping_flipflop__DOT__u0__DOT____Vcellout__genblk1__BRA__4__KET____DOT__u0__q) 
                                                                     >> 8U)
                                                                     : 
                                                                    ((IData)(vlSymsp->TOP.mecanismo_flipping_flipflop__DOT__u0__DOT____Vcellout__genblk1__BRA__4__KET____DOT__u0__q) 
                                                                     >> 7U)) 
                                                                   << 7U)) 
                                                               | ((0x40U 
                                                                   & (((IData)(vlSymsp->TOP.mecanismo_flipping_flipflop__DOT__u1__DOT____Vcellout__genblk1__BRA__4__KET____DOT__u0__q)
                                                                        ? 
                                                                       ((IData)(vlSymsp->TOP.mecanismo_flipping_flipflop__DOT__u0__DOT____Vcellout__genblk1__BRA__4__KET____DOT__u0__q) 
                                                                        >> 9U)
                                                                        : 
                                                                       ((IData)(vlSymsp->TOP.mecanismo_flipping_flipflop__DOT__u0__DOT____Vcellout__genblk1__BRA__4__KET____DOT__u0__q) 
                                                                        >> 6U)) 
                                                                      << 6U)) 
                                                                  | ((0x20U 
                                                                      & (((IData)(vlSymsp->TOP.mecanismo_flipping_flipflop__DOT__u1__DOT____Vcellout__genblk1__BRA__4__KET____DOT__u0__q)
                                                                           ? 
                                                                          ((IData)(vlSymsp->TOP.mecanismo_flipping_flipflop__DOT__u0__DOT____Vcellout__genblk1__BRA__4__KET____DOT__u0__q) 
                                                                           >> 0xaU)
                                                                           : 
                                                                          ((IData)(vlSymsp->TOP.mecanismo_flipping_flipflop__DOT__u0__DOT____Vcellout__genblk1__BRA__4__KET____DOT__u0__q) 
                                                                           >> 5U)) 
                                                                         << 5U)) 
                                                                     | ((0x10U 
                                                                         & (((IData)(vlSymsp->TOP.mecanismo_flipping_flipflop__DOT__u1__DOT____Vcellout__genblk1__BRA__4__KET____DOT__u0__q)
                                                                              ? 
                                                                             ((IData)(vlSymsp->TOP.mecanismo_flipping_flipflop__DOT__u0__DOT____Vcellout__genblk1__BRA__4__KET____DOT__u0__q) 
                                                                              >> 0xbU)
                                                                              : 
                                                                             ((IData)(vlSymsp->TOP.mecanismo_flipping_flipflop__DOT__u0__DOT____Vcellout__genblk1__BRA__4__KET____DOT__u0__q) 
                                                                              >> 4U)) 
                                                                            << 4U)) 
                                                                        | ((8U 
                                                                            & (((IData)(vlSymsp->TOP.mecanismo_flipping_flipflop__DOT__u1__DOT____Vcellout__genblk1__BRA__4__KET____DOT__u0__q)
                                                                                 ? 
                                                                                ((IData)(vlSymsp->TOP.mecanismo_flipping_flipflop__DOT__u0__DOT____Vcellout__genblk1__BRA__4__KET____DOT__u0__q) 
                                                                                >> 0xcU)
                                                                                 : 
                                                                                ((IData)(vlSymsp->TOP.mecanismo_flipping_flipflop__DOT__u0__DOT____Vcellout__genblk1__BRA__4__KET____DOT__u0__q) 
                                                                                >> 3U)) 
                                                                               << 3U)) 
                                                                           | ((4U 
                                                                               & (((IData)(vlSymsp->TOP.mecanismo_flipping_flipflop__DOT__u1__DOT____Vcellout__genblk1__BRA__4__KET____DOT__u0__q)
                                                                                 ? 
                                                                                ((IData)(vlSymsp->TOP.mecanismo_flipping_flipflop__DOT__u0__DOT____Vcellout__genblk1__BRA__4__KET____DOT__u0__q) 
                                                                                >> 0xdU)
                                                                                 : 
                                                                                ((IData)(vlSymsp->TOP.mecanismo_flipping_flipflop__DOT__u0__DOT____Vcellout__genblk1__BRA__4__KET____DOT__u0__q) 
                                                                                >> 2U)) 
                                                                                << 2U)) 
                                                                              | ((2U 
                                                                                & (((IData)(vlSymsp->TOP.mecanismo_flipping_flipflop__DOT__u1__DOT____Vcellout__genblk1__BRA__4__KET____DOT__u0__q)
                                                                                 ? 
                                                                                ((IData)(vlSymsp->TOP.mecanismo_flipping_flipflop__DOT__u0__DOT____Vcellout__genblk1__BRA__4__KET____DOT__u0__q) 
                                                                                >> 0xeU)
                                                                                 : 
                                                                                ((IData)(vlSymsp->TOP.mecanismo_flipping_flipflop__DOT__u0__DOT____Vcellout__genblk1__BRA__4__KET____DOT__u0__q) 
                                                                                >> 1U)) 
                                                                                << 1U)) 
                                                                                | (1U 
                                                                                & ((IData)(vlSymsp->TOP.mecanismo_flipping_flipflop__DOT__u1__DOT____Vcellout__genblk1__BRA__4__KET____DOT__u0__q)
                                                                                 ? 
                                                                                ((IData)(vlSymsp->TOP.mecanismo_flipping_flipflop__DOT__u0__DOT____Vcellout__genblk1__BRA__4__KET____DOT__u0__q) 
                                                                                >> 0xfU)
                                                                                 : (IData)(vlSymsp->TOP.mecanismo_flipping_flipflop__DOT__u0__DOT____Vcellout__genblk1__BRA__4__KET____DOT__u0__q))))))))))))))))));
}

VL_INLINE_OPT void Vmecanismo_flipping_flipflop_mecanismo_flipping_uno___nba_sequent__TOP__mecanismo_flipping_flipflop__DOT__u2__DOT__genblk1__BRA__5__KET____DOT__u0__0(Vmecanismo_flipping_flipflop_mecanismo_flipping_uno* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vmecanismo_flipping_flipflop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmecanismo_flipping_flipflop_mecanismo_flipping_uno___nba_sequent__TOP__mecanismo_flipping_flipflop__DOT__u2__DOT__genblk1__BRA__5__KET____DOT__u0__0\n"); );
    // Body
    vlSelf->b = ((0x8000U & (((IData)(vlSymsp->TOP.mecanismo_flipping_flipflop__DOT__u1__DOT____Vcellout__genblk1__BRA__5__KET____DOT__u0__q)
                               ? (IData)(vlSymsp->TOP.mecanismo_flipping_flipflop__DOT__u0__DOT____Vcellout__genblk1__BRA__5__KET____DOT__u0__q)
                               : ((IData)(vlSymsp->TOP.mecanismo_flipping_flipflop__DOT__u0__DOT____Vcellout__genblk1__BRA__5__KET____DOT__u0__q) 
                                  >> 0xfU)) << 0xfU)) 
                 | ((0x4000U & (((IData)(vlSymsp->TOP.mecanismo_flipping_flipflop__DOT__u1__DOT____Vcellout__genblk1__BRA__5__KET____DOT__u0__q)
                                  ? ((IData)(vlSymsp->TOP.mecanismo_flipping_flipflop__DOT__u0__DOT____Vcellout__genblk1__BRA__5__KET____DOT__u0__q) 
                                     >> 1U) : ((IData)(vlSymsp->TOP.mecanismo_flipping_flipflop__DOT__u0__DOT____Vcellout__genblk1__BRA__5__KET____DOT__u0__q) 
                                               >> 0xeU)) 
                                << 0xeU)) | ((0x2000U 
                                              & (((IData)(vlSymsp->TOP.mecanismo_flipping_flipflop__DOT__u1__DOT____Vcellout__genblk1__BRA__5__KET____DOT__u0__q)
                                                   ? 
                                                  ((IData)(vlSymsp->TOP.mecanismo_flipping_flipflop__DOT__u0__DOT____Vcellout__genblk1__BRA__5__KET____DOT__u0__q) 
                                                   >> 2U)
                                                   : 
                                                  ((IData)(vlSymsp->TOP.mecanismo_flipping_flipflop__DOT__u0__DOT____Vcellout__genblk1__BRA__5__KET____DOT__u0__q) 
                                                   >> 0xdU)) 
                                                 << 0xdU)) 
                                             | ((0x1000U 
                                                 & (((IData)(vlSymsp->TOP.mecanismo_flipping_flipflop__DOT__u1__DOT____Vcellout__genblk1__BRA__5__KET____DOT__u0__q)
                                                      ? 
                                                     ((IData)(vlSymsp->TOP.mecanismo_flipping_flipflop__DOT__u0__DOT____Vcellout__genblk1__BRA__5__KET____DOT__u0__q) 
                                                      >> 3U)
                                                      : 
                                                     ((IData)(vlSymsp->TOP.mecanismo_flipping_flipflop__DOT__u0__DOT____Vcellout__genblk1__BRA__5__KET____DOT__u0__q) 
                                                      >> 0xcU)) 
                                                    << 0xcU)) 
                                                | ((0x800U 
                                                    & (((IData)(vlSymsp->TOP.mecanismo_flipping_flipflop__DOT__u1__DOT____Vcellout__genblk1__BRA__5__KET____DOT__u0__q)
                                                         ? 
                                                        ((IData)(vlSymsp->TOP.mecanismo_flipping_flipflop__DOT__u0__DOT____Vcellout__genblk1__BRA__5__KET____DOT__u0__q) 
                                                         >> 4U)
                                                         : 
                                                        ((IData)(vlSymsp->TOP.mecanismo_flipping_flipflop__DOT__u0__DOT____Vcellout__genblk1__BRA__5__KET____DOT__u0__q) 
                                                         >> 0xbU)) 
                                                       << 0xbU)) 
                                                   | ((0x400U 
                                                       & (((IData)(vlSymsp->TOP.mecanismo_flipping_flipflop__DOT__u1__DOT____Vcellout__genblk1__BRA__5__KET____DOT__u0__q)
                                                            ? 
                                                           ((IData)(vlSymsp->TOP.mecanismo_flipping_flipflop__DOT__u0__DOT____Vcellout__genblk1__BRA__5__KET____DOT__u0__q) 
                                                            >> 5U)
                                                            : 
                                                           ((IData)(vlSymsp->TOP.mecanismo_flipping_flipflop__DOT__u0__DOT____Vcellout__genblk1__BRA__5__KET____DOT__u0__q) 
                                                            >> 0xaU)) 
                                                          << 0xaU)) 
                                                      | ((0x200U 
                                                          & (((IData)(vlSymsp->TOP.mecanismo_flipping_flipflop__DOT__u1__DOT____Vcellout__genblk1__BRA__5__KET____DOT__u0__q)
                                                               ? 
                                                              ((IData)(vlSymsp->TOP.mecanismo_flipping_flipflop__DOT__u0__DOT____Vcellout__genblk1__BRA__5__KET____DOT__u0__q) 
                                                               >> 6U)
                                                               : 
                                                              ((IData)(vlSymsp->TOP.mecanismo_flipping_flipflop__DOT__u0__DOT____Vcellout__genblk1__BRA__5__KET____DOT__u0__q) 
                                                               >> 9U)) 
                                                             << 9U)) 
                                                         | ((0x100U 
                                                             & (((IData)(vlSymsp->TOP.mecanismo_flipping_flipflop__DOT__u1__DOT____Vcellout__genblk1__BRA__5__KET____DOT__u0__q)
                                                                  ? 
                                                                 ((IData)(vlSymsp->TOP.mecanismo_flipping_flipflop__DOT__u0__DOT____Vcellout__genblk1__BRA__5__KET____DOT__u0__q) 
                                                                  >> 7U)
                                                                  : 
                                                                 ((IData)(vlSymsp->TOP.mecanismo_flipping_flipflop__DOT__u0__DOT____Vcellout__genblk1__BRA__5__KET____DOT__u0__q) 
                                                                  >> 8U)) 
                                                                << 8U)) 
                                                            | ((0x80U 
                                                                & (((IData)(vlSymsp->TOP.mecanismo_flipping_flipflop__DOT__u1__DOT____Vcellout__genblk1__BRA__5__KET____DOT__u0__q)
                                                                     ? 
                                                                    ((IData)(vlSymsp->TOP.mecanismo_flipping_flipflop__DOT__u0__DOT____Vcellout__genblk1__BRA__5__KET____DOT__u0__q) 
                                                                     >> 8U)
                                                                     : 
                                                                    ((IData)(vlSymsp->TOP.mecanismo_flipping_flipflop__DOT__u0__DOT____Vcellout__genblk1__BRA__5__KET____DOT__u0__q) 
                                                                     >> 7U)) 
                                                                   << 7U)) 
                                                               | ((0x40U 
                                                                   & (((IData)(vlSymsp->TOP.mecanismo_flipping_flipflop__DOT__u1__DOT____Vcellout__genblk1__BRA__5__KET____DOT__u0__q)
                                                                        ? 
                                                                       ((IData)(vlSymsp->TOP.mecanismo_flipping_flipflop__DOT__u0__DOT____Vcellout__genblk1__BRA__5__KET____DOT__u0__q) 
                                                                        >> 9U)
                                                                        : 
                                                                       ((IData)(vlSymsp->TOP.mecanismo_flipping_flipflop__DOT__u0__DOT____Vcellout__genblk1__BRA__5__KET____DOT__u0__q) 
                                                                        >> 6U)) 
                                                                      << 6U)) 
                                                                  | ((0x20U 
                                                                      & (((IData)(vlSymsp->TOP.mecanismo_flipping_flipflop__DOT__u1__DOT____Vcellout__genblk1__BRA__5__KET____DOT__u0__q)
                                                                           ? 
                                                                          ((IData)(vlSymsp->TOP.mecanismo_flipping_flipflop__DOT__u0__DOT____Vcellout__genblk1__BRA__5__KET____DOT__u0__q) 
                                                                           >> 0xaU)
                                                                           : 
                                                                          ((IData)(vlSymsp->TOP.mecanismo_flipping_flipflop__DOT__u0__DOT____Vcellout__genblk1__BRA__5__KET____DOT__u0__q) 
                                                                           >> 5U)) 
                                                                         << 5U)) 
                                                                     | ((0x10U 
                                                                         & (((IData)(vlSymsp->TOP.mecanismo_flipping_flipflop__DOT__u1__DOT____Vcellout__genblk1__BRA__5__KET____DOT__u0__q)
                                                                              ? 
                                                                             ((IData)(vlSymsp->TOP.mecanismo_flipping_flipflop__DOT__u0__DOT____Vcellout__genblk1__BRA__5__KET____DOT__u0__q) 
                                                                              >> 0xbU)
                                                                              : 
                                                                             ((IData)(vlSymsp->TOP.mecanismo_flipping_flipflop__DOT__u0__DOT____Vcellout__genblk1__BRA__5__KET____DOT__u0__q) 
                                                                              >> 4U)) 
                                                                            << 4U)) 
                                                                        | ((8U 
                                                                            & (((IData)(vlSymsp->TOP.mecanismo_flipping_flipflop__DOT__u1__DOT____Vcellout__genblk1__BRA__5__KET____DOT__u0__q)
                                                                                 ? 
                                                                                ((IData)(vlSymsp->TOP.mecanismo_flipping_flipflop__DOT__u0__DOT____Vcellout__genblk1__BRA__5__KET____DOT__u0__q) 
                                                                                >> 0xcU)
                                                                                 : 
                                                                                ((IData)(vlSymsp->TOP.mecanismo_flipping_flipflop__DOT__u0__DOT____Vcellout__genblk1__BRA__5__KET____DOT__u0__q) 
                                                                                >> 3U)) 
                                                                               << 3U)) 
                                                                           | ((4U 
                                                                               & (((IData)(vlSymsp->TOP.mecanismo_flipping_flipflop__DOT__u1__DOT____Vcellout__genblk1__BRA__5__KET____DOT__u0__q)
                                                                                 ? 
                                                                                ((IData)(vlSymsp->TOP.mecanismo_flipping_flipflop__DOT__u0__DOT____Vcellout__genblk1__BRA__5__KET____DOT__u0__q) 
                                                                                >> 0xdU)
                                                                                 : 
                                                                                ((IData)(vlSymsp->TOP.mecanismo_flipping_flipflop__DOT__u0__DOT____Vcellout__genblk1__BRA__5__KET____DOT__u0__q) 
                                                                                >> 2U)) 
                                                                                << 2U)) 
                                                                              | ((2U 
                                                                                & (((IData)(vlSymsp->TOP.mecanismo_flipping_flipflop__DOT__u1__DOT____Vcellout__genblk1__BRA__5__KET____DOT__u0__q)
                                                                                 ? 
                                                                                ((IData)(vlSymsp->TOP.mecanismo_flipping_flipflop__DOT__u0__DOT____Vcellout__genblk1__BRA__5__KET____DOT__u0__q) 
                                                                                >> 0xeU)
                                                                                 : 
                                                                                ((IData)(vlSymsp->TOP.mecanismo_flipping_flipflop__DOT__u0__DOT____Vcellout__genblk1__BRA__5__KET____DOT__u0__q) 
                                                                                >> 1U)) 
                                                                                << 1U)) 
                                                                                | (1U 
                                                                                & ((IData)(vlSymsp->TOP.mecanismo_flipping_flipflop__DOT__u1__DOT____Vcellout__genblk1__BRA__5__KET____DOT__u0__q)
                                                                                 ? 
                                                                                ((IData)(vlSymsp->TOP.mecanismo_flipping_flipflop__DOT__u0__DOT____Vcellout__genblk1__BRA__5__KET____DOT__u0__q) 
                                                                                >> 0xfU)
                                                                                 : (IData)(vlSymsp->TOP.mecanismo_flipping_flipflop__DOT__u0__DOT____Vcellout__genblk1__BRA__5__KET____DOT__u0__q))))))))))))))))));
}

VL_INLINE_OPT void Vmecanismo_flipping_flipflop_mecanismo_flipping_uno___nba_sequent__TOP__mecanismo_flipping_flipflop__DOT__u2__DOT__genblk1__BRA__6__KET____DOT__u0__0(Vmecanismo_flipping_flipflop_mecanismo_flipping_uno* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vmecanismo_flipping_flipflop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmecanismo_flipping_flipflop_mecanismo_flipping_uno___nba_sequent__TOP__mecanismo_flipping_flipflop__DOT__u2__DOT__genblk1__BRA__6__KET____DOT__u0__0\n"); );
    // Body
    vlSelf->b = ((0x8000U & (((IData)(vlSymsp->TOP.mecanismo_flipping_flipflop__DOT__u1__DOT____Vcellout__genblk1__BRA__6__KET____DOT__u0__q)
                               ? (IData)(vlSymsp->TOP.mecanismo_flipping_flipflop__DOT__u0__DOT____Vcellout__genblk1__BRA__6__KET____DOT__u0__q)
                               : ((IData)(vlSymsp->TOP.mecanismo_flipping_flipflop__DOT__u0__DOT____Vcellout__genblk1__BRA__6__KET____DOT__u0__q) 
                                  >> 0xfU)) << 0xfU)) 
                 | ((0x4000U & (((IData)(vlSymsp->TOP.mecanismo_flipping_flipflop__DOT__u1__DOT____Vcellout__genblk1__BRA__6__KET____DOT__u0__q)
                                  ? ((IData)(vlSymsp->TOP.mecanismo_flipping_flipflop__DOT__u0__DOT____Vcellout__genblk1__BRA__6__KET____DOT__u0__q) 
                                     >> 1U) : ((IData)(vlSymsp->TOP.mecanismo_flipping_flipflop__DOT__u0__DOT____Vcellout__genblk1__BRA__6__KET____DOT__u0__q) 
                                               >> 0xeU)) 
                                << 0xeU)) | ((0x2000U 
                                              & (((IData)(vlSymsp->TOP.mecanismo_flipping_flipflop__DOT__u1__DOT____Vcellout__genblk1__BRA__6__KET____DOT__u0__q)
                                                   ? 
                                                  ((IData)(vlSymsp->TOP.mecanismo_flipping_flipflop__DOT__u0__DOT____Vcellout__genblk1__BRA__6__KET____DOT__u0__q) 
                                                   >> 2U)
                                                   : 
                                                  ((IData)(vlSymsp->TOP.mecanismo_flipping_flipflop__DOT__u0__DOT____Vcellout__genblk1__BRA__6__KET____DOT__u0__q) 
                                                   >> 0xdU)) 
                                                 << 0xdU)) 
                                             | ((0x1000U 
                                                 & (((IData)(vlSymsp->TOP.mecanismo_flipping_flipflop__DOT__u1__DOT____Vcellout__genblk1__BRA__6__KET____DOT__u0__q)
                                                      ? 
                                                     ((IData)(vlSymsp->TOP.mecanismo_flipping_flipflop__DOT__u0__DOT____Vcellout__genblk1__BRA__6__KET____DOT__u0__q) 
                                                      >> 3U)
                                                      : 
                                                     ((IData)(vlSymsp->TOP.mecanismo_flipping_flipflop__DOT__u0__DOT____Vcellout__genblk1__BRA__6__KET____DOT__u0__q) 
                                                      >> 0xcU)) 
                                                    << 0xcU)) 
                                                | ((0x800U 
                                                    & (((IData)(vlSymsp->TOP.mecanismo_flipping_flipflop__DOT__u1__DOT____Vcellout__genblk1__BRA__6__KET____DOT__u0__q)
                                                         ? 
                                                        ((IData)(vlSymsp->TOP.mecanismo_flipping_flipflop__DOT__u0__DOT____Vcellout__genblk1__BRA__6__KET____DOT__u0__q) 
                                                         >> 4U)
                                                         : 
                                                        ((IData)(vlSymsp->TOP.mecanismo_flipping_flipflop__DOT__u0__DOT____Vcellout__genblk1__BRA__6__KET____DOT__u0__q) 
                                                         >> 0xbU)) 
                                                       << 0xbU)) 
                                                   | ((0x400U 
                                                       & (((IData)(vlSymsp->TOP.mecanismo_flipping_flipflop__DOT__u1__DOT____Vcellout__genblk1__BRA__6__KET____DOT__u0__q)
                                                            ? 
                                                           ((IData)(vlSymsp->TOP.mecanismo_flipping_flipflop__DOT__u0__DOT____Vcellout__genblk1__BRA__6__KET____DOT__u0__q) 
                                                            >> 5U)
                                                            : 
                                                           ((IData)(vlSymsp->TOP.mecanismo_flipping_flipflop__DOT__u0__DOT____Vcellout__genblk1__BRA__6__KET____DOT__u0__q) 
                                                            >> 0xaU)) 
                                                          << 0xaU)) 
                                                      | ((0x200U 
                                                          & (((IData)(vlSymsp->TOP.mecanismo_flipping_flipflop__DOT__u1__DOT____Vcellout__genblk1__BRA__6__KET____DOT__u0__q)
                                                               ? 
                                                              ((IData)(vlSymsp->TOP.mecanismo_flipping_flipflop__DOT__u0__DOT____Vcellout__genblk1__BRA__6__KET____DOT__u0__q) 
                                                               >> 6U)
                                                               : 
                                                              ((IData)(vlSymsp->TOP.mecanismo_flipping_flipflop__DOT__u0__DOT____Vcellout__genblk1__BRA__6__KET____DOT__u0__q) 
                                                               >> 9U)) 
                                                             << 9U)) 
                                                         | ((0x100U 
                                                             & (((IData)(vlSymsp->TOP.mecanismo_flipping_flipflop__DOT__u1__DOT____Vcellout__genblk1__BRA__6__KET____DOT__u0__q)
                                                                  ? 
                                                                 ((IData)(vlSymsp->TOP.mecanismo_flipping_flipflop__DOT__u0__DOT____Vcellout__genblk1__BRA__6__KET____DOT__u0__q) 
                                                                  >> 7U)
                                                                  : 
                                                                 ((IData)(vlSymsp->TOP.mecanismo_flipping_flipflop__DOT__u0__DOT____Vcellout__genblk1__BRA__6__KET____DOT__u0__q) 
                                                                  >> 8U)) 
                                                                << 8U)) 
                                                            | ((0x80U 
                                                                & (((IData)(vlSymsp->TOP.mecanismo_flipping_flipflop__DOT__u1__DOT____Vcellout__genblk1__BRA__6__KET____DOT__u0__q)
                                                                     ? 
                                                                    ((IData)(vlSymsp->TOP.mecanismo_flipping_flipflop__DOT__u0__DOT____Vcellout__genblk1__BRA__6__KET____DOT__u0__q) 
                                                                     >> 8U)
                                                                     : 
                                                                    ((IData)(vlSymsp->TOP.mecanismo_flipping_flipflop__DOT__u0__DOT____Vcellout__genblk1__BRA__6__KET____DOT__u0__q) 
                                                                     >> 7U)) 
                                                                   << 7U)) 
                                                               | ((0x40U 
                                                                   & (((IData)(vlSymsp->TOP.mecanismo_flipping_flipflop__DOT__u1__DOT____Vcellout__genblk1__BRA__6__KET____DOT__u0__q)
                                                                        ? 
                                                                       ((IData)(vlSymsp->TOP.mecanismo_flipping_flipflop__DOT__u0__DOT____Vcellout__genblk1__BRA__6__KET____DOT__u0__q) 
                                                                        >> 9U)
                                                                        : 
                                                                       ((IData)(vlSymsp->TOP.mecanismo_flipping_flipflop__DOT__u0__DOT____Vcellout__genblk1__BRA__6__KET____DOT__u0__q) 
                                                                        >> 6U)) 
                                                                      << 6U)) 
                                                                  | ((0x20U 
                                                                      & (((IData)(vlSymsp->TOP.mecanismo_flipping_flipflop__DOT__u1__DOT____Vcellout__genblk1__BRA__6__KET____DOT__u0__q)
                                                                           ? 
                                                                          ((IData)(vlSymsp->TOP.mecanismo_flipping_flipflop__DOT__u0__DOT____Vcellout__genblk1__BRA__6__KET____DOT__u0__q) 
                                                                           >> 0xaU)
                                                                           : 
                                                                          ((IData)(vlSymsp->TOP.mecanismo_flipping_flipflop__DOT__u0__DOT____Vcellout__genblk1__BRA__6__KET____DOT__u0__q) 
                                                                           >> 5U)) 
                                                                         << 5U)) 
                                                                     | ((0x10U 
                                                                         & (((IData)(vlSymsp->TOP.mecanismo_flipping_flipflop__DOT__u1__DOT____Vcellout__genblk1__BRA__6__KET____DOT__u0__q)
                                                                              ? 
                                                                             ((IData)(vlSymsp->TOP.mecanismo_flipping_flipflop__DOT__u0__DOT____Vcellout__genblk1__BRA__6__KET____DOT__u0__q) 
                                                                              >> 0xbU)
                                                                              : 
                                                                             ((IData)(vlSymsp->TOP.mecanismo_flipping_flipflop__DOT__u0__DOT____Vcellout__genblk1__BRA__6__KET____DOT__u0__q) 
                                                                              >> 4U)) 
                                                                            << 4U)) 
                                                                        | ((8U 
                                                                            & (((IData)(vlSymsp->TOP.mecanismo_flipping_flipflop__DOT__u1__DOT____Vcellout__genblk1__BRA__6__KET____DOT__u0__q)
                                                                                 ? 
                                                                                ((IData)(vlSymsp->TOP.mecanismo_flipping_flipflop__DOT__u0__DOT____Vcellout__genblk1__BRA__6__KET____DOT__u0__q) 
                                                                                >> 0xcU)
                                                                                 : 
                                                                                ((IData)(vlSymsp->TOP.mecanismo_flipping_flipflop__DOT__u0__DOT____Vcellout__genblk1__BRA__6__KET____DOT__u0__q) 
                                                                                >> 3U)) 
                                                                               << 3U)) 
                                                                           | ((4U 
                                                                               & (((IData)(vlSymsp->TOP.mecanismo_flipping_flipflop__DOT__u1__DOT____Vcellout__genblk1__BRA__6__KET____DOT__u0__q)
                                                                                 ? 
                                                                                ((IData)(vlSymsp->TOP.mecanismo_flipping_flipflop__DOT__u0__DOT____Vcellout__genblk1__BRA__6__KET____DOT__u0__q) 
                                                                                >> 0xdU)
                                                                                 : 
                                                                                ((IData)(vlSymsp->TOP.mecanismo_flipping_flipflop__DOT__u0__DOT____Vcellout__genblk1__BRA__6__KET____DOT__u0__q) 
                                                                                >> 2U)) 
                                                                                << 2U)) 
                                                                              | ((2U 
                                                                                & (((IData)(vlSymsp->TOP.mecanismo_flipping_flipflop__DOT__u1__DOT____Vcellout__genblk1__BRA__6__KET____DOT__u0__q)
                                                                                 ? 
                                                                                ((IData)(vlSymsp->TOP.mecanismo_flipping_flipflop__DOT__u0__DOT____Vcellout__genblk1__BRA__6__KET____DOT__u0__q) 
                                                                                >> 0xeU)
                                                                                 : 
                                                                                ((IData)(vlSymsp->TOP.mecanismo_flipping_flipflop__DOT__u0__DOT____Vcellout__genblk1__BRA__6__KET____DOT__u0__q) 
                                                                                >> 1U)) 
                                                                                << 1U)) 
                                                                                | (1U 
                                                                                & ((IData)(vlSymsp->TOP.mecanismo_flipping_flipflop__DOT__u1__DOT____Vcellout__genblk1__BRA__6__KET____DOT__u0__q)
                                                                                 ? 
                                                                                ((IData)(vlSymsp->TOP.mecanismo_flipping_flipflop__DOT__u0__DOT____Vcellout__genblk1__BRA__6__KET____DOT__u0__q) 
                                                                                >> 0xfU)
                                                                                 : (IData)(vlSymsp->TOP.mecanismo_flipping_flipflop__DOT__u0__DOT____Vcellout__genblk1__BRA__6__KET____DOT__u0__q))))))))))))))))));
}

VL_INLINE_OPT void Vmecanismo_flipping_flipflop_mecanismo_flipping_uno___nba_sequent__TOP__mecanismo_flipping_flipflop__DOT__u2__DOT__genblk1__BRA__7__KET____DOT__u0__0(Vmecanismo_flipping_flipflop_mecanismo_flipping_uno* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vmecanismo_flipping_flipflop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmecanismo_flipping_flipflop_mecanismo_flipping_uno___nba_sequent__TOP__mecanismo_flipping_flipflop__DOT__u2__DOT__genblk1__BRA__7__KET____DOT__u0__0\n"); );
    // Body
    vlSelf->b = ((0x8000U & (((IData)(vlSymsp->TOP.mecanismo_flipping_flipflop__DOT__u1__DOT____Vcellout__genblk1__BRA__7__KET____DOT__u0__q)
                               ? (IData)(vlSymsp->TOP.mecanismo_flipping_flipflop__DOT__u0__DOT____Vcellout__genblk1__BRA__7__KET____DOT__u0__q)
                               : ((IData)(vlSymsp->TOP.mecanismo_flipping_flipflop__DOT__u0__DOT____Vcellout__genblk1__BRA__7__KET____DOT__u0__q) 
                                  >> 0xfU)) << 0xfU)) 
                 | ((0x4000U & (((IData)(vlSymsp->TOP.mecanismo_flipping_flipflop__DOT__u1__DOT____Vcellout__genblk1__BRA__7__KET____DOT__u0__q)
                                  ? ((IData)(vlSymsp->TOP.mecanismo_flipping_flipflop__DOT__u0__DOT____Vcellout__genblk1__BRA__7__KET____DOT__u0__q) 
                                     >> 1U) : ((IData)(vlSymsp->TOP.mecanismo_flipping_flipflop__DOT__u0__DOT____Vcellout__genblk1__BRA__7__KET____DOT__u0__q) 
                                               >> 0xeU)) 
                                << 0xeU)) | ((0x2000U 
                                              & (((IData)(vlSymsp->TOP.mecanismo_flipping_flipflop__DOT__u1__DOT____Vcellout__genblk1__BRA__7__KET____DOT__u0__q)
                                                   ? 
                                                  ((IData)(vlSymsp->TOP.mecanismo_flipping_flipflop__DOT__u0__DOT____Vcellout__genblk1__BRA__7__KET____DOT__u0__q) 
                                                   >> 2U)
                                                   : 
                                                  ((IData)(vlSymsp->TOP.mecanismo_flipping_flipflop__DOT__u0__DOT____Vcellout__genblk1__BRA__7__KET____DOT__u0__q) 
                                                   >> 0xdU)) 
                                                 << 0xdU)) 
                                             | ((0x1000U 
                                                 & (((IData)(vlSymsp->TOP.mecanismo_flipping_flipflop__DOT__u1__DOT____Vcellout__genblk1__BRA__7__KET____DOT__u0__q)
                                                      ? 
                                                     ((IData)(vlSymsp->TOP.mecanismo_flipping_flipflop__DOT__u0__DOT____Vcellout__genblk1__BRA__7__KET____DOT__u0__q) 
                                                      >> 3U)
                                                      : 
                                                     ((IData)(vlSymsp->TOP.mecanismo_flipping_flipflop__DOT__u0__DOT____Vcellout__genblk1__BRA__7__KET____DOT__u0__q) 
                                                      >> 0xcU)) 
                                                    << 0xcU)) 
                                                | ((0x800U 
                                                    & (((IData)(vlSymsp->TOP.mecanismo_flipping_flipflop__DOT__u1__DOT____Vcellout__genblk1__BRA__7__KET____DOT__u0__q)
                                                         ? 
                                                        ((IData)(vlSymsp->TOP.mecanismo_flipping_flipflop__DOT__u0__DOT____Vcellout__genblk1__BRA__7__KET____DOT__u0__q) 
                                                         >> 4U)
                                                         : 
                                                        ((IData)(vlSymsp->TOP.mecanismo_flipping_flipflop__DOT__u0__DOT____Vcellout__genblk1__BRA__7__KET____DOT__u0__q) 
                                                         >> 0xbU)) 
                                                       << 0xbU)) 
                                                   | ((0x400U 
                                                       & (((IData)(vlSymsp->TOP.mecanismo_flipping_flipflop__DOT__u1__DOT____Vcellout__genblk1__BRA__7__KET____DOT__u0__q)
                                                            ? 
                                                           ((IData)(vlSymsp->TOP.mecanismo_flipping_flipflop__DOT__u0__DOT____Vcellout__genblk1__BRA__7__KET____DOT__u0__q) 
                                                            >> 5U)
                                                            : 
                                                           ((IData)(vlSymsp->TOP.mecanismo_flipping_flipflop__DOT__u0__DOT____Vcellout__genblk1__BRA__7__KET____DOT__u0__q) 
                                                            >> 0xaU)) 
                                                          << 0xaU)) 
                                                      | ((0x200U 
                                                          & (((IData)(vlSymsp->TOP.mecanismo_flipping_flipflop__DOT__u1__DOT____Vcellout__genblk1__BRA__7__KET____DOT__u0__q)
                                                               ? 
                                                              ((IData)(vlSymsp->TOP.mecanismo_flipping_flipflop__DOT__u0__DOT____Vcellout__genblk1__BRA__7__KET____DOT__u0__q) 
                                                               >> 6U)
                                                               : 
                                                              ((IData)(vlSymsp->TOP.mecanismo_flipping_flipflop__DOT__u0__DOT____Vcellout__genblk1__BRA__7__KET____DOT__u0__q) 
                                                               >> 9U)) 
                                                             << 9U)) 
                                                         | ((0x100U 
                                                             & (((IData)(vlSymsp->TOP.mecanismo_flipping_flipflop__DOT__u1__DOT____Vcellout__genblk1__BRA__7__KET____DOT__u0__q)
                                                                  ? 
                                                                 ((IData)(vlSymsp->TOP.mecanismo_flipping_flipflop__DOT__u0__DOT____Vcellout__genblk1__BRA__7__KET____DOT__u0__q) 
                                                                  >> 7U)
                                                                  : 
                                                                 ((IData)(vlSymsp->TOP.mecanismo_flipping_flipflop__DOT__u0__DOT____Vcellout__genblk1__BRA__7__KET____DOT__u0__q) 
                                                                  >> 8U)) 
                                                                << 8U)) 
                                                            | ((0x80U 
                                                                & (((IData)(vlSymsp->TOP.mecanismo_flipping_flipflop__DOT__u1__DOT____Vcellout__genblk1__BRA__7__KET____DOT__u0__q)
                                                                     ? 
                                                                    ((IData)(vlSymsp->TOP.mecanismo_flipping_flipflop__DOT__u0__DOT____Vcellout__genblk1__BRA__7__KET____DOT__u0__q) 
                                                                     >> 8U)
                                                                     : 
                                                                    ((IData)(vlSymsp->TOP.mecanismo_flipping_flipflop__DOT__u0__DOT____Vcellout__genblk1__BRA__7__KET____DOT__u0__q) 
                                                                     >> 7U)) 
                                                                   << 7U)) 
                                                               | ((0x40U 
                                                                   & (((IData)(vlSymsp->TOP.mecanismo_flipping_flipflop__DOT__u1__DOT____Vcellout__genblk1__BRA__7__KET____DOT__u0__q)
                                                                        ? 
                                                                       ((IData)(vlSymsp->TOP.mecanismo_flipping_flipflop__DOT__u0__DOT____Vcellout__genblk1__BRA__7__KET____DOT__u0__q) 
                                                                        >> 9U)
                                                                        : 
                                                                       ((IData)(vlSymsp->TOP.mecanismo_flipping_flipflop__DOT__u0__DOT____Vcellout__genblk1__BRA__7__KET____DOT__u0__q) 
                                                                        >> 6U)) 
                                                                      << 6U)) 
                                                                  | ((0x20U 
                                                                      & (((IData)(vlSymsp->TOP.mecanismo_flipping_flipflop__DOT__u1__DOT____Vcellout__genblk1__BRA__7__KET____DOT__u0__q)
                                                                           ? 
                                                                          ((IData)(vlSymsp->TOP.mecanismo_flipping_flipflop__DOT__u0__DOT____Vcellout__genblk1__BRA__7__KET____DOT__u0__q) 
                                                                           >> 0xaU)
                                                                           : 
                                                                          ((IData)(vlSymsp->TOP.mecanismo_flipping_flipflop__DOT__u0__DOT____Vcellout__genblk1__BRA__7__KET____DOT__u0__q) 
                                                                           >> 5U)) 
                                                                         << 5U)) 
                                                                     | ((0x10U 
                                                                         & (((IData)(vlSymsp->TOP.mecanismo_flipping_flipflop__DOT__u1__DOT____Vcellout__genblk1__BRA__7__KET____DOT__u0__q)
                                                                              ? 
                                                                             ((IData)(vlSymsp->TOP.mecanismo_flipping_flipflop__DOT__u0__DOT____Vcellout__genblk1__BRA__7__KET____DOT__u0__q) 
                                                                              >> 0xbU)
                                                                              : 
                                                                             ((IData)(vlSymsp->TOP.mecanismo_flipping_flipflop__DOT__u0__DOT____Vcellout__genblk1__BRA__7__KET____DOT__u0__q) 
                                                                              >> 4U)) 
                                                                            << 4U)) 
                                                                        | ((8U 
                                                                            & (((IData)(vlSymsp->TOP.mecanismo_flipping_flipflop__DOT__u1__DOT____Vcellout__genblk1__BRA__7__KET____DOT__u0__q)
                                                                                 ? 
                                                                                ((IData)(vlSymsp->TOP.mecanismo_flipping_flipflop__DOT__u0__DOT____Vcellout__genblk1__BRA__7__KET____DOT__u0__q) 
                                                                                >> 0xcU)
                                                                                 : 
                                                                                ((IData)(vlSymsp->TOP.mecanismo_flipping_flipflop__DOT__u0__DOT____Vcellout__genblk1__BRA__7__KET____DOT__u0__q) 
                                                                                >> 3U)) 
                                                                               << 3U)) 
                                                                           | ((4U 
                                                                               & (((IData)(vlSymsp->TOP.mecanismo_flipping_flipflop__DOT__u1__DOT____Vcellout__genblk1__BRA__7__KET____DOT__u0__q)
                                                                                 ? 
                                                                                ((IData)(vlSymsp->TOP.mecanismo_flipping_flipflop__DOT__u0__DOT____Vcellout__genblk1__BRA__7__KET____DOT__u0__q) 
                                                                                >> 0xdU)
                                                                                 : 
                                                                                ((IData)(vlSymsp->TOP.mecanismo_flipping_flipflop__DOT__u0__DOT____Vcellout__genblk1__BRA__7__KET____DOT__u0__q) 
                                                                                >> 2U)) 
                                                                                << 2U)) 
                                                                              | ((2U 
                                                                                & (((IData)(vlSymsp->TOP.mecanismo_flipping_flipflop__DOT__u1__DOT____Vcellout__genblk1__BRA__7__KET____DOT__u0__q)
                                                                                 ? 
                                                                                ((IData)(vlSymsp->TOP.mecanismo_flipping_flipflop__DOT__u0__DOT____Vcellout__genblk1__BRA__7__KET____DOT__u0__q) 
                                                                                >> 0xeU)
                                                                                 : 
                                                                                ((IData)(vlSymsp->TOP.mecanismo_flipping_flipflop__DOT__u0__DOT____Vcellout__genblk1__BRA__7__KET____DOT__u0__q) 
                                                                                >> 1U)) 
                                                                                << 1U)) 
                                                                                | (1U 
                                                                                & ((IData)(vlSymsp->TOP.mecanismo_flipping_flipflop__DOT__u1__DOT____Vcellout__genblk1__BRA__7__KET____DOT__u0__q)
                                                                                 ? 
                                                                                ((IData)(vlSymsp->TOP.mecanismo_flipping_flipflop__DOT__u0__DOT____Vcellout__genblk1__BRA__7__KET____DOT__u0__q) 
                                                                                >> 0xfU)
                                                                                 : (IData)(vlSymsp->TOP.mecanismo_flipping_flipflop__DOT__u0__DOT____Vcellout__genblk1__BRA__7__KET____DOT__u0__q))))))))))))))))));
}

VL_INLINE_OPT void Vmecanismo_flipping_flipflop_mecanismo_flipping_uno___nba_sequent__TOP__mecanismo_flipping_flipflop__DOT__u2__DOT__genblk1__BRA__8__KET____DOT__u0__0(Vmecanismo_flipping_flipflop_mecanismo_flipping_uno* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vmecanismo_flipping_flipflop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmecanismo_flipping_flipflop_mecanismo_flipping_uno___nba_sequent__TOP__mecanismo_flipping_flipflop__DOT__u2__DOT__genblk1__BRA__8__KET____DOT__u0__0\n"); );
    // Body
    vlSelf->b = ((0x8000U & (((IData)(vlSymsp->TOP.mecanismo_flipping_flipflop__DOT__u1__DOT____Vcellout__genblk1__BRA__8__KET____DOT__u0__q)
                               ? (IData)(vlSymsp->TOP.mecanismo_flipping_flipflop__DOT__u0__DOT____Vcellout__genblk1__BRA__8__KET____DOT__u0__q)
                               : ((IData)(vlSymsp->TOP.mecanismo_flipping_flipflop__DOT__u0__DOT____Vcellout__genblk1__BRA__8__KET____DOT__u0__q) 
                                  >> 0xfU)) << 0xfU)) 
                 | ((0x4000U & (((IData)(vlSymsp->TOP.mecanismo_flipping_flipflop__DOT__u1__DOT____Vcellout__genblk1__BRA__8__KET____DOT__u0__q)
                                  ? ((IData)(vlSymsp->TOP.mecanismo_flipping_flipflop__DOT__u0__DOT____Vcellout__genblk1__BRA__8__KET____DOT__u0__q) 
                                     >> 1U) : ((IData)(vlSymsp->TOP.mecanismo_flipping_flipflop__DOT__u0__DOT____Vcellout__genblk1__BRA__8__KET____DOT__u0__q) 
                                               >> 0xeU)) 
                                << 0xeU)) | ((0x2000U 
                                              & (((IData)(vlSymsp->TOP.mecanismo_flipping_flipflop__DOT__u1__DOT____Vcellout__genblk1__BRA__8__KET____DOT__u0__q)
                                                   ? 
                                                  ((IData)(vlSymsp->TOP.mecanismo_flipping_flipflop__DOT__u0__DOT____Vcellout__genblk1__BRA__8__KET____DOT__u0__q) 
                                                   >> 2U)
                                                   : 
                                                  ((IData)(vlSymsp->TOP.mecanismo_flipping_flipflop__DOT__u0__DOT____Vcellout__genblk1__BRA__8__KET____DOT__u0__q) 
                                                   >> 0xdU)) 
                                                 << 0xdU)) 
                                             | ((0x1000U 
                                                 & (((IData)(vlSymsp->TOP.mecanismo_flipping_flipflop__DOT__u1__DOT____Vcellout__genblk1__BRA__8__KET____DOT__u0__q)
                                                      ? 
                                                     ((IData)(vlSymsp->TOP.mecanismo_flipping_flipflop__DOT__u0__DOT____Vcellout__genblk1__BRA__8__KET____DOT__u0__q) 
                                                      >> 3U)
                                                      : 
                                                     ((IData)(vlSymsp->TOP.mecanismo_flipping_flipflop__DOT__u0__DOT____Vcellout__genblk1__BRA__8__KET____DOT__u0__q) 
                                                      >> 0xcU)) 
                                                    << 0xcU)) 
                                                | ((0x800U 
                                                    & (((IData)(vlSymsp->TOP.mecanismo_flipping_flipflop__DOT__u1__DOT____Vcellout__genblk1__BRA__8__KET____DOT__u0__q)
                                                         ? 
                                                        ((IData)(vlSymsp->TOP.mecanismo_flipping_flipflop__DOT__u0__DOT____Vcellout__genblk1__BRA__8__KET____DOT__u0__q) 
                                                         >> 4U)
                                                         : 
                                                        ((IData)(vlSymsp->TOP.mecanismo_flipping_flipflop__DOT__u0__DOT____Vcellout__genblk1__BRA__8__KET____DOT__u0__q) 
                                                         >> 0xbU)) 
                                                       << 0xbU)) 
                                                   | ((0x400U 
                                                       & (((IData)(vlSymsp->TOP.mecanismo_flipping_flipflop__DOT__u1__DOT____Vcellout__genblk1__BRA__8__KET____DOT__u0__q)
                                                            ? 
                                                           ((IData)(vlSymsp->TOP.mecanismo_flipping_flipflop__DOT__u0__DOT____Vcellout__genblk1__BRA__8__KET____DOT__u0__q) 
                                                            >> 5U)
                                                            : 
                                                           ((IData)(vlSymsp->TOP.mecanismo_flipping_flipflop__DOT__u0__DOT____Vcellout__genblk1__BRA__8__KET____DOT__u0__q) 
                                                            >> 0xaU)) 
                                                          << 0xaU)) 
                                                      | ((0x200U 
                                                          & (((IData)(vlSymsp->TOP.mecanismo_flipping_flipflop__DOT__u1__DOT____Vcellout__genblk1__BRA__8__KET____DOT__u0__q)
                                                               ? 
                                                              ((IData)(vlSymsp->TOP.mecanismo_flipping_flipflop__DOT__u0__DOT____Vcellout__genblk1__BRA__8__KET____DOT__u0__q) 
                                                               >> 6U)
                                                               : 
                                                              ((IData)(vlSymsp->TOP.mecanismo_flipping_flipflop__DOT__u0__DOT____Vcellout__genblk1__BRA__8__KET____DOT__u0__q) 
                                                               >> 9U)) 
                                                             << 9U)) 
                                                         | ((0x100U 
                                                             & (((IData)(vlSymsp->TOP.mecanismo_flipping_flipflop__DOT__u1__DOT____Vcellout__genblk1__BRA__8__KET____DOT__u0__q)
                                                                  ? 
                                                                 ((IData)(vlSymsp->TOP.mecanismo_flipping_flipflop__DOT__u0__DOT____Vcellout__genblk1__BRA__8__KET____DOT__u0__q) 
                                                                  >> 7U)
                                                                  : 
                                                                 ((IData)(vlSymsp->TOP.mecanismo_flipping_flipflop__DOT__u0__DOT____Vcellout__genblk1__BRA__8__KET____DOT__u0__q) 
                                                                  >> 8U)) 
                                                                << 8U)) 
                                                            | ((0x80U 
                                                                & (((IData)(vlSymsp->TOP.mecanismo_flipping_flipflop__DOT__u1__DOT____Vcellout__genblk1__BRA__8__KET____DOT__u0__q)
                                                                     ? 
                                                                    ((IData)(vlSymsp->TOP.mecanismo_flipping_flipflop__DOT__u0__DOT____Vcellout__genblk1__BRA__8__KET____DOT__u0__q) 
                                                                     >> 8U)
                                                                     : 
                                                                    ((IData)(vlSymsp->TOP.mecanismo_flipping_flipflop__DOT__u0__DOT____Vcellout__genblk1__BRA__8__KET____DOT__u0__q) 
                                                                     >> 7U)) 
                                                                   << 7U)) 
                                                               | ((0x40U 
                                                                   & (((IData)(vlSymsp->TOP.mecanismo_flipping_flipflop__DOT__u1__DOT____Vcellout__genblk1__BRA__8__KET____DOT__u0__q)
                                                                        ? 
                                                                       ((IData)(vlSymsp->TOP.mecanismo_flipping_flipflop__DOT__u0__DOT____Vcellout__genblk1__BRA__8__KET____DOT__u0__q) 
                                                                        >> 9U)
                                                                        : 
                                                                       ((IData)(vlSymsp->TOP.mecanismo_flipping_flipflop__DOT__u0__DOT____Vcellout__genblk1__BRA__8__KET____DOT__u0__q) 
                                                                        >> 6U)) 
                                                                      << 6U)) 
                                                                  | ((0x20U 
                                                                      & (((IData)(vlSymsp->TOP.mecanismo_flipping_flipflop__DOT__u1__DOT____Vcellout__genblk1__BRA__8__KET____DOT__u0__q)
                                                                           ? 
                                                                          ((IData)(vlSymsp->TOP.mecanismo_flipping_flipflop__DOT__u0__DOT____Vcellout__genblk1__BRA__8__KET____DOT__u0__q) 
                                                                           >> 0xaU)
                                                                           : 
                                                                          ((IData)(vlSymsp->TOP.mecanismo_flipping_flipflop__DOT__u0__DOT____Vcellout__genblk1__BRA__8__KET____DOT__u0__q) 
                                                                           >> 5U)) 
                                                                         << 5U)) 
                                                                     | ((0x10U 
                                                                         & (((IData)(vlSymsp->TOP.mecanismo_flipping_flipflop__DOT__u1__DOT____Vcellout__genblk1__BRA__8__KET____DOT__u0__q)
                                                                              ? 
                                                                             ((IData)(vlSymsp->TOP.mecanismo_flipping_flipflop__DOT__u0__DOT____Vcellout__genblk1__BRA__8__KET____DOT__u0__q) 
                                                                              >> 0xbU)
                                                                              : 
                                                                             ((IData)(vlSymsp->TOP.mecanismo_flipping_flipflop__DOT__u0__DOT____Vcellout__genblk1__BRA__8__KET____DOT__u0__q) 
                                                                              >> 4U)) 
                                                                            << 4U)) 
                                                                        | ((8U 
                                                                            & (((IData)(vlSymsp->TOP.mecanismo_flipping_flipflop__DOT__u1__DOT____Vcellout__genblk1__BRA__8__KET____DOT__u0__q)
                                                                                 ? 
                                                                                ((IData)(vlSymsp->TOP.mecanismo_flipping_flipflop__DOT__u0__DOT____Vcellout__genblk1__BRA__8__KET____DOT__u0__q) 
                                                                                >> 0xcU)
                                                                                 : 
                                                                                ((IData)(vlSymsp->TOP.mecanismo_flipping_flipflop__DOT__u0__DOT____Vcellout__genblk1__BRA__8__KET____DOT__u0__q) 
                                                                                >> 3U)) 
                                                                               << 3U)) 
                                                                           | ((4U 
                                                                               & (((IData)(vlSymsp->TOP.mecanismo_flipping_flipflop__DOT__u1__DOT____Vcellout__genblk1__BRA__8__KET____DOT__u0__q)
                                                                                 ? 
                                                                                ((IData)(vlSymsp->TOP.mecanismo_flipping_flipflop__DOT__u0__DOT____Vcellout__genblk1__BRA__8__KET____DOT__u0__q) 
                                                                                >> 0xdU)
                                                                                 : 
                                                                                ((IData)(vlSymsp->TOP.mecanismo_flipping_flipflop__DOT__u0__DOT____Vcellout__genblk1__BRA__8__KET____DOT__u0__q) 
                                                                                >> 2U)) 
                                                                                << 2U)) 
                                                                              | ((2U 
                                                                                & (((IData)(vlSymsp->TOP.mecanismo_flipping_flipflop__DOT__u1__DOT____Vcellout__genblk1__BRA__8__KET____DOT__u0__q)
                                                                                 ? 
                                                                                ((IData)(vlSymsp->TOP.mecanismo_flipping_flipflop__DOT__u0__DOT____Vcellout__genblk1__BRA__8__KET____DOT__u0__q) 
                                                                                >> 0xeU)
                                                                                 : 
                                                                                ((IData)(vlSymsp->TOP.mecanismo_flipping_flipflop__DOT__u0__DOT____Vcellout__genblk1__BRA__8__KET____DOT__u0__q) 
                                                                                >> 1U)) 
                                                                                << 1U)) 
                                                                                | (1U 
                                                                                & ((IData)(vlSymsp->TOP.mecanismo_flipping_flipflop__DOT__u1__DOT____Vcellout__genblk1__BRA__8__KET____DOT__u0__q)
                                                                                 ? 
                                                                                ((IData)(vlSymsp->TOP.mecanismo_flipping_flipflop__DOT__u0__DOT____Vcellout__genblk1__BRA__8__KET____DOT__u0__q) 
                                                                                >> 0xfU)
                                                                                 : (IData)(vlSymsp->TOP.mecanismo_flipping_flipflop__DOT__u0__DOT____Vcellout__genblk1__BRA__8__KET____DOT__u0__q))))))))))))))))));
}

VL_INLINE_OPT void Vmecanismo_flipping_flipflop_mecanismo_flipping_uno___nba_sequent__TOP__mecanismo_flipping_flipflop__DOT__u2__DOT__genblk1__BRA__9__KET____DOT__u0__0(Vmecanismo_flipping_flipflop_mecanismo_flipping_uno* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vmecanismo_flipping_flipflop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmecanismo_flipping_flipflop_mecanismo_flipping_uno___nba_sequent__TOP__mecanismo_flipping_flipflop__DOT__u2__DOT__genblk1__BRA__9__KET____DOT__u0__0\n"); );
    // Body
    vlSelf->b = ((0x8000U & (((IData)(vlSymsp->TOP.mecanismo_flipping_flipflop__DOT__u1__DOT____Vcellout__genblk1__BRA__9__KET____DOT__u0__q)
                               ? (IData)(vlSymsp->TOP.mecanismo_flipping_flipflop__DOT__u0__DOT____Vcellout__genblk1__BRA__9__KET____DOT__u0__q)
                               : ((IData)(vlSymsp->TOP.mecanismo_flipping_flipflop__DOT__u0__DOT____Vcellout__genblk1__BRA__9__KET____DOT__u0__q) 
                                  >> 0xfU)) << 0xfU)) 
                 | ((0x4000U & (((IData)(vlSymsp->TOP.mecanismo_flipping_flipflop__DOT__u1__DOT____Vcellout__genblk1__BRA__9__KET____DOT__u0__q)
                                  ? ((IData)(vlSymsp->TOP.mecanismo_flipping_flipflop__DOT__u0__DOT____Vcellout__genblk1__BRA__9__KET____DOT__u0__q) 
                                     >> 1U) : ((IData)(vlSymsp->TOP.mecanismo_flipping_flipflop__DOT__u0__DOT____Vcellout__genblk1__BRA__9__KET____DOT__u0__q) 
                                               >> 0xeU)) 
                                << 0xeU)) | ((0x2000U 
                                              & (((IData)(vlSymsp->TOP.mecanismo_flipping_flipflop__DOT__u1__DOT____Vcellout__genblk1__BRA__9__KET____DOT__u0__q)
                                                   ? 
                                                  ((IData)(vlSymsp->TOP.mecanismo_flipping_flipflop__DOT__u0__DOT____Vcellout__genblk1__BRA__9__KET____DOT__u0__q) 
                                                   >> 2U)
                                                   : 
                                                  ((IData)(vlSymsp->TOP.mecanismo_flipping_flipflop__DOT__u0__DOT____Vcellout__genblk1__BRA__9__KET____DOT__u0__q) 
                                                   >> 0xdU)) 
                                                 << 0xdU)) 
                                             | ((0x1000U 
                                                 & (((IData)(vlSymsp->TOP.mecanismo_flipping_flipflop__DOT__u1__DOT____Vcellout__genblk1__BRA__9__KET____DOT__u0__q)
                                                      ? 
                                                     ((IData)(vlSymsp->TOP.mecanismo_flipping_flipflop__DOT__u0__DOT____Vcellout__genblk1__BRA__9__KET____DOT__u0__q) 
                                                      >> 3U)
                                                      : 
                                                     ((IData)(vlSymsp->TOP.mecanismo_flipping_flipflop__DOT__u0__DOT____Vcellout__genblk1__BRA__9__KET____DOT__u0__q) 
                                                      >> 0xcU)) 
                                                    << 0xcU)) 
                                                | ((0x800U 
                                                    & (((IData)(vlSymsp->TOP.mecanismo_flipping_flipflop__DOT__u1__DOT____Vcellout__genblk1__BRA__9__KET____DOT__u0__q)
                                                         ? 
                                                        ((IData)(vlSymsp->TOP.mecanismo_flipping_flipflop__DOT__u0__DOT____Vcellout__genblk1__BRA__9__KET____DOT__u0__q) 
                                                         >> 4U)
                                                         : 
                                                        ((IData)(vlSymsp->TOP.mecanismo_flipping_flipflop__DOT__u0__DOT____Vcellout__genblk1__BRA__9__KET____DOT__u0__q) 
                                                         >> 0xbU)) 
                                                       << 0xbU)) 
                                                   | ((0x400U 
                                                       & (((IData)(vlSymsp->TOP.mecanismo_flipping_flipflop__DOT__u1__DOT____Vcellout__genblk1__BRA__9__KET____DOT__u0__q)
                                                            ? 
                                                           ((IData)(vlSymsp->TOP.mecanismo_flipping_flipflop__DOT__u0__DOT____Vcellout__genblk1__BRA__9__KET____DOT__u0__q) 
                                                            >> 5U)
                                                            : 
                                                           ((IData)(vlSymsp->TOP.mecanismo_flipping_flipflop__DOT__u0__DOT____Vcellout__genblk1__BRA__9__KET____DOT__u0__q) 
                                                            >> 0xaU)) 
                                                          << 0xaU)) 
                                                      | ((0x200U 
                                                          & (((IData)(vlSymsp->TOP.mecanismo_flipping_flipflop__DOT__u1__DOT____Vcellout__genblk1__BRA__9__KET____DOT__u0__q)
                                                               ? 
                                                              ((IData)(vlSymsp->TOP.mecanismo_flipping_flipflop__DOT__u0__DOT____Vcellout__genblk1__BRA__9__KET____DOT__u0__q) 
                                                               >> 6U)
                                                               : 
                                                              ((IData)(vlSymsp->TOP.mecanismo_flipping_flipflop__DOT__u0__DOT____Vcellout__genblk1__BRA__9__KET____DOT__u0__q) 
                                                               >> 9U)) 
                                                             << 9U)) 
                                                         | ((0x100U 
                                                             & (((IData)(vlSymsp->TOP.mecanismo_flipping_flipflop__DOT__u1__DOT____Vcellout__genblk1__BRA__9__KET____DOT__u0__q)
                                                                  ? 
                                                                 ((IData)(vlSymsp->TOP.mecanismo_flipping_flipflop__DOT__u0__DOT____Vcellout__genblk1__BRA__9__KET____DOT__u0__q) 
                                                                  >> 7U)
                                                                  : 
                                                                 ((IData)(vlSymsp->TOP.mecanismo_flipping_flipflop__DOT__u0__DOT____Vcellout__genblk1__BRA__9__KET____DOT__u0__q) 
                                                                  >> 8U)) 
                                                                << 8U)) 
                                                            | ((0x80U 
                                                                & (((IData)(vlSymsp->TOP.mecanismo_flipping_flipflop__DOT__u1__DOT____Vcellout__genblk1__BRA__9__KET____DOT__u0__q)
                                                                     ? 
                                                                    ((IData)(vlSymsp->TOP.mecanismo_flipping_flipflop__DOT__u0__DOT____Vcellout__genblk1__BRA__9__KET____DOT__u0__q) 
                                                                     >> 8U)
                                                                     : 
                                                                    ((IData)(vlSymsp->TOP.mecanismo_flipping_flipflop__DOT__u0__DOT____Vcellout__genblk1__BRA__9__KET____DOT__u0__q) 
                                                                     >> 7U)) 
                                                                   << 7U)) 
                                                               | ((0x40U 
                                                                   & (((IData)(vlSymsp->TOP.mecanismo_flipping_flipflop__DOT__u1__DOT____Vcellout__genblk1__BRA__9__KET____DOT__u0__q)
                                                                        ? 
                                                                       ((IData)(vlSymsp->TOP.mecanismo_flipping_flipflop__DOT__u0__DOT____Vcellout__genblk1__BRA__9__KET____DOT__u0__q) 
                                                                        >> 9U)
                                                                        : 
                                                                       ((IData)(vlSymsp->TOP.mecanismo_flipping_flipflop__DOT__u0__DOT____Vcellout__genblk1__BRA__9__KET____DOT__u0__q) 
                                                                        >> 6U)) 
                                                                      << 6U)) 
                                                                  | ((0x20U 
                                                                      & (((IData)(vlSymsp->TOP.mecanismo_flipping_flipflop__DOT__u1__DOT____Vcellout__genblk1__BRA__9__KET____DOT__u0__q)
                                                                           ? 
                                                                          ((IData)(vlSymsp->TOP.mecanismo_flipping_flipflop__DOT__u0__DOT____Vcellout__genblk1__BRA__9__KET____DOT__u0__q) 
                                                                           >> 0xaU)
                                                                           : 
                                                                          ((IData)(vlSymsp->TOP.mecanismo_flipping_flipflop__DOT__u0__DOT____Vcellout__genblk1__BRA__9__KET____DOT__u0__q) 
                                                                           >> 5U)) 
                                                                         << 5U)) 
                                                                     | ((0x10U 
                                                                         & (((IData)(vlSymsp->TOP.mecanismo_flipping_flipflop__DOT__u1__DOT____Vcellout__genblk1__BRA__9__KET____DOT__u0__q)
                                                                              ? 
                                                                             ((IData)(vlSymsp->TOP.mecanismo_flipping_flipflop__DOT__u0__DOT____Vcellout__genblk1__BRA__9__KET____DOT__u0__q) 
                                                                              >> 0xbU)
                                                                              : 
                                                                             ((IData)(vlSymsp->TOP.mecanismo_flipping_flipflop__DOT__u0__DOT____Vcellout__genblk1__BRA__9__KET____DOT__u0__q) 
                                                                              >> 4U)) 
                                                                            << 4U)) 
                                                                        | ((8U 
                                                                            & (((IData)(vlSymsp->TOP.mecanismo_flipping_flipflop__DOT__u1__DOT____Vcellout__genblk1__BRA__9__KET____DOT__u0__q)
                                                                                 ? 
                                                                                ((IData)(vlSymsp->TOP.mecanismo_flipping_flipflop__DOT__u0__DOT____Vcellout__genblk1__BRA__9__KET____DOT__u0__q) 
                                                                                >> 0xcU)
                                                                                 : 
                                                                                ((IData)(vlSymsp->TOP.mecanismo_flipping_flipflop__DOT__u0__DOT____Vcellout__genblk1__BRA__9__KET____DOT__u0__q) 
                                                                                >> 3U)) 
                                                                               << 3U)) 
                                                                           | ((4U 
                                                                               & (((IData)(vlSymsp->TOP.mecanismo_flipping_flipflop__DOT__u1__DOT____Vcellout__genblk1__BRA__9__KET____DOT__u0__q)
                                                                                 ? 
                                                                                ((IData)(vlSymsp->TOP.mecanismo_flipping_flipflop__DOT__u0__DOT____Vcellout__genblk1__BRA__9__KET____DOT__u0__q) 
                                                                                >> 0xdU)
                                                                                 : 
                                                                                ((IData)(vlSymsp->TOP.mecanismo_flipping_flipflop__DOT__u0__DOT____Vcellout__genblk1__BRA__9__KET____DOT__u0__q) 
                                                                                >> 2U)) 
                                                                                << 2U)) 
                                                                              | ((2U 
                                                                                & (((IData)(vlSymsp->TOP.mecanismo_flipping_flipflop__DOT__u1__DOT____Vcellout__genblk1__BRA__9__KET____DOT__u0__q)
                                                                                 ? 
                                                                                ((IData)(vlSymsp->TOP.mecanismo_flipping_flipflop__DOT__u0__DOT____Vcellout__genblk1__BRA__9__KET____DOT__u0__q) 
                                                                                >> 0xeU)
                                                                                 : 
                                                                                ((IData)(vlSymsp->TOP.mecanismo_flipping_flipflop__DOT__u0__DOT____Vcellout__genblk1__BRA__9__KET____DOT__u0__q) 
                                                                                >> 1U)) 
                                                                                << 1U)) 
                                                                                | (1U 
                                                                                & ((IData)(vlSymsp->TOP.mecanismo_flipping_flipflop__DOT__u1__DOT____Vcellout__genblk1__BRA__9__KET____DOT__u0__q)
                                                                                 ? 
                                                                                ((IData)(vlSymsp->TOP.mecanismo_flipping_flipflop__DOT__u0__DOT____Vcellout__genblk1__BRA__9__KET____DOT__u0__q) 
                                                                                >> 0xfU)
                                                                                 : (IData)(vlSymsp->TOP.mecanismo_flipping_flipflop__DOT__u0__DOT____Vcellout__genblk1__BRA__9__KET____DOT__u0__q))))))))))))))))));
}

VL_INLINE_OPT void Vmecanismo_flipping_flipflop_mecanismo_flipping_uno___nba_sequent__TOP__mecanismo_flipping_flipflop__DOT__u2__DOT__genblk1__BRA__10__KET____DOT__u0__0(Vmecanismo_flipping_flipflop_mecanismo_flipping_uno* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vmecanismo_flipping_flipflop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmecanismo_flipping_flipflop_mecanismo_flipping_uno___nba_sequent__TOP__mecanismo_flipping_flipflop__DOT__u2__DOT__genblk1__BRA__10__KET____DOT__u0__0\n"); );
    // Body
    vlSelf->b = ((0x8000U & (((IData)(vlSymsp->TOP.mecanismo_flipping_flipflop__DOT__u1__DOT____Vcellout__genblk1__BRA__10__KET____DOT__u0__q)
                               ? (IData)(vlSymsp->TOP.mecanismo_flipping_flipflop__DOT__u0__DOT____Vcellout__genblk1__BRA__10__KET____DOT__u0__q)
                               : ((IData)(vlSymsp->TOP.mecanismo_flipping_flipflop__DOT__u0__DOT____Vcellout__genblk1__BRA__10__KET____DOT__u0__q) 
                                  >> 0xfU)) << 0xfU)) 
                 | ((0x4000U & (((IData)(vlSymsp->TOP.mecanismo_flipping_flipflop__DOT__u1__DOT____Vcellout__genblk1__BRA__10__KET____DOT__u0__q)
                                  ? ((IData)(vlSymsp->TOP.mecanismo_flipping_flipflop__DOT__u0__DOT____Vcellout__genblk1__BRA__10__KET____DOT__u0__q) 
                                     >> 1U) : ((IData)(vlSymsp->TOP.mecanismo_flipping_flipflop__DOT__u0__DOT____Vcellout__genblk1__BRA__10__KET____DOT__u0__q) 
                                               >> 0xeU)) 
                                << 0xeU)) | ((0x2000U 
                                              & (((IData)(vlSymsp->TOP.mecanismo_flipping_flipflop__DOT__u1__DOT____Vcellout__genblk1__BRA__10__KET____DOT__u0__q)
                                                   ? 
                                                  ((IData)(vlSymsp->TOP.mecanismo_flipping_flipflop__DOT__u0__DOT____Vcellout__genblk1__BRA__10__KET____DOT__u0__q) 
                                                   >> 2U)
                                                   : 
                                                  ((IData)(vlSymsp->TOP.mecanismo_flipping_flipflop__DOT__u0__DOT____Vcellout__genblk1__BRA__10__KET____DOT__u0__q) 
                                                   >> 0xdU)) 
                                                 << 0xdU)) 
                                             | ((0x1000U 
                                                 & (((IData)(vlSymsp->TOP.mecanismo_flipping_flipflop__DOT__u1__DOT____Vcellout__genblk1__BRA__10__KET____DOT__u0__q)
                                                      ? 
                                                     ((IData)(vlSymsp->TOP.mecanismo_flipping_flipflop__DOT__u0__DOT____Vcellout__genblk1__BRA__10__KET____DOT__u0__q) 
                                                      >> 3U)
                                                      : 
                                                     ((IData)(vlSymsp->TOP.mecanismo_flipping_flipflop__DOT__u0__DOT____Vcellout__genblk1__BRA__10__KET____DOT__u0__q) 
                                                      >> 0xcU)) 
                                                    << 0xcU)) 
                                                | ((0x800U 
                                                    & (((IData)(vlSymsp->TOP.mecanismo_flipping_flipflop__DOT__u1__DOT____Vcellout__genblk1__BRA__10__KET____DOT__u0__q)
                                                         ? 
                                                        ((IData)(vlSymsp->TOP.mecanismo_flipping_flipflop__DOT__u0__DOT____Vcellout__genblk1__BRA__10__KET____DOT__u0__q) 
                                                         >> 4U)
                                                         : 
                                                        ((IData)(vlSymsp->TOP.mecanismo_flipping_flipflop__DOT__u0__DOT____Vcellout__genblk1__BRA__10__KET____DOT__u0__q) 
                                                         >> 0xbU)) 
                                                       << 0xbU)) 
                                                   | ((0x400U 
                                                       & (((IData)(vlSymsp->TOP.mecanismo_flipping_flipflop__DOT__u1__DOT____Vcellout__genblk1__BRA__10__KET____DOT__u0__q)
                                                            ? 
                                                           ((IData)(vlSymsp->TOP.mecanismo_flipping_flipflop__DOT__u0__DOT____Vcellout__genblk1__BRA__10__KET____DOT__u0__q) 
                                                            >> 5U)
                                                            : 
                                                           ((IData)(vlSymsp->TOP.mecanismo_flipping_flipflop__DOT__u0__DOT____Vcellout__genblk1__BRA__10__KET____DOT__u0__q) 
                                                            >> 0xaU)) 
                                                          << 0xaU)) 
                                                      | ((0x200U 
                                                          & (((IData)(vlSymsp->TOP.mecanismo_flipping_flipflop__DOT__u1__DOT____Vcellout__genblk1__BRA__10__KET____DOT__u0__q)
                                                               ? 
                                                              ((IData)(vlSymsp->TOP.mecanismo_flipping_flipflop__DOT__u0__DOT____Vcellout__genblk1__BRA__10__KET____DOT__u0__q) 
                                                               >> 6U)
                                                               : 
                                                              ((IData)(vlSymsp->TOP.mecanismo_flipping_flipflop__DOT__u0__DOT____Vcellout__genblk1__BRA__10__KET____DOT__u0__q) 
                                                               >> 9U)) 
                                                             << 9U)) 
                                                         | ((0x100U 
                                                             & (((IData)(vlSymsp->TOP.mecanismo_flipping_flipflop__DOT__u1__DOT____Vcellout__genblk1__BRA__10__KET____DOT__u0__q)
                                                                  ? 
                                                                 ((IData)(vlSymsp->TOP.mecanismo_flipping_flipflop__DOT__u0__DOT____Vcellout__genblk1__BRA__10__KET____DOT__u0__q) 
                                                                  >> 7U)
                                                                  : 
                                                                 ((IData)(vlSymsp->TOP.mecanismo_flipping_flipflop__DOT__u0__DOT____Vcellout__genblk1__BRA__10__KET____DOT__u0__q) 
                                                                  >> 8U)) 
                                                                << 8U)) 
                                                            | ((0x80U 
                                                                & (((IData)(vlSymsp->TOP.mecanismo_flipping_flipflop__DOT__u1__DOT____Vcellout__genblk1__BRA__10__KET____DOT__u0__q)
                                                                     ? 
                                                                    ((IData)(vlSymsp->TOP.mecanismo_flipping_flipflop__DOT__u0__DOT____Vcellout__genblk1__BRA__10__KET____DOT__u0__q) 
                                                                     >> 8U)
                                                                     : 
                                                                    ((IData)(vlSymsp->TOP.mecanismo_flipping_flipflop__DOT__u0__DOT____Vcellout__genblk1__BRA__10__KET____DOT__u0__q) 
                                                                     >> 7U)) 
                                                                   << 7U)) 
                                                               | ((0x40U 
                                                                   & (((IData)(vlSymsp->TOP.mecanismo_flipping_flipflop__DOT__u1__DOT____Vcellout__genblk1__BRA__10__KET____DOT__u0__q)
                                                                        ? 
                                                                       ((IData)(vlSymsp->TOP.mecanismo_flipping_flipflop__DOT__u0__DOT____Vcellout__genblk1__BRA__10__KET____DOT__u0__q) 
                                                                        >> 9U)
                                                                        : 
                                                                       ((IData)(vlSymsp->TOP.mecanismo_flipping_flipflop__DOT__u0__DOT____Vcellout__genblk1__BRA__10__KET____DOT__u0__q) 
                                                                        >> 6U)) 
                                                                      << 6U)) 
                                                                  | ((0x20U 
                                                                      & (((IData)(vlSymsp->TOP.mecanismo_flipping_flipflop__DOT__u1__DOT____Vcellout__genblk1__BRA__10__KET____DOT__u0__q)
                                                                           ? 
                                                                          ((IData)(vlSymsp->TOP.mecanismo_flipping_flipflop__DOT__u0__DOT____Vcellout__genblk1__BRA__10__KET____DOT__u0__q) 
                                                                           >> 0xaU)
                                                                           : 
                                                                          ((IData)(vlSymsp->TOP.mecanismo_flipping_flipflop__DOT__u0__DOT____Vcellout__genblk1__BRA__10__KET____DOT__u0__q) 
                                                                           >> 5U)) 
                                                                         << 5U)) 
                                                                     | ((0x10U 
                                                                         & (((IData)(vlSymsp->TOP.mecanismo_flipping_flipflop__DOT__u1__DOT____Vcellout__genblk1__BRA__10__KET____DOT__u0__q)
                                                                              ? 
                                                                             ((IData)(vlSymsp->TOP.mecanismo_flipping_flipflop__DOT__u0__DOT____Vcellout__genblk1__BRA__10__KET____DOT__u0__q) 
                                                                              >> 0xbU)
                                                                              : 
                                                                             ((IData)(vlSymsp->TOP.mecanismo_flipping_flipflop__DOT__u0__DOT____Vcellout__genblk1__BRA__10__KET____DOT__u0__q) 
                                                                              >> 4U)) 
                                                                            << 4U)) 
                                                                        | ((8U 
                                                                            & (((IData)(vlSymsp->TOP.mecanismo_flipping_flipflop__DOT__u1__DOT____Vcellout__genblk1__BRA__10__KET____DOT__u0__q)
                                                                                 ? 
                                                                                ((IData)(vlSymsp->TOP.mecanismo_flipping_flipflop__DOT__u0__DOT____Vcellout__genblk1__BRA__10__KET____DOT__u0__q) 
                                                                                >> 0xcU)
                                                                                 : 
                                                                                ((IData)(vlSymsp->TOP.mecanismo_flipping_flipflop__DOT__u0__DOT____Vcellout__genblk1__BRA__10__KET____DOT__u0__q) 
                                                                                >> 3U)) 
                                                                               << 3U)) 
                                                                           | ((4U 
                                                                               & (((IData)(vlSymsp->TOP.mecanismo_flipping_flipflop__DOT__u1__DOT____Vcellout__genblk1__BRA__10__KET____DOT__u0__q)
                                                                                 ? 
                                                                                ((IData)(vlSymsp->TOP.mecanismo_flipping_flipflop__DOT__u0__DOT____Vcellout__genblk1__BRA__10__KET____DOT__u0__q) 
                                                                                >> 0xdU)
                                                                                 : 
                                                                                ((IData)(vlSymsp->TOP.mecanismo_flipping_flipflop__DOT__u0__DOT____Vcellout__genblk1__BRA__10__KET____DOT__u0__q) 
                                                                                >> 2U)) 
                                                                                << 2U)) 
                                                                              | ((2U 
                                                                                & (((IData)(vlSymsp->TOP.mecanismo_flipping_flipflop__DOT__u1__DOT____Vcellout__genblk1__BRA__10__KET____DOT__u0__q)
                                                                                 ? 
                                                                                ((IData)(vlSymsp->TOP.mecanismo_flipping_flipflop__DOT__u0__DOT____Vcellout__genblk1__BRA__10__KET____DOT__u0__q) 
                                                                                >> 0xeU)
                                                                                 : 
                                                                                ((IData)(vlSymsp->TOP.mecanismo_flipping_flipflop__DOT__u0__DOT____Vcellout__genblk1__BRA__10__KET____DOT__u0__q) 
                                                                                >> 1U)) 
                                                                                << 1U)) 
                                                                                | (1U 
                                                                                & ((IData)(vlSymsp->TOP.mecanismo_flipping_flipflop__DOT__u1__DOT____Vcellout__genblk1__BRA__10__KET____DOT__u0__q)
                                                                                 ? 
                                                                                ((IData)(vlSymsp->TOP.mecanismo_flipping_flipflop__DOT__u0__DOT____Vcellout__genblk1__BRA__10__KET____DOT__u0__q) 
                                                                                >> 0xfU)
                                                                                 : (IData)(vlSymsp->TOP.mecanismo_flipping_flipflop__DOT__u0__DOT____Vcellout__genblk1__BRA__10__KET____DOT__u0__q))))))))))))))))));
}

VL_INLINE_OPT void Vmecanismo_flipping_flipflop_mecanismo_flipping_uno___nba_sequent__TOP__mecanismo_flipping_flipflop__DOT__u2__DOT__genblk1__BRA__11__KET____DOT__u0__0(Vmecanismo_flipping_flipflop_mecanismo_flipping_uno* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vmecanismo_flipping_flipflop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmecanismo_flipping_flipflop_mecanismo_flipping_uno___nba_sequent__TOP__mecanismo_flipping_flipflop__DOT__u2__DOT__genblk1__BRA__11__KET____DOT__u0__0\n"); );
    // Body
    vlSelf->b = ((0x8000U & (((IData)(vlSymsp->TOP.mecanismo_flipping_flipflop__DOT__u1__DOT____Vcellout__genblk1__BRA__11__KET____DOT__u0__q)
                               ? (IData)(vlSymsp->TOP.mecanismo_flipping_flipflop__DOT__u0__DOT____Vcellout__genblk1__BRA__11__KET____DOT__u0__q)
                               : ((IData)(vlSymsp->TOP.mecanismo_flipping_flipflop__DOT__u0__DOT____Vcellout__genblk1__BRA__11__KET____DOT__u0__q) 
                                  >> 0xfU)) << 0xfU)) 
                 | ((0x4000U & (((IData)(vlSymsp->TOP.mecanismo_flipping_flipflop__DOT__u1__DOT____Vcellout__genblk1__BRA__11__KET____DOT__u0__q)
                                  ? ((IData)(vlSymsp->TOP.mecanismo_flipping_flipflop__DOT__u0__DOT____Vcellout__genblk1__BRA__11__KET____DOT__u0__q) 
                                     >> 1U) : ((IData)(vlSymsp->TOP.mecanismo_flipping_flipflop__DOT__u0__DOT____Vcellout__genblk1__BRA__11__KET____DOT__u0__q) 
                                               >> 0xeU)) 
                                << 0xeU)) | ((0x2000U 
                                              & (((IData)(vlSymsp->TOP.mecanismo_flipping_flipflop__DOT__u1__DOT____Vcellout__genblk1__BRA__11__KET____DOT__u0__q)
                                                   ? 
                                                  ((IData)(vlSymsp->TOP.mecanismo_flipping_flipflop__DOT__u0__DOT____Vcellout__genblk1__BRA__11__KET____DOT__u0__q) 
                                                   >> 2U)
                                                   : 
                                                  ((IData)(vlSymsp->TOP.mecanismo_flipping_flipflop__DOT__u0__DOT____Vcellout__genblk1__BRA__11__KET____DOT__u0__q) 
                                                   >> 0xdU)) 
                                                 << 0xdU)) 
                                             | ((0x1000U 
                                                 & (((IData)(vlSymsp->TOP.mecanismo_flipping_flipflop__DOT__u1__DOT____Vcellout__genblk1__BRA__11__KET____DOT__u0__q)
                                                      ? 
                                                     ((IData)(vlSymsp->TOP.mecanismo_flipping_flipflop__DOT__u0__DOT____Vcellout__genblk1__BRA__11__KET____DOT__u0__q) 
                                                      >> 3U)
                                                      : 
                                                     ((IData)(vlSymsp->TOP.mecanismo_flipping_flipflop__DOT__u0__DOT____Vcellout__genblk1__BRA__11__KET____DOT__u0__q) 
                                                      >> 0xcU)) 
                                                    << 0xcU)) 
                                                | ((0x800U 
                                                    & (((IData)(vlSymsp->TOP.mecanismo_flipping_flipflop__DOT__u1__DOT____Vcellout__genblk1__BRA__11__KET____DOT__u0__q)
                                                         ? 
                                                        ((IData)(vlSymsp->TOP.mecanismo_flipping_flipflop__DOT__u0__DOT____Vcellout__genblk1__BRA__11__KET____DOT__u0__q) 
                                                         >> 4U)
                                                         : 
                                                        ((IData)(vlSymsp->TOP.mecanismo_flipping_flipflop__DOT__u0__DOT____Vcellout__genblk1__BRA__11__KET____DOT__u0__q) 
                                                         >> 0xbU)) 
                                                       << 0xbU)) 
                                                   | ((0x400U 
                                                       & (((IData)(vlSymsp->TOP.mecanismo_flipping_flipflop__DOT__u1__DOT____Vcellout__genblk1__BRA__11__KET____DOT__u0__q)
                                                            ? 
                                                           ((IData)(vlSymsp->TOP.mecanismo_flipping_flipflop__DOT__u0__DOT____Vcellout__genblk1__BRA__11__KET____DOT__u0__q) 
                                                            >> 5U)
                                                            : 
                                                           ((IData)(vlSymsp->TOP.mecanismo_flipping_flipflop__DOT__u0__DOT____Vcellout__genblk1__BRA__11__KET____DOT__u0__q) 
                                                            >> 0xaU)) 
                                                          << 0xaU)) 
                                                      | ((0x200U 
                                                          & (((IData)(vlSymsp->TOP.mecanismo_flipping_flipflop__DOT__u1__DOT____Vcellout__genblk1__BRA__11__KET____DOT__u0__q)
                                                               ? 
                                                              ((IData)(vlSymsp->TOP.mecanismo_flipping_flipflop__DOT__u0__DOT____Vcellout__genblk1__BRA__11__KET____DOT__u0__q) 
                                                               >> 6U)
                                                               : 
                                                              ((IData)(vlSymsp->TOP.mecanismo_flipping_flipflop__DOT__u0__DOT____Vcellout__genblk1__BRA__11__KET____DOT__u0__q) 
                                                               >> 9U)) 
                                                             << 9U)) 
                                                         | ((0x100U 
                                                             & (((IData)(vlSymsp->TOP.mecanismo_flipping_flipflop__DOT__u1__DOT____Vcellout__genblk1__BRA__11__KET____DOT__u0__q)
                                                                  ? 
                                                                 ((IData)(vlSymsp->TOP.mecanismo_flipping_flipflop__DOT__u0__DOT____Vcellout__genblk1__BRA__11__KET____DOT__u0__q) 
                                                                  >> 7U)
                                                                  : 
                                                                 ((IData)(vlSymsp->TOP.mecanismo_flipping_flipflop__DOT__u0__DOT____Vcellout__genblk1__BRA__11__KET____DOT__u0__q) 
                                                                  >> 8U)) 
                                                                << 8U)) 
                                                            | ((0x80U 
                                                                & (((IData)(vlSymsp->TOP.mecanismo_flipping_flipflop__DOT__u1__DOT____Vcellout__genblk1__BRA__11__KET____DOT__u0__q)
                                                                     ? 
                                                                    ((IData)(vlSymsp->TOP.mecanismo_flipping_flipflop__DOT__u0__DOT____Vcellout__genblk1__BRA__11__KET____DOT__u0__q) 
                                                                     >> 8U)
                                                                     : 
                                                                    ((IData)(vlSymsp->TOP.mecanismo_flipping_flipflop__DOT__u0__DOT____Vcellout__genblk1__BRA__11__KET____DOT__u0__q) 
                                                                     >> 7U)) 
                                                                   << 7U)) 
                                                               | ((0x40U 
                                                                   & (((IData)(vlSymsp->TOP.mecanismo_flipping_flipflop__DOT__u1__DOT____Vcellout__genblk1__BRA__11__KET____DOT__u0__q)
                                                                        ? 
                                                                       ((IData)(vlSymsp->TOP.mecanismo_flipping_flipflop__DOT__u0__DOT____Vcellout__genblk1__BRA__11__KET____DOT__u0__q) 
                                                                        >> 9U)
                                                                        : 
                                                                       ((IData)(vlSymsp->TOP.mecanismo_flipping_flipflop__DOT__u0__DOT____Vcellout__genblk1__BRA__11__KET____DOT__u0__q) 
                                                                        >> 6U)) 
                                                                      << 6U)) 
                                                                  | ((0x20U 
                                                                      & (((IData)(vlSymsp->TOP.mecanismo_flipping_flipflop__DOT__u1__DOT____Vcellout__genblk1__BRA__11__KET____DOT__u0__q)
                                                                           ? 
                                                                          ((IData)(vlSymsp->TOP.mecanismo_flipping_flipflop__DOT__u0__DOT____Vcellout__genblk1__BRA__11__KET____DOT__u0__q) 
                                                                           >> 0xaU)
                                                                           : 
                                                                          ((IData)(vlSymsp->TOP.mecanismo_flipping_flipflop__DOT__u0__DOT____Vcellout__genblk1__BRA__11__KET____DOT__u0__q) 
                                                                           >> 5U)) 
                                                                         << 5U)) 
                                                                     | ((0x10U 
                                                                         & (((IData)(vlSymsp->TOP.mecanismo_flipping_flipflop__DOT__u1__DOT____Vcellout__genblk1__BRA__11__KET____DOT__u0__q)
                                                                              ? 
                                                                             ((IData)(vlSymsp->TOP.mecanismo_flipping_flipflop__DOT__u0__DOT____Vcellout__genblk1__BRA__11__KET____DOT__u0__q) 
                                                                              >> 0xbU)
                                                                              : 
                                                                             ((IData)(vlSymsp->TOP.mecanismo_flipping_flipflop__DOT__u0__DOT____Vcellout__genblk1__BRA__11__KET____DOT__u0__q) 
                                                                              >> 4U)) 
                                                                            << 4U)) 
                                                                        | ((8U 
                                                                            & (((IData)(vlSymsp->TOP.mecanismo_flipping_flipflop__DOT__u1__DOT____Vcellout__genblk1__BRA__11__KET____DOT__u0__q)
                                                                                 ? 
                                                                                ((IData)(vlSymsp->TOP.mecanismo_flipping_flipflop__DOT__u0__DOT____Vcellout__genblk1__BRA__11__KET____DOT__u0__q) 
                                                                                >> 0xcU)
                                                                                 : 
                                                                                ((IData)(vlSymsp->TOP.mecanismo_flipping_flipflop__DOT__u0__DOT____Vcellout__genblk1__BRA__11__KET____DOT__u0__q) 
                                                                                >> 3U)) 
                                                                               << 3U)) 
                                                                           | ((4U 
                                                                               & (((IData)(vlSymsp->TOP.mecanismo_flipping_flipflop__DOT__u1__DOT____Vcellout__genblk1__BRA__11__KET____DOT__u0__q)
                                                                                 ? 
                                                                                ((IData)(vlSymsp->TOP.mecanismo_flipping_flipflop__DOT__u0__DOT____Vcellout__genblk1__BRA__11__KET____DOT__u0__q) 
                                                                                >> 0xdU)
                                                                                 : 
                                                                                ((IData)(vlSymsp->TOP.mecanismo_flipping_flipflop__DOT__u0__DOT____Vcellout__genblk1__BRA__11__KET____DOT__u0__q) 
                                                                                >> 2U)) 
                                                                                << 2U)) 
                                                                              | ((2U 
                                                                                & (((IData)(vlSymsp->TOP.mecanismo_flipping_flipflop__DOT__u1__DOT____Vcellout__genblk1__BRA__11__KET____DOT__u0__q)
                                                                                 ? 
                                                                                ((IData)(vlSymsp->TOP.mecanismo_flipping_flipflop__DOT__u0__DOT____Vcellout__genblk1__BRA__11__KET____DOT__u0__q) 
                                                                                >> 0xeU)
                                                                                 : 
                                                                                ((IData)(vlSymsp->TOP.mecanismo_flipping_flipflop__DOT__u0__DOT____Vcellout__genblk1__BRA__11__KET____DOT__u0__q) 
                                                                                >> 1U)) 
                                                                                << 1U)) 
                                                                                | (1U 
                                                                                & ((IData)(vlSymsp->TOP.mecanismo_flipping_flipflop__DOT__u1__DOT____Vcellout__genblk1__BRA__11__KET____DOT__u0__q)
                                                                                 ? 
                                                                                ((IData)(vlSymsp->TOP.mecanismo_flipping_flipflop__DOT__u0__DOT____Vcellout__genblk1__BRA__11__KET____DOT__u0__q) 
                                                                                >> 0xfU)
                                                                                 : (IData)(vlSymsp->TOP.mecanismo_flipping_flipflop__DOT__u0__DOT____Vcellout__genblk1__BRA__11__KET____DOT__u0__q))))))))))))))))));
}

VL_INLINE_OPT void Vmecanismo_flipping_flipflop_mecanismo_flipping_uno___nba_sequent__TOP__mecanismo_flipping_flipflop__DOT__u2__DOT__genblk1__BRA__12__KET____DOT__u0__0(Vmecanismo_flipping_flipflop_mecanismo_flipping_uno* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vmecanismo_flipping_flipflop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmecanismo_flipping_flipflop_mecanismo_flipping_uno___nba_sequent__TOP__mecanismo_flipping_flipflop__DOT__u2__DOT__genblk1__BRA__12__KET____DOT__u0__0\n"); );
    // Body
    vlSelf->b = ((0x8000U & (((IData)(vlSymsp->TOP.mecanismo_flipping_flipflop__DOT__u1__DOT____Vcellout__genblk1__BRA__12__KET____DOT__u0__q)
                               ? (IData)(vlSymsp->TOP.mecanismo_flipping_flipflop__DOT__u0__DOT____Vcellout__genblk1__BRA__12__KET____DOT__u0__q)
                               : ((IData)(vlSymsp->TOP.mecanismo_flipping_flipflop__DOT__u0__DOT____Vcellout__genblk1__BRA__12__KET____DOT__u0__q) 
                                  >> 0xfU)) << 0xfU)) 
                 | ((0x4000U & (((IData)(vlSymsp->TOP.mecanismo_flipping_flipflop__DOT__u1__DOT____Vcellout__genblk1__BRA__12__KET____DOT__u0__q)
                                  ? ((IData)(vlSymsp->TOP.mecanismo_flipping_flipflop__DOT__u0__DOT____Vcellout__genblk1__BRA__12__KET____DOT__u0__q) 
                                     >> 1U) : ((IData)(vlSymsp->TOP.mecanismo_flipping_flipflop__DOT__u0__DOT____Vcellout__genblk1__BRA__12__KET____DOT__u0__q) 
                                               >> 0xeU)) 
                                << 0xeU)) | ((0x2000U 
                                              & (((IData)(vlSymsp->TOP.mecanismo_flipping_flipflop__DOT__u1__DOT____Vcellout__genblk1__BRA__12__KET____DOT__u0__q)
                                                   ? 
                                                  ((IData)(vlSymsp->TOP.mecanismo_flipping_flipflop__DOT__u0__DOT____Vcellout__genblk1__BRA__12__KET____DOT__u0__q) 
                                                   >> 2U)
                                                   : 
                                                  ((IData)(vlSymsp->TOP.mecanismo_flipping_flipflop__DOT__u0__DOT____Vcellout__genblk1__BRA__12__KET____DOT__u0__q) 
                                                   >> 0xdU)) 
                                                 << 0xdU)) 
                                             | ((0x1000U 
                                                 & (((IData)(vlSymsp->TOP.mecanismo_flipping_flipflop__DOT__u1__DOT____Vcellout__genblk1__BRA__12__KET____DOT__u0__q)
                                                      ? 
                                                     ((IData)(vlSymsp->TOP.mecanismo_flipping_flipflop__DOT__u0__DOT____Vcellout__genblk1__BRA__12__KET____DOT__u0__q) 
                                                      >> 3U)
                                                      : 
                                                     ((IData)(vlSymsp->TOP.mecanismo_flipping_flipflop__DOT__u0__DOT____Vcellout__genblk1__BRA__12__KET____DOT__u0__q) 
                                                      >> 0xcU)) 
                                                    << 0xcU)) 
                                                | ((0x800U 
                                                    & (((IData)(vlSymsp->TOP.mecanismo_flipping_flipflop__DOT__u1__DOT____Vcellout__genblk1__BRA__12__KET____DOT__u0__q)
                                                         ? 
                                                        ((IData)(vlSymsp->TOP.mecanismo_flipping_flipflop__DOT__u0__DOT____Vcellout__genblk1__BRA__12__KET____DOT__u0__q) 
                                                         >> 4U)
                                                         : 
                                                        ((IData)(vlSymsp->TOP.mecanismo_flipping_flipflop__DOT__u0__DOT____Vcellout__genblk1__BRA__12__KET____DOT__u0__q) 
                                                         >> 0xbU)) 
                                                       << 0xbU)) 
                                                   | ((0x400U 
                                                       & (((IData)(vlSymsp->TOP.mecanismo_flipping_flipflop__DOT__u1__DOT____Vcellout__genblk1__BRA__12__KET____DOT__u0__q)
                                                            ? 
                                                           ((IData)(vlSymsp->TOP.mecanismo_flipping_flipflop__DOT__u0__DOT____Vcellout__genblk1__BRA__12__KET____DOT__u0__q) 
                                                            >> 5U)
                                                            : 
                                                           ((IData)(vlSymsp->TOP.mecanismo_flipping_flipflop__DOT__u0__DOT____Vcellout__genblk1__BRA__12__KET____DOT__u0__q) 
                                                            >> 0xaU)) 
                                                          << 0xaU)) 
                                                      | ((0x200U 
                                                          & (((IData)(vlSymsp->TOP.mecanismo_flipping_flipflop__DOT__u1__DOT____Vcellout__genblk1__BRA__12__KET____DOT__u0__q)
                                                               ? 
                                                              ((IData)(vlSymsp->TOP.mecanismo_flipping_flipflop__DOT__u0__DOT____Vcellout__genblk1__BRA__12__KET____DOT__u0__q) 
                                                               >> 6U)
                                                               : 
                                                              ((IData)(vlSymsp->TOP.mecanismo_flipping_flipflop__DOT__u0__DOT____Vcellout__genblk1__BRA__12__KET____DOT__u0__q) 
                                                               >> 9U)) 
                                                             << 9U)) 
                                                         | ((0x100U 
                                                             & (((IData)(vlSymsp->TOP.mecanismo_flipping_flipflop__DOT__u1__DOT____Vcellout__genblk1__BRA__12__KET____DOT__u0__q)
                                                                  ? 
                                                                 ((IData)(vlSymsp->TOP.mecanismo_flipping_flipflop__DOT__u0__DOT____Vcellout__genblk1__BRA__12__KET____DOT__u0__q) 
                                                                  >> 7U)
                                                                  : 
                                                                 ((IData)(vlSymsp->TOP.mecanismo_flipping_flipflop__DOT__u0__DOT____Vcellout__genblk1__BRA__12__KET____DOT__u0__q) 
                                                                  >> 8U)) 
                                                                << 8U)) 
                                                            | ((0x80U 
                                                                & (((IData)(vlSymsp->TOP.mecanismo_flipping_flipflop__DOT__u1__DOT____Vcellout__genblk1__BRA__12__KET____DOT__u0__q)
                                                                     ? 
                                                                    ((IData)(vlSymsp->TOP.mecanismo_flipping_flipflop__DOT__u0__DOT____Vcellout__genblk1__BRA__12__KET____DOT__u0__q) 
                                                                     >> 8U)
                                                                     : 
                                                                    ((IData)(vlSymsp->TOP.mecanismo_flipping_flipflop__DOT__u0__DOT____Vcellout__genblk1__BRA__12__KET____DOT__u0__q) 
                                                                     >> 7U)) 
                                                                   << 7U)) 
                                                               | ((0x40U 
                                                                   & (((IData)(vlSymsp->TOP.mecanismo_flipping_flipflop__DOT__u1__DOT____Vcellout__genblk1__BRA__12__KET____DOT__u0__q)
                                                                        ? 
                                                                       ((IData)(vlSymsp->TOP.mecanismo_flipping_flipflop__DOT__u0__DOT____Vcellout__genblk1__BRA__12__KET____DOT__u0__q) 
                                                                        >> 9U)
                                                                        : 
                                                                       ((IData)(vlSymsp->TOP.mecanismo_flipping_flipflop__DOT__u0__DOT____Vcellout__genblk1__BRA__12__KET____DOT__u0__q) 
                                                                        >> 6U)) 
                                                                      << 6U)) 
                                                                  | ((0x20U 
                                                                      & (((IData)(vlSymsp->TOP.mecanismo_flipping_flipflop__DOT__u1__DOT____Vcellout__genblk1__BRA__12__KET____DOT__u0__q)
                                                                           ? 
                                                                          ((IData)(vlSymsp->TOP.mecanismo_flipping_flipflop__DOT__u0__DOT____Vcellout__genblk1__BRA__12__KET____DOT__u0__q) 
                                                                           >> 0xaU)
                                                                           : 
                                                                          ((IData)(vlSymsp->TOP.mecanismo_flipping_flipflop__DOT__u0__DOT____Vcellout__genblk1__BRA__12__KET____DOT__u0__q) 
                                                                           >> 5U)) 
                                                                         << 5U)) 
                                                                     | ((0x10U 
                                                                         & (((IData)(vlSymsp->TOP.mecanismo_flipping_flipflop__DOT__u1__DOT____Vcellout__genblk1__BRA__12__KET____DOT__u0__q)
                                                                              ? 
                                                                             ((IData)(vlSymsp->TOP.mecanismo_flipping_flipflop__DOT__u0__DOT____Vcellout__genblk1__BRA__12__KET____DOT__u0__q) 
                                                                              >> 0xbU)
                                                                              : 
                                                                             ((IData)(vlSymsp->TOP.mecanismo_flipping_flipflop__DOT__u0__DOT____Vcellout__genblk1__BRA__12__KET____DOT__u0__q) 
                                                                              >> 4U)) 
                                                                            << 4U)) 
                                                                        | ((8U 
                                                                            & (((IData)(vlSymsp->TOP.mecanismo_flipping_flipflop__DOT__u1__DOT____Vcellout__genblk1__BRA__12__KET____DOT__u0__q)
                                                                                 ? 
                                                                                ((IData)(vlSymsp->TOP.mecanismo_flipping_flipflop__DOT__u0__DOT____Vcellout__genblk1__BRA__12__KET____DOT__u0__q) 
                                                                                >> 0xcU)
                                                                                 : 
                                                                                ((IData)(vlSymsp->TOP.mecanismo_flipping_flipflop__DOT__u0__DOT____Vcellout__genblk1__BRA__12__KET____DOT__u0__q) 
                                                                                >> 3U)) 
                                                                               << 3U)) 
                                                                           | ((4U 
                                                                               & (((IData)(vlSymsp->TOP.mecanismo_flipping_flipflop__DOT__u1__DOT____Vcellout__genblk1__BRA__12__KET____DOT__u0__q)
                                                                                 ? 
                                                                                ((IData)(vlSymsp->TOP.mecanismo_flipping_flipflop__DOT__u0__DOT____Vcellout__genblk1__BRA__12__KET____DOT__u0__q) 
                                                                                >> 0xdU)
                                                                                 : 
                                                                                ((IData)(vlSymsp->TOP.mecanismo_flipping_flipflop__DOT__u0__DOT____Vcellout__genblk1__BRA__12__KET____DOT__u0__q) 
                                                                                >> 2U)) 
                                                                                << 2U)) 
                                                                              | ((2U 
                                                                                & (((IData)(vlSymsp->TOP.mecanismo_flipping_flipflop__DOT__u1__DOT____Vcellout__genblk1__BRA__12__KET____DOT__u0__q)
                                                                                 ? 
                                                                                ((IData)(vlSymsp->TOP.mecanismo_flipping_flipflop__DOT__u0__DOT____Vcellout__genblk1__BRA__12__KET____DOT__u0__q) 
                                                                                >> 0xeU)
                                                                                 : 
                                                                                ((IData)(vlSymsp->TOP.mecanismo_flipping_flipflop__DOT__u0__DOT____Vcellout__genblk1__BRA__12__KET____DOT__u0__q) 
                                                                                >> 1U)) 
                                                                                << 1U)) 
                                                                                | (1U 
                                                                                & ((IData)(vlSymsp->TOP.mecanismo_flipping_flipflop__DOT__u1__DOT____Vcellout__genblk1__BRA__12__KET____DOT__u0__q)
                                                                                 ? 
                                                                                ((IData)(vlSymsp->TOP.mecanismo_flipping_flipflop__DOT__u0__DOT____Vcellout__genblk1__BRA__12__KET____DOT__u0__q) 
                                                                                >> 0xfU)
                                                                                 : (IData)(vlSymsp->TOP.mecanismo_flipping_flipflop__DOT__u0__DOT____Vcellout__genblk1__BRA__12__KET____DOT__u0__q))))))))))))))))));
}

VL_INLINE_OPT void Vmecanismo_flipping_flipflop_mecanismo_flipping_uno___nba_sequent__TOP__mecanismo_flipping_flipflop__DOT__u2__DOT__genblk1__BRA__13__KET____DOT__u0__0(Vmecanismo_flipping_flipflop_mecanismo_flipping_uno* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vmecanismo_flipping_flipflop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmecanismo_flipping_flipflop_mecanismo_flipping_uno___nba_sequent__TOP__mecanismo_flipping_flipflop__DOT__u2__DOT__genblk1__BRA__13__KET____DOT__u0__0\n"); );
    // Body
    vlSelf->b = ((0x8000U & (((IData)(vlSymsp->TOP.mecanismo_flipping_flipflop__DOT__u1__DOT____Vcellout__genblk1__BRA__13__KET____DOT__u0__q)
                               ? (IData)(vlSymsp->TOP.mecanismo_flipping_flipflop__DOT__u0__DOT____Vcellout__genblk1__BRA__13__KET____DOT__u0__q)
                               : ((IData)(vlSymsp->TOP.mecanismo_flipping_flipflop__DOT__u0__DOT____Vcellout__genblk1__BRA__13__KET____DOT__u0__q) 
                                  >> 0xfU)) << 0xfU)) 
                 | ((0x4000U & (((IData)(vlSymsp->TOP.mecanismo_flipping_flipflop__DOT__u1__DOT____Vcellout__genblk1__BRA__13__KET____DOT__u0__q)
                                  ? ((IData)(vlSymsp->TOP.mecanismo_flipping_flipflop__DOT__u0__DOT____Vcellout__genblk1__BRA__13__KET____DOT__u0__q) 
                                     >> 1U) : ((IData)(vlSymsp->TOP.mecanismo_flipping_flipflop__DOT__u0__DOT____Vcellout__genblk1__BRA__13__KET____DOT__u0__q) 
                                               >> 0xeU)) 
                                << 0xeU)) | ((0x2000U 
                                              & (((IData)(vlSymsp->TOP.mecanismo_flipping_flipflop__DOT__u1__DOT____Vcellout__genblk1__BRA__13__KET____DOT__u0__q)
                                                   ? 
                                                  ((IData)(vlSymsp->TOP.mecanismo_flipping_flipflop__DOT__u0__DOT____Vcellout__genblk1__BRA__13__KET____DOT__u0__q) 
                                                   >> 2U)
                                                   : 
                                                  ((IData)(vlSymsp->TOP.mecanismo_flipping_flipflop__DOT__u0__DOT____Vcellout__genblk1__BRA__13__KET____DOT__u0__q) 
                                                   >> 0xdU)) 
                                                 << 0xdU)) 
                                             | ((0x1000U 
                                                 & (((IData)(vlSymsp->TOP.mecanismo_flipping_flipflop__DOT__u1__DOT____Vcellout__genblk1__BRA__13__KET____DOT__u0__q)
                                                      ? 
                                                     ((IData)(vlSymsp->TOP.mecanismo_flipping_flipflop__DOT__u0__DOT____Vcellout__genblk1__BRA__13__KET____DOT__u0__q) 
                                                      >> 3U)
                                                      : 
                                                     ((IData)(vlSymsp->TOP.mecanismo_flipping_flipflop__DOT__u0__DOT____Vcellout__genblk1__BRA__13__KET____DOT__u0__q) 
                                                      >> 0xcU)) 
                                                    << 0xcU)) 
                                                | ((0x800U 
                                                    & (((IData)(vlSymsp->TOP.mecanismo_flipping_flipflop__DOT__u1__DOT____Vcellout__genblk1__BRA__13__KET____DOT__u0__q)
                                                         ? 
                                                        ((IData)(vlSymsp->TOP.mecanismo_flipping_flipflop__DOT__u0__DOT____Vcellout__genblk1__BRA__13__KET____DOT__u0__q) 
                                                         >> 4U)
                                                         : 
                                                        ((IData)(vlSymsp->TOP.mecanismo_flipping_flipflop__DOT__u0__DOT____Vcellout__genblk1__BRA__13__KET____DOT__u0__q) 
                                                         >> 0xbU)) 
                                                       << 0xbU)) 
                                                   | ((0x400U 
                                                       & (((IData)(vlSymsp->TOP.mecanismo_flipping_flipflop__DOT__u1__DOT____Vcellout__genblk1__BRA__13__KET____DOT__u0__q)
                                                            ? 
                                                           ((IData)(vlSymsp->TOP.mecanismo_flipping_flipflop__DOT__u0__DOT____Vcellout__genblk1__BRA__13__KET____DOT__u0__q) 
                                                            >> 5U)
                                                            : 
                                                           ((IData)(vlSymsp->TOP.mecanismo_flipping_flipflop__DOT__u0__DOT____Vcellout__genblk1__BRA__13__KET____DOT__u0__q) 
                                                            >> 0xaU)) 
                                                          << 0xaU)) 
                                                      | ((0x200U 
                                                          & (((IData)(vlSymsp->TOP.mecanismo_flipping_flipflop__DOT__u1__DOT____Vcellout__genblk1__BRA__13__KET____DOT__u0__q)
                                                               ? 
                                                              ((IData)(vlSymsp->TOP.mecanismo_flipping_flipflop__DOT__u0__DOT____Vcellout__genblk1__BRA__13__KET____DOT__u0__q) 
                                                               >> 6U)
                                                               : 
                                                              ((IData)(vlSymsp->TOP.mecanismo_flipping_flipflop__DOT__u0__DOT____Vcellout__genblk1__BRA__13__KET____DOT__u0__q) 
                                                               >> 9U)) 
                                                             << 9U)) 
                                                         | ((0x100U 
                                                             & (((IData)(vlSymsp->TOP.mecanismo_flipping_flipflop__DOT__u1__DOT____Vcellout__genblk1__BRA__13__KET____DOT__u0__q)
                                                                  ? 
                                                                 ((IData)(vlSymsp->TOP.mecanismo_flipping_flipflop__DOT__u0__DOT____Vcellout__genblk1__BRA__13__KET____DOT__u0__q) 
                                                                  >> 7U)
                                                                  : 
                                                                 ((IData)(vlSymsp->TOP.mecanismo_flipping_flipflop__DOT__u0__DOT____Vcellout__genblk1__BRA__13__KET____DOT__u0__q) 
                                                                  >> 8U)) 
                                                                << 8U)) 
                                                            | ((0x80U 
                                                                & (((IData)(vlSymsp->TOP.mecanismo_flipping_flipflop__DOT__u1__DOT____Vcellout__genblk1__BRA__13__KET____DOT__u0__q)
                                                                     ? 
                                                                    ((IData)(vlSymsp->TOP.mecanismo_flipping_flipflop__DOT__u0__DOT____Vcellout__genblk1__BRA__13__KET____DOT__u0__q) 
                                                                     >> 8U)
                                                                     : 
                                                                    ((IData)(vlSymsp->TOP.mecanismo_flipping_flipflop__DOT__u0__DOT____Vcellout__genblk1__BRA__13__KET____DOT__u0__q) 
                                                                     >> 7U)) 
                                                                   << 7U)) 
                                                               | ((0x40U 
                                                                   & (((IData)(vlSymsp->TOP.mecanismo_flipping_flipflop__DOT__u1__DOT____Vcellout__genblk1__BRA__13__KET____DOT__u0__q)
                                                                        ? 
                                                                       ((IData)(vlSymsp->TOP.mecanismo_flipping_flipflop__DOT__u0__DOT____Vcellout__genblk1__BRA__13__KET____DOT__u0__q) 
                                                                        >> 9U)
                                                                        : 
                                                                       ((IData)(vlSymsp->TOP.mecanismo_flipping_flipflop__DOT__u0__DOT____Vcellout__genblk1__BRA__13__KET____DOT__u0__q) 
                                                                        >> 6U)) 
                                                                      << 6U)) 
                                                                  | ((0x20U 
                                                                      & (((IData)(vlSymsp->TOP.mecanismo_flipping_flipflop__DOT__u1__DOT____Vcellout__genblk1__BRA__13__KET____DOT__u0__q)
                                                                           ? 
                                                                          ((IData)(vlSymsp->TOP.mecanismo_flipping_flipflop__DOT__u0__DOT____Vcellout__genblk1__BRA__13__KET____DOT__u0__q) 
                                                                           >> 0xaU)
                                                                           : 
                                                                          ((IData)(vlSymsp->TOP.mecanismo_flipping_flipflop__DOT__u0__DOT____Vcellout__genblk1__BRA__13__KET____DOT__u0__q) 
                                                                           >> 5U)) 
                                                                         << 5U)) 
                                                                     | ((0x10U 
                                                                         & (((IData)(vlSymsp->TOP.mecanismo_flipping_flipflop__DOT__u1__DOT____Vcellout__genblk1__BRA__13__KET____DOT__u0__q)
                                                                              ? 
                                                                             ((IData)(vlSymsp->TOP.mecanismo_flipping_flipflop__DOT__u0__DOT____Vcellout__genblk1__BRA__13__KET____DOT__u0__q) 
                                                                              >> 0xbU)
                                                                              : 
                                                                             ((IData)(vlSymsp->TOP.mecanismo_flipping_flipflop__DOT__u0__DOT____Vcellout__genblk1__BRA__13__KET____DOT__u0__q) 
                                                                              >> 4U)) 
                                                                            << 4U)) 
                                                                        | ((8U 
                                                                            & (((IData)(vlSymsp->TOP.mecanismo_flipping_flipflop__DOT__u1__DOT____Vcellout__genblk1__BRA__13__KET____DOT__u0__q)
                                                                                 ? 
                                                                                ((IData)(vlSymsp->TOP.mecanismo_flipping_flipflop__DOT__u0__DOT____Vcellout__genblk1__BRA__13__KET____DOT__u0__q) 
                                                                                >> 0xcU)
                                                                                 : 
                                                                                ((IData)(vlSymsp->TOP.mecanismo_flipping_flipflop__DOT__u0__DOT____Vcellout__genblk1__BRA__13__KET____DOT__u0__q) 
                                                                                >> 3U)) 
                                                                               << 3U)) 
                                                                           | ((4U 
                                                                               & (((IData)(vlSymsp->TOP.mecanismo_flipping_flipflop__DOT__u1__DOT____Vcellout__genblk1__BRA__13__KET____DOT__u0__q)
                                                                                 ? 
                                                                                ((IData)(vlSymsp->TOP.mecanismo_flipping_flipflop__DOT__u0__DOT____Vcellout__genblk1__BRA__13__KET____DOT__u0__q) 
                                                                                >> 0xdU)
                                                                                 : 
                                                                                ((IData)(vlSymsp->TOP.mecanismo_flipping_flipflop__DOT__u0__DOT____Vcellout__genblk1__BRA__13__KET____DOT__u0__q) 
                                                                                >> 2U)) 
                                                                                << 2U)) 
                                                                              | ((2U 
                                                                                & (((IData)(vlSymsp->TOP.mecanismo_flipping_flipflop__DOT__u1__DOT____Vcellout__genblk1__BRA__13__KET____DOT__u0__q)
                                                                                 ? 
                                                                                ((IData)(vlSymsp->TOP.mecanismo_flipping_flipflop__DOT__u0__DOT____Vcellout__genblk1__BRA__13__KET____DOT__u0__q) 
                                                                                >> 0xeU)
                                                                                 : 
                                                                                ((IData)(vlSymsp->TOP.mecanismo_flipping_flipflop__DOT__u0__DOT____Vcellout__genblk1__BRA__13__KET____DOT__u0__q) 
                                                                                >> 1U)) 
                                                                                << 1U)) 
                                                                                | (1U 
                                                                                & ((IData)(vlSymsp->TOP.mecanismo_flipping_flipflop__DOT__u1__DOT____Vcellout__genblk1__BRA__13__KET____DOT__u0__q)
                                                                                 ? 
                                                                                ((IData)(vlSymsp->TOP.mecanismo_flipping_flipflop__DOT__u0__DOT____Vcellout__genblk1__BRA__13__KET____DOT__u0__q) 
                                                                                >> 0xfU)
                                                                                 : (IData)(vlSymsp->TOP.mecanismo_flipping_flipflop__DOT__u0__DOT____Vcellout__genblk1__BRA__13__KET____DOT__u0__q))))))))))))))))));
}

VL_INLINE_OPT void Vmecanismo_flipping_flipflop_mecanismo_flipping_uno___nba_sequent__TOP__mecanismo_flipping_flipflop__DOT__u2__DOT__genblk1__BRA__14__KET____DOT__u0__0(Vmecanismo_flipping_flipflop_mecanismo_flipping_uno* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vmecanismo_flipping_flipflop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmecanismo_flipping_flipflop_mecanismo_flipping_uno___nba_sequent__TOP__mecanismo_flipping_flipflop__DOT__u2__DOT__genblk1__BRA__14__KET____DOT__u0__0\n"); );
    // Body
    vlSelf->b = ((0x8000U & (((IData)(vlSymsp->TOP.mecanismo_flipping_flipflop__DOT__u1__DOT____Vcellout__genblk1__BRA__14__KET____DOT__u0__q)
                               ? (IData)(vlSymsp->TOP.mecanismo_flipping_flipflop__DOT__u0__DOT____Vcellout__genblk1__BRA__14__KET____DOT__u0__q)
                               : ((IData)(vlSymsp->TOP.mecanismo_flipping_flipflop__DOT__u0__DOT____Vcellout__genblk1__BRA__14__KET____DOT__u0__q) 
                                  >> 0xfU)) << 0xfU)) 
                 | ((0x4000U & (((IData)(vlSymsp->TOP.mecanismo_flipping_flipflop__DOT__u1__DOT____Vcellout__genblk1__BRA__14__KET____DOT__u0__q)
                                  ? ((IData)(vlSymsp->TOP.mecanismo_flipping_flipflop__DOT__u0__DOT____Vcellout__genblk1__BRA__14__KET____DOT__u0__q) 
                                     >> 1U) : ((IData)(vlSymsp->TOP.mecanismo_flipping_flipflop__DOT__u0__DOT____Vcellout__genblk1__BRA__14__KET____DOT__u0__q) 
                                               >> 0xeU)) 
                                << 0xeU)) | ((0x2000U 
                                              & (((IData)(vlSymsp->TOP.mecanismo_flipping_flipflop__DOT__u1__DOT____Vcellout__genblk1__BRA__14__KET____DOT__u0__q)
                                                   ? 
                                                  ((IData)(vlSymsp->TOP.mecanismo_flipping_flipflop__DOT__u0__DOT____Vcellout__genblk1__BRA__14__KET____DOT__u0__q) 
                                                   >> 2U)
                                                   : 
                                                  ((IData)(vlSymsp->TOP.mecanismo_flipping_flipflop__DOT__u0__DOT____Vcellout__genblk1__BRA__14__KET____DOT__u0__q) 
                                                   >> 0xdU)) 
                                                 << 0xdU)) 
                                             | ((0x1000U 
                                                 & (((IData)(vlSymsp->TOP.mecanismo_flipping_flipflop__DOT__u1__DOT____Vcellout__genblk1__BRA__14__KET____DOT__u0__q)
                                                      ? 
                                                     ((IData)(vlSymsp->TOP.mecanismo_flipping_flipflop__DOT__u0__DOT____Vcellout__genblk1__BRA__14__KET____DOT__u0__q) 
                                                      >> 3U)
                                                      : 
                                                     ((IData)(vlSymsp->TOP.mecanismo_flipping_flipflop__DOT__u0__DOT____Vcellout__genblk1__BRA__14__KET____DOT__u0__q) 
                                                      >> 0xcU)) 
                                                    << 0xcU)) 
                                                | ((0x800U 
                                                    & (((IData)(vlSymsp->TOP.mecanismo_flipping_flipflop__DOT__u1__DOT____Vcellout__genblk1__BRA__14__KET____DOT__u0__q)
                                                         ? 
                                                        ((IData)(vlSymsp->TOP.mecanismo_flipping_flipflop__DOT__u0__DOT____Vcellout__genblk1__BRA__14__KET____DOT__u0__q) 
                                                         >> 4U)
                                                         : 
                                                        ((IData)(vlSymsp->TOP.mecanismo_flipping_flipflop__DOT__u0__DOT____Vcellout__genblk1__BRA__14__KET____DOT__u0__q) 
                                                         >> 0xbU)) 
                                                       << 0xbU)) 
                                                   | ((0x400U 
                                                       & (((IData)(vlSymsp->TOP.mecanismo_flipping_flipflop__DOT__u1__DOT____Vcellout__genblk1__BRA__14__KET____DOT__u0__q)
                                                            ? 
                                                           ((IData)(vlSymsp->TOP.mecanismo_flipping_flipflop__DOT__u0__DOT____Vcellout__genblk1__BRA__14__KET____DOT__u0__q) 
                                                            >> 5U)
                                                            : 
                                                           ((IData)(vlSymsp->TOP.mecanismo_flipping_flipflop__DOT__u0__DOT____Vcellout__genblk1__BRA__14__KET____DOT__u0__q) 
                                                            >> 0xaU)) 
                                                          << 0xaU)) 
                                                      | ((0x200U 
                                                          & (((IData)(vlSymsp->TOP.mecanismo_flipping_flipflop__DOT__u1__DOT____Vcellout__genblk1__BRA__14__KET____DOT__u0__q)
                                                               ? 
                                                              ((IData)(vlSymsp->TOP.mecanismo_flipping_flipflop__DOT__u0__DOT____Vcellout__genblk1__BRA__14__KET____DOT__u0__q) 
                                                               >> 6U)
                                                               : 
                                                              ((IData)(vlSymsp->TOP.mecanismo_flipping_flipflop__DOT__u0__DOT____Vcellout__genblk1__BRA__14__KET____DOT__u0__q) 
                                                               >> 9U)) 
                                                             << 9U)) 
                                                         | ((0x100U 
                                                             & (((IData)(vlSymsp->TOP.mecanismo_flipping_flipflop__DOT__u1__DOT____Vcellout__genblk1__BRA__14__KET____DOT__u0__q)
                                                                  ? 
                                                                 ((IData)(vlSymsp->TOP.mecanismo_flipping_flipflop__DOT__u0__DOT____Vcellout__genblk1__BRA__14__KET____DOT__u0__q) 
                                                                  >> 7U)
                                                                  : 
                                                                 ((IData)(vlSymsp->TOP.mecanismo_flipping_flipflop__DOT__u0__DOT____Vcellout__genblk1__BRA__14__KET____DOT__u0__q) 
                                                                  >> 8U)) 
                                                                << 8U)) 
                                                            | ((0x80U 
                                                                & (((IData)(vlSymsp->TOP.mecanismo_flipping_flipflop__DOT__u1__DOT____Vcellout__genblk1__BRA__14__KET____DOT__u0__q)
                                                                     ? 
                                                                    ((IData)(vlSymsp->TOP.mecanismo_flipping_flipflop__DOT__u0__DOT____Vcellout__genblk1__BRA__14__KET____DOT__u0__q) 
                                                                     >> 8U)
                                                                     : 
                                                                    ((IData)(vlSymsp->TOP.mecanismo_flipping_flipflop__DOT__u0__DOT____Vcellout__genblk1__BRA__14__KET____DOT__u0__q) 
                                                                     >> 7U)) 
                                                                   << 7U)) 
                                                               | ((0x40U 
                                                                   & (((IData)(vlSymsp->TOP.mecanismo_flipping_flipflop__DOT__u1__DOT____Vcellout__genblk1__BRA__14__KET____DOT__u0__q)
                                                                        ? 
                                                                       ((IData)(vlSymsp->TOP.mecanismo_flipping_flipflop__DOT__u0__DOT____Vcellout__genblk1__BRA__14__KET____DOT__u0__q) 
                                                                        >> 9U)
                                                                        : 
                                                                       ((IData)(vlSymsp->TOP.mecanismo_flipping_flipflop__DOT__u0__DOT____Vcellout__genblk1__BRA__14__KET____DOT__u0__q) 
                                                                        >> 6U)) 
                                                                      << 6U)) 
                                                                  | ((0x20U 
                                                                      & (((IData)(vlSymsp->TOP.mecanismo_flipping_flipflop__DOT__u1__DOT____Vcellout__genblk1__BRA__14__KET____DOT__u0__q)
                                                                           ? 
                                                                          ((IData)(vlSymsp->TOP.mecanismo_flipping_flipflop__DOT__u0__DOT____Vcellout__genblk1__BRA__14__KET____DOT__u0__q) 
                                                                           >> 0xaU)
                                                                           : 
                                                                          ((IData)(vlSymsp->TOP.mecanismo_flipping_flipflop__DOT__u0__DOT____Vcellout__genblk1__BRA__14__KET____DOT__u0__q) 
                                                                           >> 5U)) 
                                                                         << 5U)) 
                                                                     | ((0x10U 
                                                                         & (((IData)(vlSymsp->TOP.mecanismo_flipping_flipflop__DOT__u1__DOT____Vcellout__genblk1__BRA__14__KET____DOT__u0__q)
                                                                              ? 
                                                                             ((IData)(vlSymsp->TOP.mecanismo_flipping_flipflop__DOT__u0__DOT____Vcellout__genblk1__BRA__14__KET____DOT__u0__q) 
                                                                              >> 0xbU)
                                                                              : 
                                                                             ((IData)(vlSymsp->TOP.mecanismo_flipping_flipflop__DOT__u0__DOT____Vcellout__genblk1__BRA__14__KET____DOT__u0__q) 
                                                                              >> 4U)) 
                                                                            << 4U)) 
                                                                        | ((8U 
                                                                            & (((IData)(vlSymsp->TOP.mecanismo_flipping_flipflop__DOT__u1__DOT____Vcellout__genblk1__BRA__14__KET____DOT__u0__q)
                                                                                 ? 
                                                                                ((IData)(vlSymsp->TOP.mecanismo_flipping_flipflop__DOT__u0__DOT____Vcellout__genblk1__BRA__14__KET____DOT__u0__q) 
                                                                                >> 0xcU)
                                                                                 : 
                                                                                ((IData)(vlSymsp->TOP.mecanismo_flipping_flipflop__DOT__u0__DOT____Vcellout__genblk1__BRA__14__KET____DOT__u0__q) 
                                                                                >> 3U)) 
                                                                               << 3U)) 
                                                                           | ((4U 
                                                                               & (((IData)(vlSymsp->TOP.mecanismo_flipping_flipflop__DOT__u1__DOT____Vcellout__genblk1__BRA__14__KET____DOT__u0__q)
                                                                                 ? 
                                                                                ((IData)(vlSymsp->TOP.mecanismo_flipping_flipflop__DOT__u0__DOT____Vcellout__genblk1__BRA__14__KET____DOT__u0__q) 
                                                                                >> 0xdU)
                                                                                 : 
                                                                                ((IData)(vlSymsp->TOP.mecanismo_flipping_flipflop__DOT__u0__DOT____Vcellout__genblk1__BRA__14__KET____DOT__u0__q) 
                                                                                >> 2U)) 
                                                                                << 2U)) 
                                                                              | ((2U 
                                                                                & (((IData)(vlSymsp->TOP.mecanismo_flipping_flipflop__DOT__u1__DOT____Vcellout__genblk1__BRA__14__KET____DOT__u0__q)
                                                                                 ? 
                                                                                ((IData)(vlSymsp->TOP.mecanismo_flipping_flipflop__DOT__u0__DOT____Vcellout__genblk1__BRA__14__KET____DOT__u0__q) 
                                                                                >> 0xeU)
                                                                                 : 
                                                                                ((IData)(vlSymsp->TOP.mecanismo_flipping_flipflop__DOT__u0__DOT____Vcellout__genblk1__BRA__14__KET____DOT__u0__q) 
                                                                                >> 1U)) 
                                                                                << 1U)) 
                                                                                | (1U 
                                                                                & ((IData)(vlSymsp->TOP.mecanismo_flipping_flipflop__DOT__u1__DOT____Vcellout__genblk1__BRA__14__KET____DOT__u0__q)
                                                                                 ? 
                                                                                ((IData)(vlSymsp->TOP.mecanismo_flipping_flipflop__DOT__u0__DOT____Vcellout__genblk1__BRA__14__KET____DOT__u0__q) 
                                                                                >> 0xfU)
                                                                                 : (IData)(vlSymsp->TOP.mecanismo_flipping_flipflop__DOT__u0__DOT____Vcellout__genblk1__BRA__14__KET____DOT__u0__q))))))))))))))))));
}

VL_INLINE_OPT void Vmecanismo_flipping_flipflop_mecanismo_flipping_uno___nba_sequent__TOP__mecanismo_flipping_flipflop__DOT__u2__DOT__genblk1__BRA__15__KET____DOT__u0__0(Vmecanismo_flipping_flipflop_mecanismo_flipping_uno* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vmecanismo_flipping_flipflop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmecanismo_flipping_flipflop_mecanismo_flipping_uno___nba_sequent__TOP__mecanismo_flipping_flipflop__DOT__u2__DOT__genblk1__BRA__15__KET____DOT__u0__0\n"); );
    // Body
    vlSelf->b = ((0x8000U & (((IData)(vlSymsp->TOP.mecanismo_flipping_flipflop__DOT__u1__DOT____Vcellout__genblk1__BRA__15__KET____DOT__u0__q)
                               ? (IData)(vlSymsp->TOP.mecanismo_flipping_flipflop__DOT__u0__DOT____Vcellout__genblk1__BRA__15__KET____DOT__u0__q)
                               : ((IData)(vlSymsp->TOP.mecanismo_flipping_flipflop__DOT__u0__DOT____Vcellout__genblk1__BRA__15__KET____DOT__u0__q) 
                                  >> 0xfU)) << 0xfU)) 
                 | ((0x4000U & (((IData)(vlSymsp->TOP.mecanismo_flipping_flipflop__DOT__u1__DOT____Vcellout__genblk1__BRA__15__KET____DOT__u0__q)
                                  ? ((IData)(vlSymsp->TOP.mecanismo_flipping_flipflop__DOT__u0__DOT____Vcellout__genblk1__BRA__15__KET____DOT__u0__q) 
                                     >> 1U) : ((IData)(vlSymsp->TOP.mecanismo_flipping_flipflop__DOT__u0__DOT____Vcellout__genblk1__BRA__15__KET____DOT__u0__q) 
                                               >> 0xeU)) 
                                << 0xeU)) | ((0x2000U 
                                              & (((IData)(vlSymsp->TOP.mecanismo_flipping_flipflop__DOT__u1__DOT____Vcellout__genblk1__BRA__15__KET____DOT__u0__q)
                                                   ? 
                                                  ((IData)(vlSymsp->TOP.mecanismo_flipping_flipflop__DOT__u0__DOT____Vcellout__genblk1__BRA__15__KET____DOT__u0__q) 
                                                   >> 2U)
                                                   : 
                                                  ((IData)(vlSymsp->TOP.mecanismo_flipping_flipflop__DOT__u0__DOT____Vcellout__genblk1__BRA__15__KET____DOT__u0__q) 
                                                   >> 0xdU)) 
                                                 << 0xdU)) 
                                             | ((0x1000U 
                                                 & (((IData)(vlSymsp->TOP.mecanismo_flipping_flipflop__DOT__u1__DOT____Vcellout__genblk1__BRA__15__KET____DOT__u0__q)
                                                      ? 
                                                     ((IData)(vlSymsp->TOP.mecanismo_flipping_flipflop__DOT__u0__DOT____Vcellout__genblk1__BRA__15__KET____DOT__u0__q) 
                                                      >> 3U)
                                                      : 
                                                     ((IData)(vlSymsp->TOP.mecanismo_flipping_flipflop__DOT__u0__DOT____Vcellout__genblk1__BRA__15__KET____DOT__u0__q) 
                                                      >> 0xcU)) 
                                                    << 0xcU)) 
                                                | ((0x800U 
                                                    & (((IData)(vlSymsp->TOP.mecanismo_flipping_flipflop__DOT__u1__DOT____Vcellout__genblk1__BRA__15__KET____DOT__u0__q)
                                                         ? 
                                                        ((IData)(vlSymsp->TOP.mecanismo_flipping_flipflop__DOT__u0__DOT____Vcellout__genblk1__BRA__15__KET____DOT__u0__q) 
                                                         >> 4U)
                                                         : 
                                                        ((IData)(vlSymsp->TOP.mecanismo_flipping_flipflop__DOT__u0__DOT____Vcellout__genblk1__BRA__15__KET____DOT__u0__q) 
                                                         >> 0xbU)) 
                                                       << 0xbU)) 
                                                   | ((0x400U 
                                                       & (((IData)(vlSymsp->TOP.mecanismo_flipping_flipflop__DOT__u1__DOT____Vcellout__genblk1__BRA__15__KET____DOT__u0__q)
                                                            ? 
                                                           ((IData)(vlSymsp->TOP.mecanismo_flipping_flipflop__DOT__u0__DOT____Vcellout__genblk1__BRA__15__KET____DOT__u0__q) 
                                                            >> 5U)
                                                            : 
                                                           ((IData)(vlSymsp->TOP.mecanismo_flipping_flipflop__DOT__u0__DOT____Vcellout__genblk1__BRA__15__KET____DOT__u0__q) 
                                                            >> 0xaU)) 
                                                          << 0xaU)) 
                                                      | ((0x200U 
                                                          & (((IData)(vlSymsp->TOP.mecanismo_flipping_flipflop__DOT__u1__DOT____Vcellout__genblk1__BRA__15__KET____DOT__u0__q)
                                                               ? 
                                                              ((IData)(vlSymsp->TOP.mecanismo_flipping_flipflop__DOT__u0__DOT____Vcellout__genblk1__BRA__15__KET____DOT__u0__q) 
                                                               >> 6U)
                                                               : 
                                                              ((IData)(vlSymsp->TOP.mecanismo_flipping_flipflop__DOT__u0__DOT____Vcellout__genblk1__BRA__15__KET____DOT__u0__q) 
                                                               >> 9U)) 
                                                             << 9U)) 
                                                         | ((0x100U 
                                                             & (((IData)(vlSymsp->TOP.mecanismo_flipping_flipflop__DOT__u1__DOT____Vcellout__genblk1__BRA__15__KET____DOT__u0__q)
                                                                  ? 
                                                                 ((IData)(vlSymsp->TOP.mecanismo_flipping_flipflop__DOT__u0__DOT____Vcellout__genblk1__BRA__15__KET____DOT__u0__q) 
                                                                  >> 7U)
                                                                  : 
                                                                 ((IData)(vlSymsp->TOP.mecanismo_flipping_flipflop__DOT__u0__DOT____Vcellout__genblk1__BRA__15__KET____DOT__u0__q) 
                                                                  >> 8U)) 
                                                                << 8U)) 
                                                            | ((0x80U 
                                                                & (((IData)(vlSymsp->TOP.mecanismo_flipping_flipflop__DOT__u1__DOT____Vcellout__genblk1__BRA__15__KET____DOT__u0__q)
                                                                     ? 
                                                                    ((IData)(vlSymsp->TOP.mecanismo_flipping_flipflop__DOT__u0__DOT____Vcellout__genblk1__BRA__15__KET____DOT__u0__q) 
                                                                     >> 8U)
                                                                     : 
                                                                    ((IData)(vlSymsp->TOP.mecanismo_flipping_flipflop__DOT__u0__DOT____Vcellout__genblk1__BRA__15__KET____DOT__u0__q) 
                                                                     >> 7U)) 
                                                                   << 7U)) 
                                                               | ((0x40U 
                                                                   & (((IData)(vlSymsp->TOP.mecanismo_flipping_flipflop__DOT__u1__DOT____Vcellout__genblk1__BRA__15__KET____DOT__u0__q)
                                                                        ? 
                                                                       ((IData)(vlSymsp->TOP.mecanismo_flipping_flipflop__DOT__u0__DOT____Vcellout__genblk1__BRA__15__KET____DOT__u0__q) 
                                                                        >> 9U)
                                                                        : 
                                                                       ((IData)(vlSymsp->TOP.mecanismo_flipping_flipflop__DOT__u0__DOT____Vcellout__genblk1__BRA__15__KET____DOT__u0__q) 
                                                                        >> 6U)) 
                                                                      << 6U)) 
                                                                  | ((0x20U 
                                                                      & (((IData)(vlSymsp->TOP.mecanismo_flipping_flipflop__DOT__u1__DOT____Vcellout__genblk1__BRA__15__KET____DOT__u0__q)
                                                                           ? 
                                                                          ((IData)(vlSymsp->TOP.mecanismo_flipping_flipflop__DOT__u0__DOT____Vcellout__genblk1__BRA__15__KET____DOT__u0__q) 
                                                                           >> 0xaU)
                                                                           : 
                                                                          ((IData)(vlSymsp->TOP.mecanismo_flipping_flipflop__DOT__u0__DOT____Vcellout__genblk1__BRA__15__KET____DOT__u0__q) 
                                                                           >> 5U)) 
                                                                         << 5U)) 
                                                                     | ((0x10U 
                                                                         & (((IData)(vlSymsp->TOP.mecanismo_flipping_flipflop__DOT__u1__DOT____Vcellout__genblk1__BRA__15__KET____DOT__u0__q)
                                                                              ? 
                                                                             ((IData)(vlSymsp->TOP.mecanismo_flipping_flipflop__DOT__u0__DOT____Vcellout__genblk1__BRA__15__KET____DOT__u0__q) 
                                                                              >> 0xbU)
                                                                              : 
                                                                             ((IData)(vlSymsp->TOP.mecanismo_flipping_flipflop__DOT__u0__DOT____Vcellout__genblk1__BRA__15__KET____DOT__u0__q) 
                                                                              >> 4U)) 
                                                                            << 4U)) 
                                                                        | ((8U 
                                                                            & (((IData)(vlSymsp->TOP.mecanismo_flipping_flipflop__DOT__u1__DOT____Vcellout__genblk1__BRA__15__KET____DOT__u0__q)
                                                                                 ? 
                                                                                ((IData)(vlSymsp->TOP.mecanismo_flipping_flipflop__DOT__u0__DOT____Vcellout__genblk1__BRA__15__KET____DOT__u0__q) 
                                                                                >> 0xcU)
                                                                                 : 
                                                                                ((IData)(vlSymsp->TOP.mecanismo_flipping_flipflop__DOT__u0__DOT____Vcellout__genblk1__BRA__15__KET____DOT__u0__q) 
                                                                                >> 3U)) 
                                                                               << 3U)) 
                                                                           | ((4U 
                                                                               & (((IData)(vlSymsp->TOP.mecanismo_flipping_flipflop__DOT__u1__DOT____Vcellout__genblk1__BRA__15__KET____DOT__u0__q)
                                                                                 ? 
                                                                                ((IData)(vlSymsp->TOP.mecanismo_flipping_flipflop__DOT__u0__DOT____Vcellout__genblk1__BRA__15__KET____DOT__u0__q) 
                                                                                >> 0xdU)
                                                                                 : 
                                                                                ((IData)(vlSymsp->TOP.mecanismo_flipping_flipflop__DOT__u0__DOT____Vcellout__genblk1__BRA__15__KET____DOT__u0__q) 
                                                                                >> 2U)) 
                                                                                << 2U)) 
                                                                              | ((2U 
                                                                                & (((IData)(vlSymsp->TOP.mecanismo_flipping_flipflop__DOT__u1__DOT____Vcellout__genblk1__BRA__15__KET____DOT__u0__q)
                                                                                 ? 
                                                                                ((IData)(vlSymsp->TOP.mecanismo_flipping_flipflop__DOT__u0__DOT____Vcellout__genblk1__BRA__15__KET____DOT__u0__q) 
                                                                                >> 0xeU)
                                                                                 : 
                                                                                ((IData)(vlSymsp->TOP.mecanismo_flipping_flipflop__DOT__u0__DOT____Vcellout__genblk1__BRA__15__KET____DOT__u0__q) 
                                                                                >> 1U)) 
                                                                                << 1U)) 
                                                                                | (1U 
                                                                                & ((IData)(vlSymsp->TOP.mecanismo_flipping_flipflop__DOT__u1__DOT____Vcellout__genblk1__BRA__15__KET____DOT__u0__q)
                                                                                 ? 
                                                                                ((IData)(vlSymsp->TOP.mecanismo_flipping_flipflop__DOT__u0__DOT____Vcellout__genblk1__BRA__15__KET____DOT__u0__q) 
                                                                                >> 0xfU)
                                                                                 : (IData)(vlSymsp->TOP.mecanismo_flipping_flipflop__DOT__u0__DOT____Vcellout__genblk1__BRA__15__KET____DOT__u0__q))))))))))))))))));
}
