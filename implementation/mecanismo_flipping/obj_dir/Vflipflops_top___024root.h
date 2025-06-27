// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vflipflops_top.h for the primary calling header

#ifndef VERILATED_VFLIPFLOPS_TOP___024ROOT_H_
#define VERILATED_VFLIPFLOPS_TOP___024ROOT_H_  // guard

#include "verilated.h"


class Vflipflops_top__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vflipflops_top___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ __VactContinue;
    IData/*31:0*/ __VactIterCount;
    VlTriggerVec<0> __VactTriggered;
    VlTriggerVec<0> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vflipflops_top__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vflipflops_top___024root(Vflipflops_top__Syms* symsp, const char* v__name);
    ~Vflipflops_top___024root();
    VL_UNCOPYABLE(Vflipflops_top___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
