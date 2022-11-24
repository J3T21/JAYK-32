module ALUDecoder(
    input  logic [1:0] ALUOp,
    input  logic [2:0] func3,
    input  logic [6:0] func7,
    output lgoic [2:0] ALUControl
);

    always_comb begin
        case (ALUOp)
            // Load Store
            2'b00: 
                ALUControl = 3'b000;
            // Branch 
            2'b01: 
                ALUControl = 3'b001;
            // ALU
            2'b10: case(func3)
                // Add Sub - add, sub
                3'b000: case({op[5],func7[5]})
                    // Sub - sub
                    2'b11: 
                        ALUControl = 3'b001;
                    // Add - add
                    default:
                        ALUControl = 3'b000;
                endcase
                // Set Less Than - slt 
                3'b010:
                    ALUControl = 3'b100;
                // Or - or
                3'b110:
                    ALUControl = 3'b011;
                // And - and
                3'b111:
                    ALUControl = 3'b010;
                // Default 
                default:
                    ALUControl = 3'b111;
            endcase
            // Default
            default:
                ALUControl = 3'b111;
        endcase    
    end

endmodule
