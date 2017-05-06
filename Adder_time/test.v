`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   20:00:25 05/06/2017
// Design Name:   Adder_time
// Module Name:   C:/ise/Adder_time/test.v
// Project Name:  Adder_time
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: Adder_time
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
	reg clr;
	reg clk;
	reg load;
	reg [3:0] in;

	// Outputs
	wire [3:0] q;

	// Instantiate the Unit Under Test (UUT)
	Adder_time uut (
		.clr(clr), 
		.clk(clk), 
		.load(load), 
		.in(in), 
		.q(q)
	);

	initial begin
		// Initialize Inputs
		clr = 0;
		clk = 0;
		load = 0;
		in = 0;

		// Wait 100 ns for global reset to finish
		#100;
        
		// Add stimulus here
		
	end
	always #20 clk <= ~clk;
      
endmodule

