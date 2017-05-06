`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    22:58:58 04/18/2017 
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
		input wire clr,
		input wire load,
		output reg clk_1Hz
    );
	 reg[24:0] jsq;
	 initial jsq = 0;
	 always @ (posedge clk or posedge clr or posedge load)
		begin
			if ( clr == 1)
				begin
					jsq <= 0;
					clk_1Hz <= 0;
				end
			else if ( load == 1 )
				begin
					jsq <= 0;
					clk_1Hz <= 0;
				end
			else
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
		end
endmodule
