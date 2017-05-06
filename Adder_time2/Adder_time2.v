`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    22:43:07 04/18/2017 
// Design Name: 
// Module Name:    Adder_time2 
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
module Adder_time2(
		input wire clr,
		input wire clk,
		input wire load,
		input wire [3:0] in,
		output reg [3:0] q
    );
	 reg[24:0] jsq;
	 reg clk_1Hz;
	 initial begin
		q = 0;
		jsq = 0;
	 end
	 always @ (posedge clk)
		begin
			if (jsq<25000000)
				begin
					jsq <= jsq + 1;
					clk_1Hz <= 1;
				end
			else if (jsq == 50000000)
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
	always @ ( posedge clk_1Hz or posedge clr )
		begin
			if ( clr == 1 )
				q <= 0;
			else if ( load == 1 )
				q <= in;
			else if ( q == 9 )
				q <= 0;
			else
				q <= q + 1;
		end
endmodule

