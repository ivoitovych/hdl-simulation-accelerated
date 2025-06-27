// pwm_generator.v
`timescale 1ns / 1ps

module pwm_generator #(
    parameter WIDTH = 8,              // Resolution of PWM counter
    parameter CLK_DIV = 1             // Clock divider for PWM frequency
)(
    input wire clk,                   // System clock
    input wire rst_n,                 // Active-low reset
    input wire enable,                // Enable PWM output
    input wire [WIDTH-1:0] duty,      // Duty cycle (0 to 2^WIDTH-1)
    input wire [WIDTH-1:0] period,    // PWM period (max count value)
    output reg pwm_out                // PWM output signal
);

    // PWM counter
    reg [WIDTH-1:0] pwm_counter;
    
    // Clock divider logic
    reg [$clog2(CLK_DIV+1)-1:0] clk_div_counter;
    wire pwm_clk_en;
    
    // Generate divided clock enable signal
    generate
        if (CLK_DIV == 1) begin : gen_no_div
            assign pwm_clk_en = 1'b1;
        end else begin : gen_div
            always @(posedge clk or negedge rst_n) begin
                if (!rst_n) begin
                    clk_div_counter <= 0;
                end else if (enable) begin
                    if (clk_div_counter == CLK_DIV - 1)
                        clk_div_counter <= 0;
                    else
                        clk_div_counter <= clk_div_counter + 1'b1;
                end
            end
            assign pwm_clk_en = (clk_div_counter == 0);
        end
    endgenerate
    
    // PWM counter logic
    always @(posedge clk or negedge rst_n) begin
        if (!rst_n) begin
            pwm_counter <= 0;
        end else if (enable && pwm_clk_en) begin
            if (pwm_counter >= period)
                pwm_counter <= 0;
            else
                pwm_counter <= pwm_counter + 1'b1;
        end
    end
    
    // PWM output generation
    always @(posedge clk or negedge rst_n) begin
        if (!rst_n) begin
            pwm_out <= 0;
        end else if (!enable) begin
            pwm_out <= 0;
        end else begin
            // Output high when counter is less than duty cycle
            pwm_out <= (pwm_counter < duty);
        end
    end

endmodule

