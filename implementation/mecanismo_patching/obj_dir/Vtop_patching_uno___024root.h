// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtop_patching_uno.h for the primary calling header

#ifndef VERILATED_VTOP_PATCHING_UNO___024ROOT_H_
#define VERILATED_VTOP_PATCHING_UNO___024ROOT_H_  // guard

#include "verilated.h"
class Vtop_patching_uno_top_patching_uno;


class Vtop_patching_uno__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtop_patching_uno___024root final : public VerilatedModule {
  public:
    // CELLS
    Vtop_patching_uno_top_patching_uno* top_patching_uno;

    // DESIGN SPECIFIC STATE
    VL_IN8(clk,0,0);
    VL_IN8(reset,0,0);
    VL_IN8(request,0,0);
    VL_IN8(read_write,0,0);
    VL_IN8(p,0,0);
    VL_OUT8(valid,0,0);
    VL_OUT8(error,0,0);
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __VicoFirstIteration;
    CData/*0:0*/ __Vtrigprevexpr___TOP__clk__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__reset__0;
    CData/*0:0*/ __VactContinue;
    VL_IN16(activation_in,15,0);
    VL_IN16(activation_org,15,0);
    VL_OUT16(chosen_activation,15,0);
    VL_IN(address,20,0);
    IData/*31:0*/ __VactIterCount;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VicoTriggered;
    VlTriggerVec<2> __VactTriggered;
    VlTriggerVec<2> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vtop_patching_uno__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtop_patching_uno___024root(Vtop_patching_uno__Syms* symsp, const char* v__name);
    ~Vtop_patching_uno___024root();
    VL_UNCOPYABLE(Vtop_patching_uno___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
