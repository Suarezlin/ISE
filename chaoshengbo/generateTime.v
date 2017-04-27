`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    22:17:54 04/26/2017 
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
module GenerateTime(
		input wire clk,
		input wire clr,
		output reg clk_1Hz
    );
	 reg[24:0] jsq;
	 always @ (posedge clk or posedge clr )
		begin
			if ( clr == 1)
				begin
					jsq <= 0;
					clk_1Hz <= 0;
				end
			else
				begin
					if (jsq<5000000)
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
		end
endmodule

