`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   20:09:53 05/06/2017
// Design Name:   top
// Module Name:   C:/ise/Adder_time3/test.v
// Project Name:  Adder_time3
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
	reg clk;
	reg clr;
	reg load;
	reg type;
	reg [3:0] in;

	// Outputs
	wire [6:0] a_to_g;
	wire [3:0] an;

	// Instantiate the Unit Under Test (UUT)
	top uut (
		.clk(clk), 
		.clr(clr), 
		.load(load), 
		.type(type), 
		.in(in), 
		.a_to_g(a_to_g), 
		.an(an)
	);

	initial begin
		// Initialize Inputs
		clk = 0;
		clr = 0;
		load = 0;
		type = 0;
		in = 0;

		// Wait 100 ns for global reset to finish
		#100;
        
		// Add stimulus here

	end
   always #20 clk <= ~clk;
endmodule

