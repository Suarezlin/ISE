`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    11:21:57 05/01/2017 
// Design Name: 
// Module Name:    x7segdot 
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
module x7segdot(
    input wire clk,
		input wire [3:0] Dis,
		output reg [7:0] a_to_g
    );
	 always @ ( Dis )
		begin
			case ( Dis[3:0] )
				4'b0000:a_to_g[7:0] = 8'b10111111;	//0
				4'b0001:a_to_g[7:0] = 8'b10000110;	//1
				4'b0010:a_to_g[7:0] = 8'b11011011;	//2
				4'b0011:a_to_g[7:0] = 8'b11001111;	//3
				4'b0100:a_to_g[7:0] = 8'b11100110;	//4
				4'b0101:a_to_g[7:0] = 8'b11101101;	//5
				4'b0110:a_to_g[7:0] = 8'b11111101;	//6
				4'b0111:a_to_g[7:0] = 8'b10100111;	//7
				4'b1000:a_to_g[7:0] = 8'b11111111;	//8	
				4'b1001:a_to_g[7:0] = 8'b11101111;	//9
				4'b1010:a_to_g[7:0] = 8'h75;	//A
				4'b1011:a_to_g[7:0] = 8'h7a;	//B
				4'b1100:a_to_g[7:0] = 8'h56;	//C
				4'b1101:a_to_g[7:0] = 8'h5c;	//D
				4'b1110:a_to_g[7:0] = 8'h77;	//E
				4'b1111:a_to_g[7:0] = 8'h71;	//F
			endcase
			a_to_g = ~ a_to_g;
		end
endmodule
