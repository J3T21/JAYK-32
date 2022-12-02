module cpu #(
    parameter WIDTH = 32
)(
    input  logic CLK,
    input  logic rst,
    output logic [WIDTH-1:0] a0
);

// Internal Wires   
    wire [WIDTH-1:0] PC;
    wire [WIDTH-1:0] Instr;
    wire [WIDTH-1:0] ImmExt;
    wire [WIDTH-1:0] ALUResult;
    wire [WIDTH-1:0] RD2;
    wire [WIDTH-1:0] Result;
    wire             RegWrite;
    wire             ResultSrc;
    wire             MemWrite;
    wire [3:0]       ALUControl;
    wire             ALUSrc;
    wire [2:0]       ImmSrc;
    wire             PCSrc;
    wire             Jump;
    wire             JumpReg;
    wire [2:0]       Type;
    wire             PCUppSrc;
    wire             ImmUppSrc;
    wire             Zero;
 
// PC Module
PCtop PCT(
    .CLK(CLK),
    .rst(rst),
    .PCSrc(PCSrc),
    .JumpReg(JumpReg),
    .Result(Result),
    .ImmExt(ImmExt),
    .PC(PC)
);

// Instr Memory Module
InstrMemory IM(
    .A(PC[27:0]),
    .RD(Instr)
);

// Control Unit Module
ControlUnit CU(
    .op(Instr[6:0]),
    .funct3(Instr[14:12]),
    .funct7(Instr[31:25]),
    .Zero(Zero),
    .Jump(Jump),
    .JumpReg(JumpReg),
    .PCSrc(PCSrc),
    .ResultSrc(ResultSrc),
    .Type(Type),
    .MemWrite(MemWrite),
    .ALUControl(ALUControl),
    .ALUSrc(ALUSrc),
    .ImmSrc(ImmSrc),
    .RegWrite(RegWrite),
    .PCUppSrc(PCUppSrc),
    .ImmUppSrc(ImmUppSrc)
);

// Sign Extend Unit
SignExtend SE(
    .Imm(Instr[31:7]),
    .ImmSrc(ImmSrc),
    .ImmExt(ImmExt)
);

// ALU Module
ALUtop ALUT(
    .CLK(CLK),
    .Jump(Jump),
    .ALUSrc(ALUSrc),
    .ALUControl(ALUControl),
    .RegWrite(RegWrite),
    .PCUppSrc(PCUppSrc),
    .ImmUppSrc(ImmUppSrc),
    .A1(Instr[19:15]),
    .A2(Instr[24:20]),
    .A3(Instr[11:7]),
    .PC(PC),
    .ImmExt(ImmExt),
    .Result(Result),
    .Zero(Zero),
    .ALUResult(ALUResult),
    .RD2(RD2),
    .a0(a0)
);

// Memory Module
Memorytop MT(
    .CLK(CLK),
    .ALUResult(ALUResult),
    .RD2(RD2),
    .Type(Type),
    .MemWrite(MemWrite),
    .ResultSrc(ResultSrc),
    .Result(Result)
);

// Dsiplay
    always_comb begin
        $display("Instruction: %h", Instr);
        $display("ALUControl: %b", ALUControl);
        $display("ALUResult: %h", ALUResult);
        $display("Result: %h", Result);
        $display("a0: %h", a0);
        //$display("Imm: %h", Instr[31:20]);
        //$display("EXT: %h", ImmExt);
        //$display("RegWrite: ", RegWrite);
        //$display("Write Address: %h", Instr[11:7]);
    end

endmodule
