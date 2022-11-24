module ALU #(
    parameter D_WIDTH = 32
)(
    input  logic [2:0]         ALUctrl,
    input  logic [D_WIDTH-1:0] ALUop1,
    input  logic [D_WIDTH-1:0] ALUop2,
    output logic [D_WIDTH-1:0] ALUout,
    output logic               EQ
);

    always_comb begin
        EQ = (ALUop1 == ALUop2);
        case (ALUctrl)
            // Add
            3'b000:    ALUout = ALUop1 + ALUop2;
            // Sub
            3'b001:    ALUout = ALUop1 - ALUop2;
            // And
            3'b010:    ALUout = ALUop1 & ALUop2;
            // OR
            3'b011:    ALUout = ALUop1 | ALUop2;
            // XOR
            3'b100:    ALUout = ALUop1 ^ ALUop2;
            // SLT
            3'b101:    ALUout = {{31{1'b0}},{ALUop1 < ALUop2}};
            // Shift Left
            3'b110:    ALUout = ALUop1 << ALUop2;
            // Shift Right
            3'b111:    ALUout = ALUop1 >> ALUop2;
            // Default
            default:   ALUout = 32'b0;
        endcase
        $display("    New line    ");
        $display("ALU1", ALUop1);
        $display("ALU2", ALUop2);
    end

endmodule
