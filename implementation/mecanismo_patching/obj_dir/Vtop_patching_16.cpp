// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vtop_patching_16__pch.h"

//============================================================
// Constructors

Vtop_patching_16::Vtop_patching_16(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vtop_patching_16__Syms(contextp(), _vcname__, this)}
    , clk{vlSymsp->TOP.clk}
    , reset{vlSymsp->TOP.reset}
    , request{vlSymsp->TOP.request}
    , read_write{vlSymsp->TOP.read_write}
    , index{vlSymsp->TOP.index}
    , store_enable{vlSymsp->TOP.store_enable}
    , valid{vlSymsp->TOP.valid}
    , error{vlSymsp->TOP.error}
    , activation_in{vlSymsp->TOP.activation_in}
    , address{vlSymsp->TOP.address}
    , p{vlSymsp->TOP.p}
    , activation_org{vlSymsp->TOP.activation_org}
    , chosen_activation{vlSymsp->TOP.chosen_activation}
    , top_patching_16{vlSymsp->TOP.top_patching_16}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

Vtop_patching_16::Vtop_patching_16(const char* _vcname__)
    : Vtop_patching_16(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vtop_patching_16::~Vtop_patching_16() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vtop_patching_16___024root___eval_debug_assertions(Vtop_patching_16___024root* vlSelf);
#endif  // VL_DEBUG
void Vtop_patching_16___024root___eval_static(Vtop_patching_16___024root* vlSelf);
void Vtop_patching_16___024root___eval_initial(Vtop_patching_16___024root* vlSelf);
void Vtop_patching_16___024root___eval_settle(Vtop_patching_16___024root* vlSelf);
void Vtop_patching_16___024root___eval(Vtop_patching_16___024root* vlSelf);

void Vtop_patching_16::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vtop_patching_16::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vtop_patching_16___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vtop_patching_16___024root___eval_static(&(vlSymsp->TOP));
        Vtop_patching_16___024root___eval_initial(&(vlSymsp->TOP));
        Vtop_patching_16___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vtop_patching_16___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool Vtop_patching_16::eventsPending() { return false; }

uint64_t Vtop_patching_16::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "%Error: No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* Vtop_patching_16::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vtop_patching_16___024root___eval_final(Vtop_patching_16___024root* vlSelf);

VL_ATTR_COLD void Vtop_patching_16::final() {
    Vtop_patching_16___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vtop_patching_16::hierName() const { return vlSymsp->name(); }
const char* Vtop_patching_16::modelName() const { return "Vtop_patching_16"; }
unsigned Vtop_patching_16::threads() const { return 1; }
void Vtop_patching_16::prepareClone() const { contextp()->prepareClone(); }
void Vtop_patching_16::atClone() const {
    contextp()->threadPoolpOnClone();
}
