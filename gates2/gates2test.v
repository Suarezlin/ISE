`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   19:10:50 03/29/2017
// Design Name:   gates2
// Module Name:   C:/ise/gates2/gates2test.v
// Project Name:  gates2
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: gates2
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module gates2test;

	// Inputs
	reg a;
	reg b;

	// Outputs
	wire [5:0] z;

	// Instantiate the Unit Under Test (UUT)
	gates2 uut (
		.a(a), 
		.b(b), 
		.z(z)
	);

	initial begin
		// Initialize Inputs
		a = 0;
		b = 0;

		// Wait 100 ns for global reset to finish
		#100;
        
		// Add stimulus here
		#100
		a <= 0;
		b <= 1;
		#200
		a <= 1;
		b <= 0;
		#200
		a <= 1;
		b <= 1;

	end
      
endmodule

