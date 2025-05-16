`timescale 1ns/1ps

module serial_crc32_generator_tb;
    // Test constants
    parameter CLK_PERIOD = 10;  // Clock period in ns

    // DUT signals
    reg clk;
    reg rst_n;
    reg enable;
    reg data_in;
    reg new_message;
    wire [31:0] crc_out;

    // Instantiate the DUT
    serial_crc32_generator dut (
        .clk(clk),
        .rst_n(rst_n),
        .enable(enable),
        .data_in(data_in),
        .new_message(new_message),
        .crc_out(crc_out)
    );

    // Test control variables
    integer test_case;
    integer error_count;
    reg [31:0] expected_crc;

    // Test data
    reg [7:0] test_data_bytes [0:15];   // Array to hold test data bytes
    integer total_test_bytes;           // Number of test bytes to process

    // Clock generation
    initial begin
        clk = 0;
        forever #(CLK_PERIOD/2) clk = ~clk;
    end

    // Task to reset the DUT
    task reset_dut;
        begin
            rst_n = 0;
            enable = 0;
            data_in = 0;
            new_message = 0;
            @(posedge clk);
            @(posedge clk);
            rst_n = 1;
            @(posedge clk);
        end
    endtask

    // Task to send a single bit of data (LSB first)
    task send_bit;
        input bit_value;
        begin
            @(negedge clk);
            data_in = bit_value;
            enable = 1;
            @(posedge clk);
            #1; // Small delay for stability
        end
    endtask

    // Task to send a byte of data (LSB first)
    task send_byte;
        input [7:0] byte_value;
        integer bit_idx;
        begin
            for (bit_idx = 0; bit_idx < 8; bit_idx = bit_idx + 1) begin
                send_bit(byte_value[bit_idx]);
            end
        end
    endtask

    // Task to send the entire test message
    task send_test_message;
        input [31:0] expected_result;
        integer byte_idx;
        begin
            // Start a new CRC calculation
            @(negedge clk);
            new_message = 1;
            enable = 0;
            @(posedge clk);
            #1;
            new_message = 0;

            // Process all test bytes
            for (byte_idx = 0; byte_idx < total_test_bytes; byte_idx = byte_idx + 1) begin
                send_byte(test_data_bytes[byte_idx]);
            end

            // Disable after sending all data
            @(negedge clk);
            enable = 0;
            @(posedge clk);
            #1;

            // Extra clock to let crc_out update after last data bit
            @(negedge clk);
            @(posedge clk);
            #1;

            // Check the final CRC value
            if (crc_out !== expected_result) begin
                $display("ERROR: Test case %0d failed! Expected CRC: %h, Got: %h",
                         test_case, expected_result, crc_out);
                error_count = error_count + 1;
            end else begin
                $display("Test case %0d passed! CRC: %h", test_case, crc_out);
            end
            test_case = test_case + 1;
        end
    endtask

    // Task to initialize test data (NO bit reverse!)
    task initialize_test_data;
        input [7:0] pattern_type;
        integer i;
        begin
            case (pattern_type)
                0: begin // "123456789" ASCII test data
                    total_test_bytes = 9;
                    test_data_bytes[0] = 8'h31; // '1'
                    test_data_bytes[1] = 8'h32; // '2'
                    test_data_bytes[2] = 8'h33; // '3'
                    test_data_bytes[3] = 8'h34; // '4'
                    test_data_bytes[4] = 8'h35; // '5'
                    test_data_bytes[5] = 8'h36; // '6'
                    test_data_bytes[6] = 8'h37; // '7'
                    test_data_bytes[7] = 8'h38; // '8'
                    test_data_bytes[8] = 8'h39; // '9'
                    expected_crc = 32'hcbf43926;
                end

                1: begin // All zeros, 4 bytes
                    total_test_bytes = 4;
                    for (i = 0; i < total_test_bytes; i = i + 1)
                        test_data_bytes[i] = 8'h00;
                    expected_crc = 32'h2144df1c;
                end

                2: begin // All ones, 4 bytes
                    total_test_bytes = 4;
                    for (i = 0; i < total_test_bytes; i = i + 1)
                        test_data_bytes[i] = 8'hff;
                    expected_crc = 32'hffffffff;
                end

                3: begin // 0x55555555, 4 bytes
                    total_test_bytes = 4;
                    for (i = 0; i < total_test_bytes; i = i + 1)
                        test_data_bytes[i] = 8'h55;
                    expected_crc = 32'h6b2dc0bd;
                end

                4: begin // 0xAAAAAAAA, 4 bytes
                    total_test_bytes = 4;
                    for (i = 0; i < total_test_bytes; i = i + 1)
                        test_data_bytes[i] = 8'haa;
                    expected_crc = 32'hb596e05e;
                end

                5: begin // Walking ones (8 bytes)
                    total_test_bytes = 8;
                    test_data_bytes[0] = 8'h01;
                    test_data_bytes[1] = 8'h02;
                    test_data_bytes[2] = 8'h04;
                    test_data_bytes[3] = 8'h08;
                    test_data_bytes[4] = 8'h10;
                    test_data_bytes[5] = 8'h20;
                    test_data_bytes[6] = 8'h40;
                    test_data_bytes[7] = 8'h80;
                    expected_crc = 32'he0631a53;
                end
            endcase
        end
    endtask

    // Main test procedure
    initial begin
        $display("Starting CRC-32 Generator Testbench");

        // Initialize variables
        test_case = 0;
        error_count = 0;

        // Reset the DUT
        reset_dut();

        // Test case 1: CRC of "123456789" (standard test vector)
        initialize_test_data(0);
        send_test_message(expected_crc);

        // Test case 2: CRC of all zeros
        initialize_test_data(1);
        send_test_message(expected_crc);

        // Test case 3: CRC of all ones
        initialize_test_data(2);
        send_test_message(expected_crc);

        // Test case 4: CRC of alternating 0/1 pattern
        initialize_test_data(3);
        send_test_message(expected_crc);

        // Test case 5: CRC of alternating 1/0 pattern
        initialize_test_data(4);
        send_test_message(expected_crc);

        // Test case 6: CRC of walking ones pattern
        initialize_test_data(5);
        send_test_message(expected_crc);

        // Test summary
        if (error_count == 0)
            $display("All %0d test cases PASSED", test_case);
        else
            $display("%0d out of %0d test cases FAILED", error_count, test_case);

        $finish;
    end

    // Add waveform dumping for Verilator
    initial begin
        if ($test$plusargs("trace")) begin
            $dumpfile("waveform.vcd");
            $dumpvars(0, serial_crc32_generator_tb);
        end
    end

endmodule

