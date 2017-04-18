`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   21:54:51 04/18/2017
// Design Name:   FDIV
// Module Name:   C:/ise/FDIV/text_FDIV.v
// Project Name:  FDIV
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: FDIV
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module text_FDIV;

	// Inputs
	reg clk_50mHz;

	// Outputs
	wire clk_1Hz;

	// Instantiate the Unit Under Test (UUT)
	FDIV uut (
		.clk_50mHz(clk_50mHz), 
		.clk_1Hz(clk_1Hz)
	);

	initial begin
		// Initialize Inputs
		clk_50mHz = 0;

		// Wait 100 ns for global reset to finish
		#100;
        
		// Add stimulus here

	end
	always #20 clk_50mHz = ~clk_50mHz;
endmodule

