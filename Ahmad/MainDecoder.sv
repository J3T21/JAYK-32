module MainDecoder(
    input  logic [6:0] op,
    output logic       Branch,
    output logic       ResultSrc,
    output logic       MemWrite,
    output logic       ALUSrc,
    output logic [2:0] ImmSrc,
    output logic       RegWrite,
    output logic [1:0] ALUOp
);

    always_comb begin
        $display("Instr:   ",instr);
            
        // Set Defaults
        Branch    = 1'b0;
        ResultSrc = 1'b0;
        MemWrite  = 1'b0; 
        ALUsrc    = 1'b1; 
        ImmSrc    = 3'b111; 
        RegWrite  = 1'b0;
        ALUOp     = 2'b00; 

        case (op)
        // Register - R
            
            7'd51: begin case (func7) // Register format endcase
                default: $display ("Invalid Instruction");
            endcase
                RegWrite  = 1'b1;
                AluSrc    = 1'b0;
                ALUOp     = 3'b10;
            end
        // Immediate - I
            // Load Word
            7'd03: begin 
                    RegWrite  = 1'b1;
                    ImmSrc    = 1'b000;
                    ResultSrc = 1'b1;
                    ALUOp     = 1'b00; 
            end
            7'd19: begin case (func3) 
                // Add Immediate - addi
                3'b000: begin 
                    RegWrite  = 1'b1;
                    ALUctrl   = 3'b000;
                    ImmSrc    = 3'b000;
                end  
                default: $display ("Invalid Instruction");
            endcase 
            end
        // Upper Immediate - UI
            // 7'd23: // Add  Upper Immediate to PC
            // 7'd55: // Load Upper Immediate
        // Store - S
            7'd35: begin// Store Immediate
                    ImmSrc   = 3'b010;
                    ALUSrc   = 1'b0;
                    MemWrite = 1'b1; 
            end              
        // Branch - B         
            7'd99: begin case (func3) 
                // Branch if Not Equal - bne
                3'b001: if(!EQ) begin  
                    ImmSrc = 3'b011; 
                    ALUsrc = 1'b0; 
                    Branch  = 1'b1; 
                end else begin
                    ALUsrc  = 1'b0; 
                end
                default: $display ("Invalid Instruction");
            endcase 
            end
        // Jump - J
            // 7'd103: begin // Jump and link register
            // end 
            // 7'd111: begin // Jump and link 
            // end
        // Invalid 
            default: $display ("Invalid Instruction");
        endcase

    end


endmodule
