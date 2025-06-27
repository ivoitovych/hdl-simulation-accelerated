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
    reg [WIDTH:0] temp_result;  // Extra bit for carry
    reg execute_prev;
    wire execute_edge;
    
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
            temp_result <= 0;
        end else begin
            // Clear done after one cycle
            if (done)
                done <= 0;
                
            // Execute operation on rising edge
            if (execute_edge) begin
                case (opcode)
                    ADD: begin
                        temp_result = {1'b0, a} + {1'b0, b};
                        result <= temp_result[WIDTH-1:0];
                        flags[FLAG_CARRY] <= temp_result[WIDTH];
                        flags[FLAG_OVF] <= (a[WIDTH-1] == b[WIDTH-1]) && 
                                          (result[WIDTH-1] != a[WIDTH-1]);
                    end
                    
                    SUB: begin
                        temp_result = {1'b0, a} - {1'b0, b};
                        result <= temp_result[WIDTH-1:0];
                        flags[FLAG_CARRY] <= temp_result[WIDTH];
                        flags[FLAG_OVF] <= (a[WIDTH-1] != b[WIDTH-1]) && 
                                          (result[WIDTH-1] != a[WIDTH-1]);
                    end
                    
                    AND: begin
                        result <= a & b;
                        flags[FLAG_CARRY] <= 0;
                        flags[FLAG_OVF] <= 0;
                    end
                    
                    OR: begin
                        result <= a | b;
                        flags[FLAG_CARRY] <= 0;
                        flags[FLAG_OVF] <= 0;
                    end
                    
                    XOR: begin
                        result <= a ^ b;
                        flags[FLAG_CARRY] <= 0;
                        flags[FLAG_OVF] <= 0;
                    end
                    
                    NOT: begin
                        result <= ~a;
                        flags[FLAG_CARRY] <= 0;
                        flags[FLAG_OVF] <= 0;
                    end
                    
                    SHL: begin
                        result <= a << 1;
                        flags[FLAG_CARRY] <= a[WIDTH-1];
                        flags[FLAG_OVF] <= 0;
                    end
                    
                    SHR: begin
                        result <= a >> 1;
                        flags[FLAG_CARRY] <= a[0];
                        flags[FLAG_OVF] <= 0;
                    end
                    
                    CMP: begin
                        temp_result = {1'b0, a} - {1'b0, b};
                        result <= result;  // Don't change result
                        flags[FLAG_CARRY] <= temp_result[WIDTH];
                        flags[FLAG_OVF] <= (a[WIDTH-1] != b[WIDTH-1]) && 
                                          (temp_result[WIDTH-1] != a[WIDTH-1]);
                        // Update zero and negative based on comparison
                        flags[FLAG_ZERO] <= (a == b);
                        flags[FLAG_NEG] <= temp_result[WIDTH-1];
                        done <= 1;
                        // Early return to avoid overwriting flags
                    end
                    
                    MUL: begin
                        result <= a * b;  // Truncated to WIDTH bits
                        flags[FLAG_CARRY] <= 0;
                        flags[FLAG_OVF] <= |(a * b >> WIDTH);  // Overflow if upper bits non-zero
                    end
                    
                    default: begin
                        result <= 0;
                        flags <= 0;
                    end
                endcase
                
                // Update zero and negative flags for non-compare operations
                if (opcode != CMP) begin
                    flags[FLAG_ZERO] <= (result == 0);
                    flags[FLAG_NEG] <= result[WIDTH-1];
                    done <= 1;
                end
            end
        end
    end

endmodule

