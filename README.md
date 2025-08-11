# HDL Simulation Accelerated

This repository provides a **Docker-based, reproducible environment for Verilog (HDL) simulation** using Verilator, targeting both classical CPU flows and future acceleration on AI hardware (e.g., TT-Metal/Tenstorrent).
It is both a practical teaching environment and a foundation for research into high-performance simulation.

## 📑 **Project Presentation**

For a comprehensive overview, including market analysis, achievements, examples, evaluations, challenges, and future directions, please refer to the [Project Presentation](./PROJECT_PRESENTATION_COMBINED.md).

## ✅ **Proof of Concept Achievement**

**HDL simulation is now running on real TT-Metal AI accelerator hardware!** The minimal_divider example has been successfully integrated and executed on Tenstorrent hardware, validating the core concept of HDL simulation acceleration.

## 🚀 Project Roadmap

See [`ROADMAP.md`](./ROADMAP.md) for a detailed multi-phase development plan, ranging from simple HDL simulation examples to large-scale simulation accelerated by modern AI hardware.

## 🛠️ Project Plan

See [`TTMRTL_PLAN.md`](./TTMRTL_PLAN.md) for the current stepwise Jira ticket plan, examples, and stage goals.

## 🔗 TT-Metal Integration

This project can be integrated as a submodule in the official Tenstorrent TT-Metal repository, enabling HDL simulations to run directly on TT-Metal hardware. The integration includes:

- **Verilator-to-TT-Metal converter**: Automatically translates Verilog designs to TT-Metal compute kernels
- **Working hardware example**: The `minimal_divider` example runs on real TT-Metal devices
- **Build system integration**: Seamless compilation within the TT-Metal build environment

### Integration Steps

To integrate this project into your TT-Metal repository:

1. **Add as submodule** in the programming examples directory:
   ```bash
   cd tt_metal/programming_examples
   git submodule add git@github.com:ivoitovych/hdl-simulation-accelerated.git hdl_simulation_accelerated
   ```

2. **Update CMakeLists.txt** to include the submodule in the build:
   ```cmake
   # Add this line to tt_metal/programming_examples/CMakeLists.txt
   # after the CREATE_PGM_EXAMPLES_EXE line:
   add_subdirectory(${CMAKE_CURRENT_SOURCE_DIR}/hdl_simulation_accelerated)
   ```

### Running on TT-Metal Hardware

```bash
# In the TT-Metal repository with this project as a submodule:
./build_metal.sh --build-programming-examples --enable-ccache --debug
./build_Debug/programming_examples/hdl_simulation_accelerated/minimal_divider
```

## 🗂️ Directory Structure

```
.
├── Dockerfile                      # Docker environment (Ubuntu + Verilator + tools)
├── .gitignore                      # Ignore build artifacts
├── PROJECT_PRESENTATION_COMBINED.md # Comprehensive project presentation and documentation
├── README.md                       # This file
├── ROADMAP.md                      # Detailed project roadmap and goals
├── TTMRTL_PLAN.md                  # Current stepwise Jira ticket plan, examples, and stage goals
├── simple/                         # Simple counter example: C++ testbench + Verilog
│   ├── counter.v
│   ├── sim_main.cpp
│   └── obj_dir/                    # (build output, ignored by git)
├── examples/
│   ├── minimal/                    # Minimal all-Verilog divider simulation (no C++)
│   │   ├── minimal_divider_sim.v
│   │   ├── Makefile
│   │   └── README.md
│   ├── serial_crc32_generator/     # Bit-serial CRC-32 generator with comprehensive testbench
│   │   ├── serial_crc32_generator.v
│   │   ├── serial_crc32_generator_tb.v
│   │   ├── Makefile
│   │   └── README.md
│   └── shift_register/             # Universal shift register with multiple modes
│       ├── universal_shift_register.v
│       ├── universal_shift_register_tb.v
│       ├── Makefile
│       └── README.md
├── verilator2ttmetal/              # Converter tool for TT-Metal integration
│   ├── verilator2ttmetal.py       # Main converter script
│   └── README.md
└── CMakeLists.txt                  # TT-Metal build integration
```

Each example includes a standalone **README.md** with usage instructions and design details.

---

## 🏗️ Quick Start

### 1. **Build the Docker Container**

```sh
docker build -t verilator-dev .
```

### 2. **Run the Container**

```sh
docker run -it -v $(pwd):/workdir/project verilator-dev /bin/bash
```

This mounts your project at `/workdir/project` inside the container for code/test reuse.

### 3. **Run Any Example**

Each subdirectory contains a Makefile and documentation.
For example, to run the **minimal divider simulation**:

```sh
cd /workdir/project/examples/minimal
make
```

For the **simple C++-driven counter example**:

```sh
cd /workdir/project/simple
verilator -Wall --trace -cc counter.v --exe sim_main.cpp
make -j$(nproc) -C obj_dir -f Vcounter.mk Vcounter
./obj_dir/Vcounter
```

---

## 🔬 Example Highlights

* **`simple/`**: Minimal 8-bit counter, C++ testbench — great for classic Verilator flow.
* **`examples/minimal/`**: *All-in-Verilog* ripple divider (no C++ required); includes clean simulation logging and ready for porting to other platforms.
* **`examples/serial_crc32_generator/`**: Industry-standard CRC-32, tested with comprehensive vectors; shows how to structure real-world HDL testbenches.
* **`examples/shift_register/`**: Universal shift register (parametric width, multiple modes, robust testbench); ideal for exploring parameterized hardware.

---

## 🛠️ Tools and Environment

* **Ubuntu 24.04** (via Docker)
* **Verilator** (latest, built from source)
* **GNU Make, GCC, G++, development utilities** (vim, nano, gdb, valgrind)
* **GTKWave** (optional, for waveform viewing)
* **TT-Metal Integration** (for AI hardware acceleration)
* All build dependencies included in the Dockerfile.

---

## 📖 References

* [Verilator Documentation](https://verilator.org/guide/latest/)
* [Verilog HDL Quick Reference](https://www.ece.uvic.ca/~fayez/courses/ceng465/vlogref.pdf)
* [TT-Metal Documentation](https://docs.tenstorrent.com/)

---

## License

This repository is provided as-is for educational, research, and proof-of-concept purposes.

---

*Happy simulating! For questions, issues, or ideas, feel free to open an issue or discussion.*

