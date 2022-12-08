module ExeMemff #(
    WIDTH = 32
) (
    input RegWriteE,
    input ResultSrcE,
    input MemWriteE,
    input JumpE,
    input JumpRegE,
    input BranchE,
    input AluResultE,
    input WriteDataE, //RD2E
    input RdE,
    input ImmExtE,
    input PCPlus4E,
    input CLK,
    output RegWriteM,
    output ResultSrcM,
    output MemWriteM,
    output JumpM,
    output JumpRegM,
    output BranchM,
    output AluResultM,
    output WriteDataM, 
    output RdM,
    output ImmExtM,
    output PCPlus4M   
);
always_ff @(posedge CLK) begin
    RegWriteM <= RegWriteE;
    ResultSrcM <= RegWriteE;
    MemWriteM <= MemWriteE;
    JumpM <= JumpE;
    JumpRegM <= JumpRegE;
    BranchM <= BranchE;
    AluResultM <= AluResultE;
    WriteDataM <= WriteDataE;
    RdM <= RdE;
    ImmExtM <= ImmExtE
    PCPlus4M <= PCPlus4E
end
endmodule
