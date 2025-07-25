// dff_re.v - D Flip-Flop with synchronous reset and enable
`timescale 1ns / 1ps

module dff_re (
    input  wire clk,
    input  wire rst_n,    // Active-low synchronous reset
    input  wire enable,   // Enable signal
    input  wire d,        // Data input
    output reg  q         // Data output
);

always @(posedge clk) begin
    if (!rst_n) begin
        q <= 1'b0;  // Synchronous reset
    end else if (enable) begin
        q <= d;     // Update when enabled
    end
    // else q holds its current value (enable = 0)
end

endmodule

