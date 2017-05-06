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
		input clk, //����ʱ��
		input rst_n, //���븴λ�źţ����Ĵ�����λ
		input [7:0] result, //��һ���ֵ�������������
		output [7:0] address //�����rom�ĵ�ַ
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
