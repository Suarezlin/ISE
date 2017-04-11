`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    23:06:48 04/10/2017 
// Design Name: 
// Module Name:    compare4a 
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
module compare4a(
		input wire [3:0] a,
		input wire [3:0] b,
		output reg [2:0] y
    );
	 always @ (a or b)
		begin
			if(a>b)
				y<=3'b001;
			else if(a==b)
				y<=3'b010;
			else
				y<=3'b100;
		end
endmodule
