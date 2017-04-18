`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    22:57:02 04/18/2017 
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
		input wire clk,
		input wire clr,
		input wire load,
		input wire [3:0] in,
		output [6:0]a_to_g,
		output [3:0]an,
		output reg clk_1
    );
	 wire [7:0] q;
	 wire clk_1Hz;
	 GenerateTime u1 (
    .clk(clk), 
    .clr(clr), 
    .load(load), 
    .clk_1Hz(clk_1Hz)
    );
	 always @ (*)
		clk_1 <= clk_1Hz;
	 Counter_10 u2 (
    .clk_1Hz(clk_1Hz), 
    .clr(clr), 
    .load(load),
	 .in(in),
    .q(q)
    );
	 x7seg u3 (
    .x(q), 
    .clk(clk), 
    .clr(clr), 
    .a_to_g(a_to_g), 
    .an(an)
    );
endmodule
