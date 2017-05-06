`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    10:43:14 04/27/2017 
// Design Name: 
// Module Name:    x7seg 
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
module x7seg(
		input wire clk,
		input wire [3:0] Dis,
		output reg [7:0] a_to_g
    );
	 always @ ( Dis )
		begin
			case ( Dis[3:0] )
				4'b0000:a_to_g[7:0] = 8'h3f;	//0
				4'b0001:a_to_g[7:0] = 8'h06;	//1
				4'b0010:a_to_g[7:0] = 8'h5b;	//2
				4'b0011:a_to_g[7:0] = 8'h4f;	//3
				4'b0100:a_to_g[7:0] = 8'h66;	//4
				4'b0101:a_to_g[7:0] = 8'h6d;	//5
				4'b0110:a_to_g[7:0] = 8'h7d;	//6
				4'b0111:a_to_g[7:0] = 8'h27;	//7
				4'b1000:a_to_g[7:0] = 8'h7f;	//8	
				4'b1001:a_to_g[7:0] = 8'h6f;	//9
				4'b1010:a_to_g[7:0] = 8'h77;	//A
				4'b1011:a_to_g[7:0] = 8'h7c;	//B
				4'b1100:a_to_g[7:0] = 8'h58;	//C
				4'b1101:a_to_g[7:0] = 8'h5e;	//D
				4'b1110:a_to_g[7:0] = 8'h79;	//E
				4'b1111:a_to_g[7:0] = 8'h71;	//F
			endcase
			a_to_g = ~ a_to_g;
		end
endmodule
