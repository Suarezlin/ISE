`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   23:01:02 04/10/2017
// Design Name:   adder4a
// Module Name:   C:/ise/adder4a/test_adder4a.v
// Project Name:  adder4a
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: adder4a
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module test_adder4a;

	// Inputs
	reg [3:0] a;
	reg [3:0] b;

	// Outputs
	wire [3:0] s;
	wire c4;

	// Instantiate the Unit Under Test (UUT)
	adder4a uut (
		.a(a), 
		.b(b), 
		.s(s), 
		.c4(c4)
	);

	initial begin
		// Initialize Inputs
		a = 0;
		b = 0;

		// Wait 100 ns for global reset to finish
		#100;
        
		// Add stimulus here
		a='b1000;
		b='b0101;
		#100
		a='b0110;
		b='b0001;
	end
      
endmodule

