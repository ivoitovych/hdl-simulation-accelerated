// one_shot_pulse.v
`timescale 1ns / 1ps

module one_shot_pulse #(
    // N is the number of clock cycles to wait before generating the pulse
    // The pulse will occur on cycle N (counting from when enable goes high)
    parameter N = 10,
    // PULSE_WIDTH is the number of clock cycles the pulse stays high
    parameter PULSE_WIDTH = 1
)(
    input wire clk,
    input wire rst,     // Active-high reset
    input wire enable,  // Start counting when high
    output reg pulse    // Output pulse signal
);
    // Counter width is automatically sized based on N
    reg [$clog2(N)-1:0] counter;
    reg [$clog2(PULSE_WIDTH)-1:0] pulse_counter;
    reg counting;
    reg pulse_active;
    reg pulse_done;  // Remember that we already generated a pulse

    always @(posedge clk) begin
        if (rst) begin
            counter <= 0;
            pulse_counter <= 0;
            pulse <= 0;
            counting <= 0;
            pulse_active <= 0;
            pulse_done <= 0;
        end else begin
            // Reset pulse_done when enable goes low
            if (!enable) begin
                pulse_done <= 0;
            end

            // Start counting when enable goes high (only if we haven't done a pulse yet)
            if (enable && !counting && !pulse_active && !pulse_done) begin
                counting <= 1;
                counter <= 0;
            end

            // Count up to N-1
            if (counting) begin
                if (counter == N[$clog2(N)-1:0] - 1'b1) begin
                    pulse <= 1;
                    pulse_active <= 1;
                    counting <= 0;
                    pulse_counter <= 0;
                end else begin
                    counter <= counter + 1'b1;
                end
            end

            // Handle pulse width
            if (pulse_active) begin
                if (pulse_counter == PULSE_WIDTH[$clog2(PULSE_WIDTH)-1:0] - 1'b1) begin
                    pulse <= 0;
                    pulse_active <= 0;
                    pulse_done <= 1;  // Mark that we've completed a pulse
                end else begin
                    pulse_counter <= pulse_counter + 1'b1;
                end
            end
        end
    end
endmodule

module one_shot_pulse_test;
    reg clk = 0;
    reg rst = 1;
    reg enable = 0;
    wire pulse;

    // Instantiate DUT (Device Under Test)
    // Wait for 5 clock cycles, then generate a 2-cycle wide pulse
    one_shot_pulse #(.N(5), .PULSE_WIDTH(2)) dut (
        .clk(clk),
        .rst(rst),
        .enable(enable),
        .pulse(pulse)
    );

    integer i;
    initial begin
        $dumpfile("wave.vcd");
        $dumpvars(0, one_shot_pulse_test);

        $display("Time(ns)  Enable  Pulse");

        // Release reset after 10ns
        #10 rst = 0;

        // Test 1: Generate first pulse
        #10 enable = 1;  // Start counting

        for (i = 0; i < 10; i = i + 1) begin
            #5 clk = ~clk;  // Clock goes high
            #5 clk = ~clk;  // Clock goes low (one complete cycle = 10ns)
            $display("%8t     %b      %b", $time, enable, pulse);
        end

        // Test 2: Disable and re-enable for another pulse
        enable = 0;
        for (i = 0; i < 2; i = i + 1) begin  // Show 2 cycles with enable=0
            #5 clk = ~clk;
            #5 clk = ~clk;
            $display("%8t     %b      %b", $time, enable, pulse);
        end

        enable = 1;  // Re-enable for second pulse
        for (i = 0; i < 10; i = i + 1) begin
            #5 clk = ~clk;
            #5 clk = ~clk;
            $display("%8t     %b      %b", $time, enable, pulse);
        end

        // Test 3: Keep enable high (should only generate one pulse)
        for (i = 0; i < 5; i = i + 1) begin
            #5 clk = ~clk;
            #5 clk = ~clk;
            $display("%8t     %b      %b", $time, enable, pulse);
        end

        $display("\nSimulation complete!");
        $finish;
    end
endmodule

