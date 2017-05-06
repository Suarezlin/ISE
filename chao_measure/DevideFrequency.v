`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    10:23:28 04/27/2017 
// Design Name: 
// Module Name:    DevideFrequency 
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
module DevideFrequency(
		input wire clk,
		output reg clk_1MHz
    );
	 reg [4:0]count;	//用作分频，将50MHz分成1MHz
	 initial 
	 begin
	 count = 0;
	 clk_1MHz = 0;
	 end
	 always@(posedge clk)
	 begin
		 if(count == 5'b11001)
		 begin
			 count = 1'b0;
			 clk_1MHz = ~clk_1MHz;
		 end
		 else
			 count = count + 1'b1;
	 end
endmodule
