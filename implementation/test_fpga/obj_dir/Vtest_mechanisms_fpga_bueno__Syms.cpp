// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "Vtest_mechanisms_fpga_bueno__pch.h"
#include "Vtest_mechanisms_fpga_bueno.h"
#include "Vtest_mechanisms_fpga_bueno___024root.h"
#include "Vtest_mechanisms_fpga_bueno_test_mechanisms_fpga_bueno.h"
#include "Vtest_mechanisms_fpga_bueno_top_patching_uno.h"
#include "Vtest_mechanisms_fpga_bueno_cache_tfg.h"
#include "Vtest_mechanisms_fpga_bueno_cache_way__Td_D10_S8.h"
#include "Vtest_mechanisms_fpga_bueno_bram__D100_Wd.h"
#include "Vtest_mechanisms_fpga_bueno_bram__D100_W10.h"

// FUNCTIONS
Vtest_mechanisms_fpga_bueno__Syms::~Vtest_mechanisms_fpga_bueno__Syms()
{
}

Vtest_mechanisms_fpga_bueno__Syms::Vtest_mechanisms_fpga_bueno__Syms(VerilatedContext* contextp, const char* namep, Vtest_mechanisms_fpga_bueno* modelp)
    : VerilatedSyms{contextp}
    // Setup internal state of the Syms class
    , __Vm_modelp{modelp}
    // Setup module instances
    , TOP{this, namep}
    , TOP__test_mechanisms_fpga_bueno{this, Verilated::catName(namep, "test_mechanisms_fpga_bueno")}
    , TOP__test_mechanisms_fpga_bueno__patch_inst{this, Verilated::catName(namep, "test_mechanisms_fpga_bueno.patch_inst")}
    , TOP__test_mechanisms_fpga_bueno__patch_inst__patch_cache{this, Verilated::catName(namep, "test_mechanisms_fpga_bueno.patch_inst.patch_cache")}
    , TOP__test_mechanisms_fpga_bueno__patch_inst__patch_cache__ways__BRA__0__KET____DOT__way_instance{this, Verilated::catName(namep, "test_mechanisms_fpga_bueno.patch_inst.patch_cache.ways[0].way_instance")}
    , TOP__test_mechanisms_fpga_bueno__patch_inst__patch_cache__ways__BRA__0__KET____DOT__way_instance__data_bram{this, Verilated::catName(namep, "test_mechanisms_fpga_bueno.patch_inst.patch_cache.ways[0].way_instance.data_bram")}
    , TOP__test_mechanisms_fpga_bueno__patch_inst__patch_cache__ways__BRA__0__KET____DOT__way_instance__tag_bram{this, Verilated::catName(namep, "test_mechanisms_fpga_bueno.patch_inst.patch_cache.ways[0].way_instance.tag_bram")}
    , TOP__test_mechanisms_fpga_bueno__patch_inst__patch_cache__ways__BRA__1__KET____DOT__way_instance{this, Verilated::catName(namep, "test_mechanisms_fpga_bueno.patch_inst.patch_cache.ways[1].way_instance")}
    , TOP__test_mechanisms_fpga_bueno__patch_inst__patch_cache__ways__BRA__1__KET____DOT__way_instance__data_bram{this, Verilated::catName(namep, "test_mechanisms_fpga_bueno.patch_inst.patch_cache.ways[1].way_instance.data_bram")}
    , TOP__test_mechanisms_fpga_bueno__patch_inst__patch_cache__ways__BRA__1__KET____DOT__way_instance__tag_bram{this, Verilated::catName(namep, "test_mechanisms_fpga_bueno.patch_inst.patch_cache.ways[1].way_instance.tag_bram")}
    , TOP__test_mechanisms_fpga_bueno__patch_inst__patch_cache__ways__BRA__2__KET____DOT__way_instance{this, Verilated::catName(namep, "test_mechanisms_fpga_bueno.patch_inst.patch_cache.ways[2].way_instance")}
    , TOP__test_mechanisms_fpga_bueno__patch_inst__patch_cache__ways__BRA__2__KET____DOT__way_instance__data_bram{this, Verilated::catName(namep, "test_mechanisms_fpga_bueno.patch_inst.patch_cache.ways[2].way_instance.data_bram")}
    , TOP__test_mechanisms_fpga_bueno__patch_inst__patch_cache__ways__BRA__2__KET____DOT__way_instance__tag_bram{this, Verilated::catName(namep, "test_mechanisms_fpga_bueno.patch_inst.patch_cache.ways[2].way_instance.tag_bram")}
    , TOP__test_mechanisms_fpga_bueno__patch_inst__patch_cache__ways__BRA__3__KET____DOT__way_instance{this, Verilated::catName(namep, "test_mechanisms_fpga_bueno.patch_inst.patch_cache.ways[3].way_instance")}
    , TOP__test_mechanisms_fpga_bueno__patch_inst__patch_cache__ways__BRA__3__KET____DOT__way_instance__data_bram{this, Verilated::catName(namep, "test_mechanisms_fpga_bueno.patch_inst.patch_cache.ways[3].way_instance.data_bram")}
    , TOP__test_mechanisms_fpga_bueno__patch_inst__patch_cache__ways__BRA__3__KET____DOT__way_instance__tag_bram{this, Verilated::catName(namep, "test_mechanisms_fpga_bueno.patch_inst.patch_cache.ways[3].way_instance.tag_bram")}
    , TOP__test_mechanisms_fpga_bueno__patch_inst__patch_cache__ways__BRA__4__KET____DOT__way_instance{this, Verilated::catName(namep, "test_mechanisms_fpga_bueno.patch_inst.patch_cache.ways[4].way_instance")}
    , TOP__test_mechanisms_fpga_bueno__patch_inst__patch_cache__ways__BRA__4__KET____DOT__way_instance__data_bram{this, Verilated::catName(namep, "test_mechanisms_fpga_bueno.patch_inst.patch_cache.ways[4].way_instance.data_bram")}
    , TOP__test_mechanisms_fpga_bueno__patch_inst__patch_cache__ways__BRA__4__KET____DOT__way_instance__tag_bram{this, Verilated::catName(namep, "test_mechanisms_fpga_bueno.patch_inst.patch_cache.ways[4].way_instance.tag_bram")}
{
        // Check resources
        Verilated::stackCheck(147);
    // Configure time unit / time precision
    _vm_contextp__->timeunit(-12);
    _vm_contextp__->timeprecision(-12);
    // Setup each module's pointers to their submodules
    TOP.test_mechanisms_fpga_bueno = &TOP__test_mechanisms_fpga_bueno;
    TOP__test_mechanisms_fpga_bueno.patch_inst = &TOP__test_mechanisms_fpga_bueno__patch_inst;
    TOP__test_mechanisms_fpga_bueno__patch_inst.patch_cache = &TOP__test_mechanisms_fpga_bueno__patch_inst__patch_cache;
    TOP__test_mechanisms_fpga_bueno__patch_inst__patch_cache.ways__BRA__0__KET____DOT__way_instance = &TOP__test_mechanisms_fpga_bueno__patch_inst__patch_cache__ways__BRA__0__KET____DOT__way_instance;
    TOP__test_mechanisms_fpga_bueno__patch_inst__patch_cache__ways__BRA__0__KET____DOT__way_instance.data_bram = &TOP__test_mechanisms_fpga_bueno__patch_inst__patch_cache__ways__BRA__0__KET____DOT__way_instance__data_bram;
    TOP__test_mechanisms_fpga_bueno__patch_inst__patch_cache__ways__BRA__0__KET____DOT__way_instance.tag_bram = &TOP__test_mechanisms_fpga_bueno__patch_inst__patch_cache__ways__BRA__0__KET____DOT__way_instance__tag_bram;
    TOP__test_mechanisms_fpga_bueno__patch_inst__patch_cache.ways__BRA__1__KET____DOT__way_instance = &TOP__test_mechanisms_fpga_bueno__patch_inst__patch_cache__ways__BRA__1__KET____DOT__way_instance;
    TOP__test_mechanisms_fpga_bueno__patch_inst__patch_cache__ways__BRA__1__KET____DOT__way_instance.data_bram = &TOP__test_mechanisms_fpga_bueno__patch_inst__patch_cache__ways__BRA__1__KET____DOT__way_instance__data_bram;
    TOP__test_mechanisms_fpga_bueno__patch_inst__patch_cache__ways__BRA__1__KET____DOT__way_instance.tag_bram = &TOP__test_mechanisms_fpga_bueno__patch_inst__patch_cache__ways__BRA__1__KET____DOT__way_instance__tag_bram;
    TOP__test_mechanisms_fpga_bueno__patch_inst__patch_cache.ways__BRA__2__KET____DOT__way_instance = &TOP__test_mechanisms_fpga_bueno__patch_inst__patch_cache__ways__BRA__2__KET____DOT__way_instance;
    TOP__test_mechanisms_fpga_bueno__patch_inst__patch_cache__ways__BRA__2__KET____DOT__way_instance.data_bram = &TOP__test_mechanisms_fpga_bueno__patch_inst__patch_cache__ways__BRA__2__KET____DOT__way_instance__data_bram;
    TOP__test_mechanisms_fpga_bueno__patch_inst__patch_cache__ways__BRA__2__KET____DOT__way_instance.tag_bram = &TOP__test_mechanisms_fpga_bueno__patch_inst__patch_cache__ways__BRA__2__KET____DOT__way_instance__tag_bram;
    TOP__test_mechanisms_fpga_bueno__patch_inst__patch_cache.ways__BRA__3__KET____DOT__way_instance = &TOP__test_mechanisms_fpga_bueno__patch_inst__patch_cache__ways__BRA__3__KET____DOT__way_instance;
    TOP__test_mechanisms_fpga_bueno__patch_inst__patch_cache__ways__BRA__3__KET____DOT__way_instance.data_bram = &TOP__test_mechanisms_fpga_bueno__patch_inst__patch_cache__ways__BRA__3__KET____DOT__way_instance__data_bram;
    TOP__test_mechanisms_fpga_bueno__patch_inst__patch_cache__ways__BRA__3__KET____DOT__way_instance.tag_bram = &TOP__test_mechanisms_fpga_bueno__patch_inst__patch_cache__ways__BRA__3__KET____DOT__way_instance__tag_bram;
    TOP__test_mechanisms_fpga_bueno__patch_inst__patch_cache.ways__BRA__4__KET____DOT__way_instance = &TOP__test_mechanisms_fpga_bueno__patch_inst__patch_cache__ways__BRA__4__KET____DOT__way_instance;
    TOP__test_mechanisms_fpga_bueno__patch_inst__patch_cache__ways__BRA__4__KET____DOT__way_instance.data_bram = &TOP__test_mechanisms_fpga_bueno__patch_inst__patch_cache__ways__BRA__4__KET____DOT__way_instance__data_bram;
    TOP__test_mechanisms_fpga_bueno__patch_inst__patch_cache__ways__BRA__4__KET____DOT__way_instance.tag_bram = &TOP__test_mechanisms_fpga_bueno__patch_inst__patch_cache__ways__BRA__4__KET____DOT__way_instance__tag_bram;
    // Setup each module's pointer back to symbol table (for public functions)
    TOP.__Vconfigure(true);
    TOP__test_mechanisms_fpga_bueno.__Vconfigure(true);
    TOP__test_mechanisms_fpga_bueno__patch_inst.__Vconfigure(true);
    TOP__test_mechanisms_fpga_bueno__patch_inst__patch_cache.__Vconfigure(true);
    TOP__test_mechanisms_fpga_bueno__patch_inst__patch_cache__ways__BRA__0__KET____DOT__way_instance.__Vconfigure(true);
    TOP__test_mechanisms_fpga_bueno__patch_inst__patch_cache__ways__BRA__0__KET____DOT__way_instance__data_bram.__Vconfigure(true);
    TOP__test_mechanisms_fpga_bueno__patch_inst__patch_cache__ways__BRA__0__KET____DOT__way_instance__tag_bram.__Vconfigure(true);
    TOP__test_mechanisms_fpga_bueno__patch_inst__patch_cache__ways__BRA__1__KET____DOT__way_instance.__Vconfigure(false);
    TOP__test_mechanisms_fpga_bueno__patch_inst__patch_cache__ways__BRA__1__KET____DOT__way_instance__data_bram.__Vconfigure(false);
    TOP__test_mechanisms_fpga_bueno__patch_inst__patch_cache__ways__BRA__1__KET____DOT__way_instance__tag_bram.__Vconfigure(false);
    TOP__test_mechanisms_fpga_bueno__patch_inst__patch_cache__ways__BRA__2__KET____DOT__way_instance.__Vconfigure(false);
    TOP__test_mechanisms_fpga_bueno__patch_inst__patch_cache__ways__BRA__2__KET____DOT__way_instance__data_bram.__Vconfigure(false);
    TOP__test_mechanisms_fpga_bueno__patch_inst__patch_cache__ways__BRA__2__KET____DOT__way_instance__tag_bram.__Vconfigure(false);
    TOP__test_mechanisms_fpga_bueno__patch_inst__patch_cache__ways__BRA__3__KET____DOT__way_instance.__Vconfigure(false);
    TOP__test_mechanisms_fpga_bueno__patch_inst__patch_cache__ways__BRA__3__KET____DOT__way_instance__data_bram.__Vconfigure(false);
    TOP__test_mechanisms_fpga_bueno__patch_inst__patch_cache__ways__BRA__3__KET____DOT__way_instance__tag_bram.__Vconfigure(false);
    TOP__test_mechanisms_fpga_bueno__patch_inst__patch_cache__ways__BRA__4__KET____DOT__way_instance.__Vconfigure(false);
    TOP__test_mechanisms_fpga_bueno__patch_inst__patch_cache__ways__BRA__4__KET____DOT__way_instance__data_bram.__Vconfigure(false);
    TOP__test_mechanisms_fpga_bueno__patch_inst__patch_cache__ways__BRA__4__KET____DOT__way_instance__tag_bram.__Vconfigure(false);
    // Setup scopes
    __Vscope_test_mechanisms_fpga_bueno__patch_inst__patch_cache__ways__BRA__0__KET____way_instance__data_bram.configure(this, name(), "test_mechanisms_fpga_bueno.patch_inst.patch_cache.ways[0].way_instance.data_bram", "data_bram", 0, VerilatedScope::SCOPE_OTHER);
    __Vscope_test_mechanisms_fpga_bueno__patch_inst__patch_cache__ways__BRA__0__KET____way_instance__tag_bram.configure(this, name(), "test_mechanisms_fpga_bueno.patch_inst.patch_cache.ways[0].way_instance.tag_bram", "tag_bram", 0, VerilatedScope::SCOPE_OTHER);
    __Vscope_test_mechanisms_fpga_bueno__patch_inst__patch_cache__ways__BRA__1__KET____way_instance__data_bram.configure(this, name(), "test_mechanisms_fpga_bueno.patch_inst.patch_cache.ways[1].way_instance.data_bram", "data_bram", 0, VerilatedScope::SCOPE_OTHER);
    __Vscope_test_mechanisms_fpga_bueno__patch_inst__patch_cache__ways__BRA__1__KET____way_instance__tag_bram.configure(this, name(), "test_mechanisms_fpga_bueno.patch_inst.patch_cache.ways[1].way_instance.tag_bram", "tag_bram", 0, VerilatedScope::SCOPE_OTHER);
    __Vscope_test_mechanisms_fpga_bueno__patch_inst__patch_cache__ways__BRA__2__KET____way_instance__data_bram.configure(this, name(), "test_mechanisms_fpga_bueno.patch_inst.patch_cache.ways[2].way_instance.data_bram", "data_bram", 0, VerilatedScope::SCOPE_OTHER);
    __Vscope_test_mechanisms_fpga_bueno__patch_inst__patch_cache__ways__BRA__2__KET____way_instance__tag_bram.configure(this, name(), "test_mechanisms_fpga_bueno.patch_inst.patch_cache.ways[2].way_instance.tag_bram", "tag_bram", 0, VerilatedScope::SCOPE_OTHER);
    __Vscope_test_mechanisms_fpga_bueno__patch_inst__patch_cache__ways__BRA__3__KET____way_instance__data_bram.configure(this, name(), "test_mechanisms_fpga_bueno.patch_inst.patch_cache.ways[3].way_instance.data_bram", "data_bram", 0, VerilatedScope::SCOPE_OTHER);
    __Vscope_test_mechanisms_fpga_bueno__patch_inst__patch_cache__ways__BRA__3__KET____way_instance__tag_bram.configure(this, name(), "test_mechanisms_fpga_bueno.patch_inst.patch_cache.ways[3].way_instance.tag_bram", "tag_bram", 0, VerilatedScope::SCOPE_OTHER);
    __Vscope_test_mechanisms_fpga_bueno__patch_inst__patch_cache__ways__BRA__4__KET____way_instance__data_bram.configure(this, name(), "test_mechanisms_fpga_bueno.patch_inst.patch_cache.ways[4].way_instance.data_bram", "data_bram", 0, VerilatedScope::SCOPE_OTHER);
    __Vscope_test_mechanisms_fpga_bueno__patch_inst__patch_cache__ways__BRA__4__KET____way_instance__tag_bram.configure(this, name(), "test_mechanisms_fpga_bueno.patch_inst.patch_cache.ways[4].way_instance.tag_bram", "tag_bram", 0, VerilatedScope::SCOPE_OTHER);
    // Setup export functions
    for (int __Vfinal = 0; __Vfinal < 2; ++__Vfinal) {
        __Vscope_test_mechanisms_fpga_bueno__patch_inst__patch_cache__ways__BRA__0__KET____way_instance__data_bram.varInsert(__Vfinal,"ram", &(TOP__test_mechanisms_fpga_bueno__patch_inst__patch_cache__ways__BRA__0__KET____DOT__way_instance__data_bram.ram), false, VLVT_UINT16,VLVD_NODIR|VLVF_PUB_RW,2 ,15,0 ,0,255);
        __Vscope_test_mechanisms_fpga_bueno__patch_inst__patch_cache__ways__BRA__0__KET____way_instance__tag_bram.varInsert(__Vfinal,"ram", &(TOP__test_mechanisms_fpga_bueno__patch_inst__patch_cache__ways__BRA__0__KET____DOT__way_instance__tag_bram.ram), false, VLVT_UINT16,VLVD_NODIR|VLVF_PUB_RW,2 ,12,0 ,0,255);
        __Vscope_test_mechanisms_fpga_bueno__patch_inst__patch_cache__ways__BRA__1__KET____way_instance__data_bram.varInsert(__Vfinal,"ram", &(TOP__test_mechanisms_fpga_bueno__patch_inst__patch_cache__ways__BRA__1__KET____DOT__way_instance__data_bram.ram), false, VLVT_UINT16,VLVD_NODIR|VLVF_PUB_RW,2 ,15,0 ,0,255);
        __Vscope_test_mechanisms_fpga_bueno__patch_inst__patch_cache__ways__BRA__1__KET____way_instance__tag_bram.varInsert(__Vfinal,"ram", &(TOP__test_mechanisms_fpga_bueno__patch_inst__patch_cache__ways__BRA__1__KET____DOT__way_instance__tag_bram.ram), false, VLVT_UINT16,VLVD_NODIR|VLVF_PUB_RW,2 ,12,0 ,0,255);
        __Vscope_test_mechanisms_fpga_bueno__patch_inst__patch_cache__ways__BRA__2__KET____way_instance__data_bram.varInsert(__Vfinal,"ram", &(TOP__test_mechanisms_fpga_bueno__patch_inst__patch_cache__ways__BRA__2__KET____DOT__way_instance__data_bram.ram), false, VLVT_UINT16,VLVD_NODIR|VLVF_PUB_RW,2 ,15,0 ,0,255);
        __Vscope_test_mechanisms_fpga_bueno__patch_inst__patch_cache__ways__BRA__2__KET____way_instance__tag_bram.varInsert(__Vfinal,"ram", &(TOP__test_mechanisms_fpga_bueno__patch_inst__patch_cache__ways__BRA__2__KET____DOT__way_instance__tag_bram.ram), false, VLVT_UINT16,VLVD_NODIR|VLVF_PUB_RW,2 ,12,0 ,0,255);
        __Vscope_test_mechanisms_fpga_bueno__patch_inst__patch_cache__ways__BRA__3__KET____way_instance__data_bram.varInsert(__Vfinal,"ram", &(TOP__test_mechanisms_fpga_bueno__patch_inst__patch_cache__ways__BRA__3__KET____DOT__way_instance__data_bram.ram), false, VLVT_UINT16,VLVD_NODIR|VLVF_PUB_RW,2 ,15,0 ,0,255);
        __Vscope_test_mechanisms_fpga_bueno__patch_inst__patch_cache__ways__BRA__3__KET____way_instance__tag_bram.varInsert(__Vfinal,"ram", &(TOP__test_mechanisms_fpga_bueno__patch_inst__patch_cache__ways__BRA__3__KET____DOT__way_instance__tag_bram.ram), false, VLVT_UINT16,VLVD_NODIR|VLVF_PUB_RW,2 ,12,0 ,0,255);
        __Vscope_test_mechanisms_fpga_bueno__patch_inst__patch_cache__ways__BRA__4__KET____way_instance__data_bram.varInsert(__Vfinal,"ram", &(TOP__test_mechanisms_fpga_bueno__patch_inst__patch_cache__ways__BRA__4__KET____DOT__way_instance__data_bram.ram), false, VLVT_UINT16,VLVD_NODIR|VLVF_PUB_RW,2 ,15,0 ,0,255);
        __Vscope_test_mechanisms_fpga_bueno__patch_inst__patch_cache__ways__BRA__4__KET____way_instance__tag_bram.varInsert(__Vfinal,"ram", &(TOP__test_mechanisms_fpga_bueno__patch_inst__patch_cache__ways__BRA__4__KET____DOT__way_instance__tag_bram.ram), false, VLVT_UINT16,VLVD_NODIR|VLVF_PUB_RW,2 ,12,0 ,0,255);
    }
}
