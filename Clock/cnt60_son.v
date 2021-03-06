`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    14:34:08 04/26/2017 
// Design Name: 
// Module Name:    cnt60_son 
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
module cnt60_son(
		input wire clk,
		input wire clr,
		output reg [3:0] cnt60_L,
		output reg [3:0] cnt60_H,
		output reg carry
    );
	 initial begin
		cnt60_L = 8;
		cnt60_H = 5;
	 end
	 always @ ( posedge clk or posedge clr )
		begin
			if ( clr == 1 )
				begin
					cnt60_L <= 0;
					cnt60_H <= 0;
				end
			else
				begin
					carry <= 0;
					cnt60_L <= cnt60_L + 1;
					if ( cnt60_L == 9 )
						begin
							cnt60_L <= 0;
							cnt60_H <= cnt60_H + 1;
						end
					if ( cnt60_H == 5 && cnt60_L == 9 )
						begin
							cnt60_L <= 0;
							cnt60_H <= 0;
							carry <= 1;
						end
				end
		end
endmodule
