// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vflipflop_uno__pch.h"

//============================================================
// Constructors

Vflipflop_uno::Vflipflop_uno(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vflipflop_uno__Syms(contextp(), _vcname__, this)}
    , flipflop_vector__02Eclk{vlSymsp->TOP.flipflop_vector__02Eclk}
    , flipflop_vector__02Erst{vlSymsp->TOP.flipflop_vector__02Erst}
    , flipflop_bloque__02Eclk{vlSymsp->TOP.flipflop_bloque__02Eclk}
    , flipflop_bloque__02Erst{vlSymsp->TOP.flipflop_bloque__02Erst}
    , flipflop_vector__02Ed{vlSymsp->TOP.flipflop_vector__02Ed}
    , flipflop_vector__02Eq{vlSymsp->TOP.flipflop_vector__02Eq}
    , flipflop_bloque__02Ed{vlSymsp->TOP.flipflop_bloque__02Ed}
    , flipflop_bloque__02Eq{vlSymsp->TOP.flipflop_bloque__02Eq}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

Vflipflop_uno::Vflipflop_uno(const char* _vcname__)
    : Vflipflop_uno(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vflipflop_uno::~Vflipflop_uno() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vflipflop_uno___024root___eval_debug_assertions(Vflipflop_uno___024root* vlSelf);
#endif  // VL_DEBUG
void Vflipflop_uno___024root___eval_static(Vflipflop_uno___024root* vlSelf);
void Vflipflop_uno___024root___eval_initial(Vflipflop_uno___024root* vlSelf);
void Vflipflop_uno___024root___eval_settle(Vflipflop_uno___024root* vlSelf);
void Vflipflop_uno___024root___eval(Vflipflop_uno___024root* vlSelf);

void Vflipflop_uno::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vflipflop_uno::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vflipflop_uno___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vflipflop_uno___024root___eval_static(&(vlSymsp->TOP));
        Vflipflop_uno___024root___eval_initial(&(vlSymsp->TOP));
        Vflipflop_uno___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vflipflop_uno___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool Vflipflop_uno::eventsPending() { return false; }

uint64_t Vflipflop_uno::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "%Error: No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* Vflipflop_uno::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vflipflop_uno___024root___eval_final(Vflipflop_uno___024root* vlSelf);

VL_ATTR_COLD void Vflipflop_uno::final() {
    Vflipflop_uno___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vflipflop_uno::hierName() const { return vlSymsp->name(); }
const char* Vflipflop_uno::modelName() const { return "Vflipflop_uno"; }
unsigned Vflipflop_uno::threads() const { return 1; }
void Vflipflop_uno::prepareClone() const { contextp()->prepareClone(); }
void Vflipflop_uno::atClone() const {
    contextp()->threadPoolpOnClone();
}
