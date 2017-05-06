`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    08:39:07 05/04/2017 
// Design Name: 
// Module Name:    sin_rom 
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
module sin_rom(
		input wire clk,
		input wire address,
		output sin_data
    );
	 sin Usin (
		 .clka(clk), // input clka
		 .addra(address), // input [11 : 0] addra
		 .douta(sin_data) // output [7 : 0] douta
	 );
endmodule
