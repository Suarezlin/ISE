`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   21:04:41 04/10/2017
// Design Name:   x7seg
// Module Name:   C:/ise/x7seg/test_x7seg.v
// Project Name:  x7seg
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: x7seg
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module test_x7seg;

	// Inputs
	reg [7:0] x;
	reg clk;
	reg clr;

	// Outputs
	wire [6:0] a_to_g;
	wire [3:0] an;

	// Instantiate the Unit Under Test (UUT)
	x7seg uut (
		.x(x), 
		.clk(clk), 
		.clr(clr), 
		.a_to_g(a_to_g), 
		.an(an)
	);

	initial begin
		// Initialize Inputs
		x = 0;
		clk = 1;
		clr = 1;

		// Wait 100 ns for global reset to finish
		#100;
		x=0000;
		clr=0;
		// Add stimulus here
		x='h0A;
	end
	always #10 clk=~clk;  
endmodule

