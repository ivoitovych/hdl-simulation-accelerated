// simple_alu_tb.v
`timescale 1ns / 1ps

module simple_alu_tb;
    // Parameters
    parameter WIDTH = 8;
    parameter CLK_PERIOD = 10;

    // DUT signals
    reg clk;
    reg rst_n;
    reg [WIDTH-1:0] a;
    reg [WIDTH-1:0] b;
    reg [3:0] opcode;
    reg execute;
    wire [WIDTH-1:0] result;
    wire [3:0] flags;
    wire done;

    // Flag indices (kept for documentation)
    /* verilator lint_off UNUSEDPARAM */
    localparam FLAG_ZERO = 3;
    localparam FLAG_NEG  = 2;
    localparam FLAG_CARRY = 1;
    localparam FLAG_OVF  = 0;
    /* verilator lint_on UNUSEDPARAM */

    // Opcodes
    localparam ADD  = 4'b0000;
    localparam SUB  = 4'b0001;
    localparam AND  = 4'b0010;
    localparam OR   = 4'b0011;
    localparam XOR  = 4'b0100;
    localparam NOT  = 4'b0101;
    localparam SHL  = 4'b0110;
    localparam SHR  = 4'b0111;
    localparam CMP  = 4'b1000;
    localparam MUL  = 4'b1001;

    // Test variables
    integer test_count;
    integer error_count;
    /* verilator lint_off UNUSEDSIGNAL */
    reg [WIDTH-1:0] expected_result;
    reg [3:0] expected_flags;
    /* verilator lint_on UNUSEDSIGNAL */

    // Instantiate DUT
    simple_alu #(
        .WIDTH(WIDTH)
    ) dut (
        .clk(clk),
        .rst_n(rst_n),
        .a(a),
        .b(b),
        .opcode(opcode),
        .execute(execute),
        .result(result),
        .flags(flags),
        .done(done)
    );

    // Clock generation
    initial begin
        clk = 0;
        forever #(CLK_PERIOD/2) clk = ~clk;
    end

    // Task to reset DUT
    task reset_dut;
        begin
            rst_n = 0;
            a = 0;
            b = 0;
            opcode = 0;
            execute = 0;
            @(posedge clk);
            @(posedge clk);
            rst_n = 1;
            @(posedge clk);
        end
    endtask

    // Task to execute operation
    task execute_op;
        input [WIDTH-1:0] op_a;
        input [WIDTH-1:0] op_b;
        input [3:0] op_code;
        integer timeout;
        begin
            a = op_a;
            b = op_b;
            opcode = op_code;
            @(posedge clk);
            execute = 1;
            @(posedge clk);
            execute = 0;

            // Wait for done to go high (not edge, just level)
            timeout = 0;
            while (!done && timeout < 10) begin
                @(posedge clk);
                timeout = timeout + 1;
            end

            if (timeout >= 10) begin
                $display("ERROR: Timeout waiting for done signal!");
                $display("  Operation: %0d, A=%h, B=%h", op_code, op_a, op_b);
                $display("  Current state: result=%h, flags=%b, done=%b", result, flags, done);
                $finish;
            end

            @(posedge clk);
        end
    endtask

    // Task to check result
    task check_result;
        input [WIDTH-1:0] exp_result;
        input [3:0] exp_flags;
        input string op_name;
        begin
            if (result !== exp_result || flags !== exp_flags) begin
                $display("ERROR: %s operation failed!", op_name);
                $display("  Inputs: A=%h, B=%h", a, b);
                $display("  Expected: result=%h, flags=%b", exp_result, exp_flags);
                $display("  Got:      result=%h, flags=%b", result, flags);
                error_count = error_count + 1;
            end else begin
                $display("PASS: %s - A=%h, B=%h, Result=%h, Flags=%b",
                         op_name, a, b, result, flags);
            end
            test_count = test_count + 1;
        end
    endtask

    // Main test sequence
    initial begin
        $dumpfile("waveform.vcd");
        $dumpvars(0, simple_alu_tb);

        $display("Starting Simple ALU Testbench");
        $display("=============================");
        test_count = 0;
        error_count = 0;

        // Reset
        reset_dut();

        // Debug: Check initial state
        $display("After reset: result=%h, flags=%b, done=%b", result, flags, done);

        // Test ADD operations
        $display("\nTesting ADD operations:");
        execute_op(8'h05, 8'h03, ADD);
        check_result(8'h08, 4'b0000, "ADD 5+3");

        execute_op(8'hFF, 8'h01, ADD);
        check_result(8'h00, 4'b1010, "ADD FF+1 (carry)");

        execute_op(8'h7F, 8'h01, ADD);
        check_result(8'h80, 4'b0101, "ADD 7F+1 (overflow)");

        // Test SUB operations
        $display("\nTesting SUB operations:");
        execute_op(8'h08, 8'h03, SUB);
        check_result(8'h05, 4'b0000, "SUB 8-3");

        execute_op(8'h03, 8'h08, SUB);
        check_result(8'hFB, 4'b0110, "SUB 3-8 (negative)");

        execute_op(8'h00, 8'h01, SUB);
        check_result(8'hFF, 4'b0110, "SUB 0-1 (borrow)");

        // Test logical operations
        $display("\nTesting logical operations:");
        execute_op(8'hF0, 8'h0F, AND);
        check_result(8'h00, 4'b1000, "AND F0&0F");

        execute_op(8'hF0, 8'h0F, OR);
        check_result(8'hFF, 4'b0100, "OR F0|0F");

        execute_op(8'hAA, 8'h55, XOR);
        check_result(8'hFF, 4'b0100, "XOR AA^55");

        execute_op(8'h55, 8'h00, NOT);
        check_result(8'hAA, 4'b0100, "NOT ~55");

        // Test shift operations
        $display("\nTesting shift operations:");
        execute_op(8'h81, 8'h00, SHL);
        check_result(8'h02, 4'b0010, "SHL 81<<1");

        execute_op(8'h81, 8'h00, SHR);
        check_result(8'h40, 4'b0010, "SHR 81>>1");

        // Test compare operations
        $display("\nTesting compare operations:");
        execute_op(8'h05, 8'h05, CMP);
        check_result(8'h40, 4'b1000, "CMP 5==5");

        execute_op(8'h05, 8'h08, CMP);
        check_result(8'h40, 4'b0110, "CMP 5<8");

        execute_op(8'h08, 8'h05, CMP);
        check_result(8'h40, 4'b0000, "CMP 8>5");

        // Test multiply operations
        $display("\nTesting multiply operations:");
        execute_op(8'h04, 8'h05, MUL);
        check_result(8'h14, 4'b0000, "MUL 4*5");

        execute_op(8'h10, 8'h10, MUL);
        check_result(8'h00, 4'b1001, "MUL 16*16 (overflow)");

        // Edge cases
        $display("\nTesting edge cases:");
        execute_op(8'h00, 8'h00, ADD);
        check_result(8'h00, 4'b1000, "ADD 0+0");

        execute_op(8'hFF, 8'hFF, AND);
        check_result(8'hFF, 4'b0100, "AND FF&FF");

        // Test summary
        $display("\n=============================");
        $display("Test Summary:");
        $display("Total tests: %0d", test_count);
        $display("Errors: %0d", error_count);
        if (error_count == 0)
            $display("All tests PASSED!");
        else
            $display("Some tests FAILED!");
        $display("=============================\n");

        $finish;
    end

endmodule

