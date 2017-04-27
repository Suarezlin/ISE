`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    19:55:28 04/26/2017 
// Design Name: 
// Module Name:    chao_top 
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
module chao_top(
		input wire clk,
		input wire clr,
		input wire echo,
		output clkImpulse,
		output [7:0]echo_t,
		output [6:0] a_to_g,
		output [3:0] an
    );
	 wire clk_1;
	 GenerateTime U (
    .clk(clk), 
    .clr(clr), 
    .clk_1Hz(clk_1)
    );
	 chaoImpulse U0 (
    .clk(clk),
    .clk_1Hz(clkImpulse)
    );
	 chao_count U1 (
    .clk(clk), 
    .echo(echo),
	 .trig(clk_1),
    .echo_t(echo_t)
    );
	 x7seg U2 (
    .x(echo_t), 
    .clk(clk), 
    .clr(clr), 
    .a_to_g(a_to_g), 
    .an(an)
    );
endmodule
