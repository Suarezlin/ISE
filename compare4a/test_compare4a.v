`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   23:15:02 04/10/2017
// Design Name:   compare4a
// Module Name:   C:/ise/compare4a/test_compare4a.v
// Project Name:  compare4a
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: compare4a
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module test_compare4a;

	// Inputs
	reg [3:0] a;
	reg [3:0] b;

	// Outputs
	wire [2:0] y;

	// Instantiate the Unit Under Test (UUT)
	compare4a uut (
		.a(a), 
		.b(b), 
		.y(y)
	);

	initial begin
		// Initialize Inputs
		a = 0;
		b = 0;

		// Wait 100 ns for global reset to finish
		#100;
		// Add stimulus here
		a=1010;
		b=1100;
	end
      
endmodule

