`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    12:50:26 05/10/2017 
// Design Name: 
// Module Name:    data_switch 
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
module data_switch(
		input wire clk,
		input wire ctrl,
		input wire [15:0] Dis,
		input wire [15:0] save_data,
		output reg [15:0] out
    );
	 initial
		out = Dis;
	 always @ ( posedge clk )
		if ( ctrl )
			out <= save_data;
		else
			out <= Dis;
endmodule
