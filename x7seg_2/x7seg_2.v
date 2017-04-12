`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    19:11:45 04/12/2017 
// Design Name: 
// Module Name:    x7seg_2 
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
module x7seg_2(
		input wire [7:0]x,
		input wire clk,
		input wire clr,
		output reg [6:0]a_to_g,
		output reg [3:0]an
    );
	reg [3:0] one;
	reg [3:0] ten;
	reg [3:0] hun;
	reg [3:0] count;
	reg [17:0] shift_reg=18'b000000000000000000;
	reg [3:0] digit;
	wire [1:0] s;
	reg [19:0]clkdiv=0;
	assign s[1:0] = clkdiv[19:18]; 
	always @ (posedge clk or posedge clr)
	begin
	 if(clr) count<=0;
	 else if(count==9) count<=0;
	 else count<=count+1;
	end
	always @ (posedge clk or posedge clr)
		begin
			if(clr)
				shift_reg=0;
			else if(count==0)
				shift_reg={10'b0000000000,x};
			else if(count<=8)
				begin
					if(shift_reg[11:8]>=5)
						begin
							if(shift_reg[15:12]>=5)
								begin
									shift_reg[15:12]=shift_reg[15:12]+2'b11;
									shift_reg[11:8]=shift_reg[11:8]+2'b11;
									shift_reg=shift_reg<<1;
								end
							else
								begin
									shift_reg[15:12]=shift_reg[15:12];
									shift_reg[11:8]=shift_reg[11:8]+2'b11;
									shift_reg=shift_reg<<1;
								end
						end
					else
						begin
							if(shift_reg[15:12]>=5)
								begin
									shift_reg[15:12]=shift_reg[15:12]+2'b11;
									shift_reg[11:8]=shift_reg[11:8];
									shift_reg=shift_reg<<1;
								end
							else
								begin
									shift_reg[15:12]=shift_reg[15:12];
									shift_reg[11:8]=shift_reg[11:8];
									shift_reg=shift_reg<<1;
								end
						end
				end
		end
	always @ (posedge clk or posedge clr)
		begin
			if(clr)
				begin
					one<=0;
					ten<=0;
					hun<=0;
				end
			else if(count==9)
				begin
					one<=shift_reg[11:8];
					ten<=shift_reg[15:12];
					hun[1:0]<=shift_reg[17:16];
					hun[3:2]<=0;
				end
		end
	always @(*)
	 case(s)
		'b10:digit=hun;
		'b01:digit=ten;
		'b00:digit=one;
		default:digit=one;
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
		default:a_to_g=7'b000000001; //0
	 endcase
	 always @(*)
	 begin
	 an=4'b1111;
	 an[s]=0;
	 an[3]=1;
	 end
	 always @(posedge clk or posedge clr)
		begin
		if(clr==1)
			clkdiv <= 0;
		else
			clkdiv<=clkdiv+1;
		end
endmodule
