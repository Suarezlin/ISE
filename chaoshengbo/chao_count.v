`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    20:02:54 04/26/2017 
// Design Name: 
// Module Name:    chao_count 
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
module chao_count(
		input wire clk,
		input wire echo,
		input wire trig,
		output reg[7:0] echo_t
    );
	 reg [12:0] count=0;
	 reg [13:0] count_1=0;
	 reg chao_clk;
	 always @ ( posedge clk )
		begin
			count = count + 1;
			if ( count > 735 )
				chao_clk = 1;
			if ( count > 1469 )
				begin
					chao_clk = 0;
					count = 0;
				end
		end
	 always @ ( posedge chao_clk )
		begin
			if ( echo == 1 )
				begin
					count_1 = count_1 + 1;
					echo_t <= count_1;
				end
			else
				begin
					count_1 = 0;
				end
		end
endmodule
