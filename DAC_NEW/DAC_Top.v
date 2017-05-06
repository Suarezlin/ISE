`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    20:29:34 05/03/2017 
// Design Name: 
// Module Name:    DAC_Top 
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
module DAC_Top(
		input wire clk,
		input wire rst_n,
		input wire [1:0] wave,
		output reg din,
		output reg sclk,
		output reg sync
    );
	 reg [15:0] data;
	 reg [4:0] j;
	 wire [7:0] result;
	 wire [7:0] address;
	 wire [7:0] sin_data;
	 wire [7:0] square_data;
	 wire [7:0] triangular_data;
	 wire [7:0] dds_data;
	 initial begin
		sclk <= 0;
		din <= 0;
		data <= 0;
		j <= 0;
	 end
	 always @ ( posedge clk )
		begin
			sclk <= ~ sclk;
		end
	 frequency_tiaozhi U1(
		 .clk(clk),
		 .rst_n(rst_n),
		 .result(result[7:0])
	 );
	 phase_tiaozhi U2(
		 .clk(clk),
		 .rst_n(rst_n),
		 .result(result[7:0]),
		 .address(address[7:0])
	 );
	 wave_select U3(
		 .wave(wave),
		 .sin_data(sin_data[7:0]),
		 .square_data(square_data[7:0]),
		 .triangular_data(triangular_data[7:0]),
		 .dds_data(dds_data[7:0])
	 );
	 
	 sin U4 (
    .clka(clk), 
    .addra(address), 
    .douta(sin_data)
    );
	 square U5 (
    .clka(clk), 
    .addra(address), 
    .douta(square_data)
    );
	 triangular U6 (
    .clka(clk), 
    .addra(address), 
    .douta(triangular_data)
    );
	 always @ ( posedge sclk )
		begin
			sync <= 0;
			din <= data[15];
			data[15:1] <= data[14:0];
			data[0] <= 0;
			j <= j + 1'b1;
			if ( j == 16 )
				begin
					sync <= 1;
					data[7:0] <= sin_data[7:0];
					data[15:8] <= 8'b01000000;
					j <= 0;
				end
		end
endmodule
