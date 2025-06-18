# LED Blinker Verilog Example

A simple parameterizable LED blinker module with testbench for Verilator simulation.

## Description

This example implements a configurable LED blinker that toggles an LED output after a specified number of clock cycles. The design includes:
- A parameterizable counter that counts from 0 to N-1
- An LED output that toggles each time the counter wraps around
- A testbench for simulation

## Files

- `led_blinker.v` - Contains both the LED blinker module and its testbench

## Parameters

- `N` - Number of clock cycles before the LED toggles (default: 24)
  - Example: With a 24MHz clock and N=24,000,000, the LED blinks at 0.5Hz (once per second)

## Simulation

Run the simulation using Verilator:

```bash
# Compile and run
verilator --binary --timing led_blinker.v --top-module led_blinker_test
./obj_dir/Vled_blinker_test

# With waveform generation
verilator --binary --timing --trace led_blinker.v --top-module led_blinker_test
./obj_dir/Vled_blinker_test
gtkwave wave.vcd
```

## Expected Output

The simulation shows the LED toggling every 4 clock cycles (N=4 in testbench):
```
Time(ns)  LED
   20000   0
   30000   0
   40000   0
   50000   1    <- LED turns on after 4 cycles
   60000   1
   70000   1
   80000   1
   90000   0    <- LED turns off after 4 cycles
  ...
```

## Module Interface

```verilog
module led_blinker #(
    parameter N = 24
)(
    input  wire clk,   // Clock input
    input  wire rst,   // Active-high reset
    output reg  led    // LED output
);
```

## How It Works

1. The counter increments on each positive clock edge
2. When counter reaches N-1, it resets to 0 and toggles the LED
3. Reset signal synchronously clears the counter and LED

## Customization

To change the blink rate, modify the N parameter in the testbench instantiation:
```verilog
led_blinker #(.N(8)) dut (  // LED toggles every 8 clock cycles
    .clk(clk),
    .rst(rst),
    .led(led)
);
```

