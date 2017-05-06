`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    08:06:27 04/20/2017 
// Design Name: 
// Module Name:    GenerateTime 
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
module GenerateTime(
		input wire clk,
		output reg clk_1
    );
	 reg[25:0] jsq;
	 initial
		jsq = 0;
	 always @ (posedge clk)
		begin
			if (jsq<50000000)
				begin
					jsq <= jsq + 1;
					clk_1 <= 1;
				end
			else if (jsq == 100000000)
				begin
					jsq <= 0;
					clk_1 <= 0;
				end
			else
				begin
					jsq <= jsq + 1;
					clk_1 <= 0;
				end
		end
endmodule
