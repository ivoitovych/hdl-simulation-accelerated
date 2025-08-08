// SPDX-FileCopyrightText: © 2024 Tenstorrent Inc.
// SPDX-License-Identifier: Apache-2.0
// Universal Shift Register RTL simulation on TT-Metal compute kernel

#include <cstdint>
#include "debug/dprint.h"

// Inline minimal Verilator types and classes needed
typedef uint8_t CData;
typedef uint32_t IData;
typedef uint64_t QData;
typedef CData VlBool;

#define VL_IN8(name, msb, lsb) CData name
#define VL_OUT8(name, msb, lsb) CData name
#define VL_ATTR_UNUSED __attribute__((unused))
#define VL_NOT_FINAL

template<std::size_t T_Words> class VlWide;
template<> class VlWide<2> { public: QData m_storage[2]; };

// Minimal VerilatedContext stub
class VerilatedContext {
public:
    VerilatedContext() {}
};

// Minimal VerilatedModel stub
class VerilatedModel {
public:
    VerilatedModel(VerilatedContext& context) {}
};

// Minimal VerilatedModule stub
class VerilatedModule {
public:
    VerilatedModule(const char* namep) {}
};

// Minimal VerilatedSyms stub
class VerilatedSyms {
public:
    VerilatedSyms(VerilatedContext* contextp) {}
};

// Minimal VlTriggerVec stub
template<std::size_t T_Bits>
class VlTriggerVec {
public:
    QData m_storage[1];
    void setBit(size_t bit, bool val) {
        if (val) m_storage[0] |= (1ULL << bit);
        else m_storage[0] &= ~(1ULL << bit);
    }
    bool any() const { return m_storage[0] != 0; }
    void clear() { m_storage[0] = 0; }
    void thisOr(const VlTriggerVec& other) { m_storage[0] |= other.m_storage[0]; }
    QData word(size_t idx) const { return m_storage[0]; }
};

// Forward declarations
class Vuniversal_shift_register;
class Vuniversal_shift_register__Syms;
class Vuniversal_shift_register___024root;

// Root module implementation
class Vuniversal_shift_register___024root final : public VerilatedModule {
  public:
    // DESIGN SPECIFIC STATE
    VL_IN8(clk,0,0);
    VL_IN8(rst_n,0,0);
    VL_IN8(enable,0,0);
    VL_IN8(mode,1,0);
    VL_IN8(serial_in_right,0,0);
    VL_IN8(serial_in_left,0,0);
    VL_IN8(parallel_in,7,0);
    VL_OUT8(q,7,0);
    CData __Vtrigprevexpr___TOP__clk__0;
    CData __Vtrigprevexpr___TOP__rst_n__0;
    CData __VactContinue;
    IData __VactIterCount;
    VlTriggerVec<2> __VactTriggered;
    VlTriggerVec<2> __VnbaTriggered;

    Vuniversal_shift_register__Syms* const vlSymsp;

    Vuniversal_shift_register___024root(Vuniversal_shift_register__Syms* symsp, const char* v__name)
        : VerilatedModule{v__name}, vlSymsp{symsp} {
        // Initialize all signals
        clk = 0;
        rst_n = 0;
        enable = 0;
        mode = 0;
        serial_in_right = 0;
        serial_in_left = 0;
        parallel_in = 0;
        q = 0;
        __Vtrigprevexpr___TOP__clk__0 = 0;
        __Vtrigprevexpr___TOP__rst_n__0 = 0;
    }

    ~Vuniversal_shift_register___024root() {}

    void __Vconfigure(bool first) {}

    const char* name() const { return "TOP"; }
};

// Symbol table implementation
class Vuniversal_shift_register__Syms final : public VerilatedSyms {
  public:
    Vuniversal_shift_register* const __Vm_modelp;
    bool __Vm_activity = false;
    uint32_t __Vm_baseCode = 0;
    bool __Vm_didInit = false;

    Vuniversal_shift_register___024root TOP;

    Vuniversal_shift_register__Syms(VerilatedContext* contextp, const char* namep,
                                    Vuniversal_shift_register* modelp)
        : VerilatedSyms{contextp}, __Vm_modelp{modelp}, TOP{this, namep} {
        TOP.__Vconfigure(true);
    }

    ~Vuniversal_shift_register__Syms() {}

    const char* name() { return TOP.name(); }
};

// Main model class
class Vuniversal_shift_register VL_NOT_FINAL : public VerilatedModel {
  private:
    Vuniversal_shift_register__Syms* const vlSymsp;

  public:
    // Port references
    VL_IN8(&clk,0,0);
    VL_IN8(&rst_n,0,0);
    VL_IN8(&enable,0,0);
    VL_IN8(&mode,1,0);
    VL_IN8(&serial_in_right,0,0);
    VL_IN8(&serial_in_left,0,0);
    VL_IN8(&parallel_in,7,0);
    VL_OUT8(&q,7,0);

    Vuniversal_shift_register___024root* const rootp;

    // Constructors
    explicit Vuniversal_shift_register(VerilatedContext* contextp, const char* name = "TOP")
        : VerilatedModel{*contextp}
        , vlSymsp{new Vuniversal_shift_register__Syms(contextp, name, this)}
        , clk{vlSymsp->TOP.clk}
        , rst_n{vlSymsp->TOP.rst_n}
        , enable{vlSymsp->TOP.enable}
        , mode{vlSymsp->TOP.mode}
        , serial_in_right{vlSymsp->TOP.serial_in_right}
        , serial_in_left{vlSymsp->TOP.serial_in_left}
        , parallel_in{vlSymsp->TOP.parallel_in}
        , q{vlSymsp->TOP.q}
        , rootp{&(vlSymsp->TOP)} {
    }

    explicit Vuniversal_shift_register(const char* name = "TOP")
        : Vuniversal_shift_register(nullptr, name) {}

    virtual ~Vuniversal_shift_register() {
        delete vlSymsp;
    }

    // Core eval function
    void eval() { eval_step(); }

    void eval_step() {
        vlSymsp->__Vm_activity = true;
        if (!vlSymsp->__Vm_didInit) {
            vlSymsp->__Vm_didInit = true;
            // Initial eval
            rootp->__Vtrigprevexpr___TOP__clk__0 = rootp->clk;
            rootp->__Vtrigprevexpr___TOP__rst_n__0 = rootp->rst_n;
        }

        // Main eval loop
        rootp->__VactIterCount = 0U;
        rootp->__VactContinue = 1U;
        while (rootp->__VactContinue) {
            rootp->__VactIterCount++;
            rootp->__VactContinue = 0U;

            // Check triggers
            rootp->__VactTriggered.setBit(0U, ((rootp->clk) & (~rootp->__Vtrigprevexpr___TOP__clk__0)));
            rootp->__VactTriggered.setBit(1U, ((~rootp->rst_n) & (rootp->__Vtrigprevexpr___TOP__rst_n__0)));
            rootp->__Vtrigprevexpr___TOP__clk__0 = rootp->clk;
            rootp->__Vtrigprevexpr___TOP__rst_n__0 = rootp->rst_n;

            if (rootp->__VactTriggered.any()) {
                rootp->__VnbaTriggered.thisOr(rootp->__VactTriggered);
            }
        }

        // NBA eval
        if (rootp->__VnbaTriggered.any()) {
            if ((3ULL & rootp->__VnbaTriggered.word(0U))) {
                // Core shift register logic
                if (rootp->rst_n) {
                    if (rootp->enable) {
                        rootp->q = ((2U & (IData)(rootp->mode))
                                    ? ((1U & (IData)(rootp->mode))
                                        ? (IData)(rootp->parallel_in)
                                        : ((0xfeU & ((IData)(rootp->q) << 1U))
                                           | (IData)(rootp->serial_in_left)))
                                    : ((1U & (IData)(rootp->mode))
                                        ? (((IData)(rootp->serial_in_right) << 7U)
                                           | (0x7fU & ((IData)(rootp->q) >> 1U)))
                                        : (IData)(rootp->q)));
                    }
                } else {
                    rootp->q = 0U;
                }
            }
            rootp->__VnbaTriggered.clear();
        }
    }

    void final() {}
    const char* name() const { return vlSymsp->name(); }
    const char* hierName() const { return name(); }
    const char* modelName() const { return "Vuniversal_shift_register"; }
    unsigned threads() const { return 1; }
};

// Helper function to print hex values using DPRINT
void dprint_hex(const char* prefix, uint32_t value) {
    DPRINT << prefix << "0x";
    uint32_t high_nibble = (value >> 4) & 0xF;
    uint32_t low_nibble = value & 0xF;

    char high_char = (high_nibble < 10) ? ('0' + high_nibble) : ('A' + high_nibble - 10);
    char low_char = (low_nibble < 10) ? ('0' + low_nibble) : ('A' + low_nibble - 10);

    DPRINT << high_char << low_char << ENDL();
}

// Verification helper
bool verify_result_dprint(const char* test_name, uint32_t actual, uint32_t expected) {
    DPRINT << test_name << ": ";
    if (actual == expected) {
        DPRINT << "CORRECT (got 0x";
        uint32_t high = (actual >> 4) & 0xF;
        uint32_t low = actual & 0xF;
        char high_char = (high < 10) ? ('0' + high) : ('A' + high - 10);
        char low_char = (low < 10) ? ('0' + low) : ('A' + low - 10);
        DPRINT << high_char << low_char << ")" << ENDL();
        return true;
    } else {
        DPRINT << "INCORRECT - expected 0x";
        uint32_t exp_high = (expected >> 4) & 0xF;
        uint32_t exp_low = expected & 0xF;
        char exp_high_char = (exp_high < 10) ? ('0' + exp_high) : ('A' + exp_high - 10);
        char exp_low_char = (exp_low < 10) ? ('0' + exp_low) : ('A' + exp_low - 10);
        DPRINT << exp_high_char << exp_low_char << " but got 0x";

        uint32_t act_high = (actual >> 4) & 0xF;
        uint32_t act_low = actual & 0xF;
        char act_high_char = (act_high < 10) ? ('0' + act_high) : ('A' + act_high - 10);
        char act_low_char = (act_low < 10) ? ('0' + act_low) : ('A' + act_low - 10);
        DPRINT << act_high_char << act_low_char << ENDL();
        return false;
    }
}

// RTL simulation logic
void run_universal_shift_register_test() {
    // Create an instance of our model
    Vuniversal_shift_register* dut = new Vuniversal_shift_register();

    int total_tests = 0;
    int passed_tests = 0;

    // Initialize
    dut->clk = 0;
    dut->rst_n = 0;
    dut->enable = 0;
    dut->mode = 0;
    dut->serial_in_right = 0;
    dut->serial_in_left = 0;
    dut->parallel_in = 0;

    // Reset sequence
    DPRINT << "=== Universal Shift Register Test ===" << ENDL();
    DPRINT << "Resetting..." << ENDL();
    for (int i = 0; i < 5; i++) {
        dut->clk = 0;
        dut->eval();
        dut->clk = 1;
        dut->eval();
    }

    // Release reset
    dut->rst_n = 1;
    DPRINT << "Reset released" << ENDL();

    // Test 1: Load parallel value
    DPRINT << ENDL() << "Test 1: Load parallel value 0xA5" << ENDL();
    dut->enable = 1;
    dut->mode = 3;  // Load mode
    dut->parallel_in = 0xA5;

    dut->clk = 0; dut->eval();
    dut->clk = 1; dut->eval();

    total_tests++;
    if (verify_result_dprint("  Load 0xA5", dut->q, 0xA5)) passed_tests++;

    // Test 2: Shift right
    DPRINT << ENDL() << "Test 2: Shift right with serial_in=1" << ENDL();
    dut->mode = 1;  // Shift right
    dut->serial_in_right = 1;

    dut->clk = 0; dut->eval();
    dut->clk = 1; dut->eval();
    total_tests++;
    if (verify_result_dprint("  After 1st shift", dut->q, 0xD2)) passed_tests++;

    dut->clk = 0; dut->eval();
    dut->clk = 1; dut->eval();
    total_tests++;
    if (verify_result_dprint("  After 2nd shift", dut->q, 0xE9)) passed_tests++;

    dut->clk = 0; dut->eval();
    dut->clk = 1; dut->eval();
    total_tests++;
    if (verify_result_dprint("  After 3rd shift", dut->q, 0xF4)) passed_tests++;

    // Test 3: Shift left
    DPRINT << ENDL() << "Test 3: Shift left with serial_in=0" << ENDL();
    dut->mode = 2;  // Shift left
    dut->serial_in_left = 0;

    dut->clk = 0; dut->eval();
    dut->clk = 1; dut->eval();
    total_tests++;
    if (verify_result_dprint("  After 1st shift", dut->q, 0xE8)) passed_tests++;

    dut->clk = 0; dut->eval();
    dut->clk = 1; dut->eval();
    total_tests++;
    if (verify_result_dprint("  After 2nd shift", dut->q, 0xD0)) passed_tests++;

    dut->clk = 0; dut->eval();
    dut->clk = 1; dut->eval();
    total_tests++;
    if (verify_result_dprint("  After 3rd shift", dut->q, 0xA0)) passed_tests++;

    // Test 4: Hold mode
    DPRINT << ENDL() << "Test 4: Hold mode (should not change)" << ENDL();
    dut->mode = 0;  // Hold mode
    unsigned int hold_value = dut->q;

    for (int i = 0; i < 2; i++) {
        dut->clk = 0; dut->eval();
        dut->clk = 1; dut->eval();
    }
    total_tests++;
    if (verify_result_dprint("  After hold cycles", dut->q, hold_value)) passed_tests++;

    // Summary
    DPRINT << ENDL() << "=== Test Summary ===" << ENDL();
    dprint_hex("Total tests: ", total_tests);
    dprint_hex("Passed tests: ", passed_tests);

    if (passed_tests == total_tests) {
        DPRINT << ENDL() << "ALL TESTS PASSED!" << ENDL();
    } else {
        DPRINT << ENDL() << "SOME TESTS FAILED!" << ENDL();
    }

    // Clean up
    delete dut;
}

// Required TT-Metal compute kernel functions
namespace NAMESPACE {

void unpack_main() {
    // Empty unpack function - no data movement needed for this simulation
}

void math_main() {
    // Run the RTL simulation in the math stage
    run_universal_shift_register_test();
}

void pack_main() {
    // Empty pack function - no data movement needed for this simulation
}

}  // namespace NAMESPACE