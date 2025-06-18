// led_blinker.v
`timescale 1ns / 1ps

module led_blinker #(
    // N is the number of clock cycles before the LED toggles
    // For example: if N=4, the LED will toggle every 4 clock cycles
    // If N=24 and clock is 24MHz, LED toggles at 0.5Hz (blinks once per second)
    parameter N = 24
)(
    input wire clk,
    input wire rst,  // Added reset for proper initialization
    output reg led
);
    // Counter width is automatically sized based on N
    // $clog2(N) gives the minimum number of bits needed to count up to N-1
    reg [$clog2(N)-1:0] counter;

    always @(posedge clk) begin
        if (rst) begin
            counter <= 0;
            led <= 0;
        end else begin
            if (counter == N[$clog2(N)-1:0] - 1'b1) begin  // Explicit width matching
                counter <= 0;
                led <= ~led;
            end else begin
                counter <= counter + 1'b1;
            end
        end
    end
endmodule

module led_blinker_test;
    reg clk = 0;
    reg rst = 1;  // Start with reset
    wire led;

    // Instantiate DUT
    led_blinker #(.N(4)) dut (
        .clk(clk),
        .rst(rst),
        .led(led)
    );

    integer i;
    initial begin
        $dumpfile("wave.vcd");
        $dumpvars(0, led_blinker_test);

        // Release reset after 10ns
        #10 rst = 0;

        $display("Time(ns)  LED");
        for (i = 0; i < 50; i = i + 1) begin
            #5 clk = ~clk;
            #5 clk = ~clk;
            $display("%8t   %b", $time, led);
        end
        $finish;
    end
endmodule

