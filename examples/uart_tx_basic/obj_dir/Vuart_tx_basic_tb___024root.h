// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vuart_tx_basic_tb.h for the primary calling header

#ifndef VERILATED_VUART_TX_BASIC_TB___024ROOT_H_
#define VERILATED_VUART_TX_BASIC_TB___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vuart_tx_basic_tb__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vuart_tx_basic_tb___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ uart_tx_basic_tb__DOT__clk;
    CData/*0:0*/ uart_tx_basic_tb__DOT__rst_n;
    CData/*0:0*/ uart_tx_basic_tb__DOT__tx;
    CData/*0:0*/ uart_tx_basic_tb__DOT__busy;
    CData/*7:0*/ uart_tx_basic_tb__DOT__data_in;
    CData/*0:0*/ uart_tx_basic_tb__DOT__start;
    CData/*7:0*/ uart_tx_basic_tb__DOT__received_data;
    CData/*2:0*/ uart_tx_basic_tb__DOT__dut__DOT__state;
    CData/*2:0*/ uart_tx_basic_tb__DOT__dut__DOT__bit_index;
    CData/*7:0*/ uart_tx_basic_tb__DOT__dut__DOT__data_reg;
    CData/*0:0*/ uart_tx_basic_tb__DOT__dut__DOT__baud_clk_en;
    CData/*7:0*/ __Vtask_uart_tx_basic_tb__DOT__send_byte__4__byte_to_send;
    CData/*7:0*/ __Vtask_uart_tx_basic_tb__DOT__receive_uart_byte__5__rx_data;
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __Vtrigprevexpr___TOP__uart_tx_basic_tb__DOT__clk__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__uart_tx_basic_tb__DOT__rst_n__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__uart_tx_basic_tb__DOT__busy__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__uart_tx_basic_tb__DOT__tx__0;
    CData/*0:0*/ __VactContinue;
    SData/*8:0*/ uart_tx_basic_tb__DOT__dut__DOT__clk_counter;
    IData/*31:0*/ uart_tx_basic_tb__DOT__test_num;
    IData/*31:0*/ uart_tx_basic_tb__DOT__bit_count;
    IData/*31:0*/ uart_tx_basic_tb__DOT__i;
    IData/*31:0*/ __VactIterCount;
    VlUnpacked<CData/*0:0*/, 2> __Vm_traceActivity;
    VlDelayScheduler __VdlySched;
    VlTriggerScheduler __VtrigSched_h6ee15b6a__0;
    VlTriggerScheduler __VtrigSched_h23a82dfd__0;
    VlTriggerScheduler __VtrigSched_h690aa6f8__0;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<5> __VactTriggered;
    VlTriggerVec<5> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vuart_tx_basic_tb__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vuart_tx_basic_tb___024root(Vuart_tx_basic_tb__Syms* symsp, const char* v__name);
    ~Vuart_tx_basic_tb___024root();
    VL_UNCOPYABLE(Vuart_tx_basic_tb___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
