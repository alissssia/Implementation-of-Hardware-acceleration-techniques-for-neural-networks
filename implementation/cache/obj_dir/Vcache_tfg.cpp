// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vcache_tfg__pch.h"

//============================================================
// Constructors

Vcache_tfg::Vcache_tfg(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vcache_tfg__Syms(contextp(), _vcname__, this)}
    , clk{vlSymsp->TOP.clk}
    , reset{vlSymsp->TOP.reset}
    , read_write{vlSymsp->TOP.read_write}
    , request{vlSymsp->TOP.request}
    , valid{vlSymsp->TOP.valid}
    , error{vlSymsp->TOP.error}
    , activation_in{vlSymsp->TOP.activation_in}
    , activation_out{vlSymsp->TOP.activation_out}
    , address{vlSymsp->TOP.address}
    , cache_tfg{vlSymsp->TOP.cache_tfg}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

Vcache_tfg::Vcache_tfg(const char* _vcname__)
    : Vcache_tfg(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vcache_tfg::~Vcache_tfg() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vcache_tfg___024root___eval_debug_assertions(Vcache_tfg___024root* vlSelf);
#endif  // VL_DEBUG
void Vcache_tfg___024root___eval_static(Vcache_tfg___024root* vlSelf);
void Vcache_tfg___024root___eval_initial(Vcache_tfg___024root* vlSelf);
void Vcache_tfg___024root___eval_settle(Vcache_tfg___024root* vlSelf);
void Vcache_tfg___024root___eval(Vcache_tfg___024root* vlSelf);

void Vcache_tfg::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vcache_tfg::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vcache_tfg___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vcache_tfg___024root___eval_static(&(vlSymsp->TOP));
        Vcache_tfg___024root___eval_initial(&(vlSymsp->TOP));
        Vcache_tfg___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vcache_tfg___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool Vcache_tfg::eventsPending() { return false; }

uint64_t Vcache_tfg::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "%Error: No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* Vcache_tfg::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vcache_tfg___024root___eval_final(Vcache_tfg___024root* vlSelf);

VL_ATTR_COLD void Vcache_tfg::final() {
    Vcache_tfg___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vcache_tfg::hierName() const { return vlSymsp->name(); }
const char* Vcache_tfg::modelName() const { return "Vcache_tfg"; }
unsigned Vcache_tfg::threads() const { return 1; }
void Vcache_tfg::prepareClone() const { contextp()->prepareClone(); }
void Vcache_tfg::atClone() const {
    contextp()->threadPoolpOnClone();
}
