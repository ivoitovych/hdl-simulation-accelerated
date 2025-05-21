# HDL Simulation Accelerated

This repository provides a **Docker-based, reproducible environment for Verilog (HDL) simulation** using Verilator, targeting both classical CPU flows and future acceleration on AI hardware (e.g., TT-Metal/Tenstorrent).  
It is both a practical teaching environment and a foundation for research into high-performance simulation.

## 🚀 Project Roadmap

See [`ROADMAP.md`](./ROADMAP.md) for a detailed multi-phase development plan, ranging from simple HDL simulation examples to large-scale simulation accelerated by modern AI hardware.

## 🗂️ Directory Structure

```

.
├── Dockerfile                      # Docker environment (Ubuntu + Verilator + tools)
├── .gitignore                      # Ignore build artifacts
├── README.md                       # This file
├── ROADMAP.md                      # Detailed project roadmap and goals
├── simple/                         # Simple counter example: C++ testbench + Verilog
│   ├── counter.v
│   ├── sim\_main.cpp
│   └── obj\_dir/                    # (build output, ignored by git)
├── examples/
│   ├── minimal/                    # Minimal all-Verilog divider simulation (no C++)
│   │   ├── minimal\_divider\_sim.v
│   │   ├── Makefile
│   │   └── README.md
│   ├── serial\_crc32\_generator/     # Bit-serial CRC-32 generator with comprehensive testbench
│   │   ├── serial\_crc32\_generator.v
│   │   ├── serial\_crc32\_generator\_tb.v
│   │   ├── Makefile
│   │   └── README.md
│   └── shift\_register/             # Universal shift register with multiple modes
│       ├── universal\_shift\_register.v
│       ├── universal\_shift\_register\_tb.v
│       ├── Makefile
│       └── README.md

````

Each example includes a standalone **README.md** with usage instructions and design details.

---

## 🏗️ Quick Start

### 1. **Build the Docker Container**

```sh
docker build -t verilator-dev .
````

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
* All build dependencies included in the Dockerfile.

---

## 📖 References

* [Verilator Documentation](https://verilator.org/guide/latest/)
* [Verilog HDL Quick Reference](https://www.ece.uvic.ca/~fayez/courses/ceng465/vlogref.pdf)

---

## License

This repository is provided as-is for educational, research, and proof-of-concept purposes.

---

*Happy simulating! For questions, issues, or ideas, feel free to open an issue or discussion.*

