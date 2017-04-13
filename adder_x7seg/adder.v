`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    10:14:33 04/13/2017 
// Design Name: 
// Module Name:    adder 
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
module adder(
		input wire [3:0] a,
		input wire [3:0] b,
		output wire [7:0] x,
		output wire [3:0] s,
		output wire c4
    );
	 wire [4:0] c;
	 assign c[0]=0;
	 assign s=a^b^c[3:0];
	 assign c[4:1]=a&b|c[3:0]&(a^b);
	 assign c4=c[4];
	 assign x[7:5]=0;
	 assign x[4]=c[4];
	 assign x[3:0]=a^b^c[3:0];
endmodule
