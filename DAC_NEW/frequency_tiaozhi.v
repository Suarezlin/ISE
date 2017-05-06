`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    20:30:38 05/03/2017 
// Design Name: 
// Module Name:    frequency_tiaozhi 
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
module frequency_tiaozhi(
		input clk, //输入时钟
		input rst_n, //复位信号，用来给寄存器初始复位
		output reg [7:0] result //相加后的寄存器输出结果
    );
	 wire [7:0] sum; //相加后的值
	 wire [7:0] k = 20; 
	 assign sum = k + result;
	 always@( posedge clk or negedge rst_n) begin
	 if( !rst_n )
		 result <= 0;
	 else
		 result <= sum;
	 end
endmodule
