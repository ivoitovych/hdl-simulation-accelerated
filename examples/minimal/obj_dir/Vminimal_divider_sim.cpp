// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vminimal_divider_sim__pch.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

Vminimal_divider_sim::Vminimal_divider_sim(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vminimal_divider_sim__Syms(contextp(), _vcname__, this)}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
    contextp()->traceBaseModelCbAdd(
        [this](VerilatedTraceBaseC* tfp, int levels, int options) { traceBaseModel(tfp, levels, options); });
}

Vminimal_divider_sim::Vminimal_divider_sim(const char* _vcname__)
    : Vminimal_divider_sim(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vminimal_divider_sim::~Vminimal_divider_sim() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vminimal_divider_sim___024root___eval_debug_assertions(Vminimal_divider_sim___024root* vlSelf);
#endif  // VL_DEBUG
void Vminimal_divider_sim___024root___eval_static(Vminimal_divider_sim___024root* vlSelf);
void Vminimal_divider_sim___024root___eval_initial(Vminimal_divider_sim___024root* vlSelf);
void Vminimal_divider_sim___024root___eval_settle(Vminimal_divider_sim___024root* vlSelf);
void Vminimal_divider_sim___024root___eval(Vminimal_divider_sim___024root* vlSelf);

void Vminimal_divider_sim::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vminimal_divider_sim::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vminimal_divider_sim___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_activity = true;
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vminimal_divider_sim___024root___eval_static(&(vlSymsp->TOP));
        Vminimal_divider_sim___024root___eval_initial(&(vlSymsp->TOP));
        Vminimal_divider_sim___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vminimal_divider_sim___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool Vminimal_divider_sim::eventsPending() { return !vlSymsp->TOP.__VdlySched.empty(); }

uint64_t Vminimal_divider_sim::nextTimeSlot() { return vlSymsp->TOP.__VdlySched.nextTimeSlot(); }

//============================================================
// Utilities

const char* Vminimal_divider_sim::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vminimal_divider_sim___024root___eval_final(Vminimal_divider_sim___024root* vlSelf);

VL_ATTR_COLD void Vminimal_divider_sim::final() {
    Vminimal_divider_sim___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vminimal_divider_sim::hierName() const { return vlSymsp->name(); }
const char* Vminimal_divider_sim::modelName() const { return "Vminimal_divider_sim"; }
unsigned Vminimal_divider_sim::threads() const { return 1; }
void Vminimal_divider_sim::prepareClone() const { contextp()->prepareClone(); }
void Vminimal_divider_sim::atClone() const {
    contextp()->threadPoolpOnClone();
}
std::unique_ptr<VerilatedTraceConfig> Vminimal_divider_sim::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false, false, false}};
};

//============================================================
// Trace configuration

void Vminimal_divider_sim___024root__trace_decl_types(VerilatedVcd* tracep);

void Vminimal_divider_sim___024root__trace_init_top(Vminimal_divider_sim___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vminimal_divider_sim___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vminimal_divider_sim___024root*>(voidSelf);
    Vminimal_divider_sim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->pushPrefix(std::string{vlSymsp->name()}, VerilatedTracePrefixType::SCOPE_MODULE);
    Vminimal_divider_sim___024root__trace_decl_types(tracep);
    Vminimal_divider_sim___024root__trace_init_top(vlSelf, tracep);
    tracep->popPrefix();
}

VL_ATTR_COLD void Vminimal_divider_sim___024root__trace_register(Vminimal_divider_sim___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void Vminimal_divider_sim::traceBaseModel(VerilatedTraceBaseC* tfp, int levels, int options) {
    (void)levels; (void)options;
    VerilatedVcdC* const stfp = dynamic_cast<VerilatedVcdC*>(tfp);
    if (VL_UNLIKELY(!stfp)) {
        vl_fatal(__FILE__, __LINE__, __FILE__,"'Vminimal_divider_sim::trace()' called on non-VerilatedVcdC object;"
            " use --trace-fst with VerilatedFst object, and --trace-vcd with VerilatedVcd object");
    }
    stfp->spTrace()->addModel(this);
    stfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    Vminimal_divider_sim___024root__trace_register(&(vlSymsp->TOP), stfp->spTrace());
}
