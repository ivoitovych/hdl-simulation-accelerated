## Examples and Evaluation

### Overview

A core strength of the “hdl-simulation-accelerated” project is its structured suite of HDL simulation examples, spanning a spectrum from simple, single-module designs to advanced, multi-file projects with real-world protocols and TT-Metal acceleration. This section details the design, evaluation, and integration status of these examples, illustrating both the technical breadth and the practical impact of the proof-of-concept effort.


### 1. **Examples Directory Structure**

The `examples/` directory is organized to provide incremental learning and to serve as a robust testbed for toolchain development. Each example includes:

* **Verilog (and, where applicable, C++) source files**
* **Testbenches** for verification
* **Makefiles** for build automation
* **README** documentation and instructions
* **TT-Metal integration scripts** for selected cases

Examples are classified as **single-file** (basic modules) or **multi-file** (complex projects with separate DUT and testbench).


### 2. **Comprehensive Examples Table**

| Example Name                | Plan Ref   | DUT Lang | TB Lang | Structure   | Sim Type                | Build System     | TT-Metal Integration   | Verification Level       | Key Features                                  |
| --------------------------- | ---------- | -------- | ------- | ----------- | ----------------------- | ---------------- | ---------------------- | ------------------------ | --------------------------------------------- |
| 8bit\_counter               | TTMRTL-001 | Verilog  | Verilog | Single-file | Waveform + Verification | Makefile         | ❌                      | Overflow, full coverage  | 8-bit up/down/load/overflow counter           |
| edge\_detector              | TTMRTL-001 | Verilog  | Verilog | Single-file | Waveform + Verification | Makefile         | ❌                      | Functional               | Any/rising/falling edge detect, timing        |
| led\_blinker                | TTMRTL-001 | Verilog  | Verilog | Single-file | Waveform + Verification | Makefile         | ✅ Partial (C++ kernel) | Functional               | Parameterized LED blinker, partial TT-Metal   |
| minimal\_divider            | TTMRTL-001 | Verilog  | Verilog | Single-file | Waveform only           | Makefile         | ✅ Working (C++ kernel) | Basic waveform           | Ripple divider, first full TT-Metal example   |
| one\_shot\_pulse            | TTMRTL-001 | Verilog  | Verilog | Single-file | Waveform + Verification | Makefile         | ❌                      | Edge case                | Configurable one-shot pulse with retrigger    |
| pwm\_generator              | TTMRTL-002 | Verilog  | Verilog | Multi-file  | Full verification       | Makefile         | ❌                      | Duty cycle, randomized   | Configurable PWM, clock division              |
| serial\_crc32\_generator    | TTMRTL-002 | Verilog  | Verilog | Multi-file  | Full verification       | Makefile         | ❌                      | Standards compliance     | IEEE 802.3 CRC-32 with multiple vectors       |
| shift\_register (base)      | TTMRTL-002 | Verilog  | Verilog | Multi-file  | Full verification       | Makefile         | ❌                      | Randomized, edge case    | Universal shift register, four modes          |
| shift\_register/adaptation\_basis | Advanced | Verilog | C++ | Multi-file | Runtime-free verification | Makefile | ✅ Working | Self-verifying | Verilator without runtime dependencies |
| shift\_register/rewritten   | Advanced | C++ | C++ | Multi-file | Direct implementation | TT-Metal build | ✅ Working | Basic functional | Minimal TT-Metal kernel, 6 tests pass |
| shift\_register/sim\_comm   | Advanced | Verilog/C++ | C++ | Multi-file | Host-device pipeline | TT-Metal build | ✅ Working (100%) | Comprehensive pipeline | Full RTL sim with communication, 64/64 pass |
| simple\_alu                 | TTMRTL-002 | Verilog  | Verilog | Multi-file  | Full verification       | Makefile         | ❌                      | Operation, status flags  | 8-bit ALU, 10 ops, comprehensive testbench    |
| uart\_tx\_basic             | TTMRTL-002 | Verilog  | Verilog | Multi-file  | Full verification       | Makefile         | ✅ Prototype            | Protocol, baud rate      | UART TX w/receiver, script-based integration  |
| split\_simulation           | Advanced   | Verilog  | Verilog | Multi-file  | Pipeline verification   | Makefile+Scripts | ❌                      | Split-pipeline           | Distributed simulation architecture POC       |
| arbitrary\_struct\_dataflow | Advanced   | C++      | C++     | Multi-file  | Full verification       | TT-Metal build   | ✅ Working              | Pipeline, 100% integrity | Custom dataflow on TT-Metal, complex pipeline |


### 3. **Evaluation by Category**

#### A. **File Structure and Complexity**

* **Single-file examples:** Ideal for basic concepts and rapid iteration. Good for onboarding and early-stage testing.
* **Multi-file examples:** Emulate professional EDA project structure, enabling more realistic verification and stressing the conversion workflow.
* **Hierarchical examples:** shift\_register with its multiple subdirectories demonstrates progressive implementation approaches.

#### B. **Simulation and Verification Types**

* **Waveform only:** Quick functional checks, especially in early integration (e.g., minimal\_divider).
* **Waveform + Verification:** Combines simulation output with automated pass/fail checks (e.g., counter overflow, protocol adherence).
* **Full/Comprehensive Verification:** Includes randomized testing, edge case coverage, and standards compliance, providing high confidence in design and toolchain.
* **Host-Device Pipeline Verification:** shift\_register/sim\_comm demonstrates complete test management with bidirectional communication.

#### C. **TT-Metal Integration Status**

* **No Integration:** Pure Verilator CPU-based simulation (7 examples).
* **Partial Integration:** Led\_blinker and uart\_tx\_basic (prototype stage, ongoing development).
* **Full/Working Integration:** 
  * minimal\_divider: First successful TT-Metal example
  * arbitrary\_struct\_dataflow: Custom data pipeline with 100% integrity
  * shift\_register/adaptation\_basis: Runtime-free execution
  * shift\_register/rewritten: Minimal kernel implementation
  * **shift\_register/sim\_comm: Complete RTL simulation with host-device communication achieving 100% test success**

#### D. **Verification Complexity**

* Ranges from basic (timing/edge check) to advanced (protocol compliance, randomized stress testing, multi-stage pipelines).
* shift\_register/sim\_comm represents the most sophisticated verification with 64 comprehensive test vectors including walking patterns, edge cases, and random operations.

#### E. **Educational and Research Value**

* Examples progress in complexity, supporting both incremental learning and robust toolchain evaluation.
* The shift\_register variants demonstrate the complete journey from traditional simulation to hardware acceleration.
* Serve as reference cases for future TT-Metal integration, optimization, and benchmarking.


### 4. **Performance Metrics and Results**

#### shift\_register/sim\_comm Performance

| Metric | Value |
|--------|-------|
| Test Vectors | 64 |
| Pass Rate | 100% (64/64) |
| Total Cycles | 79 |
| Avg Cycles/Test | 1.2 |
| Data Transfer | 2048 bytes |
| Execution Time | < 1 second |

#### Comparative Analysis

| Implementation | Platform | Tests | Pass Rate | Notes |
|----------------|----------|-------|-----------|-------|
| shift\_register (base) | CPU/Verilator | 100+ | 100% | Full featured, randomized |
| shift\_register/rewritten | TT-Metal | 6 | 100% | Minimal proof of concept |
| shift\_register/sim\_comm | TT-Metal | 64 | 100% | Development-ready pipeline |
| arbitrary\_struct\_dataflow | TT-Metal | 2048 | 100% | Custom data structures |


### 5. **Key Findings and Impact**

* **TT-Metal Integration Progress:**
  7 out of 15 examples show partial or complete hardware acceleration, with shift\_register/sim\_comm achieving development-ready status.
* **Verification Depth:**
  10 out of 15 examples go beyond waveform-only simulation, including rigorous functional and standards-based testing.
* **Build Consistency:**
  All examples employ Makefile-based automation, with advanced cases leveraging TT-Metal's build system, ensuring reproducibility and ease of use.
* **Real-World Protocols and Standards:**
  Examples include CRC-32, UART, PWM—covering industry-standard digital designs.
* **Host-Device Communication:**
  shift\_register/sim\_comm proves bidirectional communication feasibility with structured data transfer and automatic verification.
* **Research and Educational Reach:**
  The structured example suite lowers barriers for new contributors and enables scalable experimentation for researchers and EDA tool developers.


### 6. **Recommendations for Enhancement**

* **Expand TT-Metal Coverage:**
  Continue converting additional examples, using shift\_register/sim\_comm as the template for host-device communication.
* **Performance Optimization:**
  Leverage the cycle-accurate metrics from sim\_comm to identify and optimize bottlenecks.
* **Multi-Core Distribution:**
  Extend sim\_comm approach to distribute test vectors across multiple TT-Metal cores.
* **Waveform Generation:**
  Add VCD generation capability from TT-Metal execution for debugging.
* **Coverage Metrics:**
  Implement code and functional coverage collection on accelerator.
* **Standardization:**
  Create templates based on sim\_comm success for rapid conversion of new designs.


### Conclusion

The examples and their evaluation highlight not only the technical achievements of the project to date, but also the robust foundation established for future scaling and community-driven innovation. The recent success of shift\_register/sim\_comm, achieving 100% test accuracy with full host-device communication, represents a major milestone in making hardware-accelerated HDL simulation practical for verification workflows. This curated suite of HDL simulation cases proves both the depth and the adaptability of the “hdl-simulation-accelerated” approach, demonstrating readiness for ongoing research, real-world adoption, and educational outreach.

