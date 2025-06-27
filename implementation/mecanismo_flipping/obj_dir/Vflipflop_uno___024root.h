// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vflipflop_uno.h for the primary calling header

#ifndef VERILATED_VFLIPFLOP_UNO___024ROOT_H_
#define VERILATED_VFLIPFLOP_UNO___024ROOT_H_  // guard

#include "verilated.h"


class Vflipflop_uno__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vflipflop_uno___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(flipflop_vector__02Eclk,0,0);
    VL_IN8(flipflop_vector__02Erst,0,0);
    VL_IN8(flipflop_bloque__02Eclk,0,0);
    VL_IN8(flipflop_bloque__02Erst,0,0);
    CData/*0:0*/ flipflop_vector__DOT____Vcellout__genblk1__BRA__0__KET____DOT__u0__q;
    CData/*0:0*/ flipflop_vector__DOT____Vcellout__genblk1__BRA__1__KET____DOT__u0__q;
    CData/*0:0*/ flipflop_vector__DOT____Vcellout__genblk1__BRA__2__KET____DOT__u0__q;
    CData/*0:0*/ flipflop_vector__DOT____Vcellout__genblk1__BRA__3__KET____DOT__u0__q;
    CData/*0:0*/ flipflop_vector__DOT____Vcellout__genblk1__BRA__4__KET____DOT__u0__q;
    CData/*0:0*/ flipflop_vector__DOT____Vcellout__genblk1__BRA__5__KET____DOT__u0__q;
    CData/*0:0*/ flipflop_vector__DOT____Vcellout__genblk1__BRA__6__KET____DOT__u0__q;
    CData/*0:0*/ flipflop_vector__DOT____Vcellout__genblk1__BRA__7__KET____DOT__u0__q;
    CData/*0:0*/ flipflop_vector__DOT____Vcellout__genblk1__BRA__8__KET____DOT__u0__q;
    CData/*0:0*/ flipflop_vector__DOT____Vcellout__genblk1__BRA__9__KET____DOT__u0__q;
    CData/*0:0*/ flipflop_vector__DOT____Vcellout__genblk1__BRA__10__KET____DOT__u0__q;
    CData/*0:0*/ flipflop_vector__DOT____Vcellout__genblk1__BRA__11__KET____DOT__u0__q;
    CData/*0:0*/ flipflop_vector__DOT____Vcellout__genblk1__BRA__12__KET____DOT__u0__q;
    CData/*0:0*/ flipflop_vector__DOT____Vcellout__genblk1__BRA__13__KET____DOT__u0__q;
    CData/*0:0*/ flipflop_vector__DOT____Vcellout__genblk1__BRA__14__KET____DOT__u0__q;
    CData/*0:0*/ flipflop_vector__DOT____Vcellout__genblk1__BRA__15__KET____DOT__u0__q;
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __Vtrigprevexpr___TOP__flipflop_vector__02Eclk__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__flipflop_vector__02Erst__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__flipflop_bloque__02Eclk__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__flipflop_bloque__02Erst__0;
    CData/*0:0*/ __VactContinue;
    SData/*15:0*/ flipflop_bloque__DOT____Vcellout__genblk1__BRA__0__KET____DOT__u0__q;
    SData/*15:0*/ flipflop_bloque__DOT____Vcellout__genblk1__BRA__1__KET____DOT__u0__q;
    SData/*15:0*/ flipflop_bloque__DOT____Vcellout__genblk1__BRA__2__KET____DOT__u0__q;
    SData/*15:0*/ flipflop_bloque__DOT____Vcellout__genblk1__BRA__3__KET____DOT__u0__q;
    SData/*15:0*/ flipflop_bloque__DOT____Vcellout__genblk1__BRA__4__KET____DOT__u0__q;
    SData/*15:0*/ flipflop_bloque__DOT____Vcellout__genblk1__BRA__5__KET____DOT__u0__q;
    SData/*15:0*/ flipflop_bloque__DOT____Vcellout__genblk1__BRA__6__KET____DOT__u0__q;
    SData/*15:0*/ flipflop_bloque__DOT____Vcellout__genblk1__BRA__7__KET____DOT__u0__q;
    SData/*15:0*/ flipflop_bloque__DOT____Vcellout__genblk1__BRA__8__KET____DOT__u0__q;
    SData/*15:0*/ flipflop_bloque__DOT____Vcellout__genblk1__BRA__9__KET____DOT__u0__q;
    SData/*15:0*/ flipflop_bloque__DOT____Vcellout__genblk1__BRA__10__KET____DOT__u0__q;
    SData/*15:0*/ flipflop_bloque__DOT____Vcellout__genblk1__BRA__11__KET____DOT__u0__q;
    SData/*15:0*/ flipflop_bloque__DOT____Vcellout__genblk1__BRA__12__KET____DOT__u0__q;
    SData/*15:0*/ flipflop_bloque__DOT____Vcellout__genblk1__BRA__13__KET____DOT__u0__q;
    SData/*15:0*/ flipflop_bloque__DOT____Vcellout__genblk1__BRA__14__KET____DOT__u0__q;
    SData/*15:0*/ flipflop_bloque__DOT____Vcellout__genblk1__BRA__15__KET____DOT__u0__q;
    IData/*31:0*/ __VactIterCount;
    VL_IN8(flipflop_vector__02Ed[16],0,0);
    VL_OUT8(flipflop_vector__02Eq[16],0,0);
    VL_IN16(flipflop_bloque__02Ed[16],15,0);
    VL_OUT16(flipflop_bloque__02Eq[16],15,0);
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<2> __VactTriggered;
    VlTriggerVec<2> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vflipflop_uno__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vflipflop_uno___024root(Vflipflop_uno__Syms* symsp, const char* v__name);
    ~Vflipflop_uno___024root();
    VL_UNCOPYABLE(Vflipflop_uno___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
