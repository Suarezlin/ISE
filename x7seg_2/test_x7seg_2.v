`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   19:55:29 04/12/2017
// Design Name:   x7seg_2
// Module Name:   C:/ise/x7seg_2/test_x7seg_2.v
// Project Name:  x7seg_2
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: x7seg_2
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module test_x7seg_2;

	// Inputs
	reg [7:0] x;
	reg clk;
	reg clr;

	// Outputs
	wire [6:0] a_to_g;
	wire [3:0] an;

	// Instantiate the Unit Under Test (UUT)
	x7seg_2 uut (
		.x(x), 
		.clk(clk), 
		.clr(clr), 
		.a_to_g(a_to_g), 
		.an(an)
	);

	initial begin
		// Initialize Inputs
		x = 0;
		clk = 0;
		clr = 1;

		// Wait 100 ns for global reset to finish
		#100;
		clr=0;
		// Add stimulus here
		x='h7F;
	end
	always #10 clk=~clk;     
endmodule

