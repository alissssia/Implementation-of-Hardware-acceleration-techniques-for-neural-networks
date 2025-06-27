// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vmecanismo_flipping_bloque__pch.h"

//============================================================
// Constructors

Vmecanismo_flipping_bloque::Vmecanismo_flipping_bloque(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vmecanismo_flipping_bloque__Syms(contextp(), _vcname__, this)}
    , a{vlSymsp->TOP.a}
    , f{vlSymsp->TOP.f}
    , b{vlSymsp->TOP.b}
    , __PVT__mecanismo_flipping_bloque__DOT__genblk1__BRA__0__KET____DOT__u0{vlSymsp->TOP.__PVT__mecanismo_flipping_bloque__DOT__genblk1__BRA__0__KET____DOT__u0}
    , __PVT__mecanismo_flipping_bloque__DOT__genblk1__BRA__1__KET____DOT__u0{vlSymsp->TOP.__PVT__mecanismo_flipping_bloque__DOT__genblk1__BRA__1__KET____DOT__u0}
    , __PVT__mecanismo_flipping_bloque__DOT__genblk1__BRA__2__KET____DOT__u0{vlSymsp->TOP.__PVT__mecanismo_flipping_bloque__DOT__genblk1__BRA__2__KET____DOT__u0}
    , __PVT__mecanismo_flipping_bloque__DOT__genblk1__BRA__3__KET____DOT__u0{vlSymsp->TOP.__PVT__mecanismo_flipping_bloque__DOT__genblk1__BRA__3__KET____DOT__u0}
    , __PVT__mecanismo_flipping_bloque__DOT__genblk1__BRA__4__KET____DOT__u0{vlSymsp->TOP.__PVT__mecanismo_flipping_bloque__DOT__genblk1__BRA__4__KET____DOT__u0}
    , __PVT__mecanismo_flipping_bloque__DOT__genblk1__BRA__5__KET____DOT__u0{vlSymsp->TOP.__PVT__mecanismo_flipping_bloque__DOT__genblk1__BRA__5__KET____DOT__u0}
    , __PVT__mecanismo_flipping_bloque__DOT__genblk1__BRA__6__KET____DOT__u0{vlSymsp->TOP.__PVT__mecanismo_flipping_bloque__DOT__genblk1__BRA__6__KET____DOT__u0}
    , __PVT__mecanismo_flipping_bloque__DOT__genblk1__BRA__7__KET____DOT__u0{vlSymsp->TOP.__PVT__mecanismo_flipping_bloque__DOT__genblk1__BRA__7__KET____DOT__u0}
    , __PVT__mecanismo_flipping_bloque__DOT__genblk1__BRA__8__KET____DOT__u0{vlSymsp->TOP.__PVT__mecanismo_flipping_bloque__DOT__genblk1__BRA__8__KET____DOT__u0}
    , __PVT__mecanismo_flipping_bloque__DOT__genblk1__BRA__9__KET____DOT__u0{vlSymsp->TOP.__PVT__mecanismo_flipping_bloque__DOT__genblk1__BRA__9__KET____DOT__u0}
    , __PVT__mecanismo_flipping_bloque__DOT__genblk1__BRA__10__KET____DOT__u0{vlSymsp->TOP.__PVT__mecanismo_flipping_bloque__DOT__genblk1__BRA__10__KET____DOT__u0}
    , __PVT__mecanismo_flipping_bloque__DOT__genblk1__BRA__11__KET____DOT__u0{vlSymsp->TOP.__PVT__mecanismo_flipping_bloque__DOT__genblk1__BRA__11__KET____DOT__u0}
    , __PVT__mecanismo_flipping_bloque__DOT__genblk1__BRA__12__KET____DOT__u0{vlSymsp->TOP.__PVT__mecanismo_flipping_bloque__DOT__genblk1__BRA__12__KET____DOT__u0}
    , __PVT__mecanismo_flipping_bloque__DOT__genblk1__BRA__13__KET____DOT__u0{vlSymsp->TOP.__PVT__mecanismo_flipping_bloque__DOT__genblk1__BRA__13__KET____DOT__u0}
    , __PVT__mecanismo_flipping_bloque__DOT__genblk1__BRA__14__KET____DOT__u0{vlSymsp->TOP.__PVT__mecanismo_flipping_bloque__DOT__genblk1__BRA__14__KET____DOT__u0}
    , __PVT__mecanismo_flipping_bloque__DOT__genblk1__BRA__15__KET____DOT__u0{vlSymsp->TOP.__PVT__mecanismo_flipping_bloque__DOT__genblk1__BRA__15__KET____DOT__u0}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

Vmecanismo_flipping_bloque::Vmecanismo_flipping_bloque(const char* _vcname__)
    : Vmecanismo_flipping_bloque(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vmecanismo_flipping_bloque::~Vmecanismo_flipping_bloque() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vmecanismo_flipping_bloque___024root___eval_debug_assertions(Vmecanismo_flipping_bloque___024root* vlSelf);
#endif  // VL_DEBUG
void Vmecanismo_flipping_bloque___024root___eval_static(Vmecanismo_flipping_bloque___024root* vlSelf);
void Vmecanismo_flipping_bloque___024root___eval_initial(Vmecanismo_flipping_bloque___024root* vlSelf);
void Vmecanismo_flipping_bloque___024root___eval_settle(Vmecanismo_flipping_bloque___024root* vlSelf);
void Vmecanismo_flipping_bloque___024root___eval(Vmecanismo_flipping_bloque___024root* vlSelf);

void Vmecanismo_flipping_bloque::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vmecanismo_flipping_bloque::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vmecanismo_flipping_bloque___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vmecanismo_flipping_bloque___024root___eval_static(&(vlSymsp->TOP));
        Vmecanismo_flipping_bloque___024root___eval_initial(&(vlSymsp->TOP));
        Vmecanismo_flipping_bloque___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vmecanismo_flipping_bloque___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool Vmecanismo_flipping_bloque::eventsPending() { return false; }

uint64_t Vmecanismo_flipping_bloque::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "%Error: No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* Vmecanismo_flipping_bloque::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vmecanismo_flipping_bloque___024root___eval_final(Vmecanismo_flipping_bloque___024root* vlSelf);

VL_ATTR_COLD void Vmecanismo_flipping_bloque::final() {
    Vmecanismo_flipping_bloque___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vmecanismo_flipping_bloque::hierName() const { return vlSymsp->name(); }
const char* Vmecanismo_flipping_bloque::modelName() const { return "Vmecanismo_flipping_bloque"; }
unsigned Vmecanismo_flipping_bloque::threads() const { return 1; }
void Vmecanismo_flipping_bloque::prepareClone() const { contextp()->prepareClone(); }
void Vmecanismo_flipping_bloque::atClone() const {
    contextp()->threadPoolpOnClone();
}
