`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    12:46:58 05/03/2017 
// Design Name: 
// Module Name:    DAC_Top 
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
module DAC_Top(
		input wire clk,
		input wire [1:0] ctrl,
		output din,
		output sclk,
		output sync
    );
	 reg [15:0] data;
	 reg [7:0] N;
	 reg [10:0] cntdiv;
	 reg [4:0] j;
	 DAC U1 (
    .clk(clk), 
    .ctrl(ctrl), 
    .din(din), 
    .sclk(sclk), 
    .sync(sync)
    );
endmodule
