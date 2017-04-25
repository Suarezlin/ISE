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
		input wire clr,
		input wire minute_add,
		input wire minute_minus,
		input wire hour_add,
		input wire hour_minus,
		output Second_Flash,
		output [6:0] a_to_g,
		output [3:0] an
    );
	 wire [3:0] Second_L;
	 wire [3:0] Second_H;
	 wire [3:0] Minute_L;
	 wire [3:0] Minute_H;
	 wire [3:0] Hour_L;
	 wire [3:0] Hour_H;
	 wire carry_1;
	 wire carry;
	 SecondPulse U0 (
		.clk(clk),
		.clr(clr),
		.sec(Second_Flash)
	 );
	 cnt60 U1 (
		.clk(Second_Flash),
		.clr(clr),
		.minute_add(minute_addaaa),
		.minute_minus(minute_minusaaas),
		.cnt60_L(Second_L),
		.cnt60_H(Second_H),
		.carry(carry_1)
	 );
	 cnt60 U2 (
		.clk(carry_1),
		.clr(clr),
		.minute_add(minute_add),
		.minute_minus(minute_minus),
		.cnt60_L(Minute_L),
		.cnt60_H(Minute_H),
		.carry(carry)
	 );
	 cnt24 U3 (
		.clk(carry),
		.clr(clr),
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
