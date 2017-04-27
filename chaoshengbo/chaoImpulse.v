`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    19:56:37 04/26/2017 
// Design Name: 
// Module Name:    chaoImpulse 
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
module chaoImpulse(
		input wire clk,
		output clk_1Hz
    );
	 reg [14:0] count = 0;
	 always @ ( posedge clk )
		count = count + 1;
	 assign clk_1Hz = count[14];
endmodule
