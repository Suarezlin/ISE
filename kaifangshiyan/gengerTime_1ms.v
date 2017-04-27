`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    18:54:57 04/26/2017 
// Design Name: 
// Module Name:    gengerTime_1ms 
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
module gengerTime_1ms(
		input clk,
		input clr,
		output reg clk_1ms
    );
	 reg[24:0] jsq;
	 always @ (posedge clk or posedge clr)
		begin
			if ( clr == 1)
				begin
					jsq <= 0;
					clk_1ms <= 0;
				end
			else
				begin
					if (jsq<25000000)
						begin
							jsq <= jsq + 1;
							clk_1ms <= 1;
						end
					else if (jsq == 50000000)
						begin
							jsq <= 0;
							clk_1ms <= 0;
						end
					else
						begin
							jsq <= jsq + 1;
							clk_1ms <= 0;
						end
				end
		end
endmodule
