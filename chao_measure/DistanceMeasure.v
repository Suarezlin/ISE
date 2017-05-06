`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    10:27:03 04/27/2017 
// Design Name: 
// Module Name:    DIstanceMeasure 
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
module DIstanceMeasure(
		input wire clk,
		input wire echo,
		input wire clk_count,
		output reg trig,
		output reg [15:0] Dis,
		output reg chaoclk
    );
	 reg [15:0] count1;
	 reg [15:0] count2;
	 reg [15:0] temp,temp1,temp2;
	 initial
		begin
			trig <= 0;
			count1 <= 0;
			count2 <= 0;
			chaoclk <= 0;
			temp <= 0;
		end
	 always @ ( posedge clk )
		begin
			if ( count1 == 16'hFFFF )
				count1 = 0;
			else
				count1 = count1 + 1'b1;
		end
	 always @ ( posedge clk )
		begin
			if ( count1 == 16'b0000_0000_0000_0000 )
				trig = 1'b1;
			if ( count1 == 16'b0000_0000_0000_1010 )
				trig = 1'b0;
		end
	 always @ ( posedge clk_count )
		if ( echo == 1'b1 )
			begin
				count2 = count2 + 1;
				if ( count2 > 146 )
					begin
						chaoclk = ~chaoclk;
						count2 = 0;
					end
			end
		else
			begin
				count2 = 1'b0;
			end
	 always @ ( negedge chaoclk or negedge echo )
		begin
			if ( echo == 0 )
				temp = 0;
			else
				begin
					temp[3:0] = temp[3:0] + 1;
					if ( temp[3:0] == 9 )
						begin
							temp[3:0] = 0;
							temp[7:4] = temp[7:4] + 1;
						end
					if ( temp[7:4] == 9 )
						begin
							temp[7:4] = 0;
							temp[11:8] = temp[11:8] + 1;
						end
					if ( temp[11:8] == 9 )
						begin
							temp[11:8] = 0;
							temp[15:12] = temp[15:12] + 1;
						end
					if ( temp[15:12] == 9 )
						temp[15:12] = 0;
				end
		end
	 always @ ( negedge echo )
		begin
			temp1 = temp;
		end
	 always @ ( negedge echo )
		begin
			if ( temp2 - temp1 > 4'b0011 | temp1 - temp2 > 4'b0011 )
				temp2 = temp1;
		end
	 always @ ( posedge clk )
		Dis = temp2;
endmodule
