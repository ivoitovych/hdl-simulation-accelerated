// minimal_divider_sim.v

module minimal_divider_sim;

    reg clk;
    reg rst;
    reg div1, div2, div3, div4;
    integer i;

    // Clock generator: 10 MHz = 100ns period
    initial begin
        clk = 0;
        forever #50 clk = ~clk; // 50ns high, 50ns low = 100ns period
    end

    // Deassert reset after a short time (one clock)
    initial begin
        rst = 1;
        #80 rst = 0;
    end

    // Ripple divider chain, synchronous reset
    always @(posedge clk) begin
        if (rst) begin
            div1 <= 0;
            div2 <= 0;
            div3 <= 0;
            div4 <= 0;
            i <= 0;
        end else begin
            div1 <= ~div1;
            if (div1)
                div2 <= ~div2;
            if (div1 && div2)
                div3 <= ~div3;
            if (div1 && div2 && div3)
                div4 <= ~div4;
            i <= i + 1;
        end
        // Print every rising edge, aligned output
        $display("time=%6t ns  cycle=%2d  div1=%1b  div2=%1b  div3=%1b  div4=%1b", $time, i, div1, div2, div3, div4);
        if (i == 49) $finish;
    end

endmodule

