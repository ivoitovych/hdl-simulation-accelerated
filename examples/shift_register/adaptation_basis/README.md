// adaptation_basis/README.md
# Verilator Adaptation Basis

## Overview

This directory contains a minimal adaptation layer that allows Verilator-generated RTL simulation code to run without the full Verilator runtime environment. This is particularly useful for running simulations on embedded systems, accelerators, or other platforms where the standard Verilator runtime is not available.

## What We've Accomplished

1. **Minimal Runtime Replacement**: Created lightweight replacements for Verilator's runtime components:
   - `verilated.h` - Core classes and context management
   - `verilated_types.h` - Basic type definitions (CData, IData, etc.)
   - `verilated_vcd_c.h` - Stub implementation for VCD tracing
   - `verilated_trace.h` - Trace-related type definitions
   - `verilated_funcs.h` - Utility functions

2. **No Dependencies**: The adaptation layer requires:
   - No STL (custom implementations of needed features like `std::unique_ptr` and `std::string`)
   - No Verilator installation
   - Only basic system calls (`write()` for output)

3. **Working Example**: Successfully runs a universal shift register simulation with:
   - Parallel load
   - Shift left/right operations
   - Hold mode
   - Automatic verification of results

## Building and Running

```bash
make clean
make
./sim_host
```

## Expected Output

The simulation will test a universal shift register and verify all operations:

```
=== Universal Shift Register Test ===
Resetting...
Reset released

Test 1: Load parallel value 0xA5
  Load 0xA5: CORRECT (got 0xA5)

Test 2: Shift right with serial_in=1
  After 1st shift: CORRECT (got 0xD2)
  After 2nd shift: CORRECT (got 0xE9)
  After 3rd shift: CORRECT (got 0xF4)

Test 3: Shift left with serial_in=0
  After 1st shift: CORRECT (got 0xE8)
  After 2nd shift: CORRECT (got 0xD0)
  After 3rd shift: CORRECT (got 0xA0)

Test 4: Hold mode (should not change)
  After hold cycles: CORRECT (got 0xA0)

=== Test Summary ===
Total tests: 0x08
Passed tests: 0x08
ALL TESTS PASSED!
```

## How It Works

1. **Header Adaptation**: The Verilator-generated code expects certain headers and classes. We provide minimal implementations that satisfy these requirements.

2. **Access Control Workaround**: The generated code has private members accessed by friend classes. We use a `#define private public` trick during header inclusion to work around this.

3. **Direct Compilation**: Instead of linking against Verilator libraries, we directly include all generated `.cpp` files in our main file.

## Porting to Other Platforms

To port this to an accelerator or embedded system:

1. **Replace I/O**: Change `write()` calls to your platform's output mechanism (e.g., DPRINT)
2. **Memory Management**: Adapt `new`/`delete` if your platform has custom memory allocation
3. **Types**: Ensure basic types (uint8_t, etc.) are available or defined

## Files

- `simple_simulation_main.cpp` - Main simulation runner with tests and verification
- `verilated*.h` - Minimal Verilator runtime replacements
- `Makefile` - Simple build configuration

## Limitations

- VCD tracing is stubbed out (not implemented)
- Multi-threaded simulation not supported
- Some advanced Verilator features may require additional implementation

This adaptation layer demonstrates that Verilator-generated code can be decoupled from its runtime and run in constrained environments, making it suitable for hardware acceleration or embedded simulation scenarios.

