`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    19:24:33 03/29/2017 
// Design Name: 
// Module Name:    D_Flip_Flop 
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
module D_Flip_Flop(
		input clk,
		input set,
		input D,
		input clr,
		output reg q,
		output reg notq
    );
	 always @(posedge clk or posedge clr or posedge set)
		begin
			if(clr)q<=0;
			else if(set)q<=1;
			else q<=D;
		end
endmodule
