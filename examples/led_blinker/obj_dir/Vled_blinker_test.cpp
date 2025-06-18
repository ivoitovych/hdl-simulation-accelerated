// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vled_blinker_test__pch.h"

//============================================================
// Constructors

Vled_blinker_test::Vled_blinker_test(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vled_blinker_test__Syms(contextp(), _vcname__, this)}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

Vled_blinker_test::Vled_blinker_test(const char* _vcname__)
    : Vled_blinker_test(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vled_blinker_test::~Vled_blinker_test() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vled_blinker_test___024root___eval_debug_assertions(Vled_blinker_test___024root* vlSelf);
#endif  // VL_DEBUG
void Vled_blinker_test___024root___eval_static(Vled_blinker_test___024root* vlSelf);
void Vled_blinker_test___024root___eval_initial(Vled_blinker_test___024root* vlSelf);
void Vled_blinker_test___024root___eval_settle(Vled_blinker_test___024root* vlSelf);
void Vled_blinker_test___024root___eval(Vled_blinker_test___024root* vlSelf);

void Vled_blinker_test::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vled_blinker_test::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vled_blinker_test___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vled_blinker_test___024root___eval_static(&(vlSymsp->TOP));
        Vled_blinker_test___024root___eval_initial(&(vlSymsp->TOP));
        Vled_blinker_test___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vled_blinker_test___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool Vled_blinker_test::eventsPending() { return !vlSymsp->TOP.__VdlySched.empty(); }

uint64_t Vled_blinker_test::nextTimeSlot() { return vlSymsp->TOP.__VdlySched.nextTimeSlot(); }

//============================================================
// Utilities

const char* Vled_blinker_test::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vled_blinker_test___024root___eval_final(Vled_blinker_test___024root* vlSelf);

VL_ATTR_COLD void Vled_blinker_test::final() {
    Vled_blinker_test___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vled_blinker_test::hierName() const { return vlSymsp->name(); }
const char* Vled_blinker_test::modelName() const { return "Vled_blinker_test"; }
unsigned Vled_blinker_test::threads() const { return 1; }
void Vled_blinker_test::prepareClone() const { contextp()->prepareClone(); }
void Vled_blinker_test::atClone() const {
    contextp()->threadPoolpOnClone();
}
