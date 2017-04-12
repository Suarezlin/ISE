`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    20:42:25 04/10/2017 
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
		input wire [7:0]x,
		input wire clk,
		input wire clr,
		output reg [6:0]a_to_g,
		output reg [3:0]an
    );
	 wire[1:0] s;
	 reg [15:0]xtemp;
	 reg [3:0]digit;
	 reg [19:0]clkdiv;
	 assign s[1:0] = clkdiv[19:18]; 
	 always @ (x)
		case (x[7:4])
			0:xtemp[15:8]=8'b00000000;
			1:xtemp[15:8]=8'b00000001;
			2:xtemp[15:8]=8'b00000010;
			3:xtemp[15:8]=8'b00000011;
			4:xtemp[15:8]=8'b00000100;
			5:xtemp[15:8]=8'b00000101;
			6:xtemp[15:8]=8'b00000110;
			7:xtemp[15:8]=8'b00000111;
			8:xtemp[15:8]=8'b00001000;
			9:xtemp[15:8]=8'b00001001;
			'hA:xtemp[15:8]=8'b00010000;
			'hB:xtemp[15:8]=8'b00010001;
			'hC:xtemp[15:8]=8'b00010010;
			'hD:xtemp[15:8]=8'b00010011;
			'hE:xtemp[15:8]=8'b00010100;
			'hF:xtemp[15:8]=8'b00010101;
			default:xtemp[15:8]=8'b00000000; //0
		endcase
	always @ (x)
		case (x[3:0])
			0:xtemp[7:0]=8'b00000000;
			1:xtemp[7:0]=8'b00000001;
			2:xtemp[7:0]=8'b00000010;
			3:xtemp[7:0]=8'b00000011;
			4:xtemp[7:0]=8'b00000100;
			5:xtemp[7:0]=8'b00000101;
			6:xtemp[7:0]=8'b00000110;
			7:xtemp[7:0]=8'b00000111;
			8:xtemp[7:0]=8'b00001000;
			9:xtemp[7:0]=8'b00001001;
			'hA:xtemp[7:0]=8'b00010000;
			'hB:xtemp[7:0]=8'b00010001;
			'hC:xtemp[7:0]=8'b00010010;
			'hD:xtemp[7:0]=8'b00010011;
			'hE:xtemp[7:0]=8'b00010100;
			'hF:xtemp[7:0]=8'b00010101;
			default:xtemp[7:0]=8'b00000000; //0
		endcase
	 always @(*)
	 case(s)
		'b11:digit=xtemp[15:12];
		'b10:digit=xtemp[11:8];
		'b01:digit=xtemp[7:4];
		'b00:digit=xtemp[3:0];
		default:digit=xtemp[3:0];
	 endcase
	 always @(*)
	 case(digit)
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
	 always @(*)
	 begin
	 an=4'b1111;
	 an[s]=0;
	 case(s)
		'b11:an[3]=(0==xtemp[15:12]);
		'b10:an[2]=(0==xtemp[15:12])&(0==xtemp[11:8]);
		'b01:an[1]=(0==xtemp[15:12])&(0==xtemp[11:8])&(0==xtemp[7:4]);
		'b00:an[0]=(0==xtemp[15:12])&(0==xtemp[11:8])&(0==xtemp[7:4])&(0==xtemp[3:0]);
		default:an[3]=(0==xtemp[15:12]);
	 endcase
	 end
	 always @(posedge clk or posedge clr)
		begin
		if(clr==1)
			clkdiv <= 0;
		else
			clkdiv <=clkdiv+1;
		end
endmodule
