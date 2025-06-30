// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vuart_tx_basic_tb__pch.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

Vuart_tx_basic_tb::Vuart_tx_basic_tb(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vuart_tx_basic_tb__Syms(contextp(), _vcname__, this)}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
    contextp()->traceBaseModelCbAdd(
        [this](VerilatedTraceBaseC* tfp, int levels, int options) { traceBaseModel(tfp, levels, options); });
}

Vuart_tx_basic_tb::Vuart_tx_basic_tb(const char* _vcname__)
    : Vuart_tx_basic_tb(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vuart_tx_basic_tb::~Vuart_tx_basic_tb() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vuart_tx_basic_tb___024root___eval_debug_assertions(Vuart_tx_basic_tb___024root* vlSelf);
#endif  // VL_DEBUG
void Vuart_tx_basic_tb___024root___eval_static(Vuart_tx_basic_tb___024root* vlSelf);
void Vuart_tx_basic_tb___024root___eval_initial(Vuart_tx_basic_tb___024root* vlSelf);
void Vuart_tx_basic_tb___024root___eval_settle(Vuart_tx_basic_tb___024root* vlSelf);
void Vuart_tx_basic_tb___024root___eval(Vuart_tx_basic_tb___024root* vlSelf);

void Vuart_tx_basic_tb::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vuart_tx_basic_tb::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vuart_tx_basic_tb___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_activity = true;
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vuart_tx_basic_tb___024root___eval_static(&(vlSymsp->TOP));
        Vuart_tx_basic_tb___024root___eval_initial(&(vlSymsp->TOP));
        Vuart_tx_basic_tb___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vuart_tx_basic_tb___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

void Vuart_tx_basic_tb::eval_end_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+eval_end_step Vuart_tx_basic_tb::eval_end_step\n"); );
#ifdef VM_TRACE
    // Tracing
    if (VL_UNLIKELY(vlSymsp->__Vm_dumping)) vlSymsp->_traceDump();
#endif  // VM_TRACE
}

//============================================================
// Events and timing
bool Vuart_tx_basic_tb::eventsPending() { return !vlSymsp->TOP.__VdlySched.empty(); }

uint64_t Vuart_tx_basic_tb::nextTimeSlot() { return vlSymsp->TOP.__VdlySched.nextTimeSlot(); }

//============================================================
// Utilities

const char* Vuart_tx_basic_tb::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vuart_tx_basic_tb___024root___eval_final(Vuart_tx_basic_tb___024root* vlSelf);

VL_ATTR_COLD void Vuart_tx_basic_tb::final() {
    Vuart_tx_basic_tb___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vuart_tx_basic_tb::hierName() const { return vlSymsp->name(); }
const char* Vuart_tx_basic_tb::modelName() const { return "Vuart_tx_basic_tb"; }
unsigned Vuart_tx_basic_tb::threads() const { return 1; }
void Vuart_tx_basic_tb::prepareClone() const { contextp()->prepareClone(); }
void Vuart_tx_basic_tb::atClone() const {
    contextp()->threadPoolpOnClone();
}
std::unique_ptr<VerilatedTraceConfig> Vuart_tx_basic_tb::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false, false, false}};
};

//============================================================
// Trace configuration

void Vuart_tx_basic_tb___024root__trace_decl_types(VerilatedVcd* tracep);

void Vuart_tx_basic_tb___024root__trace_init_top(Vuart_tx_basic_tb___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vuart_tx_basic_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vuart_tx_basic_tb___024root*>(voidSelf);
    Vuart_tx_basic_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->pushPrefix(std::string{vlSymsp->name()}, VerilatedTracePrefixType::SCOPE_MODULE);
    Vuart_tx_basic_tb___024root__trace_decl_types(tracep);
    Vuart_tx_basic_tb___024root__trace_init_top(vlSelf, tracep);
    tracep->popPrefix();
}

VL_ATTR_COLD void Vuart_tx_basic_tb___024root__trace_register(Vuart_tx_basic_tb___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void Vuart_tx_basic_tb::traceBaseModel(VerilatedTraceBaseC* tfp, int levels, int options) {
    (void)levels; (void)options;
    VerilatedVcdC* const stfp = dynamic_cast<VerilatedVcdC*>(tfp);
    if (VL_UNLIKELY(!stfp)) {
        vl_fatal(__FILE__, __LINE__, __FILE__,"'Vuart_tx_basic_tb::trace()' called on non-VerilatedVcdC object;"
            " use --trace-fst with VerilatedFst object, and --trace-vcd with VerilatedVcd object");
    }
    stfp->spTrace()->addModel(this);
    stfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    Vuart_tx_basic_tb___024root__trace_register(&(vlSymsp->TOP), stfp->spTrace());
}
