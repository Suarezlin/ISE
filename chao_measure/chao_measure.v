`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    10:22:55 04/27/2017 
// Design Name: 
// Module Name:    chao_measure 
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
module chao_measure(
		input wire Clock,
		input wire echo,
		input wire opt,
		input wire ctrl,
		output trig,
		output reg [7:0] seg,
		output reg [3:0] an,
		output c,
		output chaoclk
    );
	 wire [31:0] D1;
	 reg [1:0] count;
	 wire [15:0] Dis;
	 wire [15:0] save_data;
	 wire [15:0] out;
	 wire iclk;
	 wire clk;
	 initial 
	 begin
		 seg[7] = 1'b1;
		 an <= 4'b1111;
		 count <= 0;
	 end
	 DevideFrequency U0 (
    .clk(Clock), 
    .clk_1MHz(clk)
    );
	 DevideFrequency U1 (
    .clk(clk), 
    .clk_1MHz(iclk)
    );
	 DevideFrequency U2 (
    .clk(iclk), 
    .clk_1MHz(c)
    );
	 DIstanceMeasure U3 (
    .clk(clk), 
    .echo(echo),
	 .clk_count(Clock),
    .trig(trig), 
    .Dis(Dis),
	 .chaoclk(chaoclk)
    );
	 datas U8 (
    .clk(clk), 
    .opt(opt), 
    .Dis(Dis), 
    .save_data(save_data)
    );
	 data_switch U9 (
    .clk(clk), 
    .ctrl(ctrl), 
    .Dis(Dis), 
    .save_data(save_data), 
    .out(out)
    );
	 x7seg U4 (
    .clk(clk), 
    .Dis(out[3:0]), 
    .a_to_g(D1[7:0])
    );
	 x7segdot U5 (
    .clk(clk), 
    .Dis(out[7:4]), 
    .a_to_g(D1[15:8])
    );
	 x7seg U6 (
    .clk(clk), 
    .Dis(out[11:8]), 
    .a_to_g(D1[23:16])
    );
	 x7seg U7 (
    .clk(clk), 
    .Dis(out[15:12]), 
    .a_to_g(D1[31:24])
    );
	 always @ ( posedge c )
		begin
			if ( count == 2'b11 )
				count = 0;
			else
				count = count + 1;
		end
	 always @ ( posedge c )
		case ( count )
			2'b00 : begin
				seg <= D1[7:0];
				an <= 4'b1110;
			end
			2'b01 : begin
				seg <= D1[15:8];
				an <= 4'b1101;
			end
			2'b10 : begin
				seg <= D1[23:16];
				an <= 4'b1011;
			end
			2'b11 : begin
				seg <= D1[31:24];
				an <= 4'b0111;		
			end
		endcase
endmodule
