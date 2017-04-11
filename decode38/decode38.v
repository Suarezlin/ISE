`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    21:16:20 04/05/2017 
// Design Name: 
// Module Name:    decode38 
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
module decode38(
		input wire [2:0]a,
		output wire [7:0]y
    );
		
		assign y[0]=~a[2]&~a[1]&~a[0];
		assign y[1]=~a[2]&~a[1]& a[0];
		assign y[2]=~a[2]& a[1]&~a[0];
		assign y[3]=~a[2]& a[1]& a[0];
		assign y[4]= a[2]&~a[1]&~a[0];
		assign y[5]= a[2]&~a[1]& a[0];
		assign y[6]= a[2]& a[1]&~a[0];
		assign y[7]= a[2]& a[1]& a[0];

endmodule
