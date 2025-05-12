# HDL Simulation Accelerated

This repository contains a Docker-based setup for hardware description language (HDL) simulation using Verilator, with a focus on creating a clean, isolated environment for digital design work.
It also serves as the foundation for an ongoing project to explore accelerated HDL simulation on modern AI accelerator hardware.

## 📋 Project Roadmap

This project is in active development, with a multi-phase plan to move from simple HDL simulation examples to full-scale accelerated simulation on AI hardware.
You can view the detailed development roadmap [here](./ROADMAP.md).

## Project Structure

```

.
├── Dockerfile              # Docker configuration for the simulation environment
├── .gitignore              # Git ignore file to exclude build artifacts
├── README.md               # This file
├── ROADMAP.md              # Project development roadmap
├── simple/                 # Example counter circuit
│   ├── counter.v           # Verilog module for an 8-bit counter
│   ├── sim\_main.cpp        # C++ testbench for the counter
│   └── obj\_dir/            # Verilator output (generated, not tracked in git)

````

## Quick Start

### Building the Docker Container

```bash
# Build the Docker image with Verilator
docker build -t verilator-dev .
````

### Running the Container

To run the container with an interactive shell:

```bash
docker run -it -v $(pwd):/workdir/project verilator-dev /bin/bash
```

This mounts your current directory to `/workdir/project` inside the container.

### Building and Running the Example

From inside the container:

```bash
cd /workdir/project/simple
verilator -Wall --trace -cc counter.v --exe sim_main.cpp
make -j $(nproc) -C obj_dir -f Vcounter.mk Vcounter
./obj_dir/Vcounter
```

Expected output:

```
Count: 0
Count: 1
Count: 2
...
Count: 9
```

## Environment Details

The Docker container includes:

* Ubuntu 24.04
* Verilator (latest from GitHub)
* GNU Make, GCC, G++
* Development tools (vim, nano, gdb, valgrind)
* All necessary dependencies for HDL development

## Using Verilator

### Basic Verilator Commands

1. **Compile Verilog to C++**:

   ```bash
   verilator -Wall --trace -cc your_design.v --exe your_testbench.cpp
   ```

2. **Build the simulation executable**:

   ```bash
   make -j $(nproc) -C obj_dir -f Vyour_design.mk Vyour_design
   ```

3. **Run the simulation**:

   ```bash
   ./obj_dir/Vyour_design
   ```

### Verilator Flags

* `-Wall`: Enable all warnings
* `--trace`: Enable waveform tracing (creates VCD files)
* `-cc`: Generate C++ output
* `--exe`: Specify C++ testbench
* `-O3`: Optimization level (optional)
* `--timing`: Enable timing models (optional)

## Troubleshooting

If you encounter issues with the Docker build:

1. Make sure Docker has enough resources allocated.
2. Check that all required packages are installed in the Dockerfile.
3. Verify that your host system has connectivity to GitHub (for cloning Verilator).

## References

* [Verilator Documentation](https://verilator.org/guide/latest/)
* [Verilog HDL Quick Reference](https://www.ece.uvic.ca/~fayez/courses/ceng465/vlogref.pdf)
