## Project Goals

The "hdl-simulation-accelerated" project has a set of well-defined goals that align with its role as an open-source research initiative. These goals can be categorized into short-term (proof-of-concept and foundational development) and long-term (scalability and broader impact) objectives. Here's a structured breakdown:

### Short-Term Goals:
1. **Demonstrate Feasibility of Hardware Acceleration for HDL Simulations**:
   - Achieve a working proof-of-concept where Verilog-based HDL simulations run on AI accelerator hardware, specifically Tenstorrent's TT-Metal platform. This includes successfully executing simple designs (e.g., the minimal ripple divider) on real hardware to validate the acceleration hypothesis.

2. **Develop Conversion and Integration Tools**:
   - Create an automated tool (`verilator2ttmetal`) to translate Verilator-generated C++ code from Verilog models into TT-Metal compute kernels, enabling seamless mapping of HDL logic to parallel AI hardware primitives.
   - Integrate the project as a submodule in the official Tenstorrent TT-Metal repository, ensuring compatibility with their build system (e.g., via CMake) and ecosystem.

3. **Provide Educational and Reproducible Examples**:
   - Build a collection of diverse, ready-to-run HDL examples (e.g., simple counter, serial CRC-32 generator, universal shift register, minimal divider) complete with testbenches, Makefiles, and waveform visualization support (using GTKWave).
   - Establish a fully reproducible Docker-based environment (based on on Ubuntu LTS), pre-configured with essential tools (Verilator, GCC/G++, GNU Make, TT-Metal), to lower barriers for users and ensure consistency across systems.

4. **Document Progress and Planning**:
   - Outline a multi-phase roadmap (in ROADMAP.md) covering development from basic examples to advanced tools and hardware testing.
   - Create a detailed, task-oriented plan (in TTMRTL_PLAN.md, structured like Jira tickets) for TT-Metal RTL integration, including steps for converter development, validation, and community engagement.

### Long-Term Goals:
1. **Scale to Complex, Large-Scale Simulations**:
   - Extend the acceleration framework to handle more intricate digital circuit designs, progressing from simple examples to industry-scale simulations (e.g., billion-gate SoCs), leveraging TT-Metal's massive parallelism for significant speedups.

2. **Foster Community-Driven Innovation**:
   - Encourage contributions through issues, discussions, and open-source licensing, positioning the project as a collaborative platform for research in high-performance computing for hardware verification.
   - Evolve the project toward broader applications in Electronic Design Automation (EDA), such as faster ASIC/FPGA verification, while remaining "as-is" for educational and research use (not production-ready).

3. **Bridge HDL Tools with AI Hardware Ecosystems**:
   - Promote the use of open-source HDL simulators like Verilator in conjunction with modern AI accelerators, creating a hybrid workflow that addresses limitations in traditional CPU-based simulation.

Prioritize these goals in the repository's structure, with immediate focus on proof-of-concept achievements (e.g., hardware execution of examples) and foundational tools, while the hint at future expansions.

## Reasoning Behind the Goals

The goals are rooted in addressing key challenges in HDL simulation and hardware verification, while capitalizing on emerging opportunities in AI hardware and open-source development. The reasoning can be broken down into problem-solving, technological, and strategic aspects, inferred from the project's overview, methods, and achievements:

### Problem-Solving Rationale:
- **Bottlenecks in Traditional HDL Simulation**: Conventional CPU-based simulators like Verilator, while efficient and open-source, become computationally intensive and slow for complex designs (e.g., large-scale SoCs with millions of gates). Verification often consumes 50-70% of chip development time, leading to delays in design cycles. The project aims to accelerate this by offloading simulations to massively parallel AI hardware, which excels at handling dataflow and tensor-like operations inherent in gate-level logic.
- **Need for Scalability and Speed**: As digital circuits grow in complexity (driven by AI, 5G, and automotive applications), pure software simulation hits limits. By targeting AI accelerators like TT-Metal, the project seeks to enable faster cycle-accurate simulations, potentially reducing verification time from days to hours.

### Technological Rationale:
- **Leveraging Verilator and TT-Metal Synergies**: Verilator's ability to compile Verilog into optimized C++ makes it an ideal base for acceleration, as the generated code can be adapted to parallel kernels. TT-Metal's architecture (designed for AI workloads with high parallelism) is well-suited for simulating combinatorial and sequential logic in HDL, allowing for distributed computation across tensors. The conversion tool and integration goals stem from the need to bridge these disparate domains—traditional EDA tools and modern AI hardware—creating a novel hybrid approach.
- **Reproducibility and Accessibility**: Hardware-related projects often suffer from setup inconsistencies. The Docker environment and submodule integration ensure easy adoption, making the project practical for education and research. Examples with testbenches provide hands-on learning, reasoning that users (e.g., students, researchers) need tangible starting points to experiment.
- **Open-Source Emphasis**: By keeping everything open-source and "as-is," the project avoids proprietary lock-in (common in commercial EDA tools like Cadence or Synopsys), encouraging innovation and customization. This aligns with the growing trend of open ecosystems in hardware design (e.g., RISC-V), where community input can drive improvements.

### Strategic Rationale:
- **Research and Educational Focus**: The project positions itself as a platform for exploring high-performance computing in verification, not a commercial product. Goals like the roadmap and planning documents reflect a phased, iterative approach to build momentum, starting with proofs-of-concept to attract contributors and validate ideas before scaling.
- **Innovation in EDA-AI Intersection**: With AI accelerators becoming ubiquitous, there's untapped potential to repurpose them for non-AI tasks like simulation. Achievements like hardware execution and tool development serve as milestones to demonstrate viability, potentially influencing broader adoption in chip design workflows.
- **Community and Future-Proofing**: Encouraging contributions ensures sustainability, while the non-production status manages expectations. The reasoning here is to spark interest in accelerated verification, paving the way for future benchmarks, optimizations, and integrations that could impact fields like embedded systems and custom silicon development.

In summary, the goals are designed to solve real-world pain points in HDL simulation through innovative hardware-software integration, with reasoning grounded in efficiency gains, technological fit, and open collaboration. This positions the project as a forward-looking initiative in the evolving landscape of hardware design tools.

