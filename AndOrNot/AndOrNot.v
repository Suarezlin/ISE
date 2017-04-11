`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    20:54:11 04/05/2017 
// Design Name: 
// Module Name:    AndOrNot 
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
module AndOrNot(
		input a,
		input b,
		input c,
		input d,
		output reg y
    );
	 
	 assign y = ~((a&b)|(c&d));
endmodule
