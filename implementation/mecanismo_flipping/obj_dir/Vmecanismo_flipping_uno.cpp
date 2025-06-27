// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vmecanismo_flipping_uno__pch.h"

//============================================================
// Constructors

Vmecanismo_flipping_uno::Vmecanismo_flipping_uno(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vmecanismo_flipping_uno__Syms(contextp(), _vcname__, this)}
    , f{vlSymsp->TOP.f}
    , a{vlSymsp->TOP.a}
    , b{vlSymsp->TOP.b}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

Vmecanismo_flipping_uno::Vmecanismo_flipping_uno(const char* _vcname__)
    : Vmecanismo_flipping_uno(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vmecanismo_flipping_uno::~Vmecanismo_flipping_uno() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vmecanismo_flipping_uno___024root___eval_debug_assertions(Vmecanismo_flipping_uno___024root* vlSelf);
#endif  // VL_DEBUG
void Vmecanismo_flipping_uno___024root___eval_static(Vmecanismo_flipping_uno___024root* vlSelf);
void Vmecanismo_flipping_uno___024root___eval_initial(Vmecanismo_flipping_uno___024root* vlSelf);
void Vmecanismo_flipping_uno___024root___eval_settle(Vmecanismo_flipping_uno___024root* vlSelf);
void Vmecanismo_flipping_uno___024root___eval(Vmecanismo_flipping_uno___024root* vlSelf);

void Vmecanismo_flipping_uno::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vmecanismo_flipping_uno::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vmecanismo_flipping_uno___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vmecanismo_flipping_uno___024root___eval_static(&(vlSymsp->TOP));
        Vmecanismo_flipping_uno___024root___eval_initial(&(vlSymsp->TOP));
        Vmecanismo_flipping_uno___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vmecanismo_flipping_uno___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool Vmecanismo_flipping_uno::eventsPending() { return false; }

uint64_t Vmecanismo_flipping_uno::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "%Error: No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* Vmecanismo_flipping_uno::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vmecanismo_flipping_uno___024root___eval_final(Vmecanismo_flipping_uno___024root* vlSelf);

VL_ATTR_COLD void Vmecanismo_flipping_uno::final() {
    Vmecanismo_flipping_uno___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vmecanismo_flipping_uno::hierName() const { return vlSymsp->name(); }
const char* Vmecanismo_flipping_uno::modelName() const { return "Vmecanismo_flipping_uno"; }
unsigned Vmecanismo_flipping_uno::threads() const { return 1; }
void Vmecanismo_flipping_uno::prepareClone() const { contextp()->prepareClone(); }
void Vmecanismo_flipping_uno::atClone() const {
    contextp()->threadPoolpOnClone();
}
