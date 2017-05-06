`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    08:40:51 05/04/2017 
// Design Name: 
// Module Name:    square_rom 
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
module square_rom(
		input wire clk,
		input wire address,
		output square_data
    );
	 square U5 (
		 .clka(clk), // input clka
		 .addra(address), // input [11 : 0] addra
		 .douta(square_data) // output [7 : 0] douta
	 );
endmodule
