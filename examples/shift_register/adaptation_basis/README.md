# adaptation_basis/README.md

# Verilator Runtime Adaptation Layer

This directory contains minimal replacement implementations for the Verilator runtime framework, designed to enable running Verilator-generated C++ code on platforms without standard libraries (such as AI accelerators).

## Files

- `verilated.h` - Main Verilator runtime header replacement
- `verilated_types.h` - Basic type definitions
- `verilated_config.h` - Configuration constants
- `verilatedos.h` - OS abstraction (mostly empty for embedded use)
- `verilated_funcs.h` - Utility functions
- `verilated_trace.h` - Tracing base classes (stubbed)
- `verilated_vcd_c.h` - VCD tracing (stubbed)
- `simple_simulation_main.cpp` - Example main file that includes and runs the simulation
- `Makefile` - Build configuration

## Usage

1. Build the adapted simulation:
   ```bash
   make
