`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   21:16:07 05/03/2017
// Design Name:   DAC_Top
// Module Name:   C:/ise/DAC_NEW/test_DAC.v
// Project Name:  DAC_NEW
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: DAC_Top
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module test_DAC;

	// Inputs

reg clk;

reg rst_n;

reg [1:0] wave;

reg [11:0] k;

reg [11:0] phase;

// Outputs

wire [7:0] dds_data;

// Instantiate the Unit Under Test (UUT)

DAC_Top uut (

.clk(clk),

.rst_n(rst_n),

.wave(wave),

.sclk(sclk),

.sync(sync),

.din(din)

);

always #1 clk = ~clk;

integer i;

initial begin

// Initialize Inputs

clk = 0;

rst_n = 0;

wave = 0;

i = 0;



// Wait 100 ns for global reset to finish

#100 rst_n = 1;
end

endmodule