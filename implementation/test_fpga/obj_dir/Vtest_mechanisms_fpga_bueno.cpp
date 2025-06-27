// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vtest_mechanisms_fpga_bueno__pch.h"

//============================================================
// Constructors

Vtest_mechanisms_fpga_bueno::Vtest_mechanisms_fpga_bueno(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vtest_mechanisms_fpga_bueno__Syms(contextp(), _vcname__, this)}
    , clk{vlSymsp->TOP.clk}
    , reset{vlSymsp->TOP.reset}
    , f{vlSymsp->TOP.f}
    , p{vlSymsp->TOP.p}
    , request{vlSymsp->TOP.request}
    , read_write{vlSymsp->TOP.read_write}
    , valid{vlSymsp->TOP.valid}
    , error{vlSymsp->TOP.error}
    , activation_org{vlSymsp->TOP.activation_org}
    , activation_cache{vlSymsp->TOP.activation_cache}
    , activation_in{vlSymsp->TOP.activation_in}
    , flipped_out{vlSymsp->TOP.flipped_out}
    , patched_out{vlSymsp->TOP.patched_out}
    , activation_final{vlSymsp->TOP.activation_final}
    , address{vlSymsp->TOP.address}
    , test_mechanisms_fpga_bueno{vlSymsp->TOP.test_mechanisms_fpga_bueno}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

Vtest_mechanisms_fpga_bueno::Vtest_mechanisms_fpga_bueno(const char* _vcname__)
    : Vtest_mechanisms_fpga_bueno(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vtest_mechanisms_fpga_bueno::~Vtest_mechanisms_fpga_bueno() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vtest_mechanisms_fpga_bueno___024root___eval_debug_assertions(Vtest_mechanisms_fpga_bueno___024root* vlSelf);
#endif  // VL_DEBUG
void Vtest_mechanisms_fpga_bueno___024root___eval_static(Vtest_mechanisms_fpga_bueno___024root* vlSelf);
void Vtest_mechanisms_fpga_bueno___024root___eval_initial(Vtest_mechanisms_fpga_bueno___024root* vlSelf);
void Vtest_mechanisms_fpga_bueno___024root___eval_settle(Vtest_mechanisms_fpga_bueno___024root* vlSelf);
void Vtest_mechanisms_fpga_bueno___024root___eval(Vtest_mechanisms_fpga_bueno___024root* vlSelf);

void Vtest_mechanisms_fpga_bueno::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vtest_mechanisms_fpga_bueno::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vtest_mechanisms_fpga_bueno___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vtest_mechanisms_fpga_bueno___024root___eval_static(&(vlSymsp->TOP));
        Vtest_mechanisms_fpga_bueno___024root___eval_initial(&(vlSymsp->TOP));
        Vtest_mechanisms_fpga_bueno___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vtest_mechanisms_fpga_bueno___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool Vtest_mechanisms_fpga_bueno::eventsPending() { return false; }

uint64_t Vtest_mechanisms_fpga_bueno::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "%Error: No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* Vtest_mechanisms_fpga_bueno::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vtest_mechanisms_fpga_bueno___024root___eval_final(Vtest_mechanisms_fpga_bueno___024root* vlSelf);

VL_ATTR_COLD void Vtest_mechanisms_fpga_bueno::final() {
    Vtest_mechanisms_fpga_bueno___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vtest_mechanisms_fpga_bueno::hierName() const { return vlSymsp->name(); }
const char* Vtest_mechanisms_fpga_bueno::modelName() const { return "Vtest_mechanisms_fpga_bueno"; }
unsigned Vtest_mechanisms_fpga_bueno::threads() const { return 1; }
void Vtest_mechanisms_fpga_bueno::prepareClone() const { contextp()->prepareClone(); }
void Vtest_mechanisms_fpga_bueno::atClone() const {
    contextp()->threadPoolpOnClone();
}
