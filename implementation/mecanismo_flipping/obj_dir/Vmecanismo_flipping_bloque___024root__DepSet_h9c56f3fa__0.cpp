// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vmecanismo_flipping_bloque.h for the primary calling header

#include "Vmecanismo_flipping_bloque__pch.h"
#include "Vmecanismo_flipping_bloque___024root.h"

void Vmecanismo_flipping_bloque___024root___ico_sequent__TOP__0(Vmecanismo_flipping_bloque___024root* vlSelf);

void Vmecanismo_flipping_bloque___024root___eval_ico(Vmecanismo_flipping_bloque___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vmecanismo_flipping_bloque__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmecanismo_flipping_bloque___024root___eval_ico\n"); );
    // Body
    if ((1ULL & vlSelf->__VicoTriggered.word(0U))) {
        Vmecanismo_flipping_bloque___024root___ico_sequent__TOP__0(vlSelf);
    }
}

VL_INLINE_OPT void Vmecanismo_flipping_bloque___024root___ico_sequent__TOP__0(Vmecanismo_flipping_bloque___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vmecanismo_flipping_bloque__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmecanismo_flipping_bloque___024root___ico_sequent__TOP__0\n"); );
    // Body
    vlSelf->b[0U] = ((0x8000U & ((vlSelf->f[0U] ? vlSelf->a
                                  [0U] : (vlSelf->a
                                          [0U] >> 0xfU)) 
                                 << 0xfU)) | ((0x4000U 
                                               & ((vlSelf->f
                                                   [0U]
                                                    ? 
                                                   (vlSelf->a
                                                    [0U] 
                                                    >> 1U)
                                                    : 
                                                   (vlSelf->a
                                                    [0U] 
                                                    >> 0xeU)) 
                                                  << 0xeU)) 
                                              | ((0x2000U 
                                                  & ((vlSelf->f
                                                      [0U]
                                                       ? 
                                                      (vlSelf->a
                                                       [0U] 
                                                       >> 2U)
                                                       : 
                                                      (vlSelf->a
                                                       [0U] 
                                                       >> 0xdU)) 
                                                     << 0xdU)) 
                                                 | ((0x1000U 
                                                     & ((vlSelf->f
                                                         [0U]
                                                          ? 
                                                         (vlSelf->a
                                                          [0U] 
                                                          >> 3U)
                                                          : 
                                                         (vlSelf->a
                                                          [0U] 
                                                          >> 0xcU)) 
                                                        << 0xcU)) 
                                                    | ((0x800U 
                                                        & ((vlSelf->f
                                                            [0U]
                                                             ? 
                                                            (vlSelf->a
                                                             [0U] 
                                                             >> 4U)
                                                             : 
                                                            (vlSelf->a
                                                             [0U] 
                                                             >> 0xbU)) 
                                                           << 0xbU)) 
                                                       | ((0x400U 
                                                           & ((vlSelf->f
                                                               [0U]
                                                                ? 
                                                               (vlSelf->a
                                                                [0U] 
                                                                >> 5U)
                                                                : 
                                                               (vlSelf->a
                                                                [0U] 
                                                                >> 0xaU)) 
                                                              << 0xaU)) 
                                                          | ((0x200U 
                                                              & ((vlSelf->f
                                                                  [0U]
                                                                   ? 
                                                                  (vlSelf->a
                                                                   [0U] 
                                                                   >> 6U)
                                                                   : 
                                                                  (vlSelf->a
                                                                   [0U] 
                                                                   >> 9U)) 
                                                                 << 9U)) 
                                                             | ((0x100U 
                                                                 & ((vlSelf->f
                                                                     [0U]
                                                                      ? 
                                                                     (vlSelf->a
                                                                      [0U] 
                                                                      >> 7U)
                                                                      : 
                                                                     (vlSelf->a
                                                                      [0U] 
                                                                      >> 8U)) 
                                                                    << 8U)) 
                                                                | ((0x80U 
                                                                    & ((vlSelf->f
                                                                        [0U]
                                                                         ? 
                                                                        (vlSelf->a
                                                                         [0U] 
                                                                         >> 8U)
                                                                         : 
                                                                        (vlSelf->a
                                                                         [0U] 
                                                                         >> 7U)) 
                                                                       << 7U)) 
                                                                   | ((0x40U 
                                                                       & ((vlSelf->f
                                                                           [0U]
                                                                            ? 
                                                                           (vlSelf->a
                                                                            [0U] 
                                                                            >> 9U)
                                                                            : 
                                                                           (vlSelf->a
                                                                            [0U] 
                                                                            >> 6U)) 
                                                                          << 6U)) 
                                                                      | ((0x20U 
                                                                          & ((vlSelf->f
                                                                              [0U]
                                                                               ? 
                                                                              (vlSelf->a
                                                                               [0U] 
                                                                               >> 0xaU)
                                                                               : 
                                                                              (vlSelf->a
                                                                               [0U] 
                                                                               >> 5U)) 
                                                                             << 5U)) 
                                                                         | ((0x10U 
                                                                             & ((vlSelf->f
                                                                                [0U]
                                                                                 ? 
                                                                                (vlSelf->a
                                                                                [0U] 
                                                                                >> 0xbU)
                                                                                 : 
                                                                                (vlSelf->a
                                                                                [0U] 
                                                                                >> 4U)) 
                                                                                << 4U)) 
                                                                            | ((8U 
                                                                                & ((vlSelf->f
                                                                                [0U]
                                                                                 ? 
                                                                                (vlSelf->a
                                                                                [0U] 
                                                                                >> 0xcU)
                                                                                 : 
                                                                                (vlSelf->a
                                                                                [0U] 
                                                                                >> 3U)) 
                                                                                << 3U)) 
                                                                               | ((4U 
                                                                                & ((vlSelf->f
                                                                                [0U]
                                                                                 ? 
                                                                                (vlSelf->a
                                                                                [0U] 
                                                                                >> 0xdU)
                                                                                 : 
                                                                                (vlSelf->a
                                                                                [0U] 
                                                                                >> 2U)) 
                                                                                << 2U)) 
                                                                                | ((2U 
                                                                                & ((vlSelf->f
                                                                                [0U]
                                                                                 ? 
                                                                                (vlSelf->a
                                                                                [0U] 
                                                                                >> 0xeU)
                                                                                 : 
                                                                                (vlSelf->a
                                                                                [0U] 
                                                                                >> 1U)) 
                                                                                << 1U)) 
                                                                                | (1U 
                                                                                & (vlSelf->f
                                                                                [0U]
                                                                                 ? 
                                                                                (vlSelf->a
                                                                                [0U] 
                                                                                >> 0xfU)
                                                                                 : 
                                                                                vlSelf->a
                                                                                [0U])))))))))))))))));
    vlSelf->b[1U] = ((0x8000U & ((vlSelf->f[1U] ? vlSelf->a
                                  [1U] : (vlSelf->a
                                          [1U] >> 0xfU)) 
                                 << 0xfU)) | ((0x4000U 
                                               & ((vlSelf->f
                                                   [1U]
                                                    ? 
                                                   (vlSelf->a
                                                    [1U] 
                                                    >> 1U)
                                                    : 
                                                   (vlSelf->a
                                                    [1U] 
                                                    >> 0xeU)) 
                                                  << 0xeU)) 
                                              | ((0x2000U 
                                                  & ((vlSelf->f
                                                      [1U]
                                                       ? 
                                                      (vlSelf->a
                                                       [1U] 
                                                       >> 2U)
                                                       : 
                                                      (vlSelf->a
                                                       [1U] 
                                                       >> 0xdU)) 
                                                     << 0xdU)) 
                                                 | ((0x1000U 
                                                     & ((vlSelf->f
                                                         [1U]
                                                          ? 
                                                         (vlSelf->a
                                                          [1U] 
                                                          >> 3U)
                                                          : 
                                                         (vlSelf->a
                                                          [1U] 
                                                          >> 0xcU)) 
                                                        << 0xcU)) 
                                                    | ((0x800U 
                                                        & ((vlSelf->f
                                                            [1U]
                                                             ? 
                                                            (vlSelf->a
                                                             [1U] 
                                                             >> 4U)
                                                             : 
                                                            (vlSelf->a
                                                             [1U] 
                                                             >> 0xbU)) 
                                                           << 0xbU)) 
                                                       | ((0x400U 
                                                           & ((vlSelf->f
                                                               [1U]
                                                                ? 
                                                               (vlSelf->a
                                                                [1U] 
                                                                >> 5U)
                                                                : 
                                                               (vlSelf->a
                                                                [1U] 
                                                                >> 0xaU)) 
                                                              << 0xaU)) 
                                                          | ((0x200U 
                                                              & ((vlSelf->f
                                                                  [1U]
                                                                   ? 
                                                                  (vlSelf->a
                                                                   [1U] 
                                                                   >> 6U)
                                                                   : 
                                                                  (vlSelf->a
                                                                   [1U] 
                                                                   >> 9U)) 
                                                                 << 9U)) 
                                                             | ((0x100U 
                                                                 & ((vlSelf->f
                                                                     [1U]
                                                                      ? 
                                                                     (vlSelf->a
                                                                      [1U] 
                                                                      >> 7U)
                                                                      : 
                                                                     (vlSelf->a
                                                                      [1U] 
                                                                      >> 8U)) 
                                                                    << 8U)) 
                                                                | ((0x80U 
                                                                    & ((vlSelf->f
                                                                        [1U]
                                                                         ? 
                                                                        (vlSelf->a
                                                                         [1U] 
                                                                         >> 8U)
                                                                         : 
                                                                        (vlSelf->a
                                                                         [1U] 
                                                                         >> 7U)) 
                                                                       << 7U)) 
                                                                   | ((0x40U 
                                                                       & ((vlSelf->f
                                                                           [1U]
                                                                            ? 
                                                                           (vlSelf->a
                                                                            [1U] 
                                                                            >> 9U)
                                                                            : 
                                                                           (vlSelf->a
                                                                            [1U] 
                                                                            >> 6U)) 
                                                                          << 6U)) 
                                                                      | ((0x20U 
                                                                          & ((vlSelf->f
                                                                              [1U]
                                                                               ? 
                                                                              (vlSelf->a
                                                                               [1U] 
                                                                               >> 0xaU)
                                                                               : 
                                                                              (vlSelf->a
                                                                               [1U] 
                                                                               >> 5U)) 
                                                                             << 5U)) 
                                                                         | ((0x10U 
                                                                             & ((vlSelf->f
                                                                                [1U]
                                                                                 ? 
                                                                                (vlSelf->a
                                                                                [1U] 
                                                                                >> 0xbU)
                                                                                 : 
                                                                                (vlSelf->a
                                                                                [1U] 
                                                                                >> 4U)) 
                                                                                << 4U)) 
                                                                            | ((8U 
                                                                                & ((vlSelf->f
                                                                                [1U]
                                                                                 ? 
                                                                                (vlSelf->a
                                                                                [1U] 
                                                                                >> 0xcU)
                                                                                 : 
                                                                                (vlSelf->a
                                                                                [1U] 
                                                                                >> 3U)) 
                                                                                << 3U)) 
                                                                               | ((4U 
                                                                                & ((vlSelf->f
                                                                                [1U]
                                                                                 ? 
                                                                                (vlSelf->a
                                                                                [1U] 
                                                                                >> 0xdU)
                                                                                 : 
                                                                                (vlSelf->a
                                                                                [1U] 
                                                                                >> 2U)) 
                                                                                << 2U)) 
                                                                                | ((2U 
                                                                                & ((vlSelf->f
                                                                                [1U]
                                                                                 ? 
                                                                                (vlSelf->a
                                                                                [1U] 
                                                                                >> 0xeU)
                                                                                 : 
                                                                                (vlSelf->a
                                                                                [1U] 
                                                                                >> 1U)) 
                                                                                << 1U)) 
                                                                                | (1U 
                                                                                & (vlSelf->f
                                                                                [1U]
                                                                                 ? 
                                                                                (vlSelf->a
                                                                                [1U] 
                                                                                >> 0xfU)
                                                                                 : 
                                                                                vlSelf->a
                                                                                [1U])))))))))))))))));
    vlSelf->b[2U] = ((0x8000U & ((vlSelf->f[2U] ? vlSelf->a
                                  [2U] : (vlSelf->a
                                          [2U] >> 0xfU)) 
                                 << 0xfU)) | ((0x4000U 
                                               & ((vlSelf->f
                                                   [2U]
                                                    ? 
                                                   (vlSelf->a
                                                    [2U] 
                                                    >> 1U)
                                                    : 
                                                   (vlSelf->a
                                                    [2U] 
                                                    >> 0xeU)) 
                                                  << 0xeU)) 
                                              | ((0x2000U 
                                                  & ((vlSelf->f
                                                      [2U]
                                                       ? 
                                                      (vlSelf->a
                                                       [2U] 
                                                       >> 2U)
                                                       : 
                                                      (vlSelf->a
                                                       [2U] 
                                                       >> 0xdU)) 
                                                     << 0xdU)) 
                                                 | ((0x1000U 
                                                     & ((vlSelf->f
                                                         [2U]
                                                          ? 
                                                         (vlSelf->a
                                                          [2U] 
                                                          >> 3U)
                                                          : 
                                                         (vlSelf->a
                                                          [2U] 
                                                          >> 0xcU)) 
                                                        << 0xcU)) 
                                                    | ((0x800U 
                                                        & ((vlSelf->f
                                                            [2U]
                                                             ? 
                                                            (vlSelf->a
                                                             [2U] 
                                                             >> 4U)
                                                             : 
                                                            (vlSelf->a
                                                             [2U] 
                                                             >> 0xbU)) 
                                                           << 0xbU)) 
                                                       | ((0x400U 
                                                           & ((vlSelf->f
                                                               [2U]
                                                                ? 
                                                               (vlSelf->a
                                                                [2U] 
                                                                >> 5U)
                                                                : 
                                                               (vlSelf->a
                                                                [2U] 
                                                                >> 0xaU)) 
                                                              << 0xaU)) 
                                                          | ((0x200U 
                                                              & ((vlSelf->f
                                                                  [2U]
                                                                   ? 
                                                                  (vlSelf->a
                                                                   [2U] 
                                                                   >> 6U)
                                                                   : 
                                                                  (vlSelf->a
                                                                   [2U] 
                                                                   >> 9U)) 
                                                                 << 9U)) 
                                                             | ((0x100U 
                                                                 & ((vlSelf->f
                                                                     [2U]
                                                                      ? 
                                                                     (vlSelf->a
                                                                      [2U] 
                                                                      >> 7U)
                                                                      : 
                                                                     (vlSelf->a
                                                                      [2U] 
                                                                      >> 8U)) 
                                                                    << 8U)) 
                                                                | ((0x80U 
                                                                    & ((vlSelf->f
                                                                        [2U]
                                                                         ? 
                                                                        (vlSelf->a
                                                                         [2U] 
                                                                         >> 8U)
                                                                         : 
                                                                        (vlSelf->a
                                                                         [2U] 
                                                                         >> 7U)) 
                                                                       << 7U)) 
                                                                   | ((0x40U 
                                                                       & ((vlSelf->f
                                                                           [2U]
                                                                            ? 
                                                                           (vlSelf->a
                                                                            [2U] 
                                                                            >> 9U)
                                                                            : 
                                                                           (vlSelf->a
                                                                            [2U] 
                                                                            >> 6U)) 
                                                                          << 6U)) 
                                                                      | ((0x20U 
                                                                          & ((vlSelf->f
                                                                              [2U]
                                                                               ? 
                                                                              (vlSelf->a
                                                                               [2U] 
                                                                               >> 0xaU)
                                                                               : 
                                                                              (vlSelf->a
                                                                               [2U] 
                                                                               >> 5U)) 
                                                                             << 5U)) 
                                                                         | ((0x10U 
                                                                             & ((vlSelf->f
                                                                                [2U]
                                                                                 ? 
                                                                                (vlSelf->a
                                                                                [2U] 
                                                                                >> 0xbU)
                                                                                 : 
                                                                                (vlSelf->a
                                                                                [2U] 
                                                                                >> 4U)) 
                                                                                << 4U)) 
                                                                            | ((8U 
                                                                                & ((vlSelf->f
                                                                                [2U]
                                                                                 ? 
                                                                                (vlSelf->a
                                                                                [2U] 
                                                                                >> 0xcU)
                                                                                 : 
                                                                                (vlSelf->a
                                                                                [2U] 
                                                                                >> 3U)) 
                                                                                << 3U)) 
                                                                               | ((4U 
                                                                                & ((vlSelf->f
                                                                                [2U]
                                                                                 ? 
                                                                                (vlSelf->a
                                                                                [2U] 
                                                                                >> 0xdU)
                                                                                 : 
                                                                                (vlSelf->a
                                                                                [2U] 
                                                                                >> 2U)) 
                                                                                << 2U)) 
                                                                                | ((2U 
                                                                                & ((vlSelf->f
                                                                                [2U]
                                                                                 ? 
                                                                                (vlSelf->a
                                                                                [2U] 
                                                                                >> 0xeU)
                                                                                 : 
                                                                                (vlSelf->a
                                                                                [2U] 
                                                                                >> 1U)) 
                                                                                << 1U)) 
                                                                                | (1U 
                                                                                & (vlSelf->f
                                                                                [2U]
                                                                                 ? 
                                                                                (vlSelf->a
                                                                                [2U] 
                                                                                >> 0xfU)
                                                                                 : 
                                                                                vlSelf->a
                                                                                [2U])))))))))))))))));
    vlSelf->b[3U] = ((0x8000U & ((vlSelf->f[3U] ? vlSelf->a
                                  [3U] : (vlSelf->a
                                          [3U] >> 0xfU)) 
                                 << 0xfU)) | ((0x4000U 
                                               & ((vlSelf->f
                                                   [3U]
                                                    ? 
                                                   (vlSelf->a
                                                    [3U] 
                                                    >> 1U)
                                                    : 
                                                   (vlSelf->a
                                                    [3U] 
                                                    >> 0xeU)) 
                                                  << 0xeU)) 
                                              | ((0x2000U 
                                                  & ((vlSelf->f
                                                      [3U]
                                                       ? 
                                                      (vlSelf->a
                                                       [3U] 
                                                       >> 2U)
                                                       : 
                                                      (vlSelf->a
                                                       [3U] 
                                                       >> 0xdU)) 
                                                     << 0xdU)) 
                                                 | ((0x1000U 
                                                     & ((vlSelf->f
                                                         [3U]
                                                          ? 
                                                         (vlSelf->a
                                                          [3U] 
                                                          >> 3U)
                                                          : 
                                                         (vlSelf->a
                                                          [3U] 
                                                          >> 0xcU)) 
                                                        << 0xcU)) 
                                                    | ((0x800U 
                                                        & ((vlSelf->f
                                                            [3U]
                                                             ? 
                                                            (vlSelf->a
                                                             [3U] 
                                                             >> 4U)
                                                             : 
                                                            (vlSelf->a
                                                             [3U] 
                                                             >> 0xbU)) 
                                                           << 0xbU)) 
                                                       | ((0x400U 
                                                           & ((vlSelf->f
                                                               [3U]
                                                                ? 
                                                               (vlSelf->a
                                                                [3U] 
                                                                >> 5U)
                                                                : 
                                                               (vlSelf->a
                                                                [3U] 
                                                                >> 0xaU)) 
                                                              << 0xaU)) 
                                                          | ((0x200U 
                                                              & ((vlSelf->f
                                                                  [3U]
                                                                   ? 
                                                                  (vlSelf->a
                                                                   [3U] 
                                                                   >> 6U)
                                                                   : 
                                                                  (vlSelf->a
                                                                   [3U] 
                                                                   >> 9U)) 
                                                                 << 9U)) 
                                                             | ((0x100U 
                                                                 & ((vlSelf->f
                                                                     [3U]
                                                                      ? 
                                                                     (vlSelf->a
                                                                      [3U] 
                                                                      >> 7U)
                                                                      : 
                                                                     (vlSelf->a
                                                                      [3U] 
                                                                      >> 8U)) 
                                                                    << 8U)) 
                                                                | ((0x80U 
                                                                    & ((vlSelf->f
                                                                        [3U]
                                                                         ? 
                                                                        (vlSelf->a
                                                                         [3U] 
                                                                         >> 8U)
                                                                         : 
                                                                        (vlSelf->a
                                                                         [3U] 
                                                                         >> 7U)) 
                                                                       << 7U)) 
                                                                   | ((0x40U 
                                                                       & ((vlSelf->f
                                                                           [3U]
                                                                            ? 
                                                                           (vlSelf->a
                                                                            [3U] 
                                                                            >> 9U)
                                                                            : 
                                                                           (vlSelf->a
                                                                            [3U] 
                                                                            >> 6U)) 
                                                                          << 6U)) 
                                                                      | ((0x20U 
                                                                          & ((vlSelf->f
                                                                              [3U]
                                                                               ? 
                                                                              (vlSelf->a
                                                                               [3U] 
                                                                               >> 0xaU)
                                                                               : 
                                                                              (vlSelf->a
                                                                               [3U] 
                                                                               >> 5U)) 
                                                                             << 5U)) 
                                                                         | ((0x10U 
                                                                             & ((vlSelf->f
                                                                                [3U]
                                                                                 ? 
                                                                                (vlSelf->a
                                                                                [3U] 
                                                                                >> 0xbU)
                                                                                 : 
                                                                                (vlSelf->a
                                                                                [3U] 
                                                                                >> 4U)) 
                                                                                << 4U)) 
                                                                            | ((8U 
                                                                                & ((vlSelf->f
                                                                                [3U]
                                                                                 ? 
                                                                                (vlSelf->a
                                                                                [3U] 
                                                                                >> 0xcU)
                                                                                 : 
                                                                                (vlSelf->a
                                                                                [3U] 
                                                                                >> 3U)) 
                                                                                << 3U)) 
                                                                               | ((4U 
                                                                                & ((vlSelf->f
                                                                                [3U]
                                                                                 ? 
                                                                                (vlSelf->a
                                                                                [3U] 
                                                                                >> 0xdU)
                                                                                 : 
                                                                                (vlSelf->a
                                                                                [3U] 
                                                                                >> 2U)) 
                                                                                << 2U)) 
                                                                                | ((2U 
                                                                                & ((vlSelf->f
                                                                                [3U]
                                                                                 ? 
                                                                                (vlSelf->a
                                                                                [3U] 
                                                                                >> 0xeU)
                                                                                 : 
                                                                                (vlSelf->a
                                                                                [3U] 
                                                                                >> 1U)) 
                                                                                << 1U)) 
                                                                                | (1U 
                                                                                & (vlSelf->f
                                                                                [3U]
                                                                                 ? 
                                                                                (vlSelf->a
                                                                                [3U] 
                                                                                >> 0xfU)
                                                                                 : 
                                                                                vlSelf->a
                                                                                [3U])))))))))))))))));
    vlSelf->b[4U] = ((0x8000U & ((vlSelf->f[4U] ? vlSelf->a
                                  [4U] : (vlSelf->a
                                          [4U] >> 0xfU)) 
                                 << 0xfU)) | ((0x4000U 
                                               & ((vlSelf->f
                                                   [4U]
                                                    ? 
                                                   (vlSelf->a
                                                    [4U] 
                                                    >> 1U)
                                                    : 
                                                   (vlSelf->a
                                                    [4U] 
                                                    >> 0xeU)) 
                                                  << 0xeU)) 
                                              | ((0x2000U 
                                                  & ((vlSelf->f
                                                      [4U]
                                                       ? 
                                                      (vlSelf->a
                                                       [4U] 
                                                       >> 2U)
                                                       : 
                                                      (vlSelf->a
                                                       [4U] 
                                                       >> 0xdU)) 
                                                     << 0xdU)) 
                                                 | ((0x1000U 
                                                     & ((vlSelf->f
                                                         [4U]
                                                          ? 
                                                         (vlSelf->a
                                                          [4U] 
                                                          >> 3U)
                                                          : 
                                                         (vlSelf->a
                                                          [4U] 
                                                          >> 0xcU)) 
                                                        << 0xcU)) 
                                                    | ((0x800U 
                                                        & ((vlSelf->f
                                                            [4U]
                                                             ? 
                                                            (vlSelf->a
                                                             [4U] 
                                                             >> 4U)
                                                             : 
                                                            (vlSelf->a
                                                             [4U] 
                                                             >> 0xbU)) 
                                                           << 0xbU)) 
                                                       | ((0x400U 
                                                           & ((vlSelf->f
                                                               [4U]
                                                                ? 
                                                               (vlSelf->a
                                                                [4U] 
                                                                >> 5U)
                                                                : 
                                                               (vlSelf->a
                                                                [4U] 
                                                                >> 0xaU)) 
                                                              << 0xaU)) 
                                                          | ((0x200U 
                                                              & ((vlSelf->f
                                                                  [4U]
                                                                   ? 
                                                                  (vlSelf->a
                                                                   [4U] 
                                                                   >> 6U)
                                                                   : 
                                                                  (vlSelf->a
                                                                   [4U] 
                                                                   >> 9U)) 
                                                                 << 9U)) 
                                                             | ((0x100U 
                                                                 & ((vlSelf->f
                                                                     [4U]
                                                                      ? 
                                                                     (vlSelf->a
                                                                      [4U] 
                                                                      >> 7U)
                                                                      : 
                                                                     (vlSelf->a
                                                                      [4U] 
                                                                      >> 8U)) 
                                                                    << 8U)) 
                                                                | ((0x80U 
                                                                    & ((vlSelf->f
                                                                        [4U]
                                                                         ? 
                                                                        (vlSelf->a
                                                                         [4U] 
                                                                         >> 8U)
                                                                         : 
                                                                        (vlSelf->a
                                                                         [4U] 
                                                                         >> 7U)) 
                                                                       << 7U)) 
                                                                   | ((0x40U 
                                                                       & ((vlSelf->f
                                                                           [4U]
                                                                            ? 
                                                                           (vlSelf->a
                                                                            [4U] 
                                                                            >> 9U)
                                                                            : 
                                                                           (vlSelf->a
                                                                            [4U] 
                                                                            >> 6U)) 
                                                                          << 6U)) 
                                                                      | ((0x20U 
                                                                          & ((vlSelf->f
                                                                              [4U]
                                                                               ? 
                                                                              (vlSelf->a
                                                                               [4U] 
                                                                               >> 0xaU)
                                                                               : 
                                                                              (vlSelf->a
                                                                               [4U] 
                                                                               >> 5U)) 
                                                                             << 5U)) 
                                                                         | ((0x10U 
                                                                             & ((vlSelf->f
                                                                                [4U]
                                                                                 ? 
                                                                                (vlSelf->a
                                                                                [4U] 
                                                                                >> 0xbU)
                                                                                 : 
                                                                                (vlSelf->a
                                                                                [4U] 
                                                                                >> 4U)) 
                                                                                << 4U)) 
                                                                            | ((8U 
                                                                                & ((vlSelf->f
                                                                                [4U]
                                                                                 ? 
                                                                                (vlSelf->a
                                                                                [4U] 
                                                                                >> 0xcU)
                                                                                 : 
                                                                                (vlSelf->a
                                                                                [4U] 
                                                                                >> 3U)) 
                                                                                << 3U)) 
                                                                               | ((4U 
                                                                                & ((vlSelf->f
                                                                                [4U]
                                                                                 ? 
                                                                                (vlSelf->a
                                                                                [4U] 
                                                                                >> 0xdU)
                                                                                 : 
                                                                                (vlSelf->a
                                                                                [4U] 
                                                                                >> 2U)) 
                                                                                << 2U)) 
                                                                                | ((2U 
                                                                                & ((vlSelf->f
                                                                                [4U]
                                                                                 ? 
                                                                                (vlSelf->a
                                                                                [4U] 
                                                                                >> 0xeU)
                                                                                 : 
                                                                                (vlSelf->a
                                                                                [4U] 
                                                                                >> 1U)) 
                                                                                << 1U)) 
                                                                                | (1U 
                                                                                & (vlSelf->f
                                                                                [4U]
                                                                                 ? 
                                                                                (vlSelf->a
                                                                                [4U] 
                                                                                >> 0xfU)
                                                                                 : 
                                                                                vlSelf->a
                                                                                [4U])))))))))))))))));
    vlSelf->b[5U] = ((0x8000U & ((vlSelf->f[5U] ? vlSelf->a
                                  [5U] : (vlSelf->a
                                          [5U] >> 0xfU)) 
                                 << 0xfU)) | ((0x4000U 
                                               & ((vlSelf->f
                                                   [5U]
                                                    ? 
                                                   (vlSelf->a
                                                    [5U] 
                                                    >> 1U)
                                                    : 
                                                   (vlSelf->a
                                                    [5U] 
                                                    >> 0xeU)) 
                                                  << 0xeU)) 
                                              | ((0x2000U 
                                                  & ((vlSelf->f
                                                      [5U]
                                                       ? 
                                                      (vlSelf->a
                                                       [5U] 
                                                       >> 2U)
                                                       : 
                                                      (vlSelf->a
                                                       [5U] 
                                                       >> 0xdU)) 
                                                     << 0xdU)) 
                                                 | ((0x1000U 
                                                     & ((vlSelf->f
                                                         [5U]
                                                          ? 
                                                         (vlSelf->a
                                                          [5U] 
                                                          >> 3U)
                                                          : 
                                                         (vlSelf->a
                                                          [5U] 
                                                          >> 0xcU)) 
                                                        << 0xcU)) 
                                                    | ((0x800U 
                                                        & ((vlSelf->f
                                                            [5U]
                                                             ? 
                                                            (vlSelf->a
                                                             [5U] 
                                                             >> 4U)
                                                             : 
                                                            (vlSelf->a
                                                             [5U] 
                                                             >> 0xbU)) 
                                                           << 0xbU)) 
                                                       | ((0x400U 
                                                           & ((vlSelf->f
                                                               [5U]
                                                                ? 
                                                               (vlSelf->a
                                                                [5U] 
                                                                >> 5U)
                                                                : 
                                                               (vlSelf->a
                                                                [5U] 
                                                                >> 0xaU)) 
                                                              << 0xaU)) 
                                                          | ((0x200U 
                                                              & ((vlSelf->f
                                                                  [5U]
                                                                   ? 
                                                                  (vlSelf->a
                                                                   [5U] 
                                                                   >> 6U)
                                                                   : 
                                                                  (vlSelf->a
                                                                   [5U] 
                                                                   >> 9U)) 
                                                                 << 9U)) 
                                                             | ((0x100U 
                                                                 & ((vlSelf->f
                                                                     [5U]
                                                                      ? 
                                                                     (vlSelf->a
                                                                      [5U] 
                                                                      >> 7U)
                                                                      : 
                                                                     (vlSelf->a
                                                                      [5U] 
                                                                      >> 8U)) 
                                                                    << 8U)) 
                                                                | ((0x80U 
                                                                    & ((vlSelf->f
                                                                        [5U]
                                                                         ? 
                                                                        (vlSelf->a
                                                                         [5U] 
                                                                         >> 8U)
                                                                         : 
                                                                        (vlSelf->a
                                                                         [5U] 
                                                                         >> 7U)) 
                                                                       << 7U)) 
                                                                   | ((0x40U 
                                                                       & ((vlSelf->f
                                                                           [5U]
                                                                            ? 
                                                                           (vlSelf->a
                                                                            [5U] 
                                                                            >> 9U)
                                                                            : 
                                                                           (vlSelf->a
                                                                            [5U] 
                                                                            >> 6U)) 
                                                                          << 6U)) 
                                                                      | ((0x20U 
                                                                          & ((vlSelf->f
                                                                              [5U]
                                                                               ? 
                                                                              (vlSelf->a
                                                                               [5U] 
                                                                               >> 0xaU)
                                                                               : 
                                                                              (vlSelf->a
                                                                               [5U] 
                                                                               >> 5U)) 
                                                                             << 5U)) 
                                                                         | ((0x10U 
                                                                             & ((vlSelf->f
                                                                                [5U]
                                                                                 ? 
                                                                                (vlSelf->a
                                                                                [5U] 
                                                                                >> 0xbU)
                                                                                 : 
                                                                                (vlSelf->a
                                                                                [5U] 
                                                                                >> 4U)) 
                                                                                << 4U)) 
                                                                            | ((8U 
                                                                                & ((vlSelf->f
                                                                                [5U]
                                                                                 ? 
                                                                                (vlSelf->a
                                                                                [5U] 
                                                                                >> 0xcU)
                                                                                 : 
                                                                                (vlSelf->a
                                                                                [5U] 
                                                                                >> 3U)) 
                                                                                << 3U)) 
                                                                               | ((4U 
                                                                                & ((vlSelf->f
                                                                                [5U]
                                                                                 ? 
                                                                                (vlSelf->a
                                                                                [5U] 
                                                                                >> 0xdU)
                                                                                 : 
                                                                                (vlSelf->a
                                                                                [5U] 
                                                                                >> 2U)) 
                                                                                << 2U)) 
                                                                                | ((2U 
                                                                                & ((vlSelf->f
                                                                                [5U]
                                                                                 ? 
                                                                                (vlSelf->a
                                                                                [5U] 
                                                                                >> 0xeU)
                                                                                 : 
                                                                                (vlSelf->a
                                                                                [5U] 
                                                                                >> 1U)) 
                                                                                << 1U)) 
                                                                                | (1U 
                                                                                & (vlSelf->f
                                                                                [5U]
                                                                                 ? 
                                                                                (vlSelf->a
                                                                                [5U] 
                                                                                >> 0xfU)
                                                                                 : 
                                                                                vlSelf->a
                                                                                [5U])))))))))))))))));
    vlSelf->b[6U] = ((0x8000U & ((vlSelf->f[6U] ? vlSelf->a
                                  [6U] : (vlSelf->a
                                          [6U] >> 0xfU)) 
                                 << 0xfU)) | ((0x4000U 
                                               & ((vlSelf->f
                                                   [6U]
                                                    ? 
                                                   (vlSelf->a
                                                    [6U] 
                                                    >> 1U)
                                                    : 
                                                   (vlSelf->a
                                                    [6U] 
                                                    >> 0xeU)) 
                                                  << 0xeU)) 
                                              | ((0x2000U 
                                                  & ((vlSelf->f
                                                      [6U]
                                                       ? 
                                                      (vlSelf->a
                                                       [6U] 
                                                       >> 2U)
                                                       : 
                                                      (vlSelf->a
                                                       [6U] 
                                                       >> 0xdU)) 
                                                     << 0xdU)) 
                                                 | ((0x1000U 
                                                     & ((vlSelf->f
                                                         [6U]
                                                          ? 
                                                         (vlSelf->a
                                                          [6U] 
                                                          >> 3U)
                                                          : 
                                                         (vlSelf->a
                                                          [6U] 
                                                          >> 0xcU)) 
                                                        << 0xcU)) 
                                                    | ((0x800U 
                                                        & ((vlSelf->f
                                                            [6U]
                                                             ? 
                                                            (vlSelf->a
                                                             [6U] 
                                                             >> 4U)
                                                             : 
                                                            (vlSelf->a
                                                             [6U] 
                                                             >> 0xbU)) 
                                                           << 0xbU)) 
                                                       | ((0x400U 
                                                           & ((vlSelf->f
                                                               [6U]
                                                                ? 
                                                               (vlSelf->a
                                                                [6U] 
                                                                >> 5U)
                                                                : 
                                                               (vlSelf->a
                                                                [6U] 
                                                                >> 0xaU)) 
                                                              << 0xaU)) 
                                                          | ((0x200U 
                                                              & ((vlSelf->f
                                                                  [6U]
                                                                   ? 
                                                                  (vlSelf->a
                                                                   [6U] 
                                                                   >> 6U)
                                                                   : 
                                                                  (vlSelf->a
                                                                   [6U] 
                                                                   >> 9U)) 
                                                                 << 9U)) 
                                                             | ((0x100U 
                                                                 & ((vlSelf->f
                                                                     [6U]
                                                                      ? 
                                                                     (vlSelf->a
                                                                      [6U] 
                                                                      >> 7U)
                                                                      : 
                                                                     (vlSelf->a
                                                                      [6U] 
                                                                      >> 8U)) 
                                                                    << 8U)) 
                                                                | ((0x80U 
                                                                    & ((vlSelf->f
                                                                        [6U]
                                                                         ? 
                                                                        (vlSelf->a
                                                                         [6U] 
                                                                         >> 8U)
                                                                         : 
                                                                        (vlSelf->a
                                                                         [6U] 
                                                                         >> 7U)) 
                                                                       << 7U)) 
                                                                   | ((0x40U 
                                                                       & ((vlSelf->f
                                                                           [6U]
                                                                            ? 
                                                                           (vlSelf->a
                                                                            [6U] 
                                                                            >> 9U)
                                                                            : 
                                                                           (vlSelf->a
                                                                            [6U] 
                                                                            >> 6U)) 
                                                                          << 6U)) 
                                                                      | ((0x20U 
                                                                          & ((vlSelf->f
                                                                              [6U]
                                                                               ? 
                                                                              (vlSelf->a
                                                                               [6U] 
                                                                               >> 0xaU)
                                                                               : 
                                                                              (vlSelf->a
                                                                               [6U] 
                                                                               >> 5U)) 
                                                                             << 5U)) 
                                                                         | ((0x10U 
                                                                             & ((vlSelf->f
                                                                                [6U]
                                                                                 ? 
                                                                                (vlSelf->a
                                                                                [6U] 
                                                                                >> 0xbU)
                                                                                 : 
                                                                                (vlSelf->a
                                                                                [6U] 
                                                                                >> 4U)) 
                                                                                << 4U)) 
                                                                            | ((8U 
                                                                                & ((vlSelf->f
                                                                                [6U]
                                                                                 ? 
                                                                                (vlSelf->a
                                                                                [6U] 
                                                                                >> 0xcU)
                                                                                 : 
                                                                                (vlSelf->a
                                                                                [6U] 
                                                                                >> 3U)) 
                                                                                << 3U)) 
                                                                               | ((4U 
                                                                                & ((vlSelf->f
                                                                                [6U]
                                                                                 ? 
                                                                                (vlSelf->a
                                                                                [6U] 
                                                                                >> 0xdU)
                                                                                 : 
                                                                                (vlSelf->a
                                                                                [6U] 
                                                                                >> 2U)) 
                                                                                << 2U)) 
                                                                                | ((2U 
                                                                                & ((vlSelf->f
                                                                                [6U]
                                                                                 ? 
                                                                                (vlSelf->a
                                                                                [6U] 
                                                                                >> 0xeU)
                                                                                 : 
                                                                                (vlSelf->a
                                                                                [6U] 
                                                                                >> 1U)) 
                                                                                << 1U)) 
                                                                                | (1U 
                                                                                & (vlSelf->f
                                                                                [6U]
                                                                                 ? 
                                                                                (vlSelf->a
                                                                                [6U] 
                                                                                >> 0xfU)
                                                                                 : 
                                                                                vlSelf->a
                                                                                [6U])))))))))))))))));
    vlSelf->b[7U] = ((0x8000U & ((vlSelf->f[7U] ? vlSelf->a
                                  [7U] : (vlSelf->a
                                          [7U] >> 0xfU)) 
                                 << 0xfU)) | ((0x4000U 
                                               & ((vlSelf->f
                                                   [7U]
                                                    ? 
                                                   (vlSelf->a
                                                    [7U] 
                                                    >> 1U)
                                                    : 
                                                   (vlSelf->a
                                                    [7U] 
                                                    >> 0xeU)) 
                                                  << 0xeU)) 
                                              | ((0x2000U 
                                                  & ((vlSelf->f
                                                      [7U]
                                                       ? 
                                                      (vlSelf->a
                                                       [7U] 
                                                       >> 2U)
                                                       : 
                                                      (vlSelf->a
                                                       [7U] 
                                                       >> 0xdU)) 
                                                     << 0xdU)) 
                                                 | ((0x1000U 
                                                     & ((vlSelf->f
                                                         [7U]
                                                          ? 
                                                         (vlSelf->a
                                                          [7U] 
                                                          >> 3U)
                                                          : 
                                                         (vlSelf->a
                                                          [7U] 
                                                          >> 0xcU)) 
                                                        << 0xcU)) 
                                                    | ((0x800U 
                                                        & ((vlSelf->f
                                                            [7U]
                                                             ? 
                                                            (vlSelf->a
                                                             [7U] 
                                                             >> 4U)
                                                             : 
                                                            (vlSelf->a
                                                             [7U] 
                                                             >> 0xbU)) 
                                                           << 0xbU)) 
                                                       | ((0x400U 
                                                           & ((vlSelf->f
                                                               [7U]
                                                                ? 
                                                               (vlSelf->a
                                                                [7U] 
                                                                >> 5U)
                                                                : 
                                                               (vlSelf->a
                                                                [7U] 
                                                                >> 0xaU)) 
                                                              << 0xaU)) 
                                                          | ((0x200U 
                                                              & ((vlSelf->f
                                                                  [7U]
                                                                   ? 
                                                                  (vlSelf->a
                                                                   [7U] 
                                                                   >> 6U)
                                                                   : 
                                                                  (vlSelf->a
                                                                   [7U] 
                                                                   >> 9U)) 
                                                                 << 9U)) 
                                                             | ((0x100U 
                                                                 & ((vlSelf->f
                                                                     [7U]
                                                                      ? 
                                                                     (vlSelf->a
                                                                      [7U] 
                                                                      >> 7U)
                                                                      : 
                                                                     (vlSelf->a
                                                                      [7U] 
                                                                      >> 8U)) 
                                                                    << 8U)) 
                                                                | ((0x80U 
                                                                    & ((vlSelf->f
                                                                        [7U]
                                                                         ? 
                                                                        (vlSelf->a
                                                                         [7U] 
                                                                         >> 8U)
                                                                         : 
                                                                        (vlSelf->a
                                                                         [7U] 
                                                                         >> 7U)) 
                                                                       << 7U)) 
                                                                   | ((0x40U 
                                                                       & ((vlSelf->f
                                                                           [7U]
                                                                            ? 
                                                                           (vlSelf->a
                                                                            [7U] 
                                                                            >> 9U)
                                                                            : 
                                                                           (vlSelf->a
                                                                            [7U] 
                                                                            >> 6U)) 
                                                                          << 6U)) 
                                                                      | ((0x20U 
                                                                          & ((vlSelf->f
                                                                              [7U]
                                                                               ? 
                                                                              (vlSelf->a
                                                                               [7U] 
                                                                               >> 0xaU)
                                                                               : 
                                                                              (vlSelf->a
                                                                               [7U] 
                                                                               >> 5U)) 
                                                                             << 5U)) 
                                                                         | ((0x10U 
                                                                             & ((vlSelf->f
                                                                                [7U]
                                                                                 ? 
                                                                                (vlSelf->a
                                                                                [7U] 
                                                                                >> 0xbU)
                                                                                 : 
                                                                                (vlSelf->a
                                                                                [7U] 
                                                                                >> 4U)) 
                                                                                << 4U)) 
                                                                            | ((8U 
                                                                                & ((vlSelf->f
                                                                                [7U]
                                                                                 ? 
                                                                                (vlSelf->a
                                                                                [7U] 
                                                                                >> 0xcU)
                                                                                 : 
                                                                                (vlSelf->a
                                                                                [7U] 
                                                                                >> 3U)) 
                                                                                << 3U)) 
                                                                               | ((4U 
                                                                                & ((vlSelf->f
                                                                                [7U]
                                                                                 ? 
                                                                                (vlSelf->a
                                                                                [7U] 
                                                                                >> 0xdU)
                                                                                 : 
                                                                                (vlSelf->a
                                                                                [7U] 
                                                                                >> 2U)) 
                                                                                << 2U)) 
                                                                                | ((2U 
                                                                                & ((vlSelf->f
                                                                                [7U]
                                                                                 ? 
                                                                                (vlSelf->a
                                                                                [7U] 
                                                                                >> 0xeU)
                                                                                 : 
                                                                                (vlSelf->a
                                                                                [7U] 
                                                                                >> 1U)) 
                                                                                << 1U)) 
                                                                                | (1U 
                                                                                & (vlSelf->f
                                                                                [7U]
                                                                                 ? 
                                                                                (vlSelf->a
                                                                                [7U] 
                                                                                >> 0xfU)
                                                                                 : 
                                                                                vlSelf->a
                                                                                [7U])))))))))))))))));
    vlSelf->b[8U] = ((0x8000U & ((vlSelf->f[8U] ? vlSelf->a
                                  [8U] : (vlSelf->a
                                          [8U] >> 0xfU)) 
                                 << 0xfU)) | ((0x4000U 
                                               & ((vlSelf->f
                                                   [8U]
                                                    ? 
                                                   (vlSelf->a
                                                    [8U] 
                                                    >> 1U)
                                                    : 
                                                   (vlSelf->a
                                                    [8U] 
                                                    >> 0xeU)) 
                                                  << 0xeU)) 
                                              | ((0x2000U 
                                                  & ((vlSelf->f
                                                      [8U]
                                                       ? 
                                                      (vlSelf->a
                                                       [8U] 
                                                       >> 2U)
                                                       : 
                                                      (vlSelf->a
                                                       [8U] 
                                                       >> 0xdU)) 
                                                     << 0xdU)) 
                                                 | ((0x1000U 
                                                     & ((vlSelf->f
                                                         [8U]
                                                          ? 
                                                         (vlSelf->a
                                                          [8U] 
                                                          >> 3U)
                                                          : 
                                                         (vlSelf->a
                                                          [8U] 
                                                          >> 0xcU)) 
                                                        << 0xcU)) 
                                                    | ((0x800U 
                                                        & ((vlSelf->f
                                                            [8U]
                                                             ? 
                                                            (vlSelf->a
                                                             [8U] 
                                                             >> 4U)
                                                             : 
                                                            (vlSelf->a
                                                             [8U] 
                                                             >> 0xbU)) 
                                                           << 0xbU)) 
                                                       | ((0x400U 
                                                           & ((vlSelf->f
                                                               [8U]
                                                                ? 
                                                               (vlSelf->a
                                                                [8U] 
                                                                >> 5U)
                                                                : 
                                                               (vlSelf->a
                                                                [8U] 
                                                                >> 0xaU)) 
                                                              << 0xaU)) 
                                                          | ((0x200U 
                                                              & ((vlSelf->f
                                                                  [8U]
                                                                   ? 
                                                                  (vlSelf->a
                                                                   [8U] 
                                                                   >> 6U)
                                                                   : 
                                                                  (vlSelf->a
                                                                   [8U] 
                                                                   >> 9U)) 
                                                                 << 9U)) 
                                                             | ((0x100U 
                                                                 & ((vlSelf->f
                                                                     [8U]
                                                                      ? 
                                                                     (vlSelf->a
                                                                      [8U] 
                                                                      >> 7U)
                                                                      : 
                                                                     (vlSelf->a
                                                                      [8U] 
                                                                      >> 8U)) 
                                                                    << 8U)) 
                                                                | ((0x80U 
                                                                    & ((vlSelf->f
                                                                        [8U]
                                                                         ? 
                                                                        (vlSelf->a
                                                                         [8U] 
                                                                         >> 8U)
                                                                         : 
                                                                        (vlSelf->a
                                                                         [8U] 
                                                                         >> 7U)) 
                                                                       << 7U)) 
                                                                   | ((0x40U 
                                                                       & ((vlSelf->f
                                                                           [8U]
                                                                            ? 
                                                                           (vlSelf->a
                                                                            [8U] 
                                                                            >> 9U)
                                                                            : 
                                                                           (vlSelf->a
                                                                            [8U] 
                                                                            >> 6U)) 
                                                                          << 6U)) 
                                                                      | ((0x20U 
                                                                          & ((vlSelf->f
                                                                              [8U]
                                                                               ? 
                                                                              (vlSelf->a
                                                                               [8U] 
                                                                               >> 0xaU)
                                                                               : 
                                                                              (vlSelf->a
                                                                               [8U] 
                                                                               >> 5U)) 
                                                                             << 5U)) 
                                                                         | ((0x10U 
                                                                             & ((vlSelf->f
                                                                                [8U]
                                                                                 ? 
                                                                                (vlSelf->a
                                                                                [8U] 
                                                                                >> 0xbU)
                                                                                 : 
                                                                                (vlSelf->a
                                                                                [8U] 
                                                                                >> 4U)) 
                                                                                << 4U)) 
                                                                            | ((8U 
                                                                                & ((vlSelf->f
                                                                                [8U]
                                                                                 ? 
                                                                                (vlSelf->a
                                                                                [8U] 
                                                                                >> 0xcU)
                                                                                 : 
                                                                                (vlSelf->a
                                                                                [8U] 
                                                                                >> 3U)) 
                                                                                << 3U)) 
                                                                               | ((4U 
                                                                                & ((vlSelf->f
                                                                                [8U]
                                                                                 ? 
                                                                                (vlSelf->a
                                                                                [8U] 
                                                                                >> 0xdU)
                                                                                 : 
                                                                                (vlSelf->a
                                                                                [8U] 
                                                                                >> 2U)) 
                                                                                << 2U)) 
                                                                                | ((2U 
                                                                                & ((vlSelf->f
                                                                                [8U]
                                                                                 ? 
                                                                                (vlSelf->a
                                                                                [8U] 
                                                                                >> 0xeU)
                                                                                 : 
                                                                                (vlSelf->a
                                                                                [8U] 
                                                                                >> 1U)) 
                                                                                << 1U)) 
                                                                                | (1U 
                                                                                & (vlSelf->f
                                                                                [8U]
                                                                                 ? 
                                                                                (vlSelf->a
                                                                                [8U] 
                                                                                >> 0xfU)
                                                                                 : 
                                                                                vlSelf->a
                                                                                [8U])))))))))))))))));
    vlSelf->b[9U] = ((0x8000U & ((vlSelf->f[9U] ? vlSelf->a
                                  [9U] : (vlSelf->a
                                          [9U] >> 0xfU)) 
                                 << 0xfU)) | ((0x4000U 
                                               & ((vlSelf->f
                                                   [9U]
                                                    ? 
                                                   (vlSelf->a
                                                    [9U] 
                                                    >> 1U)
                                                    : 
                                                   (vlSelf->a
                                                    [9U] 
                                                    >> 0xeU)) 
                                                  << 0xeU)) 
                                              | ((0x2000U 
                                                  & ((vlSelf->f
                                                      [9U]
                                                       ? 
                                                      (vlSelf->a
                                                       [9U] 
                                                       >> 2U)
                                                       : 
                                                      (vlSelf->a
                                                       [9U] 
                                                       >> 0xdU)) 
                                                     << 0xdU)) 
                                                 | ((0x1000U 
                                                     & ((vlSelf->f
                                                         [9U]
                                                          ? 
                                                         (vlSelf->a
                                                          [9U] 
                                                          >> 3U)
                                                          : 
                                                         (vlSelf->a
                                                          [9U] 
                                                          >> 0xcU)) 
                                                        << 0xcU)) 
                                                    | ((0x800U 
                                                        & ((vlSelf->f
                                                            [9U]
                                                             ? 
                                                            (vlSelf->a
                                                             [9U] 
                                                             >> 4U)
                                                             : 
                                                            (vlSelf->a
                                                             [9U] 
                                                             >> 0xbU)) 
                                                           << 0xbU)) 
                                                       | ((0x400U 
                                                           & ((vlSelf->f
                                                               [9U]
                                                                ? 
                                                               (vlSelf->a
                                                                [9U] 
                                                                >> 5U)
                                                                : 
                                                               (vlSelf->a
                                                                [9U] 
                                                                >> 0xaU)) 
                                                              << 0xaU)) 
                                                          | ((0x200U 
                                                              & ((vlSelf->f
                                                                  [9U]
                                                                   ? 
                                                                  (vlSelf->a
                                                                   [9U] 
                                                                   >> 6U)
                                                                   : 
                                                                  (vlSelf->a
                                                                   [9U] 
                                                                   >> 9U)) 
                                                                 << 9U)) 
                                                             | ((0x100U 
                                                                 & ((vlSelf->f
                                                                     [9U]
                                                                      ? 
                                                                     (vlSelf->a
                                                                      [9U] 
                                                                      >> 7U)
                                                                      : 
                                                                     (vlSelf->a
                                                                      [9U] 
                                                                      >> 8U)) 
                                                                    << 8U)) 
                                                                | ((0x80U 
                                                                    & ((vlSelf->f
                                                                        [9U]
                                                                         ? 
                                                                        (vlSelf->a
                                                                         [9U] 
                                                                         >> 8U)
                                                                         : 
                                                                        (vlSelf->a
                                                                         [9U] 
                                                                         >> 7U)) 
                                                                       << 7U)) 
                                                                   | ((0x40U 
                                                                       & ((vlSelf->f
                                                                           [9U]
                                                                            ? 
                                                                           (vlSelf->a
                                                                            [9U] 
                                                                            >> 9U)
                                                                            : 
                                                                           (vlSelf->a
                                                                            [9U] 
                                                                            >> 6U)) 
                                                                          << 6U)) 
                                                                      | ((0x20U 
                                                                          & ((vlSelf->f
                                                                              [9U]
                                                                               ? 
                                                                              (vlSelf->a
                                                                               [9U] 
                                                                               >> 0xaU)
                                                                               : 
                                                                              (vlSelf->a
                                                                               [9U] 
                                                                               >> 5U)) 
                                                                             << 5U)) 
                                                                         | ((0x10U 
                                                                             & ((vlSelf->f
                                                                                [9U]
                                                                                 ? 
                                                                                (vlSelf->a
                                                                                [9U] 
                                                                                >> 0xbU)
                                                                                 : 
                                                                                (vlSelf->a
                                                                                [9U] 
                                                                                >> 4U)) 
                                                                                << 4U)) 
                                                                            | ((8U 
                                                                                & ((vlSelf->f
                                                                                [9U]
                                                                                 ? 
                                                                                (vlSelf->a
                                                                                [9U] 
                                                                                >> 0xcU)
                                                                                 : 
                                                                                (vlSelf->a
                                                                                [9U] 
                                                                                >> 3U)) 
                                                                                << 3U)) 
                                                                               | ((4U 
                                                                                & ((vlSelf->f
                                                                                [9U]
                                                                                 ? 
                                                                                (vlSelf->a
                                                                                [9U] 
                                                                                >> 0xdU)
                                                                                 : 
                                                                                (vlSelf->a
                                                                                [9U] 
                                                                                >> 2U)) 
                                                                                << 2U)) 
                                                                                | ((2U 
                                                                                & ((vlSelf->f
                                                                                [9U]
                                                                                 ? 
                                                                                (vlSelf->a
                                                                                [9U] 
                                                                                >> 0xeU)
                                                                                 : 
                                                                                (vlSelf->a
                                                                                [9U] 
                                                                                >> 1U)) 
                                                                                << 1U)) 
                                                                                | (1U 
                                                                                & (vlSelf->f
                                                                                [9U]
                                                                                 ? 
                                                                                (vlSelf->a
                                                                                [9U] 
                                                                                >> 0xfU)
                                                                                 : 
                                                                                vlSelf->a
                                                                                [9U])))))))))))))))));
    vlSelf->b[0xaU] = ((0x8000U & ((vlSelf->f[0xaU]
                                     ? vlSelf->a[0xaU]
                                     : (vlSelf->a[0xaU] 
                                        >> 0xfU)) << 0xfU)) 
                       | ((0x4000U & ((vlSelf->f[0xaU]
                                        ? (vlSelf->a
                                           [0xaU] >> 1U)
                                        : (vlSelf->a
                                           [0xaU] >> 0xeU)) 
                                      << 0xeU)) | (
                                                   (0x2000U 
                                                    & ((vlSelf->f
                                                        [0xaU]
                                                         ? 
                                                        (vlSelf->a
                                                         [0xaU] 
                                                         >> 2U)
                                                         : 
                                                        (vlSelf->a
                                                         [0xaU] 
                                                         >> 0xdU)) 
                                                       << 0xdU)) 
                                                   | ((0x1000U 
                                                       & ((vlSelf->f
                                                           [0xaU]
                                                            ? 
                                                           (vlSelf->a
                                                            [0xaU] 
                                                            >> 3U)
                                                            : 
                                                           (vlSelf->a
                                                            [0xaU] 
                                                            >> 0xcU)) 
                                                          << 0xcU)) 
                                                      | ((0x800U 
                                                          & ((vlSelf->f
                                                              [0xaU]
                                                               ? 
                                                              (vlSelf->a
                                                               [0xaU] 
                                                               >> 4U)
                                                               : 
                                                              (vlSelf->a
                                                               [0xaU] 
                                                               >> 0xbU)) 
                                                             << 0xbU)) 
                                                         | ((0x400U 
                                                             & ((vlSelf->f
                                                                 [0xaU]
                                                                  ? 
                                                                 (vlSelf->a
                                                                  [0xaU] 
                                                                  >> 5U)
                                                                  : 
                                                                 (vlSelf->a
                                                                  [0xaU] 
                                                                  >> 0xaU)) 
                                                                << 0xaU)) 
                                                            | ((0x200U 
                                                                & ((vlSelf->f
                                                                    [0xaU]
                                                                     ? 
                                                                    (vlSelf->a
                                                                     [0xaU] 
                                                                     >> 6U)
                                                                     : 
                                                                    (vlSelf->a
                                                                     [0xaU] 
                                                                     >> 9U)) 
                                                                   << 9U)) 
                                                               | ((0x100U 
                                                                   & ((vlSelf->f
                                                                       [0xaU]
                                                                        ? 
                                                                       (vlSelf->a
                                                                        [0xaU] 
                                                                        >> 7U)
                                                                        : 
                                                                       (vlSelf->a
                                                                        [0xaU] 
                                                                        >> 8U)) 
                                                                      << 8U)) 
                                                                  | ((0x80U 
                                                                      & ((vlSelf->f
                                                                          [0xaU]
                                                                           ? 
                                                                          (vlSelf->a
                                                                           [0xaU] 
                                                                           >> 8U)
                                                                           : 
                                                                          (vlSelf->a
                                                                           [0xaU] 
                                                                           >> 7U)) 
                                                                         << 7U)) 
                                                                     | ((0x40U 
                                                                         & ((vlSelf->f
                                                                             [0xaU]
                                                                              ? 
                                                                             (vlSelf->a
                                                                              [0xaU] 
                                                                              >> 9U)
                                                                              : 
                                                                             (vlSelf->a
                                                                              [0xaU] 
                                                                              >> 6U)) 
                                                                            << 6U)) 
                                                                        | ((0x20U 
                                                                            & ((vlSelf->f
                                                                                [0xaU]
                                                                                 ? 
                                                                                (vlSelf->a
                                                                                [0xaU] 
                                                                                >> 0xaU)
                                                                                 : 
                                                                                (vlSelf->a
                                                                                [0xaU] 
                                                                                >> 5U)) 
                                                                               << 5U)) 
                                                                           | ((0x10U 
                                                                               & ((vlSelf->f
                                                                                [0xaU]
                                                                                 ? 
                                                                                (vlSelf->a
                                                                                [0xaU] 
                                                                                >> 0xbU)
                                                                                 : 
                                                                                (vlSelf->a
                                                                                [0xaU] 
                                                                                >> 4U)) 
                                                                                << 4U)) 
                                                                              | ((8U 
                                                                                & ((vlSelf->f
                                                                                [0xaU]
                                                                                 ? 
                                                                                (vlSelf->a
                                                                                [0xaU] 
                                                                                >> 0xcU)
                                                                                 : 
                                                                                (vlSelf->a
                                                                                [0xaU] 
                                                                                >> 3U)) 
                                                                                << 3U)) 
                                                                                | ((4U 
                                                                                & ((vlSelf->f
                                                                                [0xaU]
                                                                                 ? 
                                                                                (vlSelf->a
                                                                                [0xaU] 
                                                                                >> 0xdU)
                                                                                 : 
                                                                                (vlSelf->a
                                                                                [0xaU] 
                                                                                >> 2U)) 
                                                                                << 2U)) 
                                                                                | ((2U 
                                                                                & ((vlSelf->f
                                                                                [0xaU]
                                                                                 ? 
                                                                                (vlSelf->a
                                                                                [0xaU] 
                                                                                >> 0xeU)
                                                                                 : 
                                                                                (vlSelf->a
                                                                                [0xaU] 
                                                                                >> 1U)) 
                                                                                << 1U)) 
                                                                                | (1U 
                                                                                & (vlSelf->f
                                                                                [0xaU]
                                                                                 ? 
                                                                                (vlSelf->a
                                                                                [0xaU] 
                                                                                >> 0xfU)
                                                                                 : 
                                                                                vlSelf->a
                                                                                [0xaU])))))))))))))))));
    vlSelf->b[0xbU] = ((0x8000U & ((vlSelf->f[0xbU]
                                     ? vlSelf->a[0xbU]
                                     : (vlSelf->a[0xbU] 
                                        >> 0xfU)) << 0xfU)) 
                       | ((0x4000U & ((vlSelf->f[0xbU]
                                        ? (vlSelf->a
                                           [0xbU] >> 1U)
                                        : (vlSelf->a
                                           [0xbU] >> 0xeU)) 
                                      << 0xeU)) | (
                                                   (0x2000U 
                                                    & ((vlSelf->f
                                                        [0xbU]
                                                         ? 
                                                        (vlSelf->a
                                                         [0xbU] 
                                                         >> 2U)
                                                         : 
                                                        (vlSelf->a
                                                         [0xbU] 
                                                         >> 0xdU)) 
                                                       << 0xdU)) 
                                                   | ((0x1000U 
                                                       & ((vlSelf->f
                                                           [0xbU]
                                                            ? 
                                                           (vlSelf->a
                                                            [0xbU] 
                                                            >> 3U)
                                                            : 
                                                           (vlSelf->a
                                                            [0xbU] 
                                                            >> 0xcU)) 
                                                          << 0xcU)) 
                                                      | ((0x800U 
                                                          & ((vlSelf->f
                                                              [0xbU]
                                                               ? 
                                                              (vlSelf->a
                                                               [0xbU] 
                                                               >> 4U)
                                                               : 
                                                              (vlSelf->a
                                                               [0xbU] 
                                                               >> 0xbU)) 
                                                             << 0xbU)) 
                                                         | ((0x400U 
                                                             & ((vlSelf->f
                                                                 [0xbU]
                                                                  ? 
                                                                 (vlSelf->a
                                                                  [0xbU] 
                                                                  >> 5U)
                                                                  : 
                                                                 (vlSelf->a
                                                                  [0xbU] 
                                                                  >> 0xaU)) 
                                                                << 0xaU)) 
                                                            | ((0x200U 
                                                                & ((vlSelf->f
                                                                    [0xbU]
                                                                     ? 
                                                                    (vlSelf->a
                                                                     [0xbU] 
                                                                     >> 6U)
                                                                     : 
                                                                    (vlSelf->a
                                                                     [0xbU] 
                                                                     >> 9U)) 
                                                                   << 9U)) 
                                                               | ((0x100U 
                                                                   & ((vlSelf->f
                                                                       [0xbU]
                                                                        ? 
                                                                       (vlSelf->a
                                                                        [0xbU] 
                                                                        >> 7U)
                                                                        : 
                                                                       (vlSelf->a
                                                                        [0xbU] 
                                                                        >> 8U)) 
                                                                      << 8U)) 
                                                                  | ((0x80U 
                                                                      & ((vlSelf->f
                                                                          [0xbU]
                                                                           ? 
                                                                          (vlSelf->a
                                                                           [0xbU] 
                                                                           >> 8U)
                                                                           : 
                                                                          (vlSelf->a
                                                                           [0xbU] 
                                                                           >> 7U)) 
                                                                         << 7U)) 
                                                                     | ((0x40U 
                                                                         & ((vlSelf->f
                                                                             [0xbU]
                                                                              ? 
                                                                             (vlSelf->a
                                                                              [0xbU] 
                                                                              >> 9U)
                                                                              : 
                                                                             (vlSelf->a
                                                                              [0xbU] 
                                                                              >> 6U)) 
                                                                            << 6U)) 
                                                                        | ((0x20U 
                                                                            & ((vlSelf->f
                                                                                [0xbU]
                                                                                 ? 
                                                                                (vlSelf->a
                                                                                [0xbU] 
                                                                                >> 0xaU)
                                                                                 : 
                                                                                (vlSelf->a
                                                                                [0xbU] 
                                                                                >> 5U)) 
                                                                               << 5U)) 
                                                                           | ((0x10U 
                                                                               & ((vlSelf->f
                                                                                [0xbU]
                                                                                 ? 
                                                                                (vlSelf->a
                                                                                [0xbU] 
                                                                                >> 0xbU)
                                                                                 : 
                                                                                (vlSelf->a
                                                                                [0xbU] 
                                                                                >> 4U)) 
                                                                                << 4U)) 
                                                                              | ((8U 
                                                                                & ((vlSelf->f
                                                                                [0xbU]
                                                                                 ? 
                                                                                (vlSelf->a
                                                                                [0xbU] 
                                                                                >> 0xcU)
                                                                                 : 
                                                                                (vlSelf->a
                                                                                [0xbU] 
                                                                                >> 3U)) 
                                                                                << 3U)) 
                                                                                | ((4U 
                                                                                & ((vlSelf->f
                                                                                [0xbU]
                                                                                 ? 
                                                                                (vlSelf->a
                                                                                [0xbU] 
                                                                                >> 0xdU)
                                                                                 : 
                                                                                (vlSelf->a
                                                                                [0xbU] 
                                                                                >> 2U)) 
                                                                                << 2U)) 
                                                                                | ((2U 
                                                                                & ((vlSelf->f
                                                                                [0xbU]
                                                                                 ? 
                                                                                (vlSelf->a
                                                                                [0xbU] 
                                                                                >> 0xeU)
                                                                                 : 
                                                                                (vlSelf->a
                                                                                [0xbU] 
                                                                                >> 1U)) 
                                                                                << 1U)) 
                                                                                | (1U 
                                                                                & (vlSelf->f
                                                                                [0xbU]
                                                                                 ? 
                                                                                (vlSelf->a
                                                                                [0xbU] 
                                                                                >> 0xfU)
                                                                                 : 
                                                                                vlSelf->a
                                                                                [0xbU])))))))))))))))));
    vlSelf->b[0xcU] = ((0x8000U & ((vlSelf->f[0xcU]
                                     ? vlSelf->a[0xcU]
                                     : (vlSelf->a[0xcU] 
                                        >> 0xfU)) << 0xfU)) 
                       | ((0x4000U & ((vlSelf->f[0xcU]
                                        ? (vlSelf->a
                                           [0xcU] >> 1U)
                                        : (vlSelf->a
                                           [0xcU] >> 0xeU)) 
                                      << 0xeU)) | (
                                                   (0x2000U 
                                                    & ((vlSelf->f
                                                        [0xcU]
                                                         ? 
                                                        (vlSelf->a
                                                         [0xcU] 
                                                         >> 2U)
                                                         : 
                                                        (vlSelf->a
                                                         [0xcU] 
                                                         >> 0xdU)) 
                                                       << 0xdU)) 
                                                   | ((0x1000U 
                                                       & ((vlSelf->f
                                                           [0xcU]
                                                            ? 
                                                           (vlSelf->a
                                                            [0xcU] 
                                                            >> 3U)
                                                            : 
                                                           (vlSelf->a
                                                            [0xcU] 
                                                            >> 0xcU)) 
                                                          << 0xcU)) 
                                                      | ((0x800U 
                                                          & ((vlSelf->f
                                                              [0xcU]
                                                               ? 
                                                              (vlSelf->a
                                                               [0xcU] 
                                                               >> 4U)
                                                               : 
                                                              (vlSelf->a
                                                               [0xcU] 
                                                               >> 0xbU)) 
                                                             << 0xbU)) 
                                                         | ((0x400U 
                                                             & ((vlSelf->f
                                                                 [0xcU]
                                                                  ? 
                                                                 (vlSelf->a
                                                                  [0xcU] 
                                                                  >> 5U)
                                                                  : 
                                                                 (vlSelf->a
                                                                  [0xcU] 
                                                                  >> 0xaU)) 
                                                                << 0xaU)) 
                                                            | ((0x200U 
                                                                & ((vlSelf->f
                                                                    [0xcU]
                                                                     ? 
                                                                    (vlSelf->a
                                                                     [0xcU] 
                                                                     >> 6U)
                                                                     : 
                                                                    (vlSelf->a
                                                                     [0xcU] 
                                                                     >> 9U)) 
                                                                   << 9U)) 
                                                               | ((0x100U 
                                                                   & ((vlSelf->f
                                                                       [0xcU]
                                                                        ? 
                                                                       (vlSelf->a
                                                                        [0xcU] 
                                                                        >> 7U)
                                                                        : 
                                                                       (vlSelf->a
                                                                        [0xcU] 
                                                                        >> 8U)) 
                                                                      << 8U)) 
                                                                  | ((0x80U 
                                                                      & ((vlSelf->f
                                                                          [0xcU]
                                                                           ? 
                                                                          (vlSelf->a
                                                                           [0xcU] 
                                                                           >> 8U)
                                                                           : 
                                                                          (vlSelf->a
                                                                           [0xcU] 
                                                                           >> 7U)) 
                                                                         << 7U)) 
                                                                     | ((0x40U 
                                                                         & ((vlSelf->f
                                                                             [0xcU]
                                                                              ? 
                                                                             (vlSelf->a
                                                                              [0xcU] 
                                                                              >> 9U)
                                                                              : 
                                                                             (vlSelf->a
                                                                              [0xcU] 
                                                                              >> 6U)) 
                                                                            << 6U)) 
                                                                        | ((0x20U 
                                                                            & ((vlSelf->f
                                                                                [0xcU]
                                                                                 ? 
                                                                                (vlSelf->a
                                                                                [0xcU] 
                                                                                >> 0xaU)
                                                                                 : 
                                                                                (vlSelf->a
                                                                                [0xcU] 
                                                                                >> 5U)) 
                                                                               << 5U)) 
                                                                           | ((0x10U 
                                                                               & ((vlSelf->f
                                                                                [0xcU]
                                                                                 ? 
                                                                                (vlSelf->a
                                                                                [0xcU] 
                                                                                >> 0xbU)
                                                                                 : 
                                                                                (vlSelf->a
                                                                                [0xcU] 
                                                                                >> 4U)) 
                                                                                << 4U)) 
                                                                              | ((8U 
                                                                                & ((vlSelf->f
                                                                                [0xcU]
                                                                                 ? 
                                                                                (vlSelf->a
                                                                                [0xcU] 
                                                                                >> 0xcU)
                                                                                 : 
                                                                                (vlSelf->a
                                                                                [0xcU] 
                                                                                >> 3U)) 
                                                                                << 3U)) 
                                                                                | ((4U 
                                                                                & ((vlSelf->f
                                                                                [0xcU]
                                                                                 ? 
                                                                                (vlSelf->a
                                                                                [0xcU] 
                                                                                >> 0xdU)
                                                                                 : 
                                                                                (vlSelf->a
                                                                                [0xcU] 
                                                                                >> 2U)) 
                                                                                << 2U)) 
                                                                                | ((2U 
                                                                                & ((vlSelf->f
                                                                                [0xcU]
                                                                                 ? 
                                                                                (vlSelf->a
                                                                                [0xcU] 
                                                                                >> 0xeU)
                                                                                 : 
                                                                                (vlSelf->a
                                                                                [0xcU] 
                                                                                >> 1U)) 
                                                                                << 1U)) 
                                                                                | (1U 
                                                                                & (vlSelf->f
                                                                                [0xcU]
                                                                                 ? 
                                                                                (vlSelf->a
                                                                                [0xcU] 
                                                                                >> 0xfU)
                                                                                 : 
                                                                                vlSelf->a
                                                                                [0xcU])))))))))))))))));
    vlSelf->b[0xdU] = ((0x8000U & ((vlSelf->f[0xdU]
                                     ? vlSelf->a[0xdU]
                                     : (vlSelf->a[0xdU] 
                                        >> 0xfU)) << 0xfU)) 
                       | ((0x4000U & ((vlSelf->f[0xdU]
                                        ? (vlSelf->a
                                           [0xdU] >> 1U)
                                        : (vlSelf->a
                                           [0xdU] >> 0xeU)) 
                                      << 0xeU)) | (
                                                   (0x2000U 
                                                    & ((vlSelf->f
                                                        [0xdU]
                                                         ? 
                                                        (vlSelf->a
                                                         [0xdU] 
                                                         >> 2U)
                                                         : 
                                                        (vlSelf->a
                                                         [0xdU] 
                                                         >> 0xdU)) 
                                                       << 0xdU)) 
                                                   | ((0x1000U 
                                                       & ((vlSelf->f
                                                           [0xdU]
                                                            ? 
                                                           (vlSelf->a
                                                            [0xdU] 
                                                            >> 3U)
                                                            : 
                                                           (vlSelf->a
                                                            [0xdU] 
                                                            >> 0xcU)) 
                                                          << 0xcU)) 
                                                      | ((0x800U 
                                                          & ((vlSelf->f
                                                              [0xdU]
                                                               ? 
                                                              (vlSelf->a
                                                               [0xdU] 
                                                               >> 4U)
                                                               : 
                                                              (vlSelf->a
                                                               [0xdU] 
                                                               >> 0xbU)) 
                                                             << 0xbU)) 
                                                         | ((0x400U 
                                                             & ((vlSelf->f
                                                                 [0xdU]
                                                                  ? 
                                                                 (vlSelf->a
                                                                  [0xdU] 
                                                                  >> 5U)
                                                                  : 
                                                                 (vlSelf->a
                                                                  [0xdU] 
                                                                  >> 0xaU)) 
                                                                << 0xaU)) 
                                                            | ((0x200U 
                                                                & ((vlSelf->f
                                                                    [0xdU]
                                                                     ? 
                                                                    (vlSelf->a
                                                                     [0xdU] 
                                                                     >> 6U)
                                                                     : 
                                                                    (vlSelf->a
                                                                     [0xdU] 
                                                                     >> 9U)) 
                                                                   << 9U)) 
                                                               | ((0x100U 
                                                                   & ((vlSelf->f
                                                                       [0xdU]
                                                                        ? 
                                                                       (vlSelf->a
                                                                        [0xdU] 
                                                                        >> 7U)
                                                                        : 
                                                                       (vlSelf->a
                                                                        [0xdU] 
                                                                        >> 8U)) 
                                                                      << 8U)) 
                                                                  | ((0x80U 
                                                                      & ((vlSelf->f
                                                                          [0xdU]
                                                                           ? 
                                                                          (vlSelf->a
                                                                           [0xdU] 
                                                                           >> 8U)
                                                                           : 
                                                                          (vlSelf->a
                                                                           [0xdU] 
                                                                           >> 7U)) 
                                                                         << 7U)) 
                                                                     | ((0x40U 
                                                                         & ((vlSelf->f
                                                                             [0xdU]
                                                                              ? 
                                                                             (vlSelf->a
                                                                              [0xdU] 
                                                                              >> 9U)
                                                                              : 
                                                                             (vlSelf->a
                                                                              [0xdU] 
                                                                              >> 6U)) 
                                                                            << 6U)) 
                                                                        | ((0x20U 
                                                                            & ((vlSelf->f
                                                                                [0xdU]
                                                                                 ? 
                                                                                (vlSelf->a
                                                                                [0xdU] 
                                                                                >> 0xaU)
                                                                                 : 
                                                                                (vlSelf->a
                                                                                [0xdU] 
                                                                                >> 5U)) 
                                                                               << 5U)) 
                                                                           | ((0x10U 
                                                                               & ((vlSelf->f
                                                                                [0xdU]
                                                                                 ? 
                                                                                (vlSelf->a
                                                                                [0xdU] 
                                                                                >> 0xbU)
                                                                                 : 
                                                                                (vlSelf->a
                                                                                [0xdU] 
                                                                                >> 4U)) 
                                                                                << 4U)) 
                                                                              | ((8U 
                                                                                & ((vlSelf->f
                                                                                [0xdU]
                                                                                 ? 
                                                                                (vlSelf->a
                                                                                [0xdU] 
                                                                                >> 0xcU)
                                                                                 : 
                                                                                (vlSelf->a
                                                                                [0xdU] 
                                                                                >> 3U)) 
                                                                                << 3U)) 
                                                                                | ((4U 
                                                                                & ((vlSelf->f
                                                                                [0xdU]
                                                                                 ? 
                                                                                (vlSelf->a
                                                                                [0xdU] 
                                                                                >> 0xdU)
                                                                                 : 
                                                                                (vlSelf->a
                                                                                [0xdU] 
                                                                                >> 2U)) 
                                                                                << 2U)) 
                                                                                | ((2U 
                                                                                & ((vlSelf->f
                                                                                [0xdU]
                                                                                 ? 
                                                                                (vlSelf->a
                                                                                [0xdU] 
                                                                                >> 0xeU)
                                                                                 : 
                                                                                (vlSelf->a
                                                                                [0xdU] 
                                                                                >> 1U)) 
                                                                                << 1U)) 
                                                                                | (1U 
                                                                                & (vlSelf->f
                                                                                [0xdU]
                                                                                 ? 
                                                                                (vlSelf->a
                                                                                [0xdU] 
                                                                                >> 0xfU)
                                                                                 : 
                                                                                vlSelf->a
                                                                                [0xdU])))))))))))))))));
    vlSelf->b[0xeU] = ((0x8000U & ((vlSelf->f[0xeU]
                                     ? vlSelf->a[0xeU]
                                     : (vlSelf->a[0xeU] 
                                        >> 0xfU)) << 0xfU)) 
                       | ((0x4000U & ((vlSelf->f[0xeU]
                                        ? (vlSelf->a
                                           [0xeU] >> 1U)
                                        : (vlSelf->a
                                           [0xeU] >> 0xeU)) 
                                      << 0xeU)) | (
                                                   (0x2000U 
                                                    & ((vlSelf->f
                                                        [0xeU]
                                                         ? 
                                                        (vlSelf->a
                                                         [0xeU] 
                                                         >> 2U)
                                                         : 
                                                        (vlSelf->a
                                                         [0xeU] 
                                                         >> 0xdU)) 
                                                       << 0xdU)) 
                                                   | ((0x1000U 
                                                       & ((vlSelf->f
                                                           [0xeU]
                                                            ? 
                                                           (vlSelf->a
                                                            [0xeU] 
                                                            >> 3U)
                                                            : 
                                                           (vlSelf->a
                                                            [0xeU] 
                                                            >> 0xcU)) 
                                                          << 0xcU)) 
                                                      | ((0x800U 
                                                          & ((vlSelf->f
                                                              [0xeU]
                                                               ? 
                                                              (vlSelf->a
                                                               [0xeU] 
                                                               >> 4U)
                                                               : 
                                                              (vlSelf->a
                                                               [0xeU] 
                                                               >> 0xbU)) 
                                                             << 0xbU)) 
                                                         | ((0x400U 
                                                             & ((vlSelf->f
                                                                 [0xeU]
                                                                  ? 
                                                                 (vlSelf->a
                                                                  [0xeU] 
                                                                  >> 5U)
                                                                  : 
                                                                 (vlSelf->a
                                                                  [0xeU] 
                                                                  >> 0xaU)) 
                                                                << 0xaU)) 
                                                            | ((0x200U 
                                                                & ((vlSelf->f
                                                                    [0xeU]
                                                                     ? 
                                                                    (vlSelf->a
                                                                     [0xeU] 
                                                                     >> 6U)
                                                                     : 
                                                                    (vlSelf->a
                                                                     [0xeU] 
                                                                     >> 9U)) 
                                                                   << 9U)) 
                                                               | ((0x100U 
                                                                   & ((vlSelf->f
                                                                       [0xeU]
                                                                        ? 
                                                                       (vlSelf->a
                                                                        [0xeU] 
                                                                        >> 7U)
                                                                        : 
                                                                       (vlSelf->a
                                                                        [0xeU] 
                                                                        >> 8U)) 
                                                                      << 8U)) 
                                                                  | ((0x80U 
                                                                      & ((vlSelf->f
                                                                          [0xeU]
                                                                           ? 
                                                                          (vlSelf->a
                                                                           [0xeU] 
                                                                           >> 8U)
                                                                           : 
                                                                          (vlSelf->a
                                                                           [0xeU] 
                                                                           >> 7U)) 
                                                                         << 7U)) 
                                                                     | ((0x40U 
                                                                         & ((vlSelf->f
                                                                             [0xeU]
                                                                              ? 
                                                                             (vlSelf->a
                                                                              [0xeU] 
                                                                              >> 9U)
                                                                              : 
                                                                             (vlSelf->a
                                                                              [0xeU] 
                                                                              >> 6U)) 
                                                                            << 6U)) 
                                                                        | ((0x20U 
                                                                            & ((vlSelf->f
                                                                                [0xeU]
                                                                                 ? 
                                                                                (vlSelf->a
                                                                                [0xeU] 
                                                                                >> 0xaU)
                                                                                 : 
                                                                                (vlSelf->a
                                                                                [0xeU] 
                                                                                >> 5U)) 
                                                                               << 5U)) 
                                                                           | ((0x10U 
                                                                               & ((vlSelf->f
                                                                                [0xeU]
                                                                                 ? 
                                                                                (vlSelf->a
                                                                                [0xeU] 
                                                                                >> 0xbU)
                                                                                 : 
                                                                                (vlSelf->a
                                                                                [0xeU] 
                                                                                >> 4U)) 
                                                                                << 4U)) 
                                                                              | ((8U 
                                                                                & ((vlSelf->f
                                                                                [0xeU]
                                                                                 ? 
                                                                                (vlSelf->a
                                                                                [0xeU] 
                                                                                >> 0xcU)
                                                                                 : 
                                                                                (vlSelf->a
                                                                                [0xeU] 
                                                                                >> 3U)) 
                                                                                << 3U)) 
                                                                                | ((4U 
                                                                                & ((vlSelf->f
                                                                                [0xeU]
                                                                                 ? 
                                                                                (vlSelf->a
                                                                                [0xeU] 
                                                                                >> 0xdU)
                                                                                 : 
                                                                                (vlSelf->a
                                                                                [0xeU] 
                                                                                >> 2U)) 
                                                                                << 2U)) 
                                                                                | ((2U 
                                                                                & ((vlSelf->f
                                                                                [0xeU]
                                                                                 ? 
                                                                                (vlSelf->a
                                                                                [0xeU] 
                                                                                >> 0xeU)
                                                                                 : 
                                                                                (vlSelf->a
                                                                                [0xeU] 
                                                                                >> 1U)) 
                                                                                << 1U)) 
                                                                                | (1U 
                                                                                & (vlSelf->f
                                                                                [0xeU]
                                                                                 ? 
                                                                                (vlSelf->a
                                                                                [0xeU] 
                                                                                >> 0xfU)
                                                                                 : 
                                                                                vlSelf->a
                                                                                [0xeU])))))))))))))))));
    vlSelf->b[0xfU] = ((0x8000U & ((vlSelf->f[0xfU]
                                     ? vlSelf->a[0xfU]
                                     : (vlSelf->a[0xfU] 
                                        >> 0xfU)) << 0xfU)) 
                       | ((0x4000U & ((vlSelf->f[0xfU]
                                        ? (vlSelf->a
                                           [0xfU] >> 1U)
                                        : (vlSelf->a
                                           [0xfU] >> 0xeU)) 
                                      << 0xeU)) | (
                                                   (0x2000U 
                                                    & ((vlSelf->f
                                                        [0xfU]
                                                         ? 
                                                        (vlSelf->a
                                                         [0xfU] 
                                                         >> 2U)
                                                         : 
                                                        (vlSelf->a
                                                         [0xfU] 
                                                         >> 0xdU)) 
                                                       << 0xdU)) 
                                                   | ((0x1000U 
                                                       & ((vlSelf->f
                                                           [0xfU]
                                                            ? 
                                                           (vlSelf->a
                                                            [0xfU] 
                                                            >> 3U)
                                                            : 
                                                           (vlSelf->a
                                                            [0xfU] 
                                                            >> 0xcU)) 
                                                          << 0xcU)) 
                                                      | ((0x800U 
                                                          & ((vlSelf->f
                                                              [0xfU]
                                                               ? 
                                                              (vlSelf->a
                                                               [0xfU] 
                                                               >> 4U)
                                                               : 
                                                              (vlSelf->a
                                                               [0xfU] 
                                                               >> 0xbU)) 
                                                             << 0xbU)) 
                                                         | ((0x400U 
                                                             & ((vlSelf->f
                                                                 [0xfU]
                                                                  ? 
                                                                 (vlSelf->a
                                                                  [0xfU] 
                                                                  >> 5U)
                                                                  : 
                                                                 (vlSelf->a
                                                                  [0xfU] 
                                                                  >> 0xaU)) 
                                                                << 0xaU)) 
                                                            | ((0x200U 
                                                                & ((vlSelf->f
                                                                    [0xfU]
                                                                     ? 
                                                                    (vlSelf->a
                                                                     [0xfU] 
                                                                     >> 6U)
                                                                     : 
                                                                    (vlSelf->a
                                                                     [0xfU] 
                                                                     >> 9U)) 
                                                                   << 9U)) 
                                                               | ((0x100U 
                                                                   & ((vlSelf->f
                                                                       [0xfU]
                                                                        ? 
                                                                       (vlSelf->a
                                                                        [0xfU] 
                                                                        >> 7U)
                                                                        : 
                                                                       (vlSelf->a
                                                                        [0xfU] 
                                                                        >> 8U)) 
                                                                      << 8U)) 
                                                                  | ((0x80U 
                                                                      & ((vlSelf->f
                                                                          [0xfU]
                                                                           ? 
                                                                          (vlSelf->a
                                                                           [0xfU] 
                                                                           >> 8U)
                                                                           : 
                                                                          (vlSelf->a
                                                                           [0xfU] 
                                                                           >> 7U)) 
                                                                         << 7U)) 
                                                                     | ((0x40U 
                                                                         & ((vlSelf->f
                                                                             [0xfU]
                                                                              ? 
                                                                             (vlSelf->a
                                                                              [0xfU] 
                                                                              >> 9U)
                                                                              : 
                                                                             (vlSelf->a
                                                                              [0xfU] 
                                                                              >> 6U)) 
                                                                            << 6U)) 
                                                                        | ((0x20U 
                                                                            & ((vlSelf->f
                                                                                [0xfU]
                                                                                 ? 
                                                                                (vlSelf->a
                                                                                [0xfU] 
                                                                                >> 0xaU)
                                                                                 : 
                                                                                (vlSelf->a
                                                                                [0xfU] 
                                                                                >> 5U)) 
                                                                               << 5U)) 
                                                                           | ((0x10U 
                                                                               & ((vlSelf->f
                                                                                [0xfU]
                                                                                 ? 
                                                                                (vlSelf->a
                                                                                [0xfU] 
                                                                                >> 0xbU)
                                                                                 : 
                                                                                (vlSelf->a
                                                                                [0xfU] 
                                                                                >> 4U)) 
                                                                                << 4U)) 
                                                                              | ((8U 
                                                                                & ((vlSelf->f
                                                                                [0xfU]
                                                                                 ? 
                                                                                (vlSelf->a
                                                                                [0xfU] 
                                                                                >> 0xcU)
                                                                                 : 
                                                                                (vlSelf->a
                                                                                [0xfU] 
                                                                                >> 3U)) 
                                                                                << 3U)) 
                                                                                | ((4U 
                                                                                & ((vlSelf->f
                                                                                [0xfU]
                                                                                 ? 
                                                                                (vlSelf->a
                                                                                [0xfU] 
                                                                                >> 0xdU)
                                                                                 : 
                                                                                (vlSelf->a
                                                                                [0xfU] 
                                                                                >> 2U)) 
                                                                                << 2U)) 
                                                                                | ((2U 
                                                                                & ((vlSelf->f
                                                                                [0xfU]
                                                                                 ? 
                                                                                (vlSelf->a
                                                                                [0xfU] 
                                                                                >> 0xeU)
                                                                                 : 
                                                                                (vlSelf->a
                                                                                [0xfU] 
                                                                                >> 1U)) 
                                                                                << 1U)) 
                                                                                | (1U 
                                                                                & (vlSelf->f
                                                                                [0xfU]
                                                                                 ? 
                                                                                (vlSelf->a
                                                                                [0xfU] 
                                                                                >> 0xfU)
                                                                                 : 
                                                                                vlSelf->a
                                                                                [0xfU])))))))))))))))));
}

void Vmecanismo_flipping_bloque___024root___eval_triggers__ico(Vmecanismo_flipping_bloque___024root* vlSelf);

bool Vmecanismo_flipping_bloque___024root___eval_phase__ico(Vmecanismo_flipping_bloque___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vmecanismo_flipping_bloque__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmecanismo_flipping_bloque___024root___eval_phase__ico\n"); );
    // Init
    CData/*0:0*/ __VicoExecute;
    // Body
    Vmecanismo_flipping_bloque___024root___eval_triggers__ico(vlSelf);
    __VicoExecute = vlSelf->__VicoTriggered.any();
    if (__VicoExecute) {
        Vmecanismo_flipping_bloque___024root___eval_ico(vlSelf);
    }
    return (__VicoExecute);
}

void Vmecanismo_flipping_bloque___024root___eval_act(Vmecanismo_flipping_bloque___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vmecanismo_flipping_bloque__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmecanismo_flipping_bloque___024root___eval_act\n"); );
}

void Vmecanismo_flipping_bloque___024root___eval_nba(Vmecanismo_flipping_bloque___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vmecanismo_flipping_bloque__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmecanismo_flipping_bloque___024root___eval_nba\n"); );
}

void Vmecanismo_flipping_bloque___024root___eval_triggers__act(Vmecanismo_flipping_bloque___024root* vlSelf);

bool Vmecanismo_flipping_bloque___024root___eval_phase__act(Vmecanismo_flipping_bloque___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vmecanismo_flipping_bloque__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmecanismo_flipping_bloque___024root___eval_phase__act\n"); );
    // Init
    VlTriggerVec<0> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vmecanismo_flipping_bloque___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelf->__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
        vlSelf->__VnbaTriggered.thisOr(vlSelf->__VactTriggered);
        Vmecanismo_flipping_bloque___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vmecanismo_flipping_bloque___024root___eval_phase__nba(Vmecanismo_flipping_bloque___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vmecanismo_flipping_bloque__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmecanismo_flipping_bloque___024root___eval_phase__nba\n"); );
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelf->__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vmecanismo_flipping_bloque___024root___eval_nba(vlSelf);
        vlSelf->__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vmecanismo_flipping_bloque___024root___dump_triggers__ico(Vmecanismo_flipping_bloque___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vmecanismo_flipping_bloque___024root___dump_triggers__nba(Vmecanismo_flipping_bloque___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vmecanismo_flipping_bloque___024root___dump_triggers__act(Vmecanismo_flipping_bloque___024root* vlSelf);
#endif  // VL_DEBUG

void Vmecanismo_flipping_bloque___024root___eval(Vmecanismo_flipping_bloque___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vmecanismo_flipping_bloque__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmecanismo_flipping_bloque___024root___eval\n"); );
    // Init
    IData/*31:0*/ __VicoIterCount;
    CData/*0:0*/ __VicoContinue;
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VicoIterCount = 0U;
    vlSelf->__VicoFirstIteration = 1U;
    __VicoContinue = 1U;
    while (__VicoContinue) {
        if (VL_UNLIKELY((0x64U < __VicoIterCount))) {
#ifdef VL_DEBUG
            Vmecanismo_flipping_bloque___024root___dump_triggers__ico(vlSelf);
#endif
            VL_FATAL_MT("mecanismo_flipping_bloque.sv", 3, "", "Input combinational region did not converge.");
        }
        __VicoIterCount = ((IData)(1U) + __VicoIterCount);
        __VicoContinue = 0U;
        if (Vmecanismo_flipping_bloque___024root___eval_phase__ico(vlSelf)) {
            __VicoContinue = 1U;
        }
        vlSelf->__VicoFirstIteration = 0U;
    }
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
            Vmecanismo_flipping_bloque___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("mecanismo_flipping_bloque.sv", 3, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                Vmecanismo_flipping_bloque___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("mecanismo_flipping_bloque.sv", 3, "", "Active region did not converge.");
            }
            vlSelf->__VactIterCount = ((IData)(1U) 
                                       + vlSelf->__VactIterCount);
            vlSelf->__VactContinue = 0U;
            if (Vmecanismo_flipping_bloque___024root___eval_phase__act(vlSelf)) {
                vlSelf->__VactContinue = 1U;
            }
        }
        if (Vmecanismo_flipping_bloque___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vmecanismo_flipping_bloque___024root___eval_debug_assertions(Vmecanismo_flipping_bloque___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vmecanismo_flipping_bloque__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmecanismo_flipping_bloque___024root___eval_debug_assertions\n"); );
}
#endif  // VL_DEBUG
