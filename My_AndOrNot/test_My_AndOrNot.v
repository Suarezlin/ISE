`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   21:33:05 04/05/2017
// Design Name:   My_AndOrNot
// Module Name:   C:/ise/My_AndOrNot/test_My_AndOrNot.v
// Project Name:  My_AndOrNot
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: My_AndOrNot
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module test_My_AndOrNot;

	// Inputs
	reg a;
	reg b;
	reg c;
	reg d;

	// Outputs
	wire y;

	// Instantiate the Unit Under Test (UUT)
	My_AndOrNot uut (
		.a(a), 
		.b(b), 
		.c(c), 
		.d(d), 
		.y(y)
	);

	initial begin
		// Initialize Inputs
		a = 0;
		b = 0;
		c = 0;
		d = 0;

		// Wait 100 ns for global reset to finish
		#100;
        
		// Add stimulus here
		#100
		a<=1;b<=0;c<=0;d<=0;
		#100
		a<=1;b<=1;c<=0;d<=0;
		#100
		a<=1;b<=1;c<=1;d<=0;
		#100
		a<=1;b<=1;c<=0;d<=1;
		#100
		a<=1;b<=1;c<=1;d<=1;

	end
      
endmodule

