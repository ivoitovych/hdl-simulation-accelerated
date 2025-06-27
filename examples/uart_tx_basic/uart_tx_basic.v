// uart_tx_basic.v
`timescale 1ns / 1ps

module uart_tx_basic #(
    parameter CLK_FREQ = 50000000,  // Clock frequency in Hz
    parameter BAUD_RATE = 115200    // Baud rate
)(
    input wire clk,
    input wire rst_n,
    input wire [7:0] data_in,       // Data to transmit
    input wire start,               // Start transmission
    output reg tx,                  // UART TX line
    output reg busy                 // Transmission in progress
);

    // Calculate clock divider for baud rate
    localparam CLKS_PER_BIT = CLK_FREQ / BAUD_RATE;
    
    // State machine states
    localparam IDLE       = 3'b000;
    localparam START_BIT  = 3'b001;
    localparam DATA_BITS  = 3'b010;
    localparam STOP_BIT   = 3'b011;
    
    // Registers
    reg [2:0] state;
    reg [$clog2(CLKS_PER_BIT)-1:0] clk_counter;
    reg [2:0] bit_index;
    reg [7:0] data_reg;
    
    // Baud rate clock enable
    wire baud_clk_en = (clk_counter == CLKS_PER_BIT - 1);
    
    always @(posedge clk or negedge rst_n) begin
        if (!rst_n) begin
            state <= IDLE;
            clk_counter <= 0;
            bit_index <= 0;
            data_reg <= 0;
            tx <= 1'b1;  // Idle high
            busy <= 1'b0;
        end else begin
            case (state)
                IDLE: begin
                    tx <= 1'b1;
                    clk_counter <= 0;
                    bit_index <= 0;
                    
                    if (start) begin
                        data_reg <= data_in;
                        busy <= 1'b1;
                        state <= START_BIT;
                    end else begin
                        busy <= 1'b0;
                    end
                end
                
                START_BIT: begin
                    tx <= 1'b0;  // Start bit is low
                    
                    if (baud_clk_en) begin
                        clk_counter <= 0;
                        state <= DATA_BITS;
                    end else begin
                        clk_counter <= clk_counter + 1;
                    end
                end
                
                DATA_BITS: begin
                    tx <= data_reg[bit_index];
                    
                    if (baud_clk_en) begin
                        clk_counter <= 0;
                        
                        if (bit_index == 7) begin
                            bit_index <= 0;
                            state <= STOP_BIT;
                        end else begin
                            bit_index <= bit_index + 1;
                        end
                    end else begin
                        clk_counter <= clk_counter + 1;
                    end
                end
                
                STOP_BIT: begin
                    tx <= 1'b1;  // Stop bit is high
                    
                    if (baud_clk_en) begin
                        clk_counter <= 0;
                        state <= IDLE;
                        busy <= 1'b0;
                    end else begin
                        clk_counter <= clk_counter + 1;
                    end
                end
                
                default: begin
                    state <= IDLE;
                end
            endcase
        end
    end

endmodule

