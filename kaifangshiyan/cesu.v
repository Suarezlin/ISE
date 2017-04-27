`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    18:46:32 04/26/2017 
// Design Name: 
// Module Name:    cesu 
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
module cesu(
		input wire clk,
		input wire clr,
		input wire echo,
		output reg [15:0] echo_t
    );
	 initial begin
		echo_t = 0;
	 end
	 always @ ( posedge clk or posedge  )
	 always @ ( posedge clk or posedge clr )
		begin
			if ( echo == 1 )
				echo_t <= echo_t + 1;
			else if ( clr == 1 )
				echo_t <= 0;
		end
endmodule
