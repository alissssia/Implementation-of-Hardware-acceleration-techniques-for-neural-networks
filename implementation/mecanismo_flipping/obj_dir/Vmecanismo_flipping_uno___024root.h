// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vmecanismo_flipping_uno.h for the primary calling header

#ifndef VERILATED_VMECANISMO_FLIPPING_UNO___024ROOT_H_
#define VERILATED_VMECANISMO_FLIPPING_UNO___024ROOT_H_  // guard

#include "verilated.h"


class Vmecanismo_flipping_uno__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vmecanismo_flipping_uno___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(f,0,0);
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __VicoFirstIteration;
    CData/*0:0*/ __VactContinue;
    VL_IN16(a,15,0);
    VL_OUT16(b,15,0);
    IData/*31:0*/ __VactIterCount;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VicoTriggered;
    VlTriggerVec<0> __VactTriggered;
    VlTriggerVec<0> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vmecanismo_flipping_uno__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vmecanismo_flipping_uno___024root(Vmecanismo_flipping_uno__Syms* symsp, const char* v__name);
    ~Vmecanismo_flipping_uno___024root();
    VL_UNCOPYABLE(Vmecanismo_flipping_uno___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
