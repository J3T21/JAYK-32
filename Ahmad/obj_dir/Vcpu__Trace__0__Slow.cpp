// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vcpu__Syms.h"


VL_ATTR_COLD void Vcpu___024root__trace_init_sub__TOP__0(Vcpu___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+81,"CLK", false,-1);
    tracep->declBit(c+82,"rst", false,-1);
    tracep->declBus(c+83,"a0", false,-1, 31,0);
    tracep->pushNamePrefix("cpu ");
    tracep->declBus(c+84,"WIDTH", false,-1, 31,0);
    tracep->declBit(c+81,"CLK", false,-1);
    tracep->declBit(c+82,"rst", false,-1);
    tracep->declBus(c+83,"a0", false,-1, 31,0);
    tracep->declBus(c+2,"PC", false,-1, 31,0);
    tracep->declBus(c+3,"Instr", false,-1, 31,0);
    tracep->declBus(c+4,"ImmExt", false,-1, 31,0);
    tracep->declBus(c+5,"ALUResult", false,-1, 31,0);
    tracep->declBus(c+6,"RD2", false,-1, 31,0);
    tracep->declBus(c+7,"Result", false,-1, 31,0);
    tracep->declBit(c+8,"RegWrite", false,-1);
    tracep->declBit(c+9,"ResultSrc", false,-1);
    tracep->declBit(c+10,"MemWrite", false,-1);
    tracep->declBus(c+11,"ALUControl", false,-1, 3,0);
    tracep->declBit(c+12,"ALUSrc", false,-1);
    tracep->declBus(c+13,"ImmSrc", false,-1, 2,0);
    tracep->declBit(c+14,"PCSrc", false,-1);
    tracep->declBit(c+15,"Jump", false,-1);
    tracep->declBit(c+16,"JumpReg", false,-1);
    tracep->declBus(c+17,"Type", false,-1, 2,0);
    tracep->declBit(c+18,"PCUppSrc", false,-1);
    tracep->declBit(c+19,"ImmUppSrc", false,-1);
    tracep->declBit(c+20,"Zero", false,-1);
    tracep->pushNamePrefix("ALUT ");
    tracep->declBus(c+85,"A_WIDTH", false,-1, 31,0);
    tracep->declBus(c+84,"D_WIDTH", false,-1, 31,0);
    tracep->declBit(c+81,"CLK", false,-1);
    tracep->declBit(c+15,"Jump", false,-1);
    tracep->declBit(c+12,"ALUSrc", false,-1);
    tracep->declBus(c+11,"ALUControl", false,-1, 3,0);
    tracep->declBit(c+8,"RegWrite", false,-1);
    tracep->declBit(c+18,"PCUppSrc", false,-1);
    tracep->declBit(c+19,"ImmUppSrc", false,-1);
    tracep->declBus(c+21,"A1", false,-1, 4,0);
    tracep->declBus(c+22,"A2", false,-1, 4,0);
    tracep->declBus(c+23,"A3", false,-1, 4,0);
    tracep->declBus(c+2,"PC", false,-1, 31,0);
    tracep->declBus(c+4,"ImmExt", false,-1, 31,0);
    tracep->declBus(c+7,"Result", false,-1, 31,0);
    tracep->declBit(c+20,"Zero", false,-1);
    tracep->declBus(c+5,"ALUResult", false,-1, 31,0);
    tracep->declBus(c+6,"RD2", false,-1, 31,0);
    tracep->declBus(c+83,"a0", false,-1, 31,0);
    tracep->declBus(c+24,"SrcA", false,-1, 31,0);
    tracep->declBus(c+25,"SrcB", false,-1, 31,0);
    tracep->declBus(c+26,"RD1", false,-1, 31,0);
    tracep->declBus(c+27,"ImmRes", false,-1, 31,0);
    tracep->declBus(c+28,"WD3", false,-1, 31,0);
    tracep->pushNamePrefix("ALU ");
    tracep->declBus(c+84,"D_WIDTH", false,-1, 31,0);
    tracep->declBus(c+11,"ALUControl", false,-1, 3,0);
    tracep->declBus(c+24,"SrcA", false,-1, 31,0);
    tracep->declBus(c+25,"SrcB", false,-1, 31,0);
    tracep->declBus(c+5,"ALUResult", false,-1, 31,0);
    tracep->declBit(c+20,"Zero", false,-1);
    tracep->declBit(c+29,"Unsigned", false,-1);
    tracep->declBit(c+30,"DiffSign", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("RF ");
    tracep->declBus(c+85,"A_WIDTH", false,-1, 31,0);
    tracep->declBus(c+84,"D_WIDTH", false,-1, 31,0);
    tracep->declBit(c+81,"CLK", false,-1);
    tracep->declBit(c+8,"WE3", false,-1);
    tracep->declBus(c+21,"A1", false,-1, 4,0);
    tracep->declBus(c+22,"A2", false,-1, 4,0);
    tracep->declBus(c+23,"A3", false,-1, 4,0);
    tracep->declBus(c+28,"WD3", false,-1, 31,0);
    tracep->declBus(c+26,"RD1", false,-1, 31,0);
    tracep->declBus(c+6,"RD2", false,-1, 31,0);
    tracep->declBus(c+83,"a0", false,-1, 31,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+31+i*1,"REG_FILE", true,(i+0), 31,0);
    }
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBus(c+1,"i", false,-1, 31,0);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("CU ");
    tracep->declBus(c+63,"op", false,-1, 6,0);
    tracep->declBus(c+64,"funct3", false,-1, 2,0);
    tracep->declBus(c+65,"funct7", false,-1, 6,0);
    tracep->declBit(c+20,"Zero", false,-1);
    tracep->declBit(c+15,"Jump", false,-1);
    tracep->declBit(c+16,"JumpReg", false,-1);
    tracep->declBit(c+14,"PCSrc", false,-1);
    tracep->declBit(c+9,"ResultSrc", false,-1);
    tracep->declBus(c+17,"Type", false,-1, 2,0);
    tracep->declBit(c+10,"MemWrite", false,-1);
    tracep->declBus(c+11,"ALUControl", false,-1, 3,0);
    tracep->declBit(c+12,"ALUSrc", false,-1);
    tracep->declBus(c+13,"ImmSrc", false,-1, 2,0);
    tracep->declBit(c+8,"RegWrite", false,-1);
    tracep->declBit(c+18,"PCUppSrc", false,-1);
    tracep->declBit(c+19,"ImmUppSrc", false,-1);
    tracep->declBus(c+66,"ALUOp", false,-1, 1,0);
    tracep->declBit(c+67,"Branch", false,-1);
    tracep->pushNamePrefix("AD ");
    tracep->declBus(c+66,"ALUOp", false,-1, 1,0);
    tracep->declBit(c+68,"op5", false,-1);
    tracep->declBus(c+64,"funct3", false,-1, 2,0);
    tracep->declBus(c+65,"funct7", false,-1, 6,0);
    tracep->declBus(c+17,"Type", false,-1, 2,0);
    tracep->declBus(c+11,"ALUControl", false,-1, 3,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("MD ");
    tracep->declBus(c+63,"op", false,-1, 6,0);
    tracep->declBit(c+67,"Branch", false,-1);
    tracep->declBit(c+15,"Jump", false,-1);
    tracep->declBit(c+16,"JumpReg", false,-1);
    tracep->declBit(c+9,"ResultSrc", false,-1);
    tracep->declBit(c+10,"MemWrite", false,-1);
    tracep->declBit(c+12,"ALUSrc", false,-1);
    tracep->declBus(c+13,"ImmSrc", false,-1, 2,0);
    tracep->declBit(c+8,"RegWrite", false,-1);
    tracep->declBus(c+66,"ALUOp", false,-1, 1,0);
    tracep->declBit(c+18,"PCUppSrc", false,-1);
    tracep->declBit(c+19,"ImmUppSrc", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("IM ");
    tracep->declBus(c+86,"A_WIDTH", false,-1, 31,0);
    tracep->declBus(c+87,"D_WIDTH", false,-1, 31,0);
    tracep->declBus(c+69,"A", false,-1, 27,0);
    tracep->declBus(c+3,"RD", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("MT ");
    tracep->declBit(c+81,"CLK", false,-1);
    tracep->declBus(c+5,"ALUResult", false,-1, 31,0);
    tracep->declBus(c+6,"RD2", false,-1, 31,0);
    tracep->declBus(c+17,"Type", false,-1, 2,0);
    tracep->declBit(c+10,"MemWrite", false,-1);
    tracep->declBit(c+9,"ResultSrc", false,-1);
    tracep->declBus(c+7,"Result", false,-1, 31,0);
    tracep->declBus(c+70,"ReadData", false,-1, 31,0);
    tracep->declBus(c+71,"WriteData", false,-1, 31,0);
    tracep->declBus(c+72,"Data", false,-1, 31,0);
    tracep->pushNamePrefix("DM ");
    tracep->declBus(c+86,"A_WIDTH", false,-1, 31,0);
    tracep->declBus(c+84,"RD_WIDTH", false,-1, 31,0);
    tracep->declBus(c+84,"WD_WIDTH", false,-1, 31,0);
    tracep->declBus(c+87,"D_WIDTH", false,-1, 31,0);
    tracep->declBit(c+81,"CLK", false,-1);
    tracep->declBus(c+71,"WD", false,-1, 31,0);
    tracep->declBus(c+73,"A", false,-1, 27,0);
    tracep->declBit(c+10,"WE", false,-1);
    tracep->declBus(c+70,"RD", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("LM ");
    tracep->declBus(c+74,"A", false,-1, 1,0);
    tracep->declBus(c+17,"Type", false,-1, 2,0);
    tracep->declBus(c+70,"RDIn", false,-1, 31,0);
    tracep->declBus(c+72,"RDOut", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("SM ");
    tracep->declBus(c+74,"A", false,-1, 1,0);
    tracep->declBus(c+75,"Type", false,-1, 1,0);
    tracep->declBus(c+70,"RDIn", false,-1, 31,0);
    tracep->declBus(c+6,"WDIn", false,-1, 31,0);
    tracep->declBus(c+71,"WDOut", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("PCT ");
    tracep->declBus(c+84,"D_WIDTH", false,-1, 31,0);
    tracep->declBit(c+81,"CLK", false,-1);
    tracep->declBit(c+82,"rst", false,-1);
    tracep->declBit(c+14,"PCSrc", false,-1);
    tracep->declBit(c+16,"JumpReg", false,-1);
    tracep->declBus(c+7,"Result", false,-1, 31,0);
    tracep->declBus(c+4,"ImmExt", false,-1, 31,0);
    tracep->declBus(c+2,"PC", false,-1, 31,0);
    tracep->declBus(c+76,"PCTarget", false,-1, 31,0);
    tracep->declBus(c+77,"PCNext", false,-1, 31,0);
    tracep->declBus(c+78,"PCPlus4", false,-1, 31,0);
    tracep->declBus(c+79,"PCInterm", false,-1, 31,0);
    tracep->pushNamePrefix("PCR ");
    tracep->declBus(c+84,"D_WIDTH", false,-1, 31,0);
    tracep->declBit(c+81,"CLK", false,-1);
    tracep->declBit(c+82,"rst", false,-1);
    tracep->declBus(c+77,"PCNext", false,-1, 31,0);
    tracep->declBus(c+2,"PC", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("SE ");
    tracep->declBus(c+80,"Imm", false,-1, 31,7);
    tracep->declBus(c+13,"ImmSrc", false,-1, 2,0);
    tracep->declBus(c+4,"ImmExt", false,-1, 31,0);
    tracep->popNamePrefix(2);
}

VL_ATTR_COLD void Vcpu___024root__trace_init_top(Vcpu___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu___024root__trace_init_top\n"); );
    // Body
    Vcpu___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vcpu___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vcpu___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vcpu___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vcpu___024root__trace_register(Vcpu___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&Vcpu___024root__trace_full_top_0, vlSelf);
    tracep->addChgCb(&Vcpu___024root__trace_chg_top_0, vlSelf);
    tracep->addCleanupCb(&Vcpu___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vcpu___024root__trace_full_sub_0(Vcpu___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vcpu___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu___024root__trace_full_top_0\n"); );
    // Init
    Vcpu___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vcpu___024root*>(voidSelf);
    Vcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vcpu___024root__trace_full_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vcpu___024root__trace_full_sub_0(Vcpu___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu___024root__trace_full_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullIData(oldp+1,(vlSelf->cpu__DOT__ALUT__DOT__RF__DOT__unnamedblk1__DOT__i),32);
    bufp->fullIData(oldp+2,(vlSelf->cpu__DOT__PC),32);
    bufp->fullIData(oldp+3,(vlSelf->cpu__DOT__Instr),32);
    bufp->fullIData(oldp+4,(vlSelf->cpu__DOT__ImmExt),32);
    bufp->fullIData(oldp+5,(vlSelf->cpu__DOT__ALUResult),32);
    bufp->fullIData(oldp+6,(vlSelf->cpu__DOT__RD2),32);
    bufp->fullIData(oldp+7,(vlSelf->cpu__DOT__Result),32);
    bufp->fullBit(oldp+8,(vlSelf->cpu__DOT__RegWrite));
    bufp->fullBit(oldp+9,(vlSelf->cpu__DOT__ResultSrc));
    bufp->fullBit(oldp+10,(vlSelf->cpu__DOT__MemWrite));
    bufp->fullCData(oldp+11,(vlSelf->cpu__DOT__ALUControl),4);
    bufp->fullBit(oldp+12,(vlSelf->cpu__DOT__ALUSrc));
    bufp->fullCData(oldp+13,(vlSelf->cpu__DOT__ImmSrc),3);
    bufp->fullBit(oldp+14,((((IData)(vlSelf->cpu__DOT__CU__DOT__Branch) 
                             & ((vlSelf->cpu__DOT__Instr 
                                 >> 0xcU) ^ (IData)(vlSelf->cpu__DOT__Zero))) 
                            | (IData)(vlSelf->cpu__DOT__Jump))));
    bufp->fullBit(oldp+15,(vlSelf->cpu__DOT__Jump));
    bufp->fullBit(oldp+16,(vlSelf->cpu__DOT__JumpReg));
    bufp->fullCData(oldp+17,(vlSelf->cpu__DOT__Type),3);
    bufp->fullBit(oldp+18,(vlSelf->cpu__DOT__PCUppSrc));
    bufp->fullBit(oldp+19,(vlSelf->cpu__DOT__ImmUppSrc));
    bufp->fullBit(oldp+20,(vlSelf->cpu__DOT__Zero));
    bufp->fullCData(oldp+21,((0x1fU & (vlSelf->cpu__DOT__Instr 
                                       >> 0xfU))),5);
    bufp->fullCData(oldp+22,((0x1fU & (vlSelf->cpu__DOT__Instr 
                                       >> 0x14U))),5);
    bufp->fullCData(oldp+23,((0x1fU & (vlSelf->cpu__DOT__Instr 
                                       >> 7U))),5);
    bufp->fullIData(oldp+24,(vlSelf->cpu__DOT__ALUT__DOT__SrcA),32);
    bufp->fullIData(oldp+25,(vlSelf->cpu__DOT__ALUT__DOT__SrcB),32);
    bufp->fullIData(oldp+26,(vlSelf->cpu__DOT__ALUT__DOT__RF__DOT__REG_FILE
                             [(0x1fU & (vlSelf->cpu__DOT__Instr 
                                        >> 0xfU))]),32);
    bufp->fullIData(oldp+27,(vlSelf->cpu__DOT__ALUT__DOT__ImmRes),32);
    bufp->fullIData(oldp+28,(vlSelf->cpu__DOT__ALUT__DOT__WD3),32);
    bufp->fullBit(oldp+29,(vlSelf->cpu__DOT__ALUT__DOT__ALU__DOT__Unsigned));
    bufp->fullBit(oldp+30,(vlSelf->cpu__DOT__ALUT__DOT__ALU__DOT__DiffSign));
    bufp->fullIData(oldp+31,(vlSelf->cpu__DOT__ALUT__DOT__RF__DOT__REG_FILE[0]),32);
    bufp->fullIData(oldp+32,(vlSelf->cpu__DOT__ALUT__DOT__RF__DOT__REG_FILE[1]),32);
    bufp->fullIData(oldp+33,(vlSelf->cpu__DOT__ALUT__DOT__RF__DOT__REG_FILE[2]),32);
    bufp->fullIData(oldp+34,(vlSelf->cpu__DOT__ALUT__DOT__RF__DOT__REG_FILE[3]),32);
    bufp->fullIData(oldp+35,(vlSelf->cpu__DOT__ALUT__DOT__RF__DOT__REG_FILE[4]),32);
    bufp->fullIData(oldp+36,(vlSelf->cpu__DOT__ALUT__DOT__RF__DOT__REG_FILE[5]),32);
    bufp->fullIData(oldp+37,(vlSelf->cpu__DOT__ALUT__DOT__RF__DOT__REG_FILE[6]),32);
    bufp->fullIData(oldp+38,(vlSelf->cpu__DOT__ALUT__DOT__RF__DOT__REG_FILE[7]),32);
    bufp->fullIData(oldp+39,(vlSelf->cpu__DOT__ALUT__DOT__RF__DOT__REG_FILE[8]),32);
    bufp->fullIData(oldp+40,(vlSelf->cpu__DOT__ALUT__DOT__RF__DOT__REG_FILE[9]),32);
    bufp->fullIData(oldp+41,(vlSelf->cpu__DOT__ALUT__DOT__RF__DOT__REG_FILE[10]),32);
    bufp->fullIData(oldp+42,(vlSelf->cpu__DOT__ALUT__DOT__RF__DOT__REG_FILE[11]),32);
    bufp->fullIData(oldp+43,(vlSelf->cpu__DOT__ALUT__DOT__RF__DOT__REG_FILE[12]),32);
    bufp->fullIData(oldp+44,(vlSelf->cpu__DOT__ALUT__DOT__RF__DOT__REG_FILE[13]),32);
    bufp->fullIData(oldp+45,(vlSelf->cpu__DOT__ALUT__DOT__RF__DOT__REG_FILE[14]),32);
    bufp->fullIData(oldp+46,(vlSelf->cpu__DOT__ALUT__DOT__RF__DOT__REG_FILE[15]),32);
    bufp->fullIData(oldp+47,(vlSelf->cpu__DOT__ALUT__DOT__RF__DOT__REG_FILE[16]),32);
    bufp->fullIData(oldp+48,(vlSelf->cpu__DOT__ALUT__DOT__RF__DOT__REG_FILE[17]),32);
    bufp->fullIData(oldp+49,(vlSelf->cpu__DOT__ALUT__DOT__RF__DOT__REG_FILE[18]),32);
    bufp->fullIData(oldp+50,(vlSelf->cpu__DOT__ALUT__DOT__RF__DOT__REG_FILE[19]),32);
    bufp->fullIData(oldp+51,(vlSelf->cpu__DOT__ALUT__DOT__RF__DOT__REG_FILE[20]),32);
    bufp->fullIData(oldp+52,(vlSelf->cpu__DOT__ALUT__DOT__RF__DOT__REG_FILE[21]),32);
    bufp->fullIData(oldp+53,(vlSelf->cpu__DOT__ALUT__DOT__RF__DOT__REG_FILE[22]),32);
    bufp->fullIData(oldp+54,(vlSelf->cpu__DOT__ALUT__DOT__RF__DOT__REG_FILE[23]),32);
    bufp->fullIData(oldp+55,(vlSelf->cpu__DOT__ALUT__DOT__RF__DOT__REG_FILE[24]),32);
    bufp->fullIData(oldp+56,(vlSelf->cpu__DOT__ALUT__DOT__RF__DOT__REG_FILE[25]),32);
    bufp->fullIData(oldp+57,(vlSelf->cpu__DOT__ALUT__DOT__RF__DOT__REG_FILE[26]),32);
    bufp->fullIData(oldp+58,(vlSelf->cpu__DOT__ALUT__DOT__RF__DOT__REG_FILE[27]),32);
    bufp->fullIData(oldp+59,(vlSelf->cpu__DOT__ALUT__DOT__RF__DOT__REG_FILE[28]),32);
    bufp->fullIData(oldp+60,(vlSelf->cpu__DOT__ALUT__DOT__RF__DOT__REG_FILE[29]),32);
    bufp->fullIData(oldp+61,(vlSelf->cpu__DOT__ALUT__DOT__RF__DOT__REG_FILE[30]),32);
    bufp->fullIData(oldp+62,(vlSelf->cpu__DOT__ALUT__DOT__RF__DOT__REG_FILE[31]),32);
    bufp->fullCData(oldp+63,((0x7fU & vlSelf->cpu__DOT__Instr)),7);
    bufp->fullCData(oldp+64,((7U & (vlSelf->cpu__DOT__Instr 
                                    >> 0xcU))),3);
    bufp->fullCData(oldp+65,((vlSelf->cpu__DOT__Instr 
                              >> 0x19U)),7);
    bufp->fullCData(oldp+66,(vlSelf->cpu__DOT__CU__DOT__ALUOp),2);
    bufp->fullBit(oldp+67,(vlSelf->cpu__DOT__CU__DOT__Branch));
    bufp->fullBit(oldp+68,((1U & (vlSelf->cpu__DOT__Instr 
                                  >> 5U))));
    bufp->fullIData(oldp+69,((0xfffffffU & vlSelf->cpu__DOT__PC)),28);
    bufp->fullIData(oldp+70,(vlSelf->cpu__DOT__MT__DOT__ReadData),32);
    bufp->fullIData(oldp+71,(vlSelf->cpu__DOT__MT__DOT__WriteData),32);
    bufp->fullIData(oldp+72,(vlSelf->cpu__DOT__MT__DOT__Data),32);
    bufp->fullIData(oldp+73,((0xffffffcU & vlSelf->cpu__DOT__ALUResult)),28);
    bufp->fullCData(oldp+74,((3U & vlSelf->cpu__DOT__ALUResult)),2);
    bufp->fullCData(oldp+75,((3U & (IData)(vlSelf->cpu__DOT__Type))),2);
    bufp->fullIData(oldp+76,(vlSelf->cpu__DOT__PCT__DOT__PCTarget),32);
    bufp->fullIData(oldp+77,(vlSelf->cpu__DOT__PCT__DOT__PCNext),32);
    bufp->fullIData(oldp+78,(vlSelf->cpu__DOT__PCT__DOT__PCPlus4),32);
    bufp->fullIData(oldp+79,(vlSelf->cpu__DOT__PCT__DOT__PCInterm),32);
    bufp->fullIData(oldp+80,((vlSelf->cpu__DOT__Instr 
                              >> 7U)),25);
    bufp->fullBit(oldp+81,(vlSelf->CLK));
    bufp->fullBit(oldp+82,(vlSelf->rst));
    bufp->fullIData(oldp+83,(vlSelf->a0),32);
    bufp->fullIData(oldp+84,(0x20U),32);
    bufp->fullIData(oldp+85,(5U),32);
    bufp->fullIData(oldp+86,(0x1cU),32);
    bufp->fullIData(oldp+87,(8U),32);
}
