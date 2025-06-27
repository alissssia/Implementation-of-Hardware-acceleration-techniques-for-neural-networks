// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Primary model header
//
// This header should be included by all source files instantiating the design.
// The class here is then constructed to instantiate the design.
// See the Verilator manual for examples.

#ifndef VERILATED_VTEST_MECHANISMS_FPGA_BUENO_H_
#define VERILATED_VTEST_MECHANISMS_FPGA_BUENO_H_  // guard

#include "verilated.h"
#include "svdpi.h"

class Vtest_mechanisms_fpga_bueno__Syms;
class Vtest_mechanisms_fpga_bueno___024root;
class Vtest_mechanisms_fpga_bueno_test_mechanisms_fpga_bueno;


// This class is the main interface to the Verilated model
class alignas(VL_CACHE_LINE_BYTES) Vtest_mechanisms_fpga_bueno VL_NOT_FINAL : public VerilatedModel {
  private:
    // Symbol table holding complete model state (owned by this class)
    Vtest_mechanisms_fpga_bueno__Syms* const vlSymsp;

  public:

    // CONSTEXPR CAPABILITIES
    // Verilated with --trace?
    static constexpr bool traceCapable = false;

    // PORTS
    // The application code writes and reads these signals to
    // propagate new values into/out from the Verilated model.
    VL_IN8(&clk,0,0);
    VL_IN8(&reset,0,0);
    VL_IN8(&f,0,0);
    VL_IN8(&p,0,0);
    VL_IN8(&request,0,0);
    VL_IN8(&read_write,0,0);
    VL_OUT8(&valid,0,0);
    VL_OUT8(&error,0,0);
    VL_IN16(&activation_org,15,0);
    VL_IN16(&activation_cache,15,0);
    VL_IN16(&activation_in,15,0);
    VL_OUT16(&flipped_out,15,0);
    VL_OUT16(&patched_out,15,0);
    VL_OUT16(&activation_final,15,0);
    VL_IN(&address,20,0);

    // CELLS
    // Public to allow access to /* verilator public */ items.
    // Otherwise the application code can consider these internals.
    Vtest_mechanisms_fpga_bueno_test_mechanisms_fpga_bueno* const test_mechanisms_fpga_bueno;

    // Root instance pointer to allow access to model internals,
    // including inlined /* verilator public_flat_* */ items.
    Vtest_mechanisms_fpga_bueno___024root* const rootp;

    // CONSTRUCTORS
    /// Construct the model; called by application code
    /// If contextp is null, then the model will use the default global context
    /// If name is "", then makes a wrapper with a
    /// single model invisible with respect to DPI scope names.
    explicit Vtest_mechanisms_fpga_bueno(VerilatedContext* contextp, const char* name = "TOP");
    explicit Vtest_mechanisms_fpga_bueno(const char* name = "TOP");
    /// Destroy the model; called (often implicitly) by application code
    virtual ~Vtest_mechanisms_fpga_bueno();
  private:
    VL_UNCOPYABLE(Vtest_mechanisms_fpga_bueno);  ///< Copying not allowed

  public:
    // API METHODS
    /// Evaluate the model.  Application must call when inputs change.
    void eval() { eval_step(); }
    /// Evaluate when calling multiple units/models per time step.
    void eval_step();
    /// Evaluate at end of a timestep for tracing, when using eval_step().
    /// Application must call after all eval() and before time changes.
    void eval_end_step() {}
    /// Simulation complete, run final blocks.  Application must call on completion.
    void final();
    /// Are there scheduled events to handle?
    bool eventsPending();
    /// Returns time at next time slot. Aborts if !eventsPending()
    uint64_t nextTimeSlot();
    /// Trace signals in the model; called by application code
    void trace(VerilatedTraceBaseC* tfp, int levels, int options = 0) { contextp()->trace(tfp, levels, options); }
    /// Retrieve name of this model instance (as passed to constructor).
    const char* name() const;

    // Abstract methods from VerilatedModel
    const char* hierName() const override final;
    const char* modelName() const override final;
    unsigned threads() const override final;
    /// Prepare for cloning the model at the process level (e.g. fork in Linux)
    /// Release necessary resources. Called before cloning.
    void prepareClone() const;
    /// Re-init after cloning the model at the process level (e.g. fork in Linux)
    /// Re-allocate necessary resources. Called after cloning.
    void atClone() const;
  private:
    // Internal functions - trace registration
    void traceBaseModel(VerilatedTraceBaseC* tfp, int levels, int options);
};

#endif  // guard
