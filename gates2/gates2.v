`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    18:40:43 03/29/2017 
// Design Name: 
// Module Name:    gates2 
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
module gates2(
		input a,
		input b,
		output [5:0] z
    );
	 assign z[5] = a&b;
	 assign z[4] = ~(a&b);
	 assign z[3] = a|b;
	 assign z[2] = ~(a|b);
	 assign z[1] = a^b;
	 assign z[0] = a~^b;
endmodule
