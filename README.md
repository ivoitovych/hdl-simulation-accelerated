# Verilator Setup and Examples

This repository contains a basic setup for building and using Verilator on WSL Ubuntu 24.04.

## What is Verilator?

Verilator is an open-source Verilog/SystemVerilog simulator and synthesis tool. It converts Verilog and SystemVerilog code into C++ or SystemC code, which is then compiled into an executable for fast simulation.

## Building Verilator from Source

### Prerequisites

Install the necessary dependencies:

```bash
sudo apt update
sudo apt install git make autoconf g++ flex bison libfl-dev ccache \
     libgoogle-perftools-dev numactl perl python3 python3-pip \
     zlib1g zlib1g-dev -y
```

Note: The `libgz-dev` package may not be available in some Ubuntu versions and can be safely omitted.

#### For Dockerfile Environments

If you're setting up in a Dockerfile, you'll want to avoid interactive prompts for timezone/region selection. Add this to your Dockerfile before the apt commands:

```dockerfile
# Prevent interactive prompts during package installation
ENV DEBIAN_FRONTEND=noninteractive
```

### Build Steps

1. Clone the repository:
   ```bash
   git clone https://github.com/verilator/verilator.git
   cd verilator
   ```

2. Configure and build:
   ```bash
   autoconf
   ./configure
   make -j $(nproc)
   ```

3. Run Verilator directly from the build folder:
   ```bash
   ./bin/verilator --version
   ```

This approach keeps Verilator contained within its build directory without installing it system-wide.

Alternatively, if you prefer a system-wide installation:
   ```bash
   sudo make install
   verilator --version
   ```

## Basic Example: Counter

This example shows a simple 8-bit counter implementation and simulation.

### Counter Verilog Module (`counter.v`)

```verilog
module counter (
    input clk,
    input reset,
    output reg [7:0] count
);
    always @(posedge clk or posedge reset) begin
        if (reset)
            count <= 8'h0;
        else
            count <= count + 1;
    end
endmodule
```

### C++ Testbench (`sim_main.cpp`)

```cpp
#include "Vcounter.h"
#include "verilated.h"
#include <iostream>

int main(int argc, char** argv) {
    // Initialize Verilator
    Verilated::commandArgs(argc, argv);
    
    // Create an instance of our module
    Vcounter* counter = new Vcounter;
    
    // Initialize inputs
    counter->clk = 0;
    counter->reset = 1;
    counter->eval();
    
    // Release reset
    counter->reset = 0;
    
    // Run for 20 clock cycles
    for (int i = 0; i < 20; i++) {
        // Toggle clock
        counter->clk = !counter->clk;
        counter->eval();
        
        // Print when clock rises
        if (counter->clk) {
            std::cout << "Count: " << (int)counter->count << std::endl;
        }
    }
    
    // Clean up
    delete counter;
    return 0;
}
```

### Compile and Run

When running from the build directory:
```bash
./bin/verilator -Wall --trace -cc counter.v --exe sim_main.cpp
make -j -C obj_dir -f Vcounter.mk Vcounter
./obj_dir/Vcounter
```

If you did a system-wide installation:
```bash
verilator -Wall --trace -cc counter.v --exe sim_main.cpp
make -j -C obj_dir -f Vcounter.mk Vcounter
./obj_dir/Vcounter
```

## Project Structure

```
.
├── verilator/           # Verilator source code
│   └── bin/verilator    # Executable built from source
├── counter.v            # Example Verilog module
├── sim_main.cpp         # Example C++ testbench
└── obj_dir/             # Generated files (created during compilation)
    └── Vcounter         # Compiled simulation executable
```

## Next Steps

- Add more complex Verilog modules
- Create a Makefile for easier compilation
- Add waveform visualization with GTKWave
- Explore advanced Verilator features

## Resources

- [Official Verilator Documentation](https://verilator.org/guide/latest/)
- [Verilator GitHub Repository](https://github.com/verilator/verilator)


