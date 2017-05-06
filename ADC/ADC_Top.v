`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    14:46:31 05/03/2017 
// Design Name: 
// Module Name:    ADC_Top 
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
module ADC_Top(
		input wire clk,
		input wire sdata,
		output sclk,
		output sclk1,
		output cs,
		output sync,
		output din,
		output [6:0] a_to_g,
		output [3:0] an
    );
	 wire [3:0] led0;
	 wire [3:0] led1;
	 wire [3:0] led2;
	 wire [3:0] led3;
	 wire [7:0] out;
	 wire [7:0] sda;
	 ADC U0 (
    .clk(clk), 
    .sdata(sdata), 
    .sclk(sclk), 
    .cs(cs), 
    .led0(led0), 
    .led1(led1), 
    .led2(led2), 
    .led3(led3),
	 .out1(out)
    );
	 x7seg U1 (
    .clk(clk), 
    .led0(led0), 
    .led1(led1), 
    .led2(led2), 
    .led3(led3), 
    .a_to_g(a_to_g), 
    .an(an)
    );
endmodule
