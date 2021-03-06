`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    22:22:01 04/19/2017 
// Design Name: 
// Module Name:    SecondPulse 
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
module SecondPulse(
		input wire clk,
		output reg sec
    );
	 initial begin
		sec = 0;
	end
	 reg [26:0] q1;
	 always @ ( posedge clk )
		begin
			if ( q1 == 25000000 )
				begin
					q1 <= 0;
					sec = ~sec;
				end
			else
				q1 <= q1+1;
		end
endmodule
