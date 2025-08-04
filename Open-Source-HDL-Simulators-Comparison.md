# Open-Source HDL/RTL Simulators Comparison

Here is an extended comparison table of open-source HDL/RTL simulators. The primary focus remains on those with multi-core simulation support, which are crucial for accelerated simulations on massively parallel hardware like Tenstorrent's TT-Metal AI accelerator. For completeness, other open-source simulators are included with minimal details, as they lack multi-core support and are less relevant to the POC project.

| Simulator Name | Supported Languages | License | Multi-Core Support | Details on Multi-Core/Parallel | Performance Notes | Active/Maintained |
|---------------|---------------------|---------|---------------------|--------------------------------|-------------------|-------------------|
| Verilator | Verilog, SystemVerilog | LGPL-3.0 | <span style="color:green">Yes</span> | Compiles HDL to multithreaded C++/SystemC code, enabling parallel execution on multiple CPU cores. Offers 2-10x speedup through multithreading. | Very high speed; typically 10x faster than standalone SystemC on single thread and 100x faster than interpreted simulators. Suitable for large designs. | Yes |
| Verilator with Domain Partitioning (Research) | Verilog | Open-source (based on Verilator and OpenMP) | <span style="color:green">Yes</span> | Uses domain-based partitioning of input data sets with OpenMP for parallel threads within a single simulation. | Up to 3-4x speedup on 8 threads for RTL and gate-level simulations (e.g., AES-128 and RCA designs). Relevant for massively parallel hardware like multi-core CPUs. | Research implementation; extends active Verilator project. |
| Icarus Verilog | Verilog | GPL-2.0 | <span style="color:red">No</span> | No built-in multi-core support; conceptual discussions on multithreading exist but not implemented. | Good for Verilog 2005 compliance; slower interpreted simulation. | Yes |
| GHDL | VHDL | GPL-2.0 | <span style="color:red">No</span> | Multi-threading discussed but not implemented; remains single-threaded. | Complete VHDL simulator using GCC/LLVM; good performance for VHDL. | Yes |
| NVC | VHDL | GPL-3.0 | <span style="color:red">No</span> | Emphasizes performance via LLVM compilation to native code, but no multi-threaded simulation support. | High simulation performance; supports VHDL-2008 and partial 2019. | Yes |
| Cascade | Verilog (subset) | BSD | <span style="color:red">No</span> | None | JIT compiler for FPGA simulation; hardware-accelerated but not CPU multi-core. | Yes |
| CVC / OSS CVC | Verilog | Perl artistic | <span style="color:red">No</span> | None | Compiled/interpreted modes; moderate speed. | Limited |
| GPL Cver | Verilog | GPL | <span style="color:red">No</span> | None | Pure simulation; limited IEEE compliance. | No |
| Isotel Mixed Signal & Domain Simulation | Verilog | GPL | <span style="color:red">No</span> | None | Mixed-signal with ngspice/Yosys; co-simulation focus. | Yes |
| LIFTING | Verilog | Open-source | <span style="color:red">No</span> | None | Logic/fault simulation; educational. | Limited |
| TkGate | Verilog | GPL-2.0 | <span style="color:red">No</span> | None | Circuit editor with basic simulator; GUI-based. | Limited |
| Verilog Behavioral Simulator (VBS) | Verilog | GPL | <span style="color:red">No</span> | None | Basic behavioral; for students. | No |
| VeriWell | Verilog | GPL-2.0 | <span style="color:red">No</span> | None | Partial compliance; outdated. | No |
| FreeHDL | VHDL | GPL-2.0 | <span style="color:red">No</span> | None | Basic VHDL; incomplete. | No |