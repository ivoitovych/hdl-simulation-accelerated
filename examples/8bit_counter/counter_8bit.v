// counter_8bit.v
`timescale 1ns / 1ps

module counter_8bit (
    input wire clk,
    input wire rst,
    input wire enable,
    input wire load,
    input wire [7:0] load_value,
    output reg [7:0] count,
    output wire overflow,
    output wire underflow
);
    
    // Overflow occurs when counting up from 255 (wraps to 0)
    assign overflow = enable && (count == 8'hFF) && !load;
    
    // Underflow occurs when counting down from 0 (wraps to 255)  
    assign underflow = enable && (count == 8'h00) && !load;
    
    always @(posedge clk) begin
        if (rst) begin
            count <= 8'h00;
        end else if (load) begin
            count <= load_value;
        end else if (enable) begin
            count <= count + 1'b1;  // Increment with automatic wrap-around
        end
    end
endmodule

module counter_8bit_test;
    reg clk = 0;
    reg rst = 1;
    reg enable = 0;
    reg load = 0;
    reg [7:0] load_value = 0;
    wire [7:0] count;
    wire overflow;
    wire underflow;
    
    // Instantiate DUT
    counter_8bit dut (
        .clk(clk),
        .rst(rst),
        .enable(enable),
        .load(load),
        .load_value(load_value),
        .count(count),
        .overflow(overflow),
        .underflow(underflow)
    );
    
    integer i;
    initial begin
        $dumpfile("wave.vcd");
        $dumpvars(0, counter_8bit_test);
        
        // Release reset after 10ns
        #10 rst = 0;
        
        $display("Time(ns)  Count  Overflow  Underflow  Enable  Load");
        
        // Test 1: Basic counting from 0
        enable = 1;
        for (i = 0; i < 10; i = i + 1) begin
            #5 clk = ~clk;  // Clock high
            #5 clk = ~clk;  // Clock low 
            $display("%8t   %3d       %b         %b        %b     %b", 
                     $time, count, overflow, underflow, enable, load);
        end
        
        // Test 2: Load a value near overflow (253)
        enable = 0;
        load = 1;
        load_value = 8'd253;
        #5 clk = ~clk;
        #5 clk = ~clk;
        $display("%8t   %3d       %b         %b        %b     %b", 
                 $time, count, overflow, underflow, enable, load);
        
        // Test 3: Continue counting to see overflow
        load = 0;
        enable = 1;
        for (i = 0; i < 8; i = i + 1) begin
            #5 clk = ~clk;
            #5 clk = ~clk;
            $display("%8t   %3d       %b         %b        %b     %b", 
                     $time, count, overflow, underflow, enable, load);
        end
        
        // Test 4: Load value at 2 and count a few more
        enable = 0;
        load = 1;
        load_value = 8'd2;
        #5 clk = ~clk;
        #5 clk = ~clk;
        $display("%8t   %3d       %b         %b        %b     %b", 
                 $time, count, overflow, underflow, enable, load);
        
        load = 0;
        enable = 1;
        for (i = 0; i < 8; i = i + 1) begin
            #5 clk = ~clk;
            #5 clk = ~clk;
            $display("%8t   %3d       %b         %b        %b     %b", 
                     $time, count, overflow, underflow, enable, load);
        end
        
        // Test 5: Disable and verify no counting
        enable = 0;
        for (i = 0; i < 3; i = i + 1) begin
            #5 clk = ~clk;
            #5 clk = ~clk;
            $display("%8t   %3d       %b         %b        %b     %b", 
                     $time, count, overflow, underflow, enable, load);
        end
        
        $display("\nSimulation complete!");
        $display("Demonstrated: Basic counting, overflow wrap-around, load operation, enable control");
        $finish;
    end
endmodule

