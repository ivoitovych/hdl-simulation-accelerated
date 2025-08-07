// simple_alu.v
`timescale 1ns / 1ps

module simple_alu #(
    parameter WIDTH = 8
)(
    input wire clk,
    input wire rst_n,
    input wire [WIDTH-1:0] a,           // Operand A
    input wire [WIDTH-1:0] b,           // Operand B
    input wire [3:0] opcode,            // Operation code
    input wire execute,                 // Execute operation
    output reg [WIDTH-1:0] result,      // Result
    output reg [3:0] flags,             // Status flags: [Zero, Negative, Carry, Overflow]
    output reg done                     // Operation complete
);

    // Opcodes
    localparam ADD  = 4'b0000;
    localparam SUB  = 4'b0001;
    localparam AND  = 4'b0010;
    localparam OR   = 4'b0011;
    localparam XOR  = 4'b0100;
    localparam NOT  = 4'b0101;
    localparam SHL  = 4'b0110;  // Shift left
    localparam SHR  = 4'b0111;  // Shift right
    localparam CMP  = 4'b1000;  // Compare (A - B, update flags only)
    localparam MUL  = 4'b1001;  // Multiply (lower WIDTH bits)

    // Flag indices
    localparam FLAG_ZERO = 3;
    localparam FLAG_NEG  = 2;
    localparam FLAG_CARRY = 1;
    localparam FLAG_OVF  = 0;

    // Internal signals
    reg execute_prev;
    wire execute_edge;
    wire [WIDTH:0] add_result;
    wire [WIDTH:0] sub_result;
    wire [WIDTH-1:0] and_result;
    wire [WIDTH-1:0] or_result;
    wire [WIDTH-1:0] xor_result;
    wire [WIDTH-1:0] not_result;
    wire [WIDTH-1:0] shl_result;
    wire [WIDTH-1:0] shr_result;
    wire [WIDTH-1:0] mul_result;
    wire [2*WIDTH-1:0] mul_full;  // Full multiplication result

    // Compute results combinationally
    assign add_result = {1'b0, a} + {1'b0, b};
    assign sub_result = {1'b0, a} - {1'b0, b};
    assign and_result = a & b;
    assign or_result = a | b;
    assign xor_result = a ^ b;
    assign not_result = ~a;
    assign shl_result = a << 1;
    assign shr_result = a >> 1;
    assign mul_result = a * b;
    assign mul_full = a * b;  // Full width multiplication

    // Detect rising edge of execute
    always @(posedge clk or negedge rst_n) begin
        if (!rst_n)
            execute_prev <= 0;
        else
            execute_prev <= execute;
    end

    assign execute_edge = execute & ~execute_prev;

    // ALU operation
    always @(posedge clk or negedge rst_n) begin
        if (!rst_n) begin
            result <= 0;
            flags <= 0;
            done <= 0;
        end else begin
            // Clear done after one cycle
            if (done)
                done <= 0;

            // Execute operation on rising edge
            if (execute_edge) begin
                case (opcode)
                    ADD: begin
                        result <= add_result[WIDTH-1:0];
                        flags[FLAG_CARRY] <= add_result[WIDTH];
                        flags[FLAG_OVF] <= (a[WIDTH-1] == b[WIDTH-1]) &&
                                          (add_result[WIDTH-1] != a[WIDTH-1]);
                        flags[FLAG_ZERO] <= (add_result[WIDTH-1:0] == 0);
                        flags[FLAG_NEG] <= add_result[WIDTH-1];
                        done <= 1;
                    end

                    SUB: begin
                        result <= sub_result[WIDTH-1:0];
                        flags[FLAG_CARRY] <= sub_result[WIDTH];
                        flags[FLAG_OVF] <= (a[WIDTH-1] != b[WIDTH-1]) &&
                                          (sub_result[WIDTH-1] != a[WIDTH-1]);
                        flags[FLAG_ZERO] <= (sub_result[WIDTH-1:0] == 0);
                        flags[FLAG_NEG] <= sub_result[WIDTH-1];
                        done <= 1;
                    end

                    AND: begin
                        result <= and_result;
                        flags[FLAG_CARRY] <= 0;
                        flags[FLAG_OVF] <= 0;
                        flags[FLAG_ZERO] <= (and_result == 0);
                        flags[FLAG_NEG] <= and_result[WIDTH-1];
                        done <= 1;
                    end

                    OR: begin
                        result <= or_result;
                        flags[FLAG_CARRY] <= 0;
                        flags[FLAG_OVF] <= 0;
                        flags[FLAG_ZERO] <= (or_result == 0);
                        flags[FLAG_NEG] <= or_result[WIDTH-1];
                        done <= 1;
                    end

                    XOR: begin
                        result <= xor_result;
                        flags[FLAG_CARRY] <= 0;
                        flags[FLAG_OVF] <= 0;
                        flags[FLAG_ZERO] <= (xor_result == 0);
                        flags[FLAG_NEG] <= xor_result[WIDTH-1];
                        done <= 1;
                    end

                    NOT: begin
                        result <= not_result;
                        flags[FLAG_CARRY] <= 0;
                        flags[FLAG_OVF] <= 0;
                        flags[FLAG_ZERO] <= (not_result == 0);
                        flags[FLAG_NEG] <= not_result[WIDTH-1];
                        done <= 1;
                    end

                    SHL: begin
                        result <= shl_result;
                        flags[FLAG_CARRY] <= a[WIDTH-1];
                        flags[FLAG_OVF] <= 0;
                        flags[FLAG_ZERO] <= (shl_result == 0);
                        flags[FLAG_NEG] <= shl_result[WIDTH-1];
                        done <= 1;
                    end

                    SHR: begin
                        result <= shr_result;
                        flags[FLAG_CARRY] <= a[0];
                        flags[FLAG_OVF] <= 0;
                        flags[FLAG_ZERO] <= (shr_result == 0);
                        flags[FLAG_NEG] <= shr_result[WIDTH-1];
                        done <= 1;
                    end

                    CMP: begin
                        result <= result;  // Don't change result
                        flags[FLAG_CARRY] <= sub_result[WIDTH];
                        flags[FLAG_OVF] <= (a[WIDTH-1] != b[WIDTH-1]) &&
                                          (sub_result[WIDTH-1] != a[WIDTH-1]);
                        flags[FLAG_ZERO] <= (a == b);
                        flags[FLAG_NEG] <= sub_result[WIDTH-1];
                        done <= 1;
                    end

                    MUL: begin
                        result <= mul_result;
                        flags[FLAG_CARRY] <= 0;
                        flags[FLAG_OVF] <= |mul_full[2*WIDTH-1:WIDTH];  // Check upper bits
                        flags[FLAG_ZERO] <= (mul_result == 0);
                        flags[FLAG_NEG] <= mul_result[WIDTH-1];
                        done <= 1;
                    end

                    default: begin
                        result <= 0;
                        flags <= 0;
                        done <= 1;
                    end
                endcase
            end
        end
    end

endmodule

