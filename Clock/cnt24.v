`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    08:47:39 04/20/2017 
// Design Name: 
// Module Name:    cnt24 
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
module cnt24(
		input wire clk_1,
		input wire clk,
		input wire set_L,
		input wire set_H,
		output reg [3:0] cnt24_L,
		output reg [3:0] cnt24_H,
		output reg carry
    );
	 initial begin
		cnt24_L = 3;
		cnt24_H = 2;
	 end
	 always @ ( posedge clk_1 )
		begin
			if ( set_L == 1 )
				begin
					cnt24_L <= cnt24_L + 1;
					if ( cnt24_H==2 && cnt24_L == 3 )
						cnt24_L <= 0;
					else if ( cnt24_L == 9 )
						cnt24_L <= 0;
				end
			else if ( set_H == 1 )
				begin
					cnt24_H <= cnt24_H + 1;
					if ( cnt24_H == 2 )
						cnt24_H <= 0;
				end 
			else if ( clk == 1 )
				begin
					carry <= 0;
					cnt24_L <= cnt24_L + 1;
					if ( cnt24_L == 9 )
						begin
							cnt24_L <= 0;
							cnt24_H <= cnt24_H + 1;
						end
					if ( cnt24_H == 2 && cnt24_L == 3 )
						begin
							cnt24_L <= 0;
							cnt24_H <= 0;
							carry <= 1;
						end
				end
		end
endmodule