`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    20:34:57 05/03/2017 
// Design Name: 
// Module Name:    phase_tiaozhi 
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
module phase_tiaozhi(
		input clk, //输入时钟
		input rst_n, //输入复位信号，给寄存器复位
		input [7:0] result, //第一部分的输出结果的输入
		output [7:0] address //输出给rom的地址
    );
	 wire [7:0] phase = 0;
	 reg [7:0] phase_reg;
	 always@( posedge clk or negedge rst_n ) begin
	 if( !rst_n )
		 phase_reg <= 0;
	 else
		 phase_reg <= phase;
	 end
	 assign address = result + phase_reg;
endmodule
