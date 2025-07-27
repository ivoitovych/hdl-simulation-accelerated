// SPDX-FileCopyrightText: © 2024 Tenstorrent Inc.
//
// SPDX-License-Identifier: Apache-2.0

#include <tt-metalium/host_api.hpp>
#include <tt-metalium/device.hpp>

using namespace tt;
using namespace tt::tt_metal;

int main() {
    // Initialize device
    int device_id = 0;
    IDevice* device = CreateDevice(device_id);
    CommandQueue& cq = device->command_queue();

    // Create program
    Program program = CreateProgram();

    // Define which core to run on
    constexpr CoreCoord core = {0, 0};

    // Create the compute kernel
    std::vector<uint32_t> compute_kernel_args = {};
    KernelHandle minimal_divider_kernel_id = CreateKernel(
        program,
        "tt_metal/programming_examples/hdl_simulation_accelerated/examples/minimal_divider/tt_metal/kernels/minimal_divider_compute.cpp",
        core,
        ComputeConfig{
            .math_fidelity = MathFidelity::HiFi4,
            .fp32_dest_acc_en = false,
            .math_approx_mode = false,
            .compile_args = compute_kernel_args,
        });

    // Set runtime arguments (empty since kernel is self-contained)
    SetRuntimeArgs(program, minimal_divider_kernel_id, core, {});

    // Execute the program
    printf("Starting minimal divider kernel on core {0, 0}...\n");
    printf("Make sure to export TT_METAL_DPRINT_CORES=0,0 to see kernel output\n");

    EnqueueProgram(cq, program, false);

    // Wait for completion
    Finish(cq);

    printf("Minimal divider kernel completed successfully.\n");

    // Cleanup
    CloseDevice(device);

    return 0;
}
