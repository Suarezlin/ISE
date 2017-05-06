`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    14:49:13 05/03/2017 
// Design Name: 
// Module Name:    ADC 
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
module ADC(
		input wire clk,
		input wire sdata,
		output sclk,
		output reg cs,
		output reg [3:0] led0,
		output reg [3:0] led1,
		output reg [3:0] led2,
		output reg [3:0] led3,
		output reg [7:0] out1
    );
	 reg [2:0] cntdiv;
	 reg [7:0] out;
	 reg [4:0] j;
	 reg [2:0] count;
	 reg [15:0] data;
	 reg [15:0] data1;
	 reg [27:0] cntdiv1;
	 assign sclk = cntdiv[2];
	 initial begin
		j <= 0;
		cntdiv <= 0;
		data <= 0;
		data1 <= 0;
		count <= 0;
		out <= 0;
		out1 <= 0;
	end
	always @ ( posedge clk )
		begin
			cntdiv1 <= cntdiv1 + 1'b1;
			if ( cntdiv1 == 1250000 )
				begin
					led0[3:0] <= data1[3:0];
					led1[3:0] <= data1[7:4];
					led2[3:0] <= data1[11:8];
					led3[3:0] <= data1[15:12];
					cntdiv1 <= 0;
				end
		end
	always @ ( posedge clk )
		begin
			cntdiv <= cntdiv + 1'b1;
		end
	always @ ( negedge sclk )
		begin
			cs <= 0;
			data[0] <= sdata;
			data[15:1] <= data[14:0];
			j <= j + 1'b1;
			if ( j == 17 )
				begin
					cs <= 1;
					j <= 0;
					data1[15:0] <= data[15:0];
				end
		end
endmodule
