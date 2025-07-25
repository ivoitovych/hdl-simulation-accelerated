// dff_re_tb_traditional.v - Traditional monolithic testbench
`timescale 1ns / 1ps

module dff_re_tb_traditional;

    // Clock and reset
    reg clk;
    reg rst_n;
    reg enable;
    reg d;
    wire q;
    
    // Instantiate DUT
    dff_re dut (
        .clk(clk),
        .rst_n(rst_n),
        .enable(enable),
        .d(d),
        .q(q)
    );
    
    // Clock generation - 10ns period (5ns high, 5ns low)
    initial begin
        clk = 0;
        forever #5 clk = ~clk;
    end
    
    // Test sequence
    initial begin
        // Initialize all signals
        rst_n = 0;
        enable = 0;
        d = 0;
        
        // Display header
        $display("# timestamp,clk,rst_n,enable,d,q");
        
        // Wait for initial settling
        #0 $display("%0d,%b,%b,%b,%b,%b", $time, clk, rst_n, enable, d, q);
        
        // Test 1: Power-on reset (rst_n=0 for several cycles)
        #5 $display("%0d,%b,%b,%b,%b,%b", $time, clk, rst_n, enable, d, q);
        #5 $display("%0d,%b,%b,%b,%b,%b", $time, clk, rst_n, enable, d, q);
        #5 $display("%0d,%b,%b,%b,%b,%b", $time, clk, rst_n, enable, d, q);
        
        // Test 2: Release reset, but keep enable=0, d=1
        #5 begin
            rst_n = 1;
            d = 1;
            $display("%0d,%b,%b,%b,%b,%b", $time, clk, rst_n, enable, d, q);
        end
        
        #5 $display("%0d,%b,%b,%b,%b,%b", $time, clk, rst_n, enable, d, q);
        
        // Test 3: Enable and load data (should capture d=1)
        #5 begin
            enable = 1;
            $display("%0d,%b,%b,%b,%b,%b", $time, clk, rst_n, enable, d, q);
        end
        
        #5 $display("%0d,%b,%b,%b,%b,%b", $time, clk, rst_n, enable, d, q);
        
        // Test 4: Change data to 0 while enabled
        #5 begin
            d = 0;
            $display("%0d,%b,%b,%b,%b,%b", $time, clk, rst_n, enable, d, q);
        end
        
        #5 $display("%0d,%b,%b,%b,%b,%b", $time, clk, rst_n, enable, d, q);
        
        // Test 5: Disable enable (should hold current value)
        #5 begin
            enable = 0;
            d = 1;  // Change d, but shouldn't affect q
            $display("%0d,%b,%b,%b,%b,%b", $time, clk, rst_n, enable, d, q);
        end
        
        #5 $display("%0d,%b,%b,%b,%b,%b", $time, clk, rst_n, enable, d, q);
        
        // Test 6: Re-enable and load new data
        #5 begin
            enable = 1;
            $display("%0d,%b,%b,%b,%b,%b", $time, clk, rst_n, enable, d, q);
        end
        
        #5 $display("%0d,%b,%b,%b,%b,%b", $time, clk, rst_n, enable, d, q);
        
        // Test 7: Reset during operation
        #5 begin
            rst_n = 0;
            $display("%0d,%b,%b,%b,%b,%b", $time, clk, rst_n, enable, d, q);
        end
        
        #5 $display("%0d,%b,%b,%b,%b,%b", $time, clk, rst_n, enable, d, q);
        
        // Test 8: Release reset again
        #5 begin
            rst_n = 1;
            enable = 1;
            d = 1;
            $display("%0d,%b,%b,%b,%b,%b", $time, clk, rst_n, enable, d, q);
        end
        
        #5 $display("%0d,%b,%b,%b,%b,%b", $time, clk, rst_n, enable, d, q);
        
        // Test 9: Final data transition
        #5 begin
            d = 0;
            $display("%0d,%b,%b,%b,%b,%b", $time, clk, rst_n, enable, d, q);
        end
        
        #5 $display("%0d,%b,%b,%b,%b,%b", $time, clk, rst_n, enable, d, q);
        
        $finish;
    end

endmodule

