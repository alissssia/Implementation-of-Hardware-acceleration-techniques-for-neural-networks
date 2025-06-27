// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtop_patching_16.h for the primary calling header

#ifndef VERILATED_VTOP_PATCHING_16___024ROOT_H_
#define VERILATED_VTOP_PATCHING_16___024ROOT_H_  // guard

#include "verilated.h"
class Vtop_patching_16_top_patching_16;


class Vtop_patching_16__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtop_patching_16___024root final : public VerilatedModule {
  public:
    // CELLS
    Vtop_patching_16_top_patching_16* top_patching_16;

    // DESIGN SPECIFIC STATE
    VL_IN8(clk,0,0);
    VL_IN8(reset,0,0);
    VL_IN8(request,0,0);
    VL_IN8(read_write,0,0);
    VL_IN8(index,3,0);
    VL_IN8(store_enable,0,0);
    VL_OUT8(valid,0,0);
    VL_OUT8(error,0,0);
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __VicoFirstIteration;
    CData/*0:0*/ __Vtrigprevexpr___TOP__clk__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__reset__0;
    CData/*0:0*/ __VactContinue;
    VL_IN16(activation_in,15,0);
    VL_IN(address,20,0);
    IData/*31:0*/ __VactIterCount;
    VL_IN8(p[16],0,0);
    VL_IN16(activation_org[16],15,0);
    VL_OUT16(chosen_activation[16],15,0);
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VicoTriggered;
    VlTriggerVec<2> __VactTriggered;
    VlTriggerVec<2> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vtop_patching_16__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtop_patching_16___024root(Vtop_patching_16__Syms* symsp, const char* v__name);
    ~Vtop_patching_16___024root();
    VL_UNCOPYABLE(Vtop_patching_16___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
