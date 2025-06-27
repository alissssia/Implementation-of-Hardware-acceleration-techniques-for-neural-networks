// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vmecanismo_flipping_bloque.h for the primary calling header

#ifndef VERILATED_VMECANISMO_FLIPPING_BLOQUE___024ROOT_H_
#define VERILATED_VMECANISMO_FLIPPING_BLOQUE___024ROOT_H_  // guard

#include "verilated.h"
class Vmecanismo_flipping_bloque_mecanismo_flipping_uno;


class Vmecanismo_flipping_bloque__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vmecanismo_flipping_bloque___024root final : public VerilatedModule {
  public:
    // CELLS
    Vmecanismo_flipping_bloque_mecanismo_flipping_uno* __PVT__mecanismo_flipping_bloque__DOT__genblk1__BRA__0__KET____DOT__u0;
    Vmecanismo_flipping_bloque_mecanismo_flipping_uno* __PVT__mecanismo_flipping_bloque__DOT__genblk1__BRA__1__KET____DOT__u0;
    Vmecanismo_flipping_bloque_mecanismo_flipping_uno* __PVT__mecanismo_flipping_bloque__DOT__genblk1__BRA__2__KET____DOT__u0;
    Vmecanismo_flipping_bloque_mecanismo_flipping_uno* __PVT__mecanismo_flipping_bloque__DOT__genblk1__BRA__3__KET____DOT__u0;
    Vmecanismo_flipping_bloque_mecanismo_flipping_uno* __PVT__mecanismo_flipping_bloque__DOT__genblk1__BRA__4__KET____DOT__u0;
    Vmecanismo_flipping_bloque_mecanismo_flipping_uno* __PVT__mecanismo_flipping_bloque__DOT__genblk1__BRA__5__KET____DOT__u0;
    Vmecanismo_flipping_bloque_mecanismo_flipping_uno* __PVT__mecanismo_flipping_bloque__DOT__genblk1__BRA__6__KET____DOT__u0;
    Vmecanismo_flipping_bloque_mecanismo_flipping_uno* __PVT__mecanismo_flipping_bloque__DOT__genblk1__BRA__7__KET____DOT__u0;
    Vmecanismo_flipping_bloque_mecanismo_flipping_uno* __PVT__mecanismo_flipping_bloque__DOT__genblk1__BRA__8__KET____DOT__u0;
    Vmecanismo_flipping_bloque_mecanismo_flipping_uno* __PVT__mecanismo_flipping_bloque__DOT__genblk1__BRA__9__KET____DOT__u0;
    Vmecanismo_flipping_bloque_mecanismo_flipping_uno* __PVT__mecanismo_flipping_bloque__DOT__genblk1__BRA__10__KET____DOT__u0;
    Vmecanismo_flipping_bloque_mecanismo_flipping_uno* __PVT__mecanismo_flipping_bloque__DOT__genblk1__BRA__11__KET____DOT__u0;
    Vmecanismo_flipping_bloque_mecanismo_flipping_uno* __PVT__mecanismo_flipping_bloque__DOT__genblk1__BRA__12__KET____DOT__u0;
    Vmecanismo_flipping_bloque_mecanismo_flipping_uno* __PVT__mecanismo_flipping_bloque__DOT__genblk1__BRA__13__KET____DOT__u0;
    Vmecanismo_flipping_bloque_mecanismo_flipping_uno* __PVT__mecanismo_flipping_bloque__DOT__genblk1__BRA__14__KET____DOT__u0;
    Vmecanismo_flipping_bloque_mecanismo_flipping_uno* __PVT__mecanismo_flipping_bloque__DOT__genblk1__BRA__15__KET____DOT__u0;

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __VicoFirstIteration;
    CData/*0:0*/ __VactContinue;
    IData/*31:0*/ __VactIterCount;
    VL_IN16(a[16],15,0);
    VL_IN8(f[16],0,0);
    VL_OUT16(b[16],15,0);
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VicoTriggered;
    VlTriggerVec<0> __VactTriggered;
    VlTriggerVec<0> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vmecanismo_flipping_bloque__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vmecanismo_flipping_bloque___024root(Vmecanismo_flipping_bloque__Syms* symsp, const char* v__name);
    ~Vmecanismo_flipping_bloque___024root();
    VL_UNCOPYABLE(Vmecanismo_flipping_bloque___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
