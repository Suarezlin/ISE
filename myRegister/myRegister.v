`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    22:02:40 04/18/2017 
// Design Name: 
// Module Name:    myRegister 
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
module myRegister(
		input wire load,
		input wire clk,
		input wire clr,
		input wire [3:0] d,
		output reg [3:0] q,
		output reg clk_1Hz
    );
	 reg[25:0] jsq;
	 reg clk_1;
	 always @ (posedge clk)
		begin
			if (jsq<12500000)
				begin
					jsq <= jsq + 1;
					clk_1 <= 1;
				end
			else if (jsq == 37500000)
				begin
					jsq <= jsq + 1;
					clk_1 <= 1;
				end
			else if (jsq == 50000000)
				begin
					jsq <= 0;
					clk_1 <= 0;
				end
			else
				begin
					jsq <= jsq + 1;
					clk_1 <= 0;
				end
			clk_1Hz <= clk_1;
		end
	 always @ ( posedge clk_1 or posedge clr )
		if (clr ==1 )
			q <= 0;
		else if ( load == 1 )
			q <= d;
endmodule
