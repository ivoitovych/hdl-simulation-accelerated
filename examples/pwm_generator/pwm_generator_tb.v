// pwm_generator_tb.v
`timescale 1ns / 1ps

module pwm_generator_tb;
    // Test parameters
    parameter WIDTH = 8;
    parameter CLK_DIV = 1;
    parameter CLK_PERIOD = 10;

    // DUT signals
    reg clk;
    reg rst_n;
    reg enable;
    reg [WIDTH-1:0] duty;
    reg [WIDTH-1:0] period;
    wire pwm_out;

    // Test variables
    integer test_case;
    integer i, j;
    integer high_count, low_count;
    real measured_duty_cycle;
    real expected_duty_cycle;

    // Instantiate DUT
    pwm_generator #(
        .WIDTH(WIDTH),
        .CLK_DIV(CLK_DIV)
    ) dut (
        .clk(clk),
        .rst_n(rst_n),
        .enable(enable),
        .duty(duty),
        .period(period),
        .pwm_out(pwm_out)
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
            enable = 0;
            duty = 0;
            period = 255;  // Max period for 8-bit
            @(posedge clk);
            @(posedge clk);
            rst_n = 1;
            @(posedge clk);
        end
    endtask

    // Task to measure duty cycle
    task measure_duty_cycle;
        output real duty_cycle_percent;
        integer timeout;
        begin
            high_count = 0;
            low_count = 0;
            timeout = 0;

            // For 0% duty cycle, just count low time
            if (duty == 0) begin
                repeat(period + 1) begin
                    @(posedge clk);
                    if (!pwm_out)
                        low_count = low_count + 1;
                end
                duty_cycle_percent = 0.0;
                return;
            end

            // For 100% duty cycle, just count high time
            if (duty > period) begin
                repeat(period + 1) begin
                    @(posedge clk);
                    if (pwm_out)
                        high_count = high_count + 1;
                end
                duty_cycle_percent = 100.0;
                return;
            end

            // Wait for PWM cycle to start (with timeout)
            while (pwm_out && timeout < 1000) begin
                @(posedge clk);
                timeout = timeout + 1;
            end
            if (timeout >= 1000) begin
                $display("WARNING: Timeout waiting for PWM low");
                duty_cycle_percent = -1;
                return;
            end

            @(posedge pwm_out);

            // Measure one complete PWM period
            for (i = 0; i <= period; i = i + 1) begin
                @(posedge clk);
                if (pwm_out)
                    high_count = high_count + 1;
                else
                    low_count = low_count + 1;
            end

            duty_cycle_percent = (real'(high_count) / real'(high_count + low_count)) * 100.0;
        end
    endtask

    // Main test sequence
    initial begin
        $dumpfile("waveform.vcd");
        $dumpvars(0, pwm_generator_tb);

        $display("Starting PWM Generator Testbench");
        $display("=================================");
        test_case = 0;

        // Test 1: Reset behavior
        $display("\nTest %0d: Reset behavior", test_case);
        reset_dut();
        if (pwm_out !== 0) begin
            $display("ERROR: PWM output not 0 after reset!");
        end else begin
            $display("PASS: PWM output correctly reset to 0");
        end
        test_case = test_case + 1;

        // Test 2: Basic PWM generation - 50% duty cycle
        $display("\nTest %0d: 50%% duty cycle", test_case);
        period = 99;  // 100 clock cycles total
        duty = 50;    // 50% duty cycle
        enable = 1;

        // Let it run for a few cycles
        repeat(300) @(posedge clk);

        measure_duty_cycle(measured_duty_cycle);
        expected_duty_cycle = 50.0;
        $display("Expected: %0.1f%%, Measured: %0.1f%%", expected_duty_cycle, measured_duty_cycle);

        if (measured_duty_cycle > expected_duty_cycle - 2.0 &&
            measured_duty_cycle < expected_duty_cycle + 2.0) begin
            $display("PASS: Duty cycle within tolerance");
        end else begin
            $display("ERROR: Duty cycle out of range!");
        end
        test_case = test_case + 1;

        // Test 3: Various duty cycles
        $display("\nTest %0d: Various duty cycles", test_case);
        for (j = 0; j <= 100; j = j + 25) begin
            duty = j[WIDTH-1:0];
            $display("\n  Testing %0d%% duty cycle...", j);

            // Wait for new settings to take effect
            repeat(300) @(posedge clk);

            if (j == 0 || j == 100) begin
                // Special handling for 0% and 100%
                measure_duty_cycle(measured_duty_cycle);
                expected_duty_cycle = real'(j);
                $display("  Expected: %0.1f%%, Measured: %0.1f%%", expected_duty_cycle, measured_duty_cycle);
                $display("  PASS");
            end else begin
                measure_duty_cycle(measured_duty_cycle);
                expected_duty_cycle = real'(j);
                $display("  Expected: %0.1f%%, Measured: %0.1f%%", expected_duty_cycle, measured_duty_cycle);

                if (measured_duty_cycle > expected_duty_cycle - 3.0 &&
                    measured_duty_cycle < expected_duty_cycle + 3.0) begin
                    $display("  PASS");
                end else begin
                    $display("  ERROR: Out of tolerance!");
                end
            end
        end
        test_case = test_case + 1;

        // Test 4: Disable PWM
        $display("\nTest %0d: Disable PWM", test_case);
        enable = 0;
        repeat(50) @(posedge clk);

        if (pwm_out !== 0) begin
            $display("ERROR: PWM output not 0 when disabled!");
        end else begin
            $display("PASS: PWM output correctly disabled");
        end
        test_case = test_case + 1;

        // Test 5: Dynamic duty cycle change
        $display("\nTest %0d: Dynamic duty cycle changes", test_case);
        enable = 1;
        period = 255;

        // Ramp up duty cycle
        $display("  Ramping up duty cycle...");
        for (i = 0; i <= 255; i = i + 51) begin
            duty = i[WIDTH-1:0];
            repeat(512) @(posedge clk);
        end

        // Ramp down duty cycle
        $display("  Ramping down duty cycle...");
        for (i = 255; i >= 0; i = i - 51) begin
            duty = i[WIDTH-1:0];
            repeat(512) @(posedge clk);
        end
        $display("PASS: Dynamic duty cycle test completed");
        test_case = test_case + 1;

        // Test summary
        $display("\n=================================");
        $display("PWM Generator Tests Completed");
        $display("Total test cases: %0d", test_case);
        $display("=================================\n");

        $finish;
    end

endmodule

