// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vflipflops_top__pch.h"

//============================================================
// Constructors

Vflipflops_top::Vflipflops_top(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vflipflops_top__Syms(contextp(), _vcname__, this)}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

Vflipflops_top::Vflipflops_top(const char* _vcname__)
    : Vflipflops_top(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vflipflops_top::~Vflipflops_top() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vflipflops_top___024root___eval_debug_assertions(Vflipflops_top___024root* vlSelf);
#endif  // VL_DEBUG
void Vflipflops_top___024root___eval_static(Vflipflops_top___024root* vlSelf);
void Vflipflops_top___024root___eval_initial(Vflipflops_top___024root* vlSelf);
void Vflipflops_top___024root___eval_settle(Vflipflops_top___024root* vlSelf);
void Vflipflops_top___024root___eval(Vflipflops_top___024root* vlSelf);

void Vflipflops_top::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vflipflops_top::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vflipflops_top___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vflipflops_top___024root___eval_static(&(vlSymsp->TOP));
        Vflipflops_top___024root___eval_initial(&(vlSymsp->TOP));
        Vflipflops_top___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vflipflops_top___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool Vflipflops_top::eventsPending() { return false; }

uint64_t Vflipflops_top::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "%Error: No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* Vflipflops_top::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vflipflops_top___024root___eval_final(Vflipflops_top___024root* vlSelf);

VL_ATTR_COLD void Vflipflops_top::final() {
    Vflipflops_top___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vflipflops_top::hierName() const { return vlSymsp->name(); }
const char* Vflipflops_top::modelName() const { return "Vflipflops_top"; }
unsigned Vflipflops_top::threads() const { return 1; }
void Vflipflops_top::prepareClone() const { contextp()->prepareClone(); }
void Vflipflops_top::atClone() const {
    contextp()->threadPoolpOnClone();
}
