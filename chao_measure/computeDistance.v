`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    10:36:00 04/27/2017 
// Design Name: 
// Module Name:    computeDistance 
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
module computeDistance(
		input wire clk,
		input wire Dis,
		output reg d
    );
	 always @ ( Dis )
		begin
			d <= Dis * 170;
		end
endmodule
