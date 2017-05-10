`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    12:45:29 05/10/2017 
// Design Name: 
// Module Name:    datas 
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
module datas(
		input wire clk,
		input wire opt,
		input [15:0] Dis,
		output reg [15:0] save_data
    );
	 always @ ( posedge clk )
		begin
			if ( opt )
				save_data <= Dis;
		end
endmodule
