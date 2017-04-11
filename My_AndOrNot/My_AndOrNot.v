`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    21:31:10 04/05/2017 
// Design Name: 
// Module Name:    My_AndOrNot 
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
module My_AndOrNot(
		input a,
		input b,
		input c,
		input d,
		output y
    );
	 assign y = ~((a&b)|(c&d));
endmodule
