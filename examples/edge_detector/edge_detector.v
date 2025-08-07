// edge_detector.v
`timescale 1ns / 1ps

module edge_detector (
    input wire clk,
    input wire rst,
    input wire signal_in,
    output reg rising_edge,
    output reg falling_edge,
    output reg any_edge
);

    // Previous state register
    reg signal_prev;

    always @(posedge clk) begin
        if (rst) begin
            signal_prev <= 0;
            rising_edge <= 0;
            falling_edge <= 0;
            any_edge <= 0;
        end else begin
            signal_prev <= signal_in;

            // Detect edges
            rising_edge <= signal_in & ~signal_prev;   // 0->1 transition
            falling_edge <= ~signal_in & signal_prev;  // 1->0 transition
            any_edge <= signal_in ^ signal_prev;       // Any transition
        end
    end
endmodule

module edge_detector_test;
    reg clk = 0;
    reg rst = 1;
    reg signal_in = 0;
    wire rising_edge;
    wire falling_edge;
    wire any_edge;

    // Instantiate DUT
    edge_detector dut (
        .clk(clk),
        .rst(rst),
        .signal_in(signal_in),
        .rising_edge(rising_edge),
        .falling_edge(falling_edge),
        .any_edge(any_edge)
    );

    integer i;
    initial begin
        $dumpfile("wave.vcd");
        $dumpvars(0, edge_detector_test);

        // Release reset after 10ns
        #10 rst = 0;

        $display("Time(ns)  Input  Rising  Falling  Any");

        // Test sequence: create various edge patterns
        for (i = 0; i < 30; i = i + 1) begin
            #5 clk = ~clk;  // Clock high
            #5 clk = ~clk;  // Clock low (complete cycle = 10ns)

            // Create test pattern: toggle every few cycles
            case (i)
                3: signal_in = 1;    // Rising edge
                7: signal_in = 0;    // Falling edge
                10: signal_in = 1;   // Rising edge
                12: signal_in = 0;   // Falling edge
                15: signal_in = 1;   // Rising edge
                20: signal_in = 0;   // Falling edge
                25: signal_in = 1;   // Rising edge
            endcase

            $display("%8t     %b      %b       %b       %b",
                     $time, signal_in, rising_edge, falling_edge, any_edge);
        end

        $display("\nSimulation complete!");
        $finish;
    end
endmodule

