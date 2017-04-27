`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    18:39:19 04/26/2017 
// Design Name: 
// Module Name:    generateTime 
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
module generateTime(
		input wire clk,
		input wire clr,
		input wire start,
		output reg clk_50us
    );
	 reg[24:0] jsq;
	 always @ (posedge clk or posedge clr)
		begin
			if ( clr == 1)
				begin
					jsq <= 0;
					clk_50us <= 0;
				end
			else if ( start == 1 )
				begin
					if (jsq<50)
						begin
							jsq <= jsq + 1;
							clk_50us <= 1;
						end
					else if (jsq == 100)
						begin
							jsq <= 0;
							clk_50us <= 0;
						end
					else
						begin
							jsq <= jsq + 1;
							clk_50us <= 0;
						end
				end
		end
endmodule
