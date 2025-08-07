// uart_tx_basic_tb.v
`timescale 1ns / 1ps

module uart_tx_basic_tb;
    // Test parameters
    parameter CLK_FREQ = 50000000;   // 50MHz clock
    parameter BAUD_RATE = 115200;    // Standard baud rate
    parameter CLK_PERIOD = 20;       // 20ns = 50MHz

    // Calculate bit period
    localparam BIT_PERIOD = CLK_FREQ / BAUD_RATE * CLK_PERIOD;

    // DUT signals
    reg clk;
    reg rst_n;
    reg [7:0] data_in;
    reg start;
    wire tx;
    wire busy;

    // Test variables
    integer test_num;
    reg [7:0] received_data;
    integer bit_count;
    integer i;

    // Instantiate DUT
    uart_tx_basic #(
        .CLK_FREQ(CLK_FREQ),
        .BAUD_RATE(BAUD_RATE)
    ) dut (
        .clk(clk),
        .rst_n(rst_n),
        .data_in(data_in),
        .start(start),
        .tx(tx),
        .busy(busy)
    );

    // Clock generation
    initial begin
        clk = 0;
        forever #(CLK_PERIOD/2) clk = ~clk;
    end

    // Task to receive UART byte
    task receive_uart_byte;
        output [7:0] rx_data;
        begin
            rx_data = 0;

            // Wait for start bit
            @(negedge tx);

            // Wait half bit period to sample in middle of bit
            #(BIT_PERIOD/2);

            // Verify start bit
            if (tx !== 0) begin
                $display("ERROR: Invalid start bit!");
            end

            // Wait full bit period to get to first data bit
            #BIT_PERIOD;

            // Receive 8 data bits
            for (bit_count = 0; bit_count < 8; bit_count = bit_count + 1) begin
                rx_data[bit_count] = tx;
                #BIT_PERIOD;
            end

            // Check stop bit
            if (tx !== 1) begin
                $display("ERROR: Invalid stop bit!");
            end
        end
    endtask

    // Task to send byte
    task send_byte;
        input [7:0] byte_to_send;
        begin
            data_in = byte_to_send;
            @(posedge clk);
            start = 1;
            @(posedge clk);
            start = 0;

            // Wait for transmission to complete
            @(negedge busy);
            @(posedge clk);
        end
    endtask

    // Main test sequence
    initial begin
        $dumpfile("waveform.vcd");
        $dumpvars(0, uart_tx_basic_tb);

        $display("UART TX Basic Testbench");
        $display("======================");
        $display("Clock frequency: %d Hz", CLK_FREQ);
        $display("Baud rate: %d", BAUD_RATE);
        $display("Bit period: %d ns", BIT_PERIOD);
        test_num = 0;

        // Initialize
        rst_n = 0;
        data_in = 0;
        start = 0;
        #100;
        rst_n = 1;
        #100;

        // Test 1: Send single byte 0x55 (01010101)
        $display("\nTest %0d: Sending 0x55", test_num);
        fork
            send_byte(8'h55);
            receive_uart_byte(received_data);
        join

        if (received_data == 8'h55) begin
            $display("PASS: Received 0x%02X", received_data);
        end else begin
            $display("FAIL: Expected 0x55, received 0x%02X", received_data);
        end
        test_num = test_num + 1;

        // Test 2: Send 0xAA (10101010)
        $display("\nTest %0d: Sending 0xAA", test_num);
        fork
            send_byte(8'hAA);
            receive_uart_byte(received_data);
        join

        if (received_data == 8'hAA) begin
            $display("PASS: Received 0x%02X", received_data);
        end else begin
            $display("FAIL: Expected 0xAA, received 0x%02X", received_data);
        end
        test_num = test_num + 1;

        // Test 3: Send ASCII characters
        $display("\nTest %0d: Sending ASCII 'Hello'", test_num);
        for (i = 0; i < 5; i = i + 1) begin
            case (i)
                0: data_in = "H";
                1: data_in = "e";
                2: data_in = "l";
                3: data_in = "l";
                4: data_in = "o";
            endcase

            fork
                send_byte(data_in);
                receive_uart_byte(received_data);
            join

            $display("  Sent: '%c' (0x%02X), Received: '%c' (0x%02X)",
                     data_in, data_in, received_data, received_data);
        end
        test_num = test_num + 1;

        // Test 4: Back-to-back transmission
        $display("\nTest %0d: Back-to-back bytes", test_num);
        for (i = 0; i < 3; i = i + 1) begin
            data_in = i[7:0];
            @(posedge clk);
            start = 1;
            @(posedge clk);
            start = 0;

            // Wait just until busy goes low
            @(negedge busy);
        end
        test_num = test_num + 1;

        // Test 5: Check idle state
        $display("\nTest %0d: Checking idle state", test_num);
        #(BIT_PERIOD * 2);
        if (tx !== 1) begin
            $display("FAIL: TX should be high when idle");
        end else begin
            $display("PASS: TX is high in idle state");
        end
        if (busy !== 0) begin
            $display("FAIL: Busy should be low when idle");
        end else begin
            $display("PASS: Busy is low in idle state");
        end
        test_num = test_num + 1;

        $display("\n======================");
        $display("Tests completed: %0d", test_num);
        $display("======================\n");

        $finish;
    end

endmodule

