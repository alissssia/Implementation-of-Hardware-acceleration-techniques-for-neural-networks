/* una sola componente de 16 bits */

module flipflop_uno_nbits 
    #(parameter N = 16)
    (   input clk, rst, [N - 1:0] d,
        output reg [N - 1:0] q);
    //a_reqack: assert property (@(posedge clk) )               
    always @(posedge clk or posedge rst) begin
        if (rst) begin
            q <= 16'b0000000000000000;
        end else begin
            q <= d;
        end
    end
endmodule
