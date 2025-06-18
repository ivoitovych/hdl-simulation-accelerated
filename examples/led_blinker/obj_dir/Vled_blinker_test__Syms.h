// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VLED_BLINKER_TEST__SYMS_H_
#define VERILATED_VLED_BLINKER_TEST__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "Vled_blinker_test.h"

// INCLUDE MODULE CLASSES
#include "Vled_blinker_test___024root.h"

// SYMS CLASS (contains all model state)
class alignas(VL_CACHE_LINE_BYTES)Vled_blinker_test__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Vled_blinker_test* const __Vm_modelp;
    VlDeleter __Vm_deleter;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    Vled_blinker_test___024root    TOP;

    // CONSTRUCTORS
    Vled_blinker_test__Syms(VerilatedContext* contextp, const char* namep, Vled_blinker_test* modelp);
    ~Vled_blinker_test__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
};

#endif  // guard
