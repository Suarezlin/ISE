`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    09:02:32 04/27/2017 
// Design Name: 
// Module Name:    time_2 
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
module time_2(
    input wire clk,
		output reg sec
    );
	 initial begin
		sec = 0;
	end
	 reg [26:0] q1;
	 
	 always @ ( posedge clk )
		begin
			 if ( q1 < 25100000 )
				begin
					q1 <= q1 + 1;
					sec <= 0;
				end
			 else if ( q1 < 50000000 )
				begin
					q1 <= q1 + 1;
					sec <= 1;
				end
			 else
				q1 <= 0;
				
		end
endmodule

