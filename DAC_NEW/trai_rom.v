`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    08:42:11 05/04/2017 
// Design Name: 
// Module Name:    trai_rom 
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
module trai_rom(
		input wire clk,
		input wire address,
		output triangular_data
    );
	 triangular U6 (
		 .clka(clk), // input clka
		 .addra(address), // input [11 : 0] addra
		 .douta(triangular_data) // output [7 : 0] douta
	 );
endmodule
