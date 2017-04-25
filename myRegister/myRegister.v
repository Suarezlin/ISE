`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    22:02:40 04/18/2017 
// Design Name: 
// Module Name:    myRegister 
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
module myRegister(
		input wire load,
		input wire clk,
		input wire clr,
		input wire [3:0] d,
		output reg [3:0] q,
		output clk_1Hz
    );
	 GenerateTime U0 (
    .clk(clk), 
    .clk_1(clk_1Hz)
    );
	 always @ ( posedge clk_1Hz or posedge clr )
		if (clr ==1 )
			q <= 0;
		else if ( load == 1 )
			q <= d;
endmodule
