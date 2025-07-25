// stim_gen.v - Standalone stimulus generator
`timescale 1ns / 1ps

module stim_gen;

    // Generate test vectors
    initial begin
        // Output CSV header without comment character
        $display("timestamp,clk,rst_n,enable,d");

        // Test sequence with 5ns increments
        // Clock toggles every 5ns for 10ns period

        // Test 1: Power-on reset sequence
        output_vector(0, 0, 0, 0, 0);    // Initial state
        output_vector(5, 1, 0, 0, 0);    // Rising edge, reset active
        output_vector(10, 0, 0, 0, 0);   // Falling edge
        output_vector(15, 1, 0, 0, 0);   // Rising edge, reset still active

        // Test 2: Release reset, enable=0, d=1
        output_vector(20, 0, 1, 0, 1);   // Reset released, but enable=0
        output_vector(25, 1, 1, 0, 1);   // Rising edge, should stay 0

        // Test 3: Enable and capture data
        output_vector(30, 0, 1, 1, 1);   // Enable asserted
        output_vector(35, 1, 1, 1, 1);   // Rising edge, should capture d=1

        // Test 4: Change data while enabled
        output_vector(40, 0, 1, 1, 0);   // Change d to 0
        output_vector(45, 1, 1, 1, 0);   // Rising edge, should capture d=0

        // Test 5: Disable enable, change data
        output_vector(50, 0, 1, 0, 1);   // Disable enable, change d
        output_vector(55, 1, 1, 0, 1);   // Rising edge, should hold previous value

        // Test 6: Re-enable
        output_vector(60, 0, 1, 1, 1);   // Re-enable
        output_vector(65, 1, 1, 1, 1);   // Rising edge, should capture d=1

        // Test 7: Reset during operation
        output_vector(70, 0, 0, 1, 1);   // Assert reset
        output_vector(75, 1, 0, 1, 1);   // Rising edge with reset

        // Test 8: Release reset and continue
        output_vector(80, 0, 1, 1, 1);   // Release reset
        output_vector(85, 1, 1, 1, 1);   // Rising edge, should capture d=1

        // Test 9: Final transition
        output_vector(90, 0, 1, 1, 0);   // Change d to 0
        output_vector(95, 1, 1, 1, 0);   // Rising edge, should capture d=0

        // Test 10: Hold and verify
        output_vector(100, 0, 1, 0, 1);  // Disable enable
        output_vector(105, 1, 1, 0, 1);  // Should hold d=0

        $finish;
    end

    // Task to output a vector
    task output_vector;
        input integer timestamp;
        input clk;
        input rst_n;
        input enable;
        input d;
        begin
            $display("%0d,%b,%b,%b,%b", timestamp, clk, rst_n, enable, d);
        end
    endtask

endmodule
