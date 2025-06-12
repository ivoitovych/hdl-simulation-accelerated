# TTMRTL: Development Ticket Plan

This file describes the step-by-step Jira ticket plan for staged development and benchmarking of HDL/RTL simulation acceleration using Tenstorrent TT-Metal hardware. Each stage includes realistic example designs for implementation and evaluation.

---

## [TTMRTL-001] Add support for multiple minimal Verilog projects (due Jun 20, 2025)
> **Goal:** Demonstrate that multiple isolated projects can be supported and simulated.

**Example Options:**
- `minimal_divider/` – T flip-flop chain (already done).
- `led_blinker/` – LED toggled every N clock cycles.
- `edge_detector/` – Detects rising edges in input stream.
- `one_shot_pulse/` – Generates one pulse after N cycles.
- `8bit_counter/` – Simple binary counter with wrap-around.

---

## [TTMRTL-002] Add support for multiple Verilog source files per project (due Jun 27, 2025)
> **Goal:** Support split designs — logic + testbench, common real-world structure.

**Example Options:**
- `serial_crc32_generator/` – Split testbench + logic.
- `shift_register/` – Separated data path and stimulus.
- `uart_tx_basic/` – UART TX logic tested with waveform stimulus.
- `pwm_gen_test/` – PWM module with test pattern generator.
- `simple_alu_test/` – ALU with testbench driving operations.

---

## [TTMRTL-003] Handle asynchronous and multi-clock domain circuits (due Jul 4, 2025)
> **Goal:** Prove capability to simulate designs with asynchronous or multiple clock domains.

**Example Options:**
- `dual_clock_fifo/` – Classic async FIFO (write clk / read clk).
- `reset_synchronizer/` – Async reset synchronizer.
- `dual_clk_toggle/` – Cross-domain pulse logic.
- `pulse_stretch_async/` – Edge detection with cross-domain stretching.
- `two_clocks_divider/` – Mixed-frequency logic paths.

---

## [TTMRTL-004] Exploit Verilator's parallel execution capabilities (due Jul 11, 2025)
> **Goal:** Simulate modules with natural parallelism and multiple paths.

**Example Options:**
- `parallel_counters/` – Four independent counters.
- `multi_fsm_parallel/` – Parallel finite state machines.
- `multi_uart_tx/` – Multiple UARTs transmitting concurrently.
- `adc_pipeline/` – Simple simulated ADC pipeline stages.
- **`tinyCPU_parallel_tb/`** – Minimal 8-bit CPU with testbench split across tasks *(light intro to realism)*.

---

## [TTMRTL-005] Stress test: Maximize logic in a single core (due Jul 18, 2025)
> **Goal:** Push complexity/code size limits of a single core.

**Example Options:**
- `wide_alu/` – 128-bit arithmetic operations, chained logic.
- `high_state_fsm/` – 64-state FSM with varied transitions.
- `deep_mux_chain/` – Combinational logic size test.
- `pipelined_fir32/` – 32-tap FIR filter.
- **`tinyCPU_core_only/`** – Small CPU (e.g., TinyCPU or PicoCPU) simulating program counter and ALU.

---

## [TTMRTL-006] Heavy design for realistic benchmarking (due Jul 25, 2025)
> **Goal:** Introduce practical designs that justify acceleration.

**Example Options:**
- **`picorv32_core_test/`** – Standalone PicoRV32 running simple program.
- `aes_128_encrypt/` – AES core + known input/output verification.
- `convolution_3x3/` – 3×3 kernel on simulated image data.
- `crc32_stream/` – CRC32 run on large synthetic data blocks.
- `sdram_controller_tb/` – Simple SDRAM controller with test pattern.

---

## [TTMRTL-007] Benchmark framework and first results (due Aug 1, 2025)
> **Goal:** Package one or more heavy examples into a benchmark harness with metrics.

**Example Options:**
- `picorv32_benchmark/` – Benchmark run of program on simulated CPU.
- `aes_encrypt_benchmark/` – Throughput + latency metrics on AES batches.
- `fir_filter_benchmark/` – Run filter on long stream with timing analysis.
- `image_convolution_benchmark/` – Simulate convolution on synthetic image data.
- `testbench_stats_demo/` – Generic testbench with counters/logs for benchmarking.

---

*For overall project roadmap, see [ROADMAP.md](./ROADMAP.md).*


