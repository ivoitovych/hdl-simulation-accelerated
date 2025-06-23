// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VONE_SHOT_PULSE_TEST__SYMS_H_
#define VERILATED_VONE_SHOT_PULSE_TEST__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "Vone_shot_pulse_test.h"

// INCLUDE MODULE CLASSES
#include "Vone_shot_pulse_test___024root.h"

// SYMS CLASS (contains all model state)
class alignas(VL_CACHE_LINE_BYTES)Vone_shot_pulse_test__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Vone_shot_pulse_test* const __Vm_modelp;
    VlDeleter __Vm_deleter;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    Vone_shot_pulse_test___024root TOP;

    // CONSTRUCTORS
    Vone_shot_pulse_test__Syms(VerilatedContext* contextp, const char* namep, Vone_shot_pulse_test* modelp);
    ~Vone_shot_pulse_test__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
};

#endif  // guard
