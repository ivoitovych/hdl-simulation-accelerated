module universal_shift_register #(
    parameter WIDTH = 8                // Register width (configurable)
) (
    input wire clk,                    // Clock signal
    input wire rst_n,                  // Active-low reset
    input wire enable,                 // Enable signal
    input wire [1:0] mode,             // Operation mode:
                                       // 00: Hold current value
                                       // 01: Shift right
                                       // 10: Shift left
                                       // 11: Parallel load
    input wire serial_in_right,        // Serial input for right shift
    input wire serial_in_left,         // Serial input for left shift
    input wire [WIDTH-1:0] parallel_in, // Parallel input data
    output reg [WIDTH-1:0] q           // Register output
);

    // Define operation modes as parameters for clarity
    localparam HOLD = 2'b00;
    localparam SHIFT_RIGHT = 2'b01;
    localparam SHIFT_LEFT = 2'b10;
    localparam LOAD = 2'b11;

    // Main shift register logic
    always @(posedge clk or negedge rst_n) begin
        if (!rst_n) begin
            q <= {WIDTH{1'b0}};        // Reset to all zeros
        end
        else if (enable) begin
            case (mode)
                HOLD:
                    q <= q;            // Hold current value

                SHIFT_RIGHT:
                    q <= {serial_in_right, q[WIDTH-1:1]}; // Shift right

                SHIFT_LEFT:
                    q <= {q[WIDTH-2:0], serial_in_left};  // Shift left

                LOAD:
                    q <= parallel_in;  // Parallel load

                default:
                    q <= q;            // Default: hold value
            endcase
        end
    end

endmodule

