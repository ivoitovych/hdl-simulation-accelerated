// checker.v - Standalone results checker/verifier
`timescale 1ns / 1ps

module checker;

    // Golden model state
    reg golden_q;
    reg prev_clk;
    
    // Input parsing variables
    integer timestamp;
    integer clk_in, rst_n_in, enable_in, d_in, q_actual;
    integer scan_result;
    reg [200:0] line_buffer;
    
    // Statistics
    integer total_checks;
    integer errors;
    integer reset_checks;
    integer enable_checks;
    integer data_prop_checks;
    
    // Main verification loop
    initial begin
        // Initialize
        golden_q = 0;
        prev_clk = 0;
        total_checks = 0;
        errors = 0;
        reset_checks = 0;
        enable_checks = 0;
        data_prop_checks = 0;
        
        $display("=== DUT Verification Starting ===");
        
        // Read and verify results
        while (!$feof(0)) begin
            if ($fgets(line_buffer, 0)) begin
                // Skip comment lines
                if (line_buffer[0] == "#") continue;
                
                // Parse CSV line: timestamp,clk,rst_n,enable,d,q
                scan_result = $sscanf(line_buffer, "%d,%d,%d,%d,%d,%d", 
                                    timestamp, clk_in, rst_n_in, enable_in, d_in, q_actual);
                
                if (scan_result == 6) begin
                    total_checks = total_checks + 1;
                    
                    // Update golden model on rising clock edge
                    if (clk_in && !prev_clk) begin
                        // Rising edge detected
                        if (!rst_n_in) begin
                            // Reset active
                            golden_q = 0;
                            reset_checks = reset_checks + 1;
                        end else if (enable_in) begin
                            // Enabled, capture data
                            golden_q = d_in;
                            data_prop_checks = data_prop_checks + 1;
                        end else begin
                            // Disabled, hold value
                            enable_checks = enable_checks + 1;
                        end
                    end
                    
                    // Check actual vs expected
                    if (q_actual !== golden_q) begin
                        $display("ERROR at t=%0d: Expected q=%b, Got q=%b (clk=%b, rst_n=%b, enable=%b, d=%b)", 
                               timestamp, golden_q, q_actual, clk_in, rst_n_in, enable_in, d_in);
                        errors = errors + 1;
                    end else begin
                        $display("PASS  at t=%0d: q=%b (clk=%b, rst_n=%b, enable=%b, d=%b)", 
                               timestamp, q_actual, clk_in, rst_n_in, enable_in, d_in);
                    end
                    
                    // Specific behavioral checks
                    check_reset_behavior(timestamp, clk_in, rst_n_in, q_actual);
                    check_enable_behavior(timestamp, clk_in, rst_n_in, enable_in, d_in, q_actual);
                    
                    prev_clk = clk_in;
                end
            end else begin
                break;
            end
        end
        
        // Print summary
        print_summary();
        
        $finish;
    end
    
    // Task to check reset behavior
    task check_reset_behavior;
        input integer ts;
        input clk;
        input rst_n;
        input q;
        begin
            if (!rst_n && clk && q !== 0) begin
                $display("RESET_ERROR at t=%0d: q should be 0 when rst_n=0 on rising edge", ts);
                errors = errors + 1;
            end
        end
    endtask
    
    // Task to check enable behavior
    task check_enable_behavior;
        input integer ts;
        input clk;
        input rst_n;
        input enable;
        input d;
        input q;
        static reg prev_q = 0;
        static reg prev_valid = 0;
        begin
            if (rst_n && clk && prev_valid) begin
                if (!enable && q !== prev_q) begin
                    $display("ENABLE_ERROR at t=%0d: q changed when enable=0", ts);
                    errors = errors + 1;
                end
            end
            
            if (clk) begin
                prev_q = q;
                prev_valid = 1;
            end
        end
    endtask
    
    // Task to print verification summary
    task print_summary;
        begin
            $display("");
            $display("=== Verification Summary ===");
            $display("Total checks:      %0d", total_checks);
            $display("Errors found:      %0d", errors);
            $display("Reset operations:  %0d", reset_checks);
            $display("Enable operations: %0d", enable_checks);
            $display("Data propagations: %0d", data_prop_checks);
            $display("");
            if (errors == 0) begin
                $display("*** ALL TESTS PASSED ***");
            end else begin
                $display("*** %0d ERRORS DETECTED ***", errors);
            end
            $display("=========================");
        end
    endtask

endmodule

