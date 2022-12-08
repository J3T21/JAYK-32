module DecExeff #(
    parameter WIDTH = 32
)(
    input CLK,
    input RegWriteD,
    input ResultSrcD [1:0],
    input MemWriteD,
    input JumpD,
    input BranchD,
    input ALUControlD [3:0],
    input ALUSrcD,
    input JumpRegD,
    input RD1 [WIDTH-1:0],
    input RD2 [WIDTH-1:0],
    input PCD [WIDTH-1:0],
    input RdD [11:7],
    input ImmExtD [WIDTH-1:0],
    input PCPlus4D [WIDTH-1:0],
    output RD1E [WIDTH-1:0],
    output RD2E [WIDTH-1:0],
    output PCE [WIDTH-1:0],
    output RdE [11:7],
    output ImmExtE [WIDTH-1:0],
    output PCPlus4E [WIDTH-1:0],
    output RegWriteE,
    output ResultSrcE [1:0],
    output MemWriteE,
    output JumpE,
    output JumpRegE,
    output BranchE,
    output ALUControlE [2:0],
    output ALUSrcE,
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
