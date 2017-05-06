`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    12:48:10 05/03/2017 
// Design Name: 
// Module Name:    DAC 
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
module DAC(
		input wire clk,
		input wire [1:0] ctrl,
		output reg din,
		output reg sclk,
		output reg sync
    );
	 wire [5:0] addr;
	 reg [5:0] addra;
	 wire ena;
	 reg en;
	 reg [15:0] data;
	 reg [7:0] N;
	 reg [10:0] cntdiv;
	 reg [4:0] j;
	 reg [7:0] temp;
	 wire [7:0] da;
	 initial
		begin
			sclk <= 0;
			N <= 0;
			cntdiv <= 11'b0;
			din <= 0;
			data <= 0;
			j <= 0;
			temp <= 0;
			addra <= 0;
			en <= 0;
		end
		always @ ( posedge clk )
			begin
				sclk <= ~ sclk;
			end
		always @ ( posedge clk )
			begin
				cntdiv <= cntdiv + 1'b1;
				case ( ctrl )
					2'b00: begin
						en <= 0;
						if ( cntdiv == 1960 )
							begin
								if ( N < 255 )
									N <= N + 1'b1;
								else
									N <= 0;
								cntdiv <= 0;
							end
					end
					2'b01: begin
						en <= 0;
						if ( cntdiv == 1960 )
							begin
								if ( temp < 255 )
									begin
										N <= 255;
										temp <= temp + 1;
									end
								else
									begin
										N <= 0;
										temp <= 0;
									end
								cntdiv <= 0;
							end
					end
					2'b10: begin
						en <= 1;
						if ( cntdiv == 1960 )
							begin
								if ( addr < 65 )
									begin
										addra <= addra + 1;
									end
								else
									begin
										addra <= 0;
									end
								N <= da;
								cntdiv <= 0;
							end
					end
					default: begin
						en <= 0;
						if ( cntdiv == 1960 )
							begin
								if ( N < 255 )
									N <= N + 1'b1;
								else
									N <= 0;
								cntdiv <= 0;
							end
					end
				endcase
			end
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
						data[7:0] <= N[7:0];
						data[15:8] <= 8'b01010011;
						j <= 0;
					end
			end
		assign addr = addra;
		assign ena = en;
		rom_sin your_instance_name (
			.clka(clk), // input clka
			.ena(ena), // input ena
			.addra(addr), // input [5 : 0] addra
			.douta(da) // output [7 : 0] douta
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
						data[7:0] <= N[7:0];
						data[15:8] <= 8'b01010011;
						j <= 0;
					end
			end
endmodule
