# 8-bit Counter with Wrap-around

A configurable 8-bit binary counter with automatic wrap-around, load capability, and overflow/underflow detection.

## Description

This module implements a simple 8-bit binary counter that counts from 0 to 255 and automatically wraps around. It includes additional features like parallel load, enable control, and status flags for overflow detection.

## Features

- **8-bit counting range**: Counts from 0 to 255 with automatic wrap-around
- **Parallel load**: Load any 8-bit value directly into the counter
- **Enable control**: Counter can be enabled/disabled while maintaining state
- **Overflow detection**: Flag indicates when counter wraps from 255 to 0
- **Underflow detection**: Flag indicates when counter would wrap from 0 to 255 (future enhancement)
- **Synchronous operation**: All operations occur on positive clock edge

## Files

- `counter_8bit.v` - Contains both the counter module and its testbench

## Module Interface

```verilog
module counter_8bit (
    input  wire clk,           // Clock input
    input  wire rst,           // Active-high reset
    input  wire enable,        // Enable counting when high
    input  wire load,          // Load enable (parallel load)
    input  wire [7:0] load_value, // Value to load when load is high
    output reg  [7:0] count,   // Current counter value
    output wire overflow,      // High for one cycle when wrapping 255→0
    output wire underflow      // High for one cycle when wrapping 0→255
);
```

## Simulation

Run the simulation using Verilator:

```bash
# Compile and run
verilator --binary --timing counter_8bit.v --top-module counter_8bit_test
./obj_dir/Vcounter_8bit_test

# With waveform generation
verilator --binary --timing --trace counter_8bit.v --top-module counter_8bit_test
./obj_dir/Vcounter_8bit_test
gtkwave wave.vcd
```

## Expected Output

The simulation demonstrates various counter operations:

```
Time(ns)  Count  Overflow  Underflow  Enable  Load
   20000     1       0         0        1     0
   30000     2       0         0        1     0
   40000     3       0         0        1     0
   ...
  270000   253       0         0        0     1    <- Load value 253
  280000   254       0         0        1     0    <- Resume counting
  290000   255       0         0        1     0
  300000     0       1         0        1     0    <- Overflow! Wrap to 0
  310000     1       0         0        1     0
  320000     2       0         0        1     0
  ...
```

## How It Works

1. **Reset**: When `rst` is high, counter resets to 0
2. **Load**: When `load` is high, `load_value` is loaded into the counter (overrides enable)
3. **Enable**: When `enable` is high and `load` is low, counter increments by 1 each clock cycle
4. **Wrap-around**: Counter automatically wraps from 255 back to 0
5. **Overflow detection**: `overflow` flag is high for one cycle when transitioning from 255 to 0

## Use Cases

- **Frequency division**: Use overflow output to create slower clock signals
- **Address generation**: Generate sequential addresses for memory or registers
- **Timeout counters**: Count system ticks for timeout detection
- **Loop counters**: Count iterations in digital signal processing
- **Pattern generation**: Create repeating numeric sequences
- **Test stimulus**: Generate test patterns for other modules

## Customization

The counter can be easily modified for different bit widths:

```verilog
// 16-bit version
module counter_16bit (
    input wire clk,
    input wire rst,
    input wire enable,
    input wire load,
    input wire [15:0] load_value,
    output reg [15:0] count,
    output wire overflow,
    output wire underflow
);
    
    assign overflow = enable && (count == 16'hFFFF) && !load;
    assign underflow = enable && (count == 16'h0000) && !load;
    
    always @(posedge clk) begin
        if (rst) begin
            count <= 16'h0000;
        end else if (load) begin
            count <= load_value;
        end else if (enable) begin
            count <= count + 1'b1;
        end
    end
endmodule
```

## Integration with Docker Environment

This example can be run within the Docker container:

```bash
# Navigate to the project root  
cd /path/to/hdl-simulation-accelerated

# Run the Docker container
docker run -it -v $(pwd):/workdir/project verilator-dev /bin/bash

# Inside the container, navigate to this example
cd /workdir/project/examples/counter_8bit

# Run the example
verilator --binary --timing counter_8bit.v --top-module counter_8bit_test
./obj_dir/Vcounter_8bit_test
```

