module serial_crc32_generator (
    input wire clk,
    input wire rst_n,
    input wire enable,
    input wire data_in,
    input wire new_message,
    output reg [31:0] crc_out
);

    localparam CRC_POLY = 32'hEDB88320; // LSB-first

    reg [31:0] crc_reg;

    always @(posedge clk or negedge rst_n) begin
        if (!rst_n)
            crc_reg <= 32'hFFFFFFFF;
        else if (new_message)
            crc_reg <= 32'hFFFFFFFF;
        else if (enable)
            crc_reg <= (crc_reg >> 1) ^ ({32{(crc_reg[0] ^ data_in)}} & CRC_POLY);
    end

    // Always update crc_out (so it can be read when enable=0)
    always @(posedge clk or negedge rst_n) begin
        if (!rst_n)
            crc_out <= 32'h00000000;
        else if (new_message)
            crc_out <= 32'h00000000;
        else
            crc_out <= ~crc_reg; // complemented value
    end

endmodule

