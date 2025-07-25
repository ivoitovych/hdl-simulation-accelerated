# Split Simulation Architecture

A proof-of-concept for distributed HDL simulation by splitting a traditional Verilog testbench into three independent components that communicate via standardized CSV files. This demonstrates how simulation can be separated into distinct phases suitable for host-accelerator architectures.

## Description

This example demonstrates splitting a traditional Verilog testbench into three independent components:

```
┌─────────────┐   vectors.csv   ┌─────────────┐   results.csv   ┌─────────────┐
│ Stimulus    │ ──────────────> │ DUT         │ ──────────────> │ Results     │
│ Generator   │                 │ Simulator   │                 │ Checker     │
└─────────────┘                 └─────────────┘                 └─────────────┘
```

The example uses a D Flip-Flop with synchronous reset and enable as the device under test (DUT).

## Features

- **Clean separation**: Independent stimulus generation, simulation, and verification
- **CSV communication**: Standardized vector format for component communication
- **Comprehensive testing**: Covers all DUT behaviors (reset, enable, data transitions)
- **Pipeline verification**: Compares split approach against traditional monolithic testbench
- **Performance analysis**: Framework for measuring split approach overhead

## Files

- `dff_re.v` - D Flip-Flop with reset and enable (DUT)
- `dff_re_tb_traditional.v` - Traditional monolithic testbench
- `stim_gen.v` - Standalone stimulus generator
- `dut_sim.v` - Standalone DUT simulator
- `checker.v` - Standalone results checker/verifier
- `Makefile` - Build automation for both approaches
- `README.md` - This file

## Module Interface (DUT)

```verilog
module dff_re (
    input  wire clk,      // Clock input
    input  wire rst_n,    // Active-low synchronous reset
    input  wire enable,   // Enable signal
    input  wire d,        // Data input
    output reg  q         // Data output
);
```

## Vector Formats

### Input Vectors (vectors.csv)
```csv
# timestamp,clk,rst_n,enable,d
0,0,0,0,0
5,1,0,0,0
10,0,0,0,0
15,1,0,0,0
20,0,1,0,1
25,1,1,0,1
...
```

### Output Results (results.csv)
```csv
# timestamp,clk,rst_n,enable,d,q
0,0,0,0,0,0
5,1,0,0,0,0
10,0,0,0,0,0
15,1,0,0,0,0
20,0,1,0,1,0
25,1,1,0,1,0
...
```

## Usage

### Traditional Approach

Run the monolithic testbench:

```bash
make traditional
```

This generates a single output file with test results.

### Split Approach

Run the three-component pipeline:

```bash
make split
```

This executes:
1. **Stimulus Generator** → creates `results/vectors.csv`
2. **DUT Simulator** → reads vectors, produces `results/results.csv`
3. **Results Checker** → verifies results, produces verification log

### Complete Demo

Run both approaches and compare:

```bash
make demo      # Run both traditional and split
make compare   # Compare results
```

### Manual Pipeline

You can also run the split pipeline manually:

```bash
# Build all components
make compile

# Run pipeline step by step
./obj_dir/Vstim_gen > results/vectors.csv
./obj_dir/Vdut_sim < results/vectors.csv > results/results.csv
./obj_dir/Vchecker < results/results.csv > results/verification.log

# Or as a single pipeline
./obj_dir/Vstim_gen | ./obj_dir/Vdut_sim | ./obj_dir/Vchecker
```

## Test Coverage

The stimulus generator creates comprehensive test vectors covering:

1. **Power-on reset sequence** - Reset active for multiple cycles
2. **Enable/disable functionality** - Data hold vs. capture behavior
3. **Data transitions** - Both 0→1 and 1→0 transitions
4. **Corner cases** - Reset during operation, rapid mode changes
5. **Edge cases** - Back-to-back operations, timing verification

## Verification Strategy

The results checker implements a golden model that:

- Validates reset behavior (q=0 when rst_n=0)
- Checks enable functionality (q holds when enable=0)
- Verifies data propagation (q=d when enable=1 and rst_n=1)
- Confirms proper timing (changes only on positive clock edges)
- Detects any discrepancies with detailed error reporting

## Performance Considerations

The split approach introduces overhead through:

- **I/O operations** - CSV file reading/writing
- **Text parsing** - Converting CSV to internal representations
- **Process spawning** - Multiple executable invocations

This overhead is measured and can be optimized through:

- Binary vector formats instead of CSV
- Streaming protocols instead of files
- Shared memory communication

## Example Output

### Traditional Approach
```
# timestamp,clk,rst_n,enable,d,q
0,0,0,0,0,0
5,1,0,0,0,0
10,0,0,0,0,0
15,1,0,0,0,0
20,0,1,0,1,0
25,1,1,0,1,0
30,0,1,1,1,0
35,1,1,1,1,1
```

### Split Approach Verification
```
=== DUT Verification Starting ===
PASS  at t=0: q=0 (clk=0, rst_n=0, enable=0, d=0)
PASS  at t=5: q=0 (clk=1, rst_n=0, enable=0, d=0)
PASS  at t=35: q=1 (clk=1, rst_n=1, enable=1, d=1)
...
=== Verification Summary ===
Total checks:      20
Errors found:      0
*** ALL TESTS PASSED ***
```

## Future Extensions

1. **Binary Protocol** - Replace CSV with efficient binary format
2. **Streaming Mode** - Continuous vector processing without files
3. **Parallel DUTs** - Multiple DUT instances with different vector segments
4. **Compression** - Vector compression for large-scale simulations
5. **TT-Metal Integration** - Map DUT simulator to AI accelerator compute kernels

## Integration with Acceleration Framework

This split architecture provides a foundation for:

- **Host-accelerator workflows** - Stimulus on CPU, simulation on accelerator
- **Distributed simulation** - Components on different compute nodes
- **Heterogeneous computing** - Optimal hardware for each simulation phase
- **Scalable verification** - Independent scaling of generation, simulation, and checking

## Docker Environment

To run in the Docker container:

```bash
# Navigate to project root
cd /path/to/hdl-simulation-accelerated

# Run Docker container
docker run -it -v $(pwd):/workdir/project verilator-dev /bin/bash

# Inside container
cd /workdir/project/examples/split_simulation
make demo
```

## Design Notes

- The DUT uses synchronous reset for predictable timing
- Clock period is 10ns (5ns high, 5ns low) for all components
- Reset is active-low following common design practices
- Enable signal controls data capture but doesn't affect reset
- All components are fully independent with no shared state
- CSV format chosen for human readability and debugging ease

