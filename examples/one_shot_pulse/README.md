# One Shot Pulse Generator

A configurable one-shot pulse generator that produces a single pulse after a specified delay when triggered.

## Description

This module generates exactly one pulse when the enable signal goes high. The pulse occurs after N clock cycles and stays high for a configurable width. To generate another pulse, the enable signal must be toggled low and then high again.

## Features

- **One-shot operation**: Only one pulse per enable rising edge
- **Configurable delay**: Wait N clock cycles before generating the pulse
- **Configurable pulse width**: Pulse can be 1 or more clock cycles wide
- **Re-triggerable**: Toggle enable low→high to generate another pulse
- **Synchronous reset**: Active-high reset signal

## Files

- `one_shot_pulse.v` - Contains both the one-shot pulse module and its testbench

## Parameters

- `N` - Number of clock cycles to wait after enable before generating the pulse (default: 10)
- `PULSE_WIDTH` - Number of clock cycles the pulse stays high (default: 1)

## Module Interface

```verilog
module one_shot_pulse #(
    parameter N = 10,
    parameter PULSE_WIDTH = 1
)(
    input  wire clk,      // Clock input
    input  wire rst,      // Active-high reset
    input  wire enable,   // Trigger input (rising edge starts countdown)
    output reg  pulse     // Pulse output
);
```

## Simulation

Run the simulation using Verilator:

```bash
# Compile and run
verilator --binary --timing one_shot_pulse.v --top-module one_shot_pulse_test
./obj_dir/Vone_shot_pulse_test

# With waveform generation
verilator --binary --timing --trace one_shot_pulse.v --top-module one_shot_pulse_test
./obj_dir/Vone_shot_pulse_test
gtkwave wave.vcd
```

## Expected Output

The simulation demonstrates three test cases with N=5, PULSE_WIDTH=2:

```
Time(ns)  Enable  Pulse
   30000     1      0    <- Enable goes high, counter starts
   40000     1      0
   50000     1      0
   60000     1      0
   70000     1      0
   80000     1      1    <- Pulse starts after 5 cycles
   90000     1      1    <- Pulse stays high for 2 cycles
  100000     1      0    <- Pulse ends
  ...
  130000     0      0    <- Enable goes low
  140000     0      0
  150000     1      0    <- Enable goes high again
  ...
  200000     1      1    <- Second pulse after 5 cycles
  210000     1      1
  220000     1      0    <- No more pulses even with enable high
```

## How It Works

1. When `enable` transitions from 0→1, the module starts counting
2. After N clock cycles, the pulse output goes high
3. The pulse stays high for PULSE_WIDTH clock cycles
4. After the pulse completes, the module enters a "done" state
5. To generate another pulse, `enable` must go low, then high again
6. Reset signal clears all internal state and outputs

## Use Cases

- Generating precise timing pulses after an event
- Creating delayed triggers for other modules
- Implementing timeout mechanisms
- Generating control signals with specific timing requirements

## Customization

To change the timing parameters, modify the instantiation in your design:

```verilog
// Example: 100 cycle delay, 5 cycle pulse width
one_shot_pulse #(.N(100), .PULSE_WIDTH(5)) my_pulse_gen (
    .clk(clk),
    .rst(rst),
    .enable(trigger),
    .pulse(delayed_pulse)
);
```

