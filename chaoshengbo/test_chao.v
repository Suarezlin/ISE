`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   21:10:41 04/26/2017
// Design Name:   chao_top
// Module Name:   C:/ise/chaoshengbo/test_chao.v
// Project Name:  chaoshengbo
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: chao_top
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module test_chao;

	// Inputs
	reg clk;
	reg clr;
	reg echo;

	// Outputs
	wire clkImpulse;
	wire [7:0] echo_t;
	wire [6:0] a_to_g;
	wire [3:0] an;

	// Instantiate the Unit Under Test (UUT)
	chao_top uut (
		.clk(clk), 
		.clr(clr), 
		.echo(echo), 
		.clkImpulse(clkImpulse), 
		.echo_t(echo_t), 
		.a_to_g(a_to_g), 
		.an(an)
	);

	initial begin
		// Initialize Inputs
		clk = 0;
		clr = 0;
		echo = 0;

		// Wait 100 ns for global reset to finish
		#100;
        
		// Add stimulus here
	end
	always #10 clk <= ~clk;
	always #50000000 echo <= ~echo;
endmodule

