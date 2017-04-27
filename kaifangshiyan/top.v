`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    18:38:07 04/26/2017 
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
		input wire start,
		input wire echo,
		output clk_50us,
//		output [6:0]a_to_g,
//		output [3:0]an
		output reg echo_t
    );
	 wire clk_1ms;
	 generateTime U0 (
    .clk(clk),
	 .start(start),
    .clr(clr), 
    .clk_50us(clk_50us)
    );
	 gengerTime_1ms U1 (
    .clk(clk), 
    .clr(clr), 
    .clk_1ms(clk_1ms)
    );
	 always @ ( * )
		echo_t <= echo;
//	 cesu U2 (
//    .clk(clk_1ms), 
//    .clr(clr), 
//    .echo(echo), 
//    .echo_t(echo_t)
//    );
//	 x7seg U3 (
//    .x(echo_t), 
//    .clk(clk), 
//    .clr(clr), 
//    .a_to_g(a_to_g), 
//    .an(an)
//    );
endmodule
