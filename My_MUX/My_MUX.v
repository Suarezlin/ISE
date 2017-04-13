`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    21:06:38 04/05/2017 
// Design Name: 
// Module Name:    My_MUX 
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
module My_MUX(
		input wire a,
		input wire b,
		input wire c,
		input wire d,
		input wire e,
		input wire f,
		input wire g,
		input wire h,
		input wire s0,
		input wire s1,
		input wire s2,
		output wire y
    );

		
		assign y = (~s2&~s1&~s0&a)|(~s2&~s1&s0&b)|(~s2&s1&~s0&c)|(~s2&s1&s0&d)|(s2&~s1&~s0&e)|(s2&~s1&s0&f)|(s2&s1&~s0&g)|(s2&s1&s0&h);
endmodule
