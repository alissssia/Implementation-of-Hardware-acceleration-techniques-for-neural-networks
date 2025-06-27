// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vcache_tfg.h for the primary calling header

#ifndef VERILATED_VCACHE_TFG___024ROOT_H_
#define VERILATED_VCACHE_TFG___024ROOT_H_  // guard

#include "verilated.h"
class Vcache_tfg_cache_tfg;


class Vcache_tfg__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vcache_tfg___024root final : public VerilatedModule {
  public:
    // CELLS
    Vcache_tfg_cache_tfg* cache_tfg;

    // DESIGN SPECIFIC STATE
    VL_IN8(clk,0,0);
    VL_IN8(reset,0,0);
    VL_IN8(read_write,0,0);
    VL_IN8(request,0,0);
    VL_OUT8(valid,0,0);
    VL_OUT8(error,0,0);
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __VicoFirstIteration;
    CData/*0:0*/ __Vtrigprevexpr___TOP__clk__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__reset__0;
    CData/*0:0*/ __VactContinue;
    VL_IN16(activation_in,15,0);
    VL_OUT16(activation_out,15,0);
    VL_IN(address,20,0);
    IData/*31:0*/ __VactIterCount;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VicoTriggered;
    VlTriggerVec<2> __VactTriggered;
    VlTriggerVec<2> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vcache_tfg__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vcache_tfg___024root(Vcache_tfg__Syms* symsp, const char* v__name);
    ~Vcache_tfg___024root();
    VL_UNCOPYABLE(Vcache_tfg___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
