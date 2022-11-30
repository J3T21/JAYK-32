// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vcpu__Syms.h"


void Vcpu___024root__trace_chg_sub_0(Vcpu___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vcpu___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu___024root__trace_chg_top_0\n"); );
    // Init
    Vcpu___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vcpu___024root*>(voidSelf);
    Vcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vcpu___024root__trace_chg_sub_0((&vlSymsp->TOP), bufp);
}

void Vcpu___024root__trace_chg_sub_0(Vcpu___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu___024root__trace_chg_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[0U])) {
        bufp->chgIData(oldp+0,(vlSelf->cpu__DOT__ALUT__DOT__RF__DOT__unnamedblk1__DOT__i),32);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
        bufp->chgIData(oldp+1,(vlSelf->cpu__DOT__PC),32);
        bufp->chgIData(oldp+2,(vlSelf->cpu__DOT__Instr),32);
        bufp->chgIData(oldp+3,(vlSelf->cpu__DOT__ImmExt),32);
        bufp->chgIData(oldp+4,(vlSelf->cpu__DOT__ALUResult),32);
        bufp->chgIData(oldp+5,(vlSelf->cpu__DOT__RD2),32);
        bufp->chgIData(oldp+6,(vlSelf->cpu__DOT__Result),32);
        bufp->chgBit(oldp+7,(vlSelf->cpu__DOT__RegWrite));
        bufp->chgBit(oldp+8,(vlSelf->cpu__DOT__ResultSrc));
        bufp->chgBit(oldp+9,(vlSelf->cpu__DOT__MemWrite));
        bufp->chgCData(oldp+10,(vlSelf->cpu__DOT__ALUControl),4);
        bufp->chgBit(oldp+11,(vlSelf->cpu__DOT__ALUSrc));
        bufp->chgCData(oldp+12,(vlSelf->cpu__DOT__ImmSrc),3);
        bufp->chgBit(oldp+13,((((IData)(vlSelf->cpu__DOT__CU__DOT__Branch) 
                                & ((vlSelf->cpu__DOT__Instr 
                                    >> 0xcU) ^ (IData)(vlSelf->cpu__DOT__Zero))) 
                               | (IData)(vlSelf->cpu__DOT__Jump))));
        bufp->chgBit(oldp+14,(vlSelf->cpu__DOT__Jump));
        bufp->chgBit(oldp+15,(vlSelf->cpu__DOT__JumpReg));
        bufp->chgCData(oldp+16,(vlSelf->cpu__DOT__Type),3);
        bufp->chgBit(oldp+17,(vlSelf->cpu__DOT__PCUppSrc));
        bufp->chgBit(oldp+18,(vlSelf->cpu__DOT__ImmUppSrc));
        bufp->chgBit(oldp+19,(vlSelf->cpu__DOT__Zero));
        bufp->chgCData(oldp+20,((0x1fU & (vlSelf->cpu__DOT__Instr 
                                          >> 0xfU))),5);
        bufp->chgCData(oldp+21,((0x1fU & (vlSelf->cpu__DOT__Instr 
                                          >> 0x14U))),5);
        bufp->chgCData(oldp+22,((0x1fU & (vlSelf->cpu__DOT__Instr 
                                          >> 7U))),5);
        bufp->chgIData(oldp+23,(vlSelf->cpu__DOT__ALUT__DOT__SrcA),32);
        bufp->chgIData(oldp+24,(vlSelf->cpu__DOT__ALUT__DOT__SrcB),32);
        bufp->chgIData(oldp+25,(vlSelf->cpu__DOT__ALUT__DOT__RF__DOT__REG_FILE
                                [(0x1fU & (vlSelf->cpu__DOT__Instr 
                                           >> 0xfU))]),32);
        bufp->chgIData(oldp+26,(vlSelf->cpu__DOT__ALUT__DOT__ImmRes),32);
        bufp->chgIData(oldp+27,(vlSelf->cpu__DOT__ALUT__DOT__WD3),32);
        bufp->chgBit(oldp+28,(vlSelf->cpu__DOT__ALUT__DOT__ALU__DOT__Unsigned));
        bufp->chgBit(oldp+29,(vlSelf->cpu__DOT__ALUT__DOT__ALU__DOT__DiffSign));
        bufp->chgIData(oldp+30,(vlSelf->cpu__DOT__ALUT__DOT__RF__DOT__REG_FILE[0]),32);
        bufp->chgIData(oldp+31,(vlSelf->cpu__DOT__ALUT__DOT__RF__DOT__REG_FILE[1]),32);
        bufp->chgIData(oldp+32,(vlSelf->cpu__DOT__ALUT__DOT__RF__DOT__REG_FILE[2]),32);
        bufp->chgIData(oldp+33,(vlSelf->cpu__DOT__ALUT__DOT__RF__DOT__REG_FILE[3]),32);
        bufp->chgIData(oldp+34,(vlSelf->cpu__DOT__ALUT__DOT__RF__DOT__REG_FILE[4]),32);
        bufp->chgIData(oldp+35,(vlSelf->cpu__DOT__ALUT__DOT__RF__DOT__REG_FILE[5]),32);
        bufp->chgIData(oldp+36,(vlSelf->cpu__DOT__ALUT__DOT__RF__DOT__REG_FILE[6]),32);
        bufp->chgIData(oldp+37,(vlSelf->cpu__DOT__ALUT__DOT__RF__DOT__REG_FILE[7]),32);
        bufp->chgIData(oldp+38,(vlSelf->cpu__DOT__ALUT__DOT__RF__DOT__REG_FILE[8]),32);
        bufp->chgIData(oldp+39,(vlSelf->cpu__DOT__ALUT__DOT__RF__DOT__REG_FILE[9]),32);
        bufp->chgIData(oldp+40,(vlSelf->cpu__DOT__ALUT__DOT__RF__DOT__REG_FILE[10]),32);
        bufp->chgIData(oldp+41,(vlSelf->cpu__DOT__ALUT__DOT__RF__DOT__REG_FILE[11]),32);
        bufp->chgIData(oldp+42,(vlSelf->cpu__DOT__ALUT__DOT__RF__DOT__REG_FILE[12]),32);
        bufp->chgIData(oldp+43,(vlSelf->cpu__DOT__ALUT__DOT__RF__DOT__REG_FILE[13]),32);
        bufp->chgIData(oldp+44,(vlSelf->cpu__DOT__ALUT__DOT__RF__DOT__REG_FILE[14]),32);
        bufp->chgIData(oldp+45,(vlSelf->cpu__DOT__ALUT__DOT__RF__DOT__REG_FILE[15]),32);
        bufp->chgIData(oldp+46,(vlSelf->cpu__DOT__ALUT__DOT__RF__DOT__REG_FILE[16]),32);
        bufp->chgIData(oldp+47,(vlSelf->cpu__DOT__ALUT__DOT__RF__DOT__REG_FILE[17]),32);
        bufp->chgIData(oldp+48,(vlSelf->cpu__DOT__ALUT__DOT__RF__DOT__REG_FILE[18]),32);
        bufp->chgIData(oldp+49,(vlSelf->cpu__DOT__ALUT__DOT__RF__DOT__REG_FILE[19]),32);
        bufp->chgIData(oldp+50,(vlSelf->cpu__DOT__ALUT__DOT__RF__DOT__REG_FILE[20]),32);
        bufp->chgIData(oldp+51,(vlSelf->cpu__DOT__ALUT__DOT__RF__DOT__REG_FILE[21]),32);
        bufp->chgIData(oldp+52,(vlSelf->cpu__DOT__ALUT__DOT__RF__DOT__REG_FILE[22]),32);
        bufp->chgIData(oldp+53,(vlSelf->cpu__DOT__ALUT__DOT__RF__DOT__REG_FILE[23]),32);
        bufp->chgIData(oldp+54,(vlSelf->cpu__DOT__ALUT__DOT__RF__DOT__REG_FILE[24]),32);
        bufp->chgIData(oldp+55,(vlSelf->cpu__DOT__ALUT__DOT__RF__DOT__REG_FILE[25]),32);
        bufp->chgIData(oldp+56,(vlSelf->cpu__DOT__ALUT__DOT__RF__DOT__REG_FILE[26]),32);
        bufp->chgIData(oldp+57,(vlSelf->cpu__DOT__ALUT__DOT__RF__DOT__REG_FILE[27]),32);
        bufp->chgIData(oldp+58,(vlSelf->cpu__DOT__ALUT__DOT__RF__DOT__REG_FILE[28]),32);
        bufp->chgIData(oldp+59,(vlSelf->cpu__DOT__ALUT__DOT__RF__DOT__REG_FILE[29]),32);
        bufp->chgIData(oldp+60,(vlSelf->cpu__DOT__ALUT__DOT__RF__DOT__REG_FILE[30]),32);
        bufp->chgIData(oldp+61,(vlSelf->cpu__DOT__ALUT__DOT__RF__DOT__REG_FILE[31]),32);
        bufp->chgCData(oldp+62,((0x7fU & vlSelf->cpu__DOT__Instr)),7);
        bufp->chgCData(oldp+63,((7U & (vlSelf->cpu__DOT__Instr 
                                       >> 0xcU))),3);
        bufp->chgCData(oldp+64,((vlSelf->cpu__DOT__Instr 
                                 >> 0x19U)),7);
        bufp->chgCData(oldp+65,(vlSelf->cpu__DOT__CU__DOT__ALUOp),2);
        bufp->chgBit(oldp+66,(vlSelf->cpu__DOT__CU__DOT__Branch));
        bufp->chgBit(oldp+67,((1U & (vlSelf->cpu__DOT__Instr 
                                     >> 5U))));
        bufp->chgIData(oldp+68,((0xfffffffU & vlSelf->cpu__DOT__PC)),28);
        bufp->chgIData(oldp+69,(vlSelf->cpu__DOT__MT__DOT__ReadData),32);
        bufp->chgIData(oldp+70,(vlSelf->cpu__DOT__MT__DOT__WriteData),32);
        bufp->chgIData(oldp+71,(vlSelf->cpu__DOT__MT__DOT__Data),32);
        bufp->chgIData(oldp+72,((0xffffffcU & vlSelf->cpu__DOT__ALUResult)),28);
        bufp->chgCData(oldp+73,((3U & vlSelf->cpu__DOT__ALUResult)),2);
        bufp->chgCData(oldp+74,((3U & (IData)(vlSelf->cpu__DOT__Type))),2);
        bufp->chgIData(oldp+75,(vlSelf->cpu__DOT__PCT__DOT__PCTarget),32);
        bufp->chgIData(oldp+76,(vlSelf->cpu__DOT__PCT__DOT__PCNext),32);
        bufp->chgIData(oldp+77,(vlSelf->cpu__DOT__PCT__DOT__PCPlus4),32);
        bufp->chgIData(oldp+78,(vlSelf->cpu__DOT__PCT__DOT__PCInterm),32);
        bufp->chgIData(oldp+79,((vlSelf->cpu__DOT__Instr 
                                 >> 7U)),25);
    }
    bufp->chgBit(oldp+80,(vlSelf->CLK));
    bufp->chgBit(oldp+81,(vlSelf->rst));
    bufp->chgIData(oldp+82,(vlSelf->a0),32);
}

void Vcpu___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu___024root__trace_cleanup\n"); );
    // Init
    Vcpu___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vcpu___024root*>(voidSelf);
    Vcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
}
