
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
    reg clk_in, rst_n_in, enable_in, d_in;
    integer scan_result;
    reg [8*100:1] line_buffer;  // String buffer for line reading
    integer char_count;

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
        $display("timestamp,clk,rst_n,enable,d,q");

        // Read and process input vectors
        while (1) begin
            char_count = $fgets(line_buffer, 32'h8000_0000); // stdin

            if (char_count == 0) begin
                // End of file
                $finish;
            end

            // Skip empty lines and comment lines
            if (line_buffer[8*100-:8] == "#" || line_buffer[8*100-:8] == "\n") begin
                continue;
            end

            // Skip header line if it contains "timestamp"
            if (line_buffer[8*100-:72] == "timestamp") begin
                continue;
            end

            // Parse CSV line: timestamp,clk,rst_n,enable,d
            scan_result = $sscanf(line_buffer, "%d,%b,%b,%b,%b",
                                timestamp, clk_in, rst_n_in, enable_in, d_in);

            if (scan_result == 5) begin
                // Apply inputs (convert from integer to single bit)
                clk    = clk_in;
                rst_n  = rst_n_in;
                enable = enable_in;
                d      = d_in;

                // Wait for signal propagation
                #1;

                // Output current state
                $display("%0d,%b,%b,%b,%b,%b",
                       timestamp, clk, rst_n, enable, d, q);
            end
        end
    end

endmodule
