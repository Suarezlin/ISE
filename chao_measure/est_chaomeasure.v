`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   10:31:24 05/01/2017
// Design Name:   chao_measure
// Module Name:   C:/ise/chao_measure/est_chaomeasure.v
// Project Name:  chao_measure
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: chao_measure
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module est_chaomeasure;

	// Inputs
	reg Clock;
	reg echo;

	// Outputs
	wire trig;
	wire [7:0] seg;
	wire [3:0] an;
	wire c;
	wire chaoclk;

	// Instantiate the Unit Under Test (UUT)
	chao_measure uut (
		.Clock(Clock), 
		.echo(echo), 
		.trig(trig), 
		.seg(seg), 
		.an(an), 
		.c(c), 
		.chaoclk(chaoclk)
	);

	initial begin
		// Initialize Inputs
		Clock = 0;
		echo = 0;

		// Wait 100 ns for global reset to finish
		#100;
        
		// Add stimulus here

	end
	always #2 Clock <= ~Clock;
	always #100000 echo <= ~echo;
      
endmodule

