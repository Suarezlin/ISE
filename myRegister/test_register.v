`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   19:50:46 05/06/2017
// Design Name:   myRegister
// Module Name:   C:/ise/myRegister/test_register.v
// Project Name:  myRegister
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: myRegister
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module test_register;

	// Inputs
	reg load;
	reg clk;
	reg clr;
	reg [3:0] d;

	// Outputs
	wire [3:0] q;
	wire clk_1Hz;

	// Instantiate the Unit Under Test (UUT)
	myRegister uut (
		.load(load), 
		.clk(clk), 
		.clr(clr), 
		.d(d), 
		.q(q), 
		.clk_1Hz(clk_1Hz)
	);

	initial begin
		// Initialize Inputs
		load = 1;
		clk = 0;
		clr = 0;
		d = 1111;

		// Wait 100 ns for global reset to finish
		#100;
        
		// Add stimulus here
	end
	reg a = 0;
   always #2 begin
		clk <= ~clk;
	end
	
endmodule

