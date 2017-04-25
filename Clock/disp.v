`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    22:36:09 04/19/2017 
// Design Name: 
// Module Name:    disp 
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
module disp(
		input wire clk,
		input [3:0] LED0_num,
		input [3:0] LED1_num,
		input [3:0] LED2_num,
		input [3:0] LED3_num,
		output reg [6:0] a_to_g,
		output reg [3:0] an
    );
	 reg [1:0] s;
	 reg [3:0] digit;
	 reg [16:0] clkdiv;
	 always @ (*)
		begin
			an = 4'b1111;
			s <= clkdiv[16:15];
			an[s] = 0;
			case (s)
				0:digit <= LED0_num[3:0];
				1:digit <= LED1_num[3:0];
				2:digit <= LED2_num[3:0];
				3:digit <= LED3_num[3:0];
				default:digit <= LED3_num[3:0];
			endcase
			case (digit)
				0:a_to_g=7'b0000001;
				1:a_to_g=7'b1001111;
				2:a_to_g=7'b0010010;
				3:a_to_g=7'b0000110;
				4:a_to_g=7'b1001100;
				5:a_to_g=7'b0100100;
				6:a_to_g=7'b0100000;
				7:a_to_g=7'b0001111;
				8:a_to_g=7'b0000000;
				9:a_to_g=7'b0000100;
				'hA:a_to_g=7'b0001000;
				'hB:a_to_g=7'b1100000;
				'hC:a_to_g=7'b0110001;
				'hD:a_to_g=7'b1000010;
				'hE:a_to_g=7'b0110000;
				'hF:a_to_g=7'b0111000;
				default:a_to_g=7'b000000001; //0
			endcase
		end
	always @ ( posedge clk )
		begin
			clkdiv <= clkdiv + 1;
		end
endmodule
