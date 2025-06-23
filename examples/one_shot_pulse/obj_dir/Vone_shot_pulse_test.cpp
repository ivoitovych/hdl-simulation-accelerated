// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vone_shot_pulse_test__pch.h"

//============================================================
// Constructors

Vone_shot_pulse_test::Vone_shot_pulse_test(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vone_shot_pulse_test__Syms(contextp(), _vcname__, this)}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

Vone_shot_pulse_test::Vone_shot_pulse_test(const char* _vcname__)
    : Vone_shot_pulse_test(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vone_shot_pulse_test::~Vone_shot_pulse_test() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vone_shot_pulse_test___024root___eval_debug_assertions(Vone_shot_pulse_test___024root* vlSelf);
#endif  // VL_DEBUG
void Vone_shot_pulse_test___024root___eval_static(Vone_shot_pulse_test___024root* vlSelf);
void Vone_shot_pulse_test___024root___eval_initial(Vone_shot_pulse_test___024root* vlSelf);
void Vone_shot_pulse_test___024root___eval_settle(Vone_shot_pulse_test___024root* vlSelf);
void Vone_shot_pulse_test___024root___eval(Vone_shot_pulse_test___024root* vlSelf);

void Vone_shot_pulse_test::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vone_shot_pulse_test::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vone_shot_pulse_test___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vone_shot_pulse_test___024root___eval_static(&(vlSymsp->TOP));
        Vone_shot_pulse_test___024root___eval_initial(&(vlSymsp->TOP));
        Vone_shot_pulse_test___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vone_shot_pulse_test___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool Vone_shot_pulse_test::eventsPending() { return !vlSymsp->TOP.__VdlySched.empty(); }

uint64_t Vone_shot_pulse_test::nextTimeSlot() { return vlSymsp->TOP.__VdlySched.nextTimeSlot(); }

//============================================================
// Utilities

const char* Vone_shot_pulse_test::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vone_shot_pulse_test___024root___eval_final(Vone_shot_pulse_test___024root* vlSelf);

VL_ATTR_COLD void Vone_shot_pulse_test::final() {
    Vone_shot_pulse_test___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vone_shot_pulse_test::hierName() const { return vlSymsp->name(); }
const char* Vone_shot_pulse_test::modelName() const { return "Vone_shot_pulse_test"; }
unsigned Vone_shot_pulse_test::threads() const { return 1; }
void Vone_shot_pulse_test::prepareClone() const { contextp()->prepareClone(); }
void Vone_shot_pulse_test::atClone() const {
    contextp()->threadPoolpOnClone();
}
