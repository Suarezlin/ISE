`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    20:41:10 05/03/2017 
// Design Name: 
// Module Name:    wave_select 
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
module wave_select(
		input [1:0] wave, //²¨ÐÎÑ¡Ôñ
		input [7:0] sin_data,
		input [7:0] square_data,
		input [7:0] triangular_data,
		output reg [7:0] dds_data
    );
	 always@(*) begin
		 case(wave)
			2'b00 : dds_data = sin_data;
			2'b01: dds_data = square_data;
			2'b10: dds_data = triangular_data;
			default: dds_data = sin_data;
		endcase
	 end
endmodule
