### Proof-of-Concept Development Path

#### Overview

The development of the "hdl-simulation-accelerated" project adopted an exploratory, research-oriented methodology, navigating the challenges of pioneering HDL simulation acceleration on AI hardware like Tenstorrent's TT-Metal platform. This path was non-linear, shaped by ongoing discoveries, iterative testing, and adaptive refinements to align with practical limitations and emerging insights.

The process unfolded across logical phases, each building on the last to achieve key milestones.

#### 1. Initial Research and Toolchain Exploration

- **Objective**: Select an open-source HDL simulator suitable for parallel execution and hardware acceleration, focusing on extensibility.
- **Approach**:
  - Conducted a comprehensive survey of simulators, prioritizing those with multi-core support (e.g., Verilator's multithreading for 2-10x speedups) and open-source licensing.
  - Chose Verilator for its high performance, cycle-accurate compilation of Verilog/SystemVerilog to optimized C++ code, and compatibility with parallel environments.
- **Key Insights**:
  - Verilator's modular C++ output serves as an ideal intermediary for mapping to TT-Metal's kernel framework, enabling efficient adaptation without full redesign.

#### 2. Environment Setup and Reproducibility

- **Objective**: Create a consistent, cross-platform setup to eliminate dependency issues and facilitate reliable experimentation.
- **Approach**:
  - Built a Docker container based on Ubuntu 24.04, incorporating fixed versions of Verilator, GNU Make, GCC/G++, GTKWave, and TT-Metal tools.
  - Integrated automated workflows via Makefiles and CMakeLists.txt for building, simulation, and visualization.
- **Impact**:
  - Ensured reproducibility for users and researchers, simplifying onboarding while maintaining consistency across diverse systems.

#### 3. Progressive Example Development

- **Objective**: Establish a graduated set of HDL designs to test and validate the acceleration workflow at increasing levels of complexity.
- **Approach**:
  - Developed a directory of examples starting with basic Verilog modules (e.g., simple 8-bit counter, minimal ripple divider, universal shift register) and progressing to more advanced ones (e.g., serial CRC-32 generator, with expansions in planning for ALUs, UARTs, and protocol-based designs).
  - Included comprehensive C++/Verilog testbenches, Makefile scripts for compilation/simulation, and GTKWave support for waveform analysis in each example.
- **Impact**:
  - Served as both an educational tool and a robust testbed, enabling incremental validation and debugging of the overall system.

#### 4. Verilator Output Analysis and Conversion Tool Creation

- **Objective**: Automate the translation of Verilator-generated C++ code into TT-Metal-compatible compute kernels.
- **Approach**:
  - Examined Verilator's output structure to separate core simulation logic from runtime dependencies.
  - Implemented `verilator2ttmetal.py`, a Python script leveraging parsing techniques (e.g., regular expressions) to extract, modify, and integrate code, iteratively tested on project examples.
- **Impact**:
  - Validated automated conversion feasibility, reducing manual effort and paving the way for broader scalability in HDL acceleration.

#### 5. Runtime Framework Substitution

- **Objective**: Adapt Verilator's simulation code to operate within TT-Metal's constrained environment, bypassing standard C++ runtime limitations.
- **Approach**:
  - Analyzed runtime dependencies and created a custom, lightweight substitute framework tailored for TT-Metal's kernel execution model.
  - Ensured minimal changes to the generated simulation logic for compatibility and efficiency.
- **Key Discovery**:
  - TT-Metal's architecture supports direct porting of most logic with runtime adaptations, enhancing portability and reducing overhead.

#### 6. TT-Metal Integration and Hardware Demonstration

- **Objective**: Demonstrate HDL simulation execution on actual Tenstorrent hardware.
- **Approach**:
  - Incorporated converted examples (e.g., minimal_divider) as a submodule in the official TT-Metal repository, utilizing CMake for build integration.
  - Performed end-to-end testing on devices like Grayskull e150 or Wormhole, confirming successful runs and basic acceleration.
- **Impact**:
  - Marked a pivotal achievement: empirical proof of Verilog simulations on AI accelerators, transitioning from concept to tangible results.

#### 7. Host-to-Kernel Communication Experiments

- **Objective**: Enable seamless data exchange between the host CPU and TT-Metal kernels for interactive simulations.
- **Approach**:
  - Designed and prototyped communication mechanisms for initialization, real-time monitoring, and result verification.
  - Addressed challenges like data synchronization and architectural mismatches in AI-to-HDL adaptation.
- **Outcome**:
  - Confirmed TT-Metal's suitability for dynamic, verification-focused workflows, essential for practical EDA applications.

#### 8. Documentation, Planning, and Community Enablement

- **Objective**: Render the project accessible, extensible, and primed for collaboration in education and research.
- **Approach**:
  - Compiled detailed documentation, including README.md for overviews and usage, ROADMAP.md for multi-phase evolution (e.g., from simple to large-scale simulations), and TTMRTL_PLAN.md for task-based planning (structured like Jira).
  - Added supporting files like .gitignore and encouraged contributions through GitHub issues/discussions.
- **Impact**:
  - Reduced entry barriers while providing a structured path for future enhancements, fostering open-source growth.

#### Summary

The proof-of-concept path for the "hdl-simulation-accelerated" project was defined by targeted research, incremental builds, and breakthrough validations. Each phase advanced clear objectives through practical experimentation, culminating in a foundational platform ready for optimization and community expansion in the evolving field of hardware-accelerated simulation.

