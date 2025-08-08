# Adapted Verilator Implementation

This directory contains the **adapted** version of the shift register that attempts to run the full Verilator-generated code on TT-Metal hardware. This represents an intermediate step between pure Verilator simulation and the fully rewritten minimal version.

## Status: ❌ Build Fails

This version fails to build due to memory constraints. The Verilator-generated code with all its infrastructure is too large for the TT-Metal compute kernel memory regions.

## What This Contains

### Core Files

- `universal_shift_register_adapted.cpp` - Host-side program that launches the kernel
- `kernels/universal_shift_register_compute.cpp` - Compute kernel containing adapted Verilator code
- `obj_dir/` - Original Verilator-generated files
- `verilated*.h` - Verilator runtime headers (adapted stubs)

## The Approach

This implementation attempted to:
1. Include minimal stubs for all Verilator runtime classes
2. Preserve the original Verilator-generated logic structure
3. Run the simulation entirely within a TT-Metal compute kernel

## Why It Fails

The linker errors show the code exceeds available memory:
```
region `REGION_DATA' overflowed by 12224 bytes
```

The Verilator infrastructure, even with minimal stubs, is too heavyweight for the constrained compute kernel environment.

## Key Learnings

1. **Memory Constraints**: TT-Metal compute kernels have strict memory limits
2. **Verilator Overhead**: Even minimal Verilator infrastructure is significant
3. **Need for Simplification**: Led to the creation of the `rewritten` version

## Build Attempt

To see the build failure:
```bash
cd ~/setup/tt-metal
./build_Release/programming_examples/hdl_simulation_accelerated/universal_shift_register_adapted
```

## Relationship to Other Versions

- **Original**: Full Verilator simulation (runs on CPU)
- **Adapted** (this): Failed attempt to port full Verilator to TT-Metal
- **Rewritten**: Successful minimal implementation without Verilator overhead

## Technical Details

The kernel attempts to implement:
- `Vuniversal_shift_register` class (main model)
- `Vuniversal_shift_register__Syms` (symbol table)
- `Vuniversal_shift_register___024root` (root module)
- Full eval() logic matching Verilator's generated code

Despite efforts to minimize the code, the combination of:
- Class hierarchies
- Virtual functions
- Template instantiations
- Symbol tables

...results in code that's too large for the available memory regions.

## Next Steps

This failed attempt directly motivated the creation of the `rewritten` version, which abandons the Verilator infrastructure entirely in favor of a minimal, direct implementation of the shift register logic.