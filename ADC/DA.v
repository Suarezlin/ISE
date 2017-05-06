`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    09:24:10 05/04/2017 
// Design Name: 
// Module Name:    DA 
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
module DA(
		input wire clk,
		input wire [7:0] sdata,
		output reg din,
		output reg sclk,
		output reg sync
    );
	 reg [4:0] j;
	 reg [15:0] data;
	 initial begin
		sclk <= 0;
		din <= 0;
		data <= 0;
		j <= 0;
	 end
	 always @ ( posedge clk )
		begin
			sclk <= ~ sclk;
		end
	 always @ ( posedge sclk )
		begin
			sync <= 0;
			din <= data[15];
			data[15:1] <= data[14:0];
			data[0] <= 0;
			j <= j + 1'b1;
			if ( j == 16 )
				begin
					sync <= 1;
					data[7:0] <= sdata[7:0];
					data[15:8] <= 8'b01000000;
					j <= 0;
				end
		end
endmodule
