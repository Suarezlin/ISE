`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   20:15:34 05/06/2017
// Design Name:   top
// Module Name:   C:/ise/coun_60/test.v
// Project Name:  coun_60
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: top
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module test;

	// Inputs
	reg clk_50mHz;

	// Outputs
	wire [6:0] a_to_g;
	wire [3:0] an;

	// Instantiate the Unit Under Test (UUT)
	top uut (
		.clk_50mHz(clk_50mHz), 
		.a_to_g(a_to_g), 
		.an(an)
	);

	initial begin
		// Initialize Inputs
		clk_50mHz = 0;

		// Wait 100 ns for global reset to finish
		#100;
        
		// Add stimulus here

	end
   always #20 clk_50mHz <= ~clk_50mHz;
endmodule

