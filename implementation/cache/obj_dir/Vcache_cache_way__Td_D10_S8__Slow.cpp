// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcache.h for the primary calling header

#include "Vcache__pch.h"
#include "Vcache__Syms.h"
#include "Vcache_cache_way__Td_D10_S8.h"

void Vcache_cache_way__Td_D10_S8___ctor_var_reset(Vcache_cache_way__Td_D10_S8* vlSelf);

Vcache_cache_way__Td_D10_S8::Vcache_cache_way__Td_D10_S8(Vcache__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vcache_cache_way__Td_D10_S8___ctor_var_reset(this);
}

void Vcache_cache_way__Td_D10_S8::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vcache_cache_way__Td_D10_S8::~Vcache_cache_way__Td_D10_S8() {
}
