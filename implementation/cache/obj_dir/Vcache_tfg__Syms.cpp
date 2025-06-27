// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "Vcache_tfg__pch.h"
#include "Vcache_tfg.h"
#include "Vcache_tfg___024root.h"
#include "Vcache_tfg_cache_tfg.h"
#include "Vcache_tfg_cache_way__Td_D10_S8.h"
#include "Vcache_tfg_bram__D100_Wd.h"
#include "Vcache_tfg_bram__D100_W10.h"

// FUNCTIONS
Vcache_tfg__Syms::~Vcache_tfg__Syms()
{
}

Vcache_tfg__Syms::Vcache_tfg__Syms(VerilatedContext* contextp, const char* namep, Vcache_tfg* modelp)
    : VerilatedSyms{contextp}
    // Setup internal state of the Syms class
    , __Vm_modelp{modelp}
    // Setup module instances
    , TOP{this, namep}
    , TOP__cache_tfg{this, Verilated::catName(namep, "cache_tfg")}
    , TOP__cache_tfg__ways__BRA__0__KET____DOT__way_instance{this, Verilated::catName(namep, "cache_tfg.ways[0].way_instance")}
    , TOP__cache_tfg__ways__BRA__0__KET____DOT__way_instance__data_bram{this, Verilated::catName(namep, "cache_tfg.ways[0].way_instance.data_bram")}
    , TOP__cache_tfg__ways__BRA__0__KET____DOT__way_instance__tag_bram{this, Verilated::catName(namep, "cache_tfg.ways[0].way_instance.tag_bram")}
    , TOP__cache_tfg__ways__BRA__1__KET____DOT__way_instance{this, Verilated::catName(namep, "cache_tfg.ways[1].way_instance")}
    , TOP__cache_tfg__ways__BRA__1__KET____DOT__way_instance__data_bram{this, Verilated::catName(namep, "cache_tfg.ways[1].way_instance.data_bram")}
    , TOP__cache_tfg__ways__BRA__1__KET____DOT__way_instance__tag_bram{this, Verilated::catName(namep, "cache_tfg.ways[1].way_instance.tag_bram")}
    , TOP__cache_tfg__ways__BRA__2__KET____DOT__way_instance{this, Verilated::catName(namep, "cache_tfg.ways[2].way_instance")}
    , TOP__cache_tfg__ways__BRA__2__KET____DOT__way_instance__data_bram{this, Verilated::catName(namep, "cache_tfg.ways[2].way_instance.data_bram")}
    , TOP__cache_tfg__ways__BRA__2__KET____DOT__way_instance__tag_bram{this, Verilated::catName(namep, "cache_tfg.ways[2].way_instance.tag_bram")}
    , TOP__cache_tfg__ways__BRA__3__KET____DOT__way_instance{this, Verilated::catName(namep, "cache_tfg.ways[3].way_instance")}
    , TOP__cache_tfg__ways__BRA__3__KET____DOT__way_instance__data_bram{this, Verilated::catName(namep, "cache_tfg.ways[3].way_instance.data_bram")}
    , TOP__cache_tfg__ways__BRA__3__KET____DOT__way_instance__tag_bram{this, Verilated::catName(namep, "cache_tfg.ways[3].way_instance.tag_bram")}
    , TOP__cache_tfg__ways__BRA__4__KET____DOT__way_instance{this, Verilated::catName(namep, "cache_tfg.ways[4].way_instance")}
    , TOP__cache_tfg__ways__BRA__4__KET____DOT__way_instance__data_bram{this, Verilated::catName(namep, "cache_tfg.ways[4].way_instance.data_bram")}
    , TOP__cache_tfg__ways__BRA__4__KET____DOT__way_instance__tag_bram{this, Verilated::catName(namep, "cache_tfg.ways[4].way_instance.tag_bram")}
{
        // Check resources
        Verilated::stackCheck(147);
    // Configure time unit / time precision
    _vm_contextp__->timeunit(-12);
    _vm_contextp__->timeprecision(-12);
    // Setup each module's pointers to their submodules
    TOP.cache_tfg = &TOP__cache_tfg;
    TOP__cache_tfg.ways__BRA__0__KET____DOT__way_instance = &TOP__cache_tfg__ways__BRA__0__KET____DOT__way_instance;
    TOP__cache_tfg__ways__BRA__0__KET____DOT__way_instance.data_bram = &TOP__cache_tfg__ways__BRA__0__KET____DOT__way_instance__data_bram;
    TOP__cache_tfg__ways__BRA__0__KET____DOT__way_instance.tag_bram = &TOP__cache_tfg__ways__BRA__0__KET____DOT__way_instance__tag_bram;
    TOP__cache_tfg.ways__BRA__1__KET____DOT__way_instance = &TOP__cache_tfg__ways__BRA__1__KET____DOT__way_instance;
    TOP__cache_tfg__ways__BRA__1__KET____DOT__way_instance.data_bram = &TOP__cache_tfg__ways__BRA__1__KET____DOT__way_instance__data_bram;
    TOP__cache_tfg__ways__BRA__1__KET____DOT__way_instance.tag_bram = &TOP__cache_tfg__ways__BRA__1__KET____DOT__way_instance__tag_bram;
    TOP__cache_tfg.ways__BRA__2__KET____DOT__way_instance = &TOP__cache_tfg__ways__BRA__2__KET____DOT__way_instance;
    TOP__cache_tfg__ways__BRA__2__KET____DOT__way_instance.data_bram = &TOP__cache_tfg__ways__BRA__2__KET____DOT__way_instance__data_bram;
    TOP__cache_tfg__ways__BRA__2__KET____DOT__way_instance.tag_bram = &TOP__cache_tfg__ways__BRA__2__KET____DOT__way_instance__tag_bram;
    TOP__cache_tfg.ways__BRA__3__KET____DOT__way_instance = &TOP__cache_tfg__ways__BRA__3__KET____DOT__way_instance;
    TOP__cache_tfg__ways__BRA__3__KET____DOT__way_instance.data_bram = &TOP__cache_tfg__ways__BRA__3__KET____DOT__way_instance__data_bram;
    TOP__cache_tfg__ways__BRA__3__KET____DOT__way_instance.tag_bram = &TOP__cache_tfg__ways__BRA__3__KET____DOT__way_instance__tag_bram;
    TOP__cache_tfg.ways__BRA__4__KET____DOT__way_instance = &TOP__cache_tfg__ways__BRA__4__KET____DOT__way_instance;
    TOP__cache_tfg__ways__BRA__4__KET____DOT__way_instance.data_bram = &TOP__cache_tfg__ways__BRA__4__KET____DOT__way_instance__data_bram;
    TOP__cache_tfg__ways__BRA__4__KET____DOT__way_instance.tag_bram = &TOP__cache_tfg__ways__BRA__4__KET____DOT__way_instance__tag_bram;
    // Setup each module's pointer back to symbol table (for public functions)
    TOP.__Vconfigure(true);
    TOP__cache_tfg.__Vconfigure(true);
    TOP__cache_tfg__ways__BRA__0__KET____DOT__way_instance.__Vconfigure(true);
    TOP__cache_tfg__ways__BRA__0__KET____DOT__way_instance__data_bram.__Vconfigure(true);
    TOP__cache_tfg__ways__BRA__0__KET____DOT__way_instance__tag_bram.__Vconfigure(true);
    TOP__cache_tfg__ways__BRA__1__KET____DOT__way_instance.__Vconfigure(false);
    TOP__cache_tfg__ways__BRA__1__KET____DOT__way_instance__data_bram.__Vconfigure(false);
    TOP__cache_tfg__ways__BRA__1__KET____DOT__way_instance__tag_bram.__Vconfigure(false);
    TOP__cache_tfg__ways__BRA__2__KET____DOT__way_instance.__Vconfigure(false);
    TOP__cache_tfg__ways__BRA__2__KET____DOT__way_instance__data_bram.__Vconfigure(false);
    TOP__cache_tfg__ways__BRA__2__KET____DOT__way_instance__tag_bram.__Vconfigure(false);
    TOP__cache_tfg__ways__BRA__3__KET____DOT__way_instance.__Vconfigure(false);
    TOP__cache_tfg__ways__BRA__3__KET____DOT__way_instance__data_bram.__Vconfigure(false);
    TOP__cache_tfg__ways__BRA__3__KET____DOT__way_instance__tag_bram.__Vconfigure(false);
    TOP__cache_tfg__ways__BRA__4__KET____DOT__way_instance.__Vconfigure(false);
    TOP__cache_tfg__ways__BRA__4__KET____DOT__way_instance__data_bram.__Vconfigure(false);
    TOP__cache_tfg__ways__BRA__4__KET____DOT__way_instance__tag_bram.__Vconfigure(false);
    // Setup scopes
    __Vscope_cache_tfg__ways__BRA__0__KET____way_instance__data_bram.configure(this, name(), "cache_tfg.ways[0].way_instance.data_bram", "data_bram", 0, VerilatedScope::SCOPE_OTHER);
    __Vscope_cache_tfg__ways__BRA__0__KET____way_instance__tag_bram.configure(this, name(), "cache_tfg.ways[0].way_instance.tag_bram", "tag_bram", 0, VerilatedScope::SCOPE_OTHER);
    __Vscope_cache_tfg__ways__BRA__1__KET____way_instance__data_bram.configure(this, name(), "cache_tfg.ways[1].way_instance.data_bram", "data_bram", 0, VerilatedScope::SCOPE_OTHER);
    __Vscope_cache_tfg__ways__BRA__1__KET____way_instance__tag_bram.configure(this, name(), "cache_tfg.ways[1].way_instance.tag_bram", "tag_bram", 0, VerilatedScope::SCOPE_OTHER);
    __Vscope_cache_tfg__ways__BRA__2__KET____way_instance__data_bram.configure(this, name(), "cache_tfg.ways[2].way_instance.data_bram", "data_bram", 0, VerilatedScope::SCOPE_OTHER);
    __Vscope_cache_tfg__ways__BRA__2__KET____way_instance__tag_bram.configure(this, name(), "cache_tfg.ways[2].way_instance.tag_bram", "tag_bram", 0, VerilatedScope::SCOPE_OTHER);
    __Vscope_cache_tfg__ways__BRA__3__KET____way_instance__data_bram.configure(this, name(), "cache_tfg.ways[3].way_instance.data_bram", "data_bram", 0, VerilatedScope::SCOPE_OTHER);
    __Vscope_cache_tfg__ways__BRA__3__KET____way_instance__tag_bram.configure(this, name(), "cache_tfg.ways[3].way_instance.tag_bram", "tag_bram", 0, VerilatedScope::SCOPE_OTHER);
    __Vscope_cache_tfg__ways__BRA__4__KET____way_instance__data_bram.configure(this, name(), "cache_tfg.ways[4].way_instance.data_bram", "data_bram", 0, VerilatedScope::SCOPE_OTHER);
    __Vscope_cache_tfg__ways__BRA__4__KET____way_instance__tag_bram.configure(this, name(), "cache_tfg.ways[4].way_instance.tag_bram", "tag_bram", 0, VerilatedScope::SCOPE_OTHER);
    // Setup export functions
    for (int __Vfinal = 0; __Vfinal < 2; ++__Vfinal) {
        __Vscope_cache_tfg__ways__BRA__0__KET____way_instance__data_bram.varInsert(__Vfinal,"ram", &(TOP__cache_tfg__ways__BRA__0__KET____DOT__way_instance__data_bram.ram), false, VLVT_UINT16,VLVD_NODIR|VLVF_PUB_RW,2 ,15,0 ,0,255);
        __Vscope_cache_tfg__ways__BRA__0__KET____way_instance__tag_bram.varInsert(__Vfinal,"ram", &(TOP__cache_tfg__ways__BRA__0__KET____DOT__way_instance__tag_bram.ram), false, VLVT_UINT16,VLVD_NODIR|VLVF_PUB_RW,2 ,12,0 ,0,255);
        __Vscope_cache_tfg__ways__BRA__1__KET____way_instance__data_bram.varInsert(__Vfinal,"ram", &(TOP__cache_tfg__ways__BRA__1__KET____DOT__way_instance__data_bram.ram), false, VLVT_UINT16,VLVD_NODIR|VLVF_PUB_RW,2 ,15,0 ,0,255);
        __Vscope_cache_tfg__ways__BRA__1__KET____way_instance__tag_bram.varInsert(__Vfinal,"ram", &(TOP__cache_tfg__ways__BRA__1__KET____DOT__way_instance__tag_bram.ram), false, VLVT_UINT16,VLVD_NODIR|VLVF_PUB_RW,2 ,12,0 ,0,255);
        __Vscope_cache_tfg__ways__BRA__2__KET____way_instance__data_bram.varInsert(__Vfinal,"ram", &(TOP__cache_tfg__ways__BRA__2__KET____DOT__way_instance__data_bram.ram), false, VLVT_UINT16,VLVD_NODIR|VLVF_PUB_RW,2 ,15,0 ,0,255);
        __Vscope_cache_tfg__ways__BRA__2__KET____way_instance__tag_bram.varInsert(__Vfinal,"ram", &(TOP__cache_tfg__ways__BRA__2__KET____DOT__way_instance__tag_bram.ram), false, VLVT_UINT16,VLVD_NODIR|VLVF_PUB_RW,2 ,12,0 ,0,255);
        __Vscope_cache_tfg__ways__BRA__3__KET____way_instance__data_bram.varInsert(__Vfinal,"ram", &(TOP__cache_tfg__ways__BRA__3__KET____DOT__way_instance__data_bram.ram), false, VLVT_UINT16,VLVD_NODIR|VLVF_PUB_RW,2 ,15,0 ,0,255);
        __Vscope_cache_tfg__ways__BRA__3__KET____way_instance__tag_bram.varInsert(__Vfinal,"ram", &(TOP__cache_tfg__ways__BRA__3__KET____DOT__way_instance__tag_bram.ram), false, VLVT_UINT16,VLVD_NODIR|VLVF_PUB_RW,2 ,12,0 ,0,255);
        __Vscope_cache_tfg__ways__BRA__4__KET____way_instance__data_bram.varInsert(__Vfinal,"ram", &(TOP__cache_tfg__ways__BRA__4__KET____DOT__way_instance__data_bram.ram), false, VLVT_UINT16,VLVD_NODIR|VLVF_PUB_RW,2 ,15,0 ,0,255);
        __Vscope_cache_tfg__ways__BRA__4__KET____way_instance__tag_bram.varInsert(__Vfinal,"ram", &(TOP__cache_tfg__ways__BRA__4__KET____DOT__way_instance__tag_bram.ram), false, VLVT_UINT16,VLVD_NODIR|VLVF_PUB_RW,2 ,12,0 ,0,255);
    }
}
