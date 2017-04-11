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
		input wire s0,
		input wire s1,
		output wire y
    );

		assign y = ~s1&~s0&a|~s1&s0&b|s1&~s0&c|s1&s0&a;
endmodule
