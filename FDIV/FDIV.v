`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    21:44:27 04/18/2017 
// Design Name: 
// Module Name:    FDIV 
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
module FDIV(
		input clk_50mHz,
		output reg clk_1Hz
    );
	 reg[26:0] jsq;
	 initial
		jsq = 0;
	 always @ (posedge clk_50mHz)
		begin
			if (jsq < 75000000)
				begin
					jsq <= jsq + 1;
					clk_1Hz <= 1;
				end
			else if (jsq == 150000000)
				begin
					jsq <= 0;
					clk_1Hz <= 0;
				end
			else
				begin
					jsq <= jsq + 1;
					clk_1Hz <= 0;
				end
		end
endmodule
