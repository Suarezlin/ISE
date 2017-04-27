`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    22:27:00 04/19/2017 
// Design Name: 
// Module Name:    cnt60 
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
module cnt60(
		input wire clk_1,
		input wire clk,
		input wire set_L,
		input wire set_H,
		output reg [3:0] cnt60_L,
		output reg [3:0] cnt60_H,
		output reg carry
    );
	 initial begin
		cnt60_L = 8;
		cnt60_H = 5;
	 end
	 always @ ( posedge clk_1 )
		begin
			if ( set_L == 1 )
				begin
					cnt60_L <= cnt60_L + 1;
					if ( cnt60_L == 9 )
						cnt60_L <= 0;
				end
			else if ( set_H == 1 )
				begin
					cnt60_H <= cnt60_H + 1;
					if ( cnt60_H == 5 )
						cnt60_H <= 0;
				end 
			else if ( clk == 1 )
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
			else
				carry <= 0;
		end
endmodule
