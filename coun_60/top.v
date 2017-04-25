`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    21:45:46 04/19/2017 
// Design Name: 
// Module Name:    top 
// Project Name: 
// Target Devices: 
// Tool versions: 
// Description: 
//
// Dependencies: 
//
// Revision: 
// Revision 0.01 - File Created
// Additional Comments: 
//
//////////////////////////////////////////////////////////////////////////////////
module top(
		input wire clk_50mHz,
		output [6:0]a_to_g,
		output [3:0]an
    );
	 wire [7:0] q;
	 wire clk_1Hz;
	 GenerateTime u1 (
    .clk_50mHz(clk_50mHz), 
    .clk_1Hz(clk_1Hz)
    );
	 counter u2 (
    .clk_1Hz(clk_1Hz), 
    .q(q)
    );
	 x7seg u3 (
    .x(q), 
    .clk_50mHz(clk_50mHz), 
    .a_to_g(a_to_g), 
    .an(an)
    );
endmodule
