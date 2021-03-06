`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    22:18:43 04/19/2017 
// Design Name: 
// Module Name:    Clock_Top 
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
module Clock_Top(
		input wire clk,
		input wire set,
		input wire [2:0] Ssecond_H,
		input wire [3:0] Ssecond_L,
		input wire set_minute_L,
		input wire set_minute_H,
		input wire set_hour_L,
		input wire set_hour_H,
		output [3:0] Second_L,
		output [3:0] Second_H,
		output Second_Flash,
		output [6:0] a_to_g,
		output [3:0] an
    );
	 wire [3:0] Minute_L;
	 wire [3:0] Minute_H;
	 wire [3:0] Hour_L;
	 wire [3:0] Hour_H;
	 wire carry_1;
	 wire carry;
	 wire time_2;
	 SecondPulse U0 (
		.clk(clk),
		.sec(Second_Flash)
	 );
	 time_2 instance_name (
    .clk(clk), 
    .sec(time_2)
    );
	 cnt60_second U1 (
		.clk(Second_Flash),
		.set(set),
		.second_L(Ssecond_L),
		.second_H(Ssecond_H),
		.cnt60_L(Second_L),
		.cnt60_H(Second_H),
		.carry(carry_1)
	 );
	 cnt60 U2 (
		.clk_1(Second_Flash),
		.clk(carry_1),
		.set_L(set_minute_L),
		.set_H(set_minute_H),
		.cnt60_L(Minute_L),
		.cnt60_H(Minute_H),
		.carry(carry)
	 );
	 cnt24 U3 (
		.clk_1(time_2),
		.clk(carry),
		.set_L(set_hour_L),
		.set_H(set_hour_H),
		.cnt24_L(Hour_L),
		.cnt24_H(Hour_H),
		.carry(carryaa)
	 );
	 disp U4 (
		.clk(clk),
		.LED0_num(Minute_L),
		.LED1_num(Minute_H),
		.LED2_num(Hour_L),
		.LED3_num(Hour_H),
		.a_to_g(a_to_g),
		.an(an)
	 );
endmodule
