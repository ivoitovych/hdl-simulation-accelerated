# Debug Directory for TT-Metal Kernel Simulation

This directory provides a generic test runner and debug utilities for running TT-Metal compute kernels (including those generated from Verilator output) directly on a standard Linux command line. This enables rapid development and debugging of kernel logic before integrating with the full TT-Metal runtime or hardware environment.

## Contents

- **test_runner.cpp**
  A generic C++ test runner that includes and executes a specified TT-Metal kernel source file. It calls the standard kernel entry points: `unpack_main()`, `math_main()`, and `pack_main()` within a specified namespace.
- **dprint.h**
  A lightweight debug print utility that mimics TT-Metal’s `DPRINT` macro for formatted output in simulation.

## Usage

### 1. Prepare Your Kernel

Ensure your kernel source (e.g., `led_blinker_ttmetal_.cpp`) is present in the parent directory or accessible via the include path. The kernel must define the following functions in a namespace (default: `ckernel`):

```cpp
namespace ckernel {
    void unpack_main();
    void math_main();
    void pack_main();
}
```

### 2. Build the Test Runner

Compile the test runner, specifying your kernel file as a preprocessor macro (`KERNEL_FILE`).
**No quotes are needed** around the filename.

```sh
g++ -DKERNEL_FILE=led_blinker_ttmetal_.cpp debug/test_runner.cpp -I. -o led_blinker_ttmetal_
```

- The `-I.` ensures the kernel file is found in the current directory.
- Optionally, specify a different namespace:
  ```sh
  g++ -DKERNEL_FILE=your_kernel.cpp -DNAMESPACE=myspace debug/test_runner.cpp -I. -o test_kernel
  ```

### 3. Run the Simulation

```sh
./led_blinker_ttmetal_
```

You should see simulation output printed to the terminal, including kernel state and debug messages.

## How It Works

- The test runner uses C++ preprocessor macros to include the specified kernel file at compile time.
- It calls the standard TT-Metal kernel entry points in sequence.
- The `DPRINT` utility provides formatted, flushable debug output similar to what you would see in the full TT-Metal environment.

## Example Output

```
=== Running Verilator Simulation Test ===
Kernel file: led_blinker_ttmetal_.cpp
Namespace: ckernel
==========================================
Starting RTL simulation for led_blinker_test on TT-Metal kernel
================================================================
time=0 ns  cycle=0  led=0  counter=0
...
RTL simulation completed after 50 cycles
Final simulation time: 510000 ns
Final state: led=0 counter=2
==========================================
=== Test Complete ===
```

## Notes

- This debug runner is intended for rapid development and functional verification of TT-Metal kernels in a standard Linux environment.
- For full integration and hardware execution, kernels should be tested within the TT-Metal runtime environment.
- Any kernel source file can be tested, as long as it provides the required entry points.

---

**Happy kernel debugging!**

---

