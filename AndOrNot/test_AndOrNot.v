`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   20:56:40 04/05/2017
// Design Name:   AndOrNot
// Module Name:   C:/ise/AndOrNot/test_AndOrNot.v
// Project Name:  AndOrNot
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: AndOrNot
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module test_AndOrNot;

	// Inputs
	reg a;
	reg b;
	reg c;
	reg d;

	// Outputs
	wire y;

	// Instantiate the Unit Under Test (UUT)
	AndOrNot uut (
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
	end
      
endmodule

