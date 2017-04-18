`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    23:01:26 04/18/2017 
// Design Name: 
// Module Name:    Counter_10 
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
module Counter_10(
		input wire clk_1Hz,
		input wire clr,
		input wire load,
		input wire [3:0] in,
		output reg [7:0] q
    );
	 always @ ( posedge clk_1Hz or posedge clr or posedge load)
		begin
			if ( clr == 1 )
				q <= 0;
			else if ( load == 1 )
				q[3:0] <= in;
			else if ( q == 9 )
				q <= 0;
			else
				q <= q + 1;
		end
endmodule
