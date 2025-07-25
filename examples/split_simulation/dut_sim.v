// dut_sim.v - Standalone DUT simulator
`timescale 1ns / 1ps

module dut_sim;

    // DUT signals
    reg clk;
    reg rst_n;
    reg enable;
    reg d;
    wire q;
    
    // File I/O variables
    integer timestamp;
    integer clk_in, rst_n_in, enable_in, d_in;
    integer scan_result;
    reg [200:0] line_buffer;
    
    // Instantiate DUT
    dff_re dut (
        .clk(clk),
        .rst_n(rst_n),
        .enable(enable),
        .d(d),
        .q(q)
    );
    
    // Main simulation loop
    initial begin
        // Initialize signals
        clk = 0;
        rst_n = 0;
        enable = 0;
        d = 0;
        
        // Output CSV header
        $display("# timestamp,clk,rst_n,enable,d,q");
        
        // Read and process input vectors
        while (!$feof(0)) begin
            // Try to read a line from stdin
            if ($fgets(line_buffer, 0)) begin
                // Skip comment lines
                if (line_buffer[0] == "#") continue;
                
                // Parse CSV line: timestamp,clk,rst_n,enable,d
                scan_result = $sscanf(line_buffer, "%d,%d,%d,%d,%d", 
                                    timestamp, clk_in, rst_n_in, enable_in, d_in);
                
                if (scan_result == 5) begin
                    // Apply inputs
                    clk = clk_in;
                    rst_n = rst_n_in;
                    enable = enable_in;
                    d = d_in;
                    
                    // Wait for signal propagation
                    #1;
                    
                    // Output current state
                    $display("%0d,%b,%b,%b,%b,%b", 
                           timestamp, clk, rst_n, enable, d, q);
                end
            end else begin
                // End of input
                break;
            end
        end
        
        $finish;
    end

endmodule

