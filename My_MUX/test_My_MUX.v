`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   21:11:24 04/05/2017
// Design Name:   My_MUX
// Module Name:   C:/ise/My_MUX/test_My_MUX.v
// Project Name:  My_MUX
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: My_MUX
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module test_My_MUX;

	// Inputs
	reg a;
	reg b;
	reg c;
	reg s0;
	reg s1;

	// Outputs
	wire y;

	// Instantiate the Unit Under Test (UUT)
	My_MUX uut (
		.a(a), 
		.b(b), 
		.c(c), 
		.s0(s0), 
		.s1(s1), 
		.y(y)
	);

	initial begin
		// Initialize Inputs
		a = 0;
		b = 0;
		c = 0;
		s0 = 0;
		s1 = 0;

		// Wait 100 ns for global reset to finish
		#100;
        
		// Add stimulus here
		#100
		a <= 1;b<=0;c<=0;s0<=0;s1<=0;
		#100
		a<=0;b<=0;c<=1;s0<=1;s1<=0;
		#100
		a<=0;b<=0;c<=1;s0<=0;s1<=1;
		#100
		a <= 1;b<=0;c<=0;s0<=1;s1<=1;

	end
      
endmodule

