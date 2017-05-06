`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    21:47:24 04/19/2017 
// Design Name: 
// Module Name:    counter 
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
module counter(
		input clk_1Hz,
		output reg [7:0]q
    );
	 initial q = 0;
	 always @ ( posedge clk_1Hz )
		begin
			if ( q == 59 )
				q <= 0;
			else
				q <= q + 1;
		end
endmodule
