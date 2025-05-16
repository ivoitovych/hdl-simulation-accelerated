// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vserial_crc32_generator_tb.h for the primary calling header

#ifndef VERILATED_VSERIAL_CRC32_GENERATOR_TB___024ROOT_H_
#define VERILATED_VSERIAL_CRC32_GENERATOR_TB___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vserial_crc32_generator_tb__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vserial_crc32_generator_tb___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ serial_crc32_generator_tb__DOT__clk;
    CData/*0:0*/ serial_crc32_generator_tb__DOT__rst_n;
    CData/*0:0*/ serial_crc32_generator_tb__DOT__enable;
    CData/*0:0*/ serial_crc32_generator_tb__DOT__data_in;
    CData/*0:0*/ serial_crc32_generator_tb__DOT__new_message;
    CData/*0:0*/ __Vtrigprevexpr___TOP__serial_crc32_generator_tb__DOT__clk__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__serial_crc32_generator_tb__DOT__rst_n__0;
    CData/*0:0*/ __VactContinue;
    IData/*31:0*/ serial_crc32_generator_tb__DOT__crc_out;
    IData/*31:0*/ serial_crc32_generator_tb__DOT__test_case;
    IData/*31:0*/ serial_crc32_generator_tb__DOT__error_count;
    IData/*31:0*/ serial_crc32_generator_tb__DOT__expected_crc;
    IData/*31:0*/ serial_crc32_generator_tb__DOT__total_test_bytes;
    IData/*31:0*/ serial_crc32_generator_tb__DOT__send_byte__Vstatic__bit_idx;
    IData/*31:0*/ serial_crc32_generator_tb__DOT__send_test_message__Vstatic__byte_idx;
    IData/*31:0*/ serial_crc32_generator_tb__DOT__initialize_test_data__Vstatic__i;
    IData/*31:0*/ serial_crc32_generator_tb__DOT__dut__DOT__crc_reg;
    IData/*31:0*/ __VactIterCount;
    VlUnpacked<CData/*7:0*/, 16> serial_crc32_generator_tb__DOT__test_data_bytes;
    VlUnpacked<CData/*0:0*/, 3> __Vm_traceActivity;
    VlDelayScheduler __VdlySched;
    VlTriggerScheduler __VtrigSched_he20acd69__0;
    VlTriggerScheduler __VtrigSched_he20acd38__0;
    VlTriggerVec<4> __VactTriggered;
    VlTriggerVec<4> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vserial_crc32_generator_tb__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vserial_crc32_generator_tb___024root(Vserial_crc32_generator_tb__Syms* symsp, const char* v__name);
    ~Vserial_crc32_generator_tb___024root();
    VL_UNCOPYABLE(Vserial_crc32_generator_tb___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
