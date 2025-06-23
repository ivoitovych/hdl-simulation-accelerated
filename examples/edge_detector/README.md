# Edge Detector

A simple edge detection module that identifies rising edges, falling edges, and any edge transitions on an input signal.

## Description

This module monitors an input signal and detects transitions between clock cycles. It provides three output signals:
- `rising_edge` - High for one cycle when input transitions from 0→1
- `falling_edge` - High for one cycle when input transitions from 1→0  
- `any_edge` - High for one cycle when any transition occurs

## Features

- **Real-time edge detection**: Detects edges with single-cycle latency
- **Multiple edge types**: Separate outputs for rising, falling, and any edge
- **Synchronous operation**: All detection occurs on positive clock edge
- **Clean reset behavior**: All outputs cleared during reset

## Files

- `edge_detector.v` - Contains both the edge detector module and its testbench

## Module Interface

```verilog
module edge_detector (
    input  wire clk,          // Clock input
    input  wire rst,          // Active-high reset
    input  wire signal_in,    // Input signal to monitor
    output reg  rising_edge,  // High for one cycle on 0→1 transition
    output reg  falling_edge, // High for one cycle on 1→0 transition
    output reg  any_edge      // High for one cycle on any transition
);
```

## Simulation

Run the simulation using Verilator:

```bash
# Compile and run
verilator --binary --timing edge_detector.v --top-module edge_detector_test
./obj_dir/Vedge_detector_test

# With waveform generation
verilator --binary --timing --trace edge_detector.v --top-module edge_detector_test
./obj_dir/Vedge_detector_test
gtkwave wave.vcd
```

## Expected Output

The simulation shows edge detection for various input transitions:

```
Time(ns)  Input  Rising  Falling  Any
   20000     0      0       0       0
   30000     0      0       0       0
   40000     1      1       0       1    <- Rising edge detected
   50000     1      0       0       0
   60000     1      0       0       0
   70000     1      0       0       0
   80000     0      0       1       1    <- Falling edge detected
   90000     0      0       0       0
  100000     0      0       0       0
  110000     1      1       0       1    <- Rising edge detected
  120000     1      0       0       0
  130000     0      0       1       1    <- Falling edge detected
  ...
```

## How It Works

1. The module stores the previous state of the input signal in `signal_prev`
2. On each clock cycle, it compares the current input with the previous state
3. Edge detection logic:
   - Rising edge: `signal_in & ~signal_prev` (current=1, previous=0)
   - Falling edge: `~signal_in & signal_prev` (current=0, previous=1)
   - Any edge: `signal_in ^ signal_prev` (current ≠ previous)
4. The previous state is updated for the next cycle

## Use Cases

- **Button debouncing**: Detect clean button press/release events
- **Clock domain crossing**: Detect transitions in asynchronous signals
- **Protocol processing**: Identify start/stop conditions in serial protocols
- **Event counting**: Count transitions in digital signals
- **Synchronization**: Generate sync pulses based on external events

## Integration with Docker Environment

This example can be run within the Docker container:

```bash
# Navigate to the project root
cd /path/to/hdl-simulation-accelerated

# Run the Docker container
docker run -it -v $(pwd):/workdir/project verilator-dev /bin/bash

# Inside the container, navigate to this example
cd /workdir/project/examples/edge_detector

# Run the example
verilator --binary --timing edge_detector.v --top-module edge_detector_test
./obj_dir/Vedge_detector_test
```

