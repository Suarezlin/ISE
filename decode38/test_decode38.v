`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   21:19:44 04/05/2017
// Design Name:   decode38
// Module Name:   C:/ise/decode38/test_decode38.v
// Project Name:  decode38
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: decode38
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module test_decode38;

	// Inputs
	reg [2:0] a;

	// Outputs
	wire [7:0] y;

	// Instantiate the Unit Under Test (UUT)
	decode38 uut (
		.a(a), 
		.y(y)
	);

	initial begin
		// Initialize Inputs
		a = 0;

		// Wait 100 ns for global reset to finish
		#100;
        
		// Add stimulus here
		#100
		a=000;
		#100
		a=001;
		#100
		a=010;
		#100
		a=011;
		#100
		a=100;
		#100
		a=101;
		#100
		a=110;
		#100
		a=111;

	end
      
endmodule

