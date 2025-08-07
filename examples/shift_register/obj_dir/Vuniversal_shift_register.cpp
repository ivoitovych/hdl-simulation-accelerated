// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vuniversal_shift_register__pch.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

Vuniversal_shift_register::Vuniversal_shift_register(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vuniversal_shift_register__Syms(contextp(), _vcname__, this)}
    , clk{vlSymsp->TOP.clk}
    , rst_n{vlSymsp->TOP.rst_n}
    , enable{vlSymsp->TOP.enable}
    , mode{vlSymsp->TOP.mode}
    , serial_in_right{vlSymsp->TOP.serial_in_right}
    , serial_in_left{vlSymsp->TOP.serial_in_left}
    , parallel_in{vlSymsp->TOP.parallel_in}
    , q{vlSymsp->TOP.q}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
    contextp()->traceBaseModelCbAdd(
        [this](VerilatedTraceBaseC* tfp, int levels, int options) { traceBaseModel(tfp, levels, options); });
}

Vuniversal_shift_register::Vuniversal_shift_register(const char* _vcname__)
    : Vuniversal_shift_register(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vuniversal_shift_register::~Vuniversal_shift_register() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vuniversal_shift_register___024root___eval_debug_assertions(Vuniversal_shift_register___024root* vlSelf);
#endif  // VL_DEBUG
void Vuniversal_shift_register___024root___eval_static(Vuniversal_shift_register___024root* vlSelf);
void Vuniversal_shift_register___024root___eval_initial(Vuniversal_shift_register___024root* vlSelf);
void Vuniversal_shift_register___024root___eval_settle(Vuniversal_shift_register___024root* vlSelf);
void Vuniversal_shift_register___024root___eval(Vuniversal_shift_register___024root* vlSelf);

void Vuniversal_shift_register::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vuniversal_shift_register::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vuniversal_shift_register___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_activity = true;
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vuniversal_shift_register___024root___eval_static(&(vlSymsp->TOP));
        Vuniversal_shift_register___024root___eval_initial(&(vlSymsp->TOP));
        Vuniversal_shift_register___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vuniversal_shift_register___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool Vuniversal_shift_register::eventsPending() { return false; }

uint64_t Vuniversal_shift_register::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* Vuniversal_shift_register::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vuniversal_shift_register___024root___eval_final(Vuniversal_shift_register___024root* vlSelf);

VL_ATTR_COLD void Vuniversal_shift_register::final() {
    Vuniversal_shift_register___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vuniversal_shift_register::hierName() const { return vlSymsp->name(); }
const char* Vuniversal_shift_register::modelName() const { return "Vuniversal_shift_register"; }
unsigned Vuniversal_shift_register::threads() const { return 1; }
void Vuniversal_shift_register::prepareClone() const { contextp()->prepareClone(); }
void Vuniversal_shift_register::atClone() const {
    contextp()->threadPoolpOnClone();
}
std::unique_ptr<VerilatedTraceConfig> Vuniversal_shift_register::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false, false, false}};
};

//============================================================
// Trace configuration

void Vuniversal_shift_register___024root__trace_decl_types(VerilatedVcd* tracep);

void Vuniversal_shift_register___024root__trace_init_top(Vuniversal_shift_register___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vuniversal_shift_register___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vuniversal_shift_register___024root*>(voidSelf);
    Vuniversal_shift_register__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->pushPrefix(std::string{vlSymsp->name()}, VerilatedTracePrefixType::SCOPE_MODULE);
    Vuniversal_shift_register___024root__trace_decl_types(tracep);
    Vuniversal_shift_register___024root__trace_init_top(vlSelf, tracep);
    tracep->popPrefix();
}

VL_ATTR_COLD void Vuniversal_shift_register___024root__trace_register(Vuniversal_shift_register___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void Vuniversal_shift_register::traceBaseModel(VerilatedTraceBaseC* tfp, int levels, int options) {
    (void)levels; (void)options;
    VerilatedVcdC* const stfp = dynamic_cast<VerilatedVcdC*>(tfp);
    if (VL_UNLIKELY(!stfp)) {
        vl_fatal(__FILE__, __LINE__, __FILE__,"'Vuniversal_shift_register::trace()' called on non-VerilatedVcdC object;"
            " use --trace-fst with VerilatedFst object, and --trace-vcd with VerilatedVcd object");
    }
    stfp->spTrace()->addModel(this);
    stfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    Vuniversal_shift_register___024root__trace_register(&(vlSymsp->TOP), stfp->spTrace());
}
