`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    10:12:42 04/13/2017 
// Design Name: 
// Module Name:    Addrr_top 
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
module Addrr_top(
		input wire clk,
		input wire clr,
		input wire [3:0] a,
		input wire [3:0] b,
		output [6:0]a_to_g,
		output [3:0]an
    );
	 wire [7:0] x;
	 wire [3:0] s;
	 wire c4;
	 adder U0 (
    .a(a), 
    .b(b), 
    .s(s), 
    .c4(c4),
	 .x(x)
    );
	 x7seg U1 (
    .x(x), 
    .clk(clk), 
    .clr(clr), 
    .a_to_g(a_to_g), 
    .an(an)
    );
endmodule
