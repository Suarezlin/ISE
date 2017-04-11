`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   19:31:02 03/29/2017
// Design Name:   D_Flip_Flop
// Module Name:   C:/ise/D_Flip_Flop/test_D_Flip_Flop.v
// Project Name:  D_Flip_Flop
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: D_Flip_Flop
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module test_D_Flip_Flop;

	// Inputs
	reg clk;
	reg set;
	reg D;
	reg clr;

	// Outputs
	wire q;

	// Instantiate the Unit Under Test (UUT)
	D_Flip_Flop uut (
		.clk(clk), 
		.set(set), 
		.D(D), 
		.clr(clr), 
		.q(q)
	);

	initial begin
		// Initialize Inputs
		clk = 0;
		set = 1;
		D = 0;
		clr = 0;

		// Wait 100 ns for global reset to finish
		#100;
        
		// Add stimulus here
		#100; clr<=1; set<=0; clk<=0; D<=1;
              #100; clr<=1; set<=0; clk<=1; D<=1;
              #100; clr<=0; set<=0; clk<=0; D<=0;
              #100; clr<=0; set<=0; clk<=1; D<=0;
              #100; clr<=0; set<=1; clk<=0; D<=1;
              #100; clr<=0; set<=1; clk<=1; D<=1;
              #100; clr<=0; set<=0; clk<=0; D<=0;
              #100; clr<=0; set<=0; clk<=1; D<=0;
              #100; clr<=0; set<=0; clk<=0; D<=1;
              #100; clr<=0; set<=0; clk<=1; D<=1;
              #100; clr<=0; set<=0; clk<=0; D<=0;
              #100; clr<=0; set<=0; clk<=1; D<=0;
              #100; clr<=0; set<=0; clk<=0; D<=1;
              #100; clr<=0; set<=0; clk<=1; D<=1;
              #100; clr<=0; set<=0; clk<=0; D<=0;
              #100; clr<=0; set<=0; clk<=1; D<=0;
	end
	//always #100 clk=~clk;
	//always #200 D=~D;
	//always #200 clr=~clr;
	//always #400 set=~set;
      
endmodule

