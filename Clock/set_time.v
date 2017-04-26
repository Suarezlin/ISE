`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    13:25:17 04/26/2017 
// Design Name: 
// Module Name:    set_time 
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
module set_time(
	input wire Minute_L,
	input wire Minute_H,
	input wire set_L,
	input wire set_H,
	output reg [3:0] cnt60_L,
	output reg [3:0] cnt60_H
    );
	 always @ ( * )
		begin
			cnt60_L <= Minute_L;
			cnt60_H <= Minute_H;
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
			else
				begin
					cnt60_L <= Minute_L;
					cnt60_H <= Minute_H;
				end
		end
endmodule
