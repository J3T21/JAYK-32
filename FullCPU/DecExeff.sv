module DecExeff #(
    parameter WIDTH = 32
)(
    input  logic              CLK,
    input  logic              RegWriteD,
    input  logic [1:0]        ResultSrcD,
    input  logic              MemWriteD,
    input  logic              JumpD,
    input  logic              BranchD,
    input  logic [3:0]        ALUControlD,
    input  logic              ALUSrcD,
    input  logic              JumpRegD,
    input  logic [WIDTH-1:0]  RD1,
    input  logic [WIDTH-1:0]  RD2,
    input  logic [WIDTH-1:0]  PCD,
    input  logic [11:7]       RdD,
    input  logic [WIDTH-1:0]  ImmExtD,
    input  logic [WIDTH-1:0]  PCPlus4D,
    output logic [WIDTH-1:0]  RD1E,
    output logic [WIDTH-1:0]  RD2E,
    output logic [WIDTH-1:0]  PCE,
    output logic [11:7]       RdE,
    output logic [WIDTH-1:0]  ImmExtE,
    output logic [WIDTH-1:0]  PCPlus4E,
    output logic              RegWriteE,
    output logic [1:0]        ResultSrcE,
    output logic              MemWriteE,
    output logic              JumpE,
    output logic              JumpRegE,
    output logic              BranchE,
    output logic [2:0]        ALUControlE,
    output logic              ALUSrcE
);
    always_ff@(posedge CLK) begin
        RegWriteE <= RegWriteD;
        ResultSrcE <= ResultSrcD;
        MemWriteE <= MemWriteD;
        JumpE <= JumpD;
        BranchE <= BranchD;
        ALUControlE <= ALUControlD;
        ALUSrcE <= ALUSrcD;
        JumpRegE <= JumpRegD;
        RD1E <= RD1;
        RD2E <= RD2;
        PCE <= PCD;
        RdE <= RdD;
        ImmExtE <= ImmExtD;
        PCPlus4E <= PCPlus4D
    end

endmodule
