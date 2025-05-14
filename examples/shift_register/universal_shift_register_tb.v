`timescale 1ns/1ps

module universal_shift_register_tb;
    // Test parameters
    parameter WIDTH = 8;              // Default width for testing
    parameter CLK_PERIOD = 10;        // Clock period in ns

    // DUT signals
    reg clk;
    reg rst_n;
    reg enable;
    reg [1:0] mode;
    reg serial_in_right;
    reg serial_in_left;
    reg [WIDTH-1:0] parallel_in;
    wire [WIDTH-1:0] q;

    // Instantiate the DUT
    universal_shift_register #(
        .WIDTH(WIDTH)
    ) dut (
        .clk(clk),
        .rst_n(rst_n),
        .enable(enable),
        .mode(mode),
        .serial_in_right(serial_in_right),
        .serial_in_left(serial_in_left),
        .parallel_in(parallel_in),
        .q(q)
    );

    // Test state tracking
    integer test_case;
    integer error_count;
    reg [WIDTH-1:0] expected_q;
    
    // For random generation
    reg [31:0] seed = 123456789;
    
    // Test helpers
    integer i;
    reg bit_val;

    // Clock generation
    initial begin
        clk = 0;
        forever #(CLK_PERIOD/2) clk = ~clk;
    end
    
    // Simple pseudo-random function
    function [31:0] pseudo_random;
        begin
            seed = seed * 1103515245 + 12345;
            pseudo_random = (seed>>16) & 32'h7FFF;
        end
    endfunction

    // Test tasks
    task reset_dut;
        begin
            rst_n = 0;
            enable = 0;
            mode = 2'b00;
            serial_in_right = 0;
            serial_in_left = 0;
            parallel_in = 0;
            @(posedge clk);
            @(posedge clk);
            rst_n = 1;
            @(posedge clk);
        end
    endtask

    task apply_inputs;
        input [1:0] in_mode;
        input in_enable;
        input in_serial_right;
        input in_serial_left;
        input [WIDTH-1:0] in_parallel;
        begin
            @(negedge clk);
            mode = in_mode;
            enable = in_enable;
            serial_in_right = in_serial_right;
            serial_in_left = in_serial_left;
            parallel_in = in_parallel;
        end
    endtask

    task check_output;
        input [WIDTH-1:0] expected;
        input [31:0] test_number;
        begin
            @(posedge clk);
            #1; // Small delay to allow outputs to settle
            if (q !== expected) begin
                $display("ERROR: Test case %0d failed! Expected: %b, Got: %b",
                          test_number, expected, q);
                error_count = error_count + 1;
            end else begin
                $display("Test case %0d passed! Output: %b", test_number, q);
            end
        end
    endtask

    // Create an alternating pattern of proper width
    function [WIDTH-1:0] create_alternating_pattern;
        reg [WIDTH-1:0] pattern;
        integer j;
        begin
            pattern = 0;
            for (j = 0; j < WIDTH; j = j + 2) begin
                if (j < WIDTH) pattern[j] = 1'b0;
                if (j+1 < WIDTH) pattern[j+1] = 1'b1;
            end
            create_alternating_pattern = pattern;
        end
    endfunction

    // Test sequences
    initial begin
        $display("Starting testbench for %0d-bit Universal Shift Register", WIDTH);
        test_case = 0;
        error_count = 0;

        // Reset test
        reset_dut();
        expected_q = 0; // All zeros
        check_output(expected_q, test_case);
        test_case = test_case + 1;

        // Enable/Disable test
        parallel_in = {WIDTH{1'b1}}; // All ones
        apply_inputs(2'b11, 0, 0, 0, parallel_in);
        expected_q = 0; // Should stay at 0 with enable=0
        check_output(expected_q, test_case);
        test_case = test_case + 1;

        // Load test
        parallel_in = {WIDTH{1'b1}}; // All ones
        apply_inputs(2'b11, 1, 0, 0, parallel_in);
        expected_q = {WIDTH{1'b1}}; // All ones
        check_output(expected_q, test_case);
        test_case = test_case + 1;

        // Hold test
        apply_inputs(2'b00, 1, 1, 1, 0);
        check_output(expected_q, test_case); // Should hold previous value
        test_case = test_case + 1;

        // Shift right test
        apply_inputs(2'b01, 1, 0, 0, 0);
        expected_q = {1'b0, {WIDTH-1{1'b1}}};
        check_output(expected_q, test_case);
        test_case = test_case + 1;

        // Shift right with serial input test
        apply_inputs(2'b01, 1, 1, 0, 0);
        expected_q = {1'b1, expected_q[WIDTH-1:1]};
        check_output(expected_q, test_case);
        test_case = test_case + 1;

        // Shift left test
        apply_inputs(2'b10, 1, 0, 0, 0);
        expected_q = {expected_q[WIDTH-2:0], 1'b0};
        check_output(expected_q, test_case);
        test_case = test_case + 1;

        // Shift left with serial input test
        apply_inputs(2'b10, 1, 0, 1, 0);
        expected_q = {expected_q[WIDTH-2:0], 1'b1};
        check_output(expected_q, test_case);
        test_case = test_case + 1;

        // Test with alternating bit pattern
        parallel_in = 0;
        apply_inputs(2'b11, 1, 0, 0, parallel_in);
        expected_q = 0;
        check_output(expected_q, test_case);
        test_case = test_case + 1;

        // Create and load alternating pattern
        parallel_in = create_alternating_pattern();
        apply_inputs(2'b11, 1, 0, 0, parallel_in);
        expected_q = parallel_in;
        check_output(expected_q, test_case);
        test_case = test_case + 1;

        // Rapid mode change tests
        for (i = 0; i < 4; i = i + 1) begin
            bit_val = (i & 1) ? 1'b1 : 1'b0;
            parallel_in = {WIDTH{1'b1}};
            apply_inputs(i[1:0], 1, bit_val, ~bit_val, parallel_in);
            
            case (i[1:0])
                2'b00: begin
                    // Hold - no change to expected_q
                end
                2'b01: begin
                    // Right shift
                    expected_q = {bit_val, expected_q[WIDTH-1:1]};
                end
                2'b10: begin
                    // Left shift
                    expected_q = {expected_q[WIDTH-2:0], ~bit_val};
                end
                2'b11: begin
                    // Load
                    expected_q = parallel_in;
                end
            endcase
            
            check_output(expected_q, test_case);
            test_case = test_case + 1;
        end

        // Walking 1's test (load pattern and shift)
        parallel_in = 1; // Only LSB is 1
        apply_inputs(2'b11, 1, 0, 0, parallel_in);
        expected_q = parallel_in;
        check_output(expected_q, test_case);
        test_case = test_case + 1;

        // Shift the walking 1 left
        for (i = 0; i < WIDTH-1; i = i + 1) begin
            apply_inputs(2'b10, 1, 0, 0, 0);
            
            // Manual calculation for walking 1
            parallel_in = 0;
            parallel_in[i+1] = 1'b1;
            expected_q = parallel_in;
            
            check_output(expected_q, test_case);
            test_case = test_case + 1;
        end

        // Test summary
        if (error_count == 0)
            $display("All %0d tests PASSED", test_case);
        else
            $display("%0d out of %0d tests FAILED", error_count, test_case);

        // Add random tests
        $display("Starting random testing...");
        for (i = 0; i < 100; i = i + 1) begin
            // Create random inputs with our pseudo-random function
            mode = pseudo_random() % 4;
            enable = pseudo_random() % 2;
            serial_in_right = pseudo_random() % 2;
            serial_in_left = pseudo_random() % 2;
            
            // Create proper width random parallel input
            parallel_in = 0;
            for (integer j = 0; j < WIDTH; j = j + 1) begin
                parallel_in[j] = (pseudo_random() % 2) ? 1'b1 : 1'b0;
            end

            // Apply and predict next output
            apply_inputs(mode, enable, serial_in_right, serial_in_left, parallel_in);

            if (enable) begin
                case (mode)
                    2'b00: begin
                        // Hold - no change to expected_q
                    end
                    2'b01: begin
                        // Right shift
                        expected_q = {serial_in_right, expected_q[WIDTH-1:1]};
                    end
                    2'b10: begin
                        // Left shift
                        expected_q = {expected_q[WIDTH-2:0], serial_in_left};
                    end
                    2'b11: begin
                        // Load
                        expected_q = parallel_in;
                    end
                endcase
            end
            // Else no change when disabled

            check_output(expected_q, test_case + i);
        end

        // Final summary
        if (error_count == 0)
            $display("All tests PASSED");
        else
            $display("%0d tests FAILED", error_count);

        $finish;
    end

    // Optional: Add waveform dumping for Verilator
    initial begin
        if ($test$plusargs("trace")) begin
            $dumpfile("waveform.vcd");
            $dumpvars(0, universal_shift_register_tb);
        end
    end

endmodule

