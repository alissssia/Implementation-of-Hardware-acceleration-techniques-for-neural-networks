/*
* Modulo de cache
*/
`define TAG [20:8]      // posicion de los bits de tag en la direccion
`define SET [7:0]    // posicion de los bits de set en la direccion

module act_cache
    #(
        parameter TAMANO = 21 * 1024, // CAMBIAR, ESTA PUESTO ASI PARA QUE NO DE ERROR
        parameter NVIAS = 5,
        parameter NSETS = 64,
        parameter TAMANO_ADDRESS = 21
    )
    (
        input wire clk,
        input wire rst,
        input wire [TAMANO_ADDRESS - 1:0] address,
        input wire lectura_escritura, // 1 lectura, 0 escritura
        input wire [15:0] activacion_in, // para cuando se escribe
        output wire [15:0] activacion_out, // para cuando se lee
        output wire valido
    )