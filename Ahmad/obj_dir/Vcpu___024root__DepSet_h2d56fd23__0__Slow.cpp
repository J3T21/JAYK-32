// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcpu.h for the primary calling header

#include "verilated.h"

#include "Vcpu___024root.h"

VL_ATTR_COLD void Vcpu___024root___initial__TOP__0__PROF__DataMemory__l14(Vcpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu___024root___initial__TOP__0__PROF__DataMemory__l14\n"); );
    // Init
    VlWide<4>/*127:0*/ __Vtemp_h19a4d295__0;
    // Body
    VL_WRITEF("Loading RAM\n");
    __Vtemp_h19a4d295__0[0U] = 0x2e6d656dU;
    __Vtemp_h19a4d295__0[1U] = 0x6d6f7279U;
    __Vtemp_h19a4d295__0[2U] = 0x74614d65U;
    __Vtemp_h19a4d295__0[3U] = 0x4461U;
    VL_READMEM_N(true, 8, 268435456, 0, VL_CVT_PACK_STR_NW(4, __Vtemp_h19a4d295__0)
                 ,  &(vlSelf->cpu__DOT__MT__DOT__DM__DOT__RAM)
                 , 0, ~0ULL);
    VL_WRITEF("Instructions written to RAM successfully\n");
}

VL_ATTR_COLD void Vcpu___024root___initial__TOP__1__PROF__RegisterFile__l20(Vcpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu___024root___initial__TOP__1__PROF__RegisterFile__l20\n"); );
    // Body
    vlSelf->cpu__DOT__ALUT__DOT__RF__DOT__REG_FILE[0U] = 0U;
    vlSelf->cpu__DOT__ALUT__DOT__RF__DOT__REG_FILE[1U] = 0U;
    vlSelf->cpu__DOT__ALUT__DOT__RF__DOT__REG_FILE[2U] = 0U;
    vlSelf->cpu__DOT__ALUT__DOT__RF__DOT__REG_FILE[3U] = 0U;
    vlSelf->cpu__DOT__ALUT__DOT__RF__DOT__REG_FILE[4U] = 0U;
    vlSelf->cpu__DOT__ALUT__DOT__RF__DOT__REG_FILE[5U] = 0U;
    vlSelf->cpu__DOT__ALUT__DOT__RF__DOT__REG_FILE[6U] = 0U;
    vlSelf->cpu__DOT__ALUT__DOT__RF__DOT__REG_FILE[7U] = 0U;
    vlSelf->cpu__DOT__ALUT__DOT__RF__DOT__REG_FILE[8U] = 0U;
    vlSelf->cpu__DOT__ALUT__DOT__RF__DOT__REG_FILE[9U] = 0U;
    vlSelf->cpu__DOT__ALUT__DOT__RF__DOT__REG_FILE[0xaU] = 0U;
    vlSelf->cpu__DOT__ALUT__DOT__RF__DOT__REG_FILE[0xbU] = 0U;
    vlSelf->cpu__DOT__ALUT__DOT__RF__DOT__REG_FILE[0xcU] = 0U;
    vlSelf->cpu__DOT__ALUT__DOT__RF__DOT__REG_FILE[0xdU] = 0U;
    vlSelf->cpu__DOT__ALUT__DOT__RF__DOT__REG_FILE[0xeU] = 0U;
    vlSelf->cpu__DOT__ALUT__DOT__RF__DOT__REG_FILE[0xfU] = 0U;
    vlSelf->cpu__DOT__ALUT__DOT__RF__DOT__REG_FILE[0x10U] = 0U;
    vlSelf->cpu__DOT__ALUT__DOT__RF__DOT__REG_FILE[0x11U] = 0U;
    vlSelf->cpu__DOT__ALUT__DOT__RF__DOT__REG_FILE[0x12U] = 0U;
    vlSelf->cpu__DOT__ALUT__DOT__RF__DOT__REG_FILE[0x13U] = 0U;
    vlSelf->cpu__DOT__ALUT__DOT__RF__DOT__REG_FILE[0x14U] = 0U;
    vlSelf->cpu__DOT__ALUT__DOT__RF__DOT__REG_FILE[0x15U] = 0U;
    vlSelf->cpu__DOT__ALUT__DOT__RF__DOT__REG_FILE[0x16U] = 0U;
    vlSelf->cpu__DOT__ALUT__DOT__RF__DOT__REG_FILE[0x17U] = 0U;
    vlSelf->cpu__DOT__ALUT__DOT__RF__DOT__REG_FILE[0x18U] = 0U;
    vlSelf->cpu__DOT__ALUT__DOT__RF__DOT__REG_FILE[0x19U] = 0U;
    vlSelf->cpu__DOT__ALUT__DOT__RF__DOT__REG_FILE[0x1aU] = 0U;
    vlSelf->cpu__DOT__ALUT__DOT__RF__DOT__REG_FILE[0x1bU] = 0U;
    vlSelf->cpu__DOT__ALUT__DOT__RF__DOT__REG_FILE[0x1cU] = 0U;
    vlSelf->cpu__DOT__ALUT__DOT__RF__DOT__REG_FILE[0x1dU] = 0U;
    vlSelf->cpu__DOT__ALUT__DOT__RF__DOT__REG_FILE[0x1eU] = 0U;
    vlSelf->cpu__DOT__ALUT__DOT__RF__DOT__REG_FILE[0x1fU] = 0U;
    vlSelf->cpu__DOT__ALUT__DOT__RF__DOT__unnamedblk1__DOT__i = 0x20U;
}

VL_ATTR_COLD void Vcpu___024root___initial__TOP__2__PROF__InstrMemory__l13(Vcpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu___024root___initial__TOP__2__PROF__InstrMemory__l13\n"); );
    // Init
    VlWide<4>/*127:0*/ __Vtemp_h134fc9f4__0;
    // Body
    VL_WRITEF("Loading ROM\n");
    __Vtemp_h134fc9f4__0[0U] = 0x2e6d656dU;
    __Vtemp_h134fc9f4__0[1U] = 0x6d6f7279U;
    __Vtemp_h134fc9f4__0[2U] = 0x74724d65U;
    __Vtemp_h134fc9f4__0[3U] = 0x496e73U;
    VL_READMEM_N(true, 8, 268435456, 0, VL_CVT_PACK_STR_NW(4, __Vtemp_h134fc9f4__0)
                 ,  &(vlSelf->cpu__DOT__IM__DOT__ROM)
                 , 0, ~0ULL);
    VL_WRITEF("Instructions written to ROM successfully\n");
}

VL_ATTR_COLD void Vcpu___024root___eval_initial(Vcpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu___024root___eval_initial\n"); );
    // Body
    Vcpu___024root___initial__TOP__0__PROF__DataMemory__l14(vlSelf);
    vlSelf->__Vm_traceActivity[1U] = 1U;
    vlSelf->__Vm_traceActivity[0U] = 1U;
    Vcpu___024root___initial__TOP__1__PROF__RegisterFile__l20(vlSelf);
    Vcpu___024root___initial__TOP__2__PROF__InstrMemory__l13(vlSelf);
    vlSelf->__Vclklast__TOP__CLK = vlSelf->CLK;
}

void Vcpu___024root___sequent__TOP__15__PROF__PCReg__l16(Vcpu___024root* vlSelf);
void Vcpu___024root___sequent__TOP__14__PROF__RegisterFile__l25(Vcpu___024root* vlSelf);
void Vcpu___024root___sequent__TOP__16__PROF__InstrMemory__l20(Vcpu___024root* vlSelf);
void Vcpu___024root___sequent__TOP__17__PROF__RegisterFile__l25(Vcpu___024root* vlSelf);
void Vcpu___024root___sequent__TOP__18__PROF__MainDecoder__l17(Vcpu___024root* vlSelf);
void Vcpu___024root___sequent__TOP__19__PROF__ALUtop__l51(Vcpu___024root* vlSelf);
void Vcpu___024root___sequent__TOP__20__PROF__ALUDecoder__l10(Vcpu___024root* vlSelf);
void Vcpu___024root___sequent__TOP__21__PROF__ALUDecoder__l10(Vcpu___024root* vlSelf);
void Vcpu___024root___sequent__TOP__22__PROF__SignExtend__l7(Vcpu___024root* vlSelf);
void Vcpu___024root___sequent__TOP__23__PROF__ALUtop__l54(Vcpu___024root* vlSelf);
void Vcpu___024root___sequent__TOP__24__PROF__ALU__l17(Vcpu___024root* vlSelf);
void Vcpu___024root___sequent__TOP__25__PROF__ALU__l17(Vcpu___024root* vlSelf);
void Vcpu___024root___sequent__TOP__26__PROF__DataMemory__l24(Vcpu___024root* vlSelf);
void Vcpu___024root___sequent__TOP__27__PROF__StoreMemory__l9(Vcpu___024root* vlSelf);
void Vcpu___024root___sequent__TOP__28__PROF__LoadMemory__l8(Vcpu___024root* vlSelf);
void Vcpu___024root___sequent__TOP__29__PROF__Memorytop__l42(Vcpu___024root* vlSelf);
void Vcpu___024root___sequent__TOP__30__PROF__cpu__l107(Vcpu___024root* vlSelf);
void Vcpu___024root___sequent__TOP__31__PROF__ALUtop__l32(Vcpu___024root* vlSelf);
void Vcpu___024root___sequent__TOP__32__PROF__PCtop__l20(Vcpu___024root* vlSelf);

VL_ATTR_COLD void Vcpu___024root___eval_settle(Vcpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu___024root___eval_settle\n"); );
    // Body
    Vcpu___024root___sequent__TOP__15__PROF__PCReg__l16(vlSelf);
    vlSelf->__Vm_traceActivity[1U] = 1U;
    vlSelf->__Vm_traceActivity[0U] = 1U;
    Vcpu___024root___sequent__TOP__14__PROF__RegisterFile__l25(vlSelf);
    Vcpu___024root___sequent__TOP__16__PROF__InstrMemory__l20(vlSelf);
    Vcpu___024root___sequent__TOP__17__PROF__RegisterFile__l25(vlSelf);
    Vcpu___024root___sequent__TOP__18__PROF__MainDecoder__l17(vlSelf);
    Vcpu___024root___sequent__TOP__19__PROF__ALUtop__l51(vlSelf);
    Vcpu___024root___sequent__TOP__20__PROF__ALUDecoder__l10(vlSelf);
    Vcpu___024root___sequent__TOP__21__PROF__ALUDecoder__l10(vlSelf);
    Vcpu___024root___sequent__TOP__22__PROF__SignExtend__l7(vlSelf);
    Vcpu___024root___sequent__TOP__23__PROF__ALUtop__l54(vlSelf);
    Vcpu___024root___sequent__TOP__24__PROF__ALU__l17(vlSelf);
    Vcpu___024root___sequent__TOP__25__PROF__ALU__l17(vlSelf);
    Vcpu___024root___sequent__TOP__26__PROF__DataMemory__l24(vlSelf);
    Vcpu___024root___sequent__TOP__27__PROF__StoreMemory__l9(vlSelf);
    Vcpu___024root___sequent__TOP__28__PROF__LoadMemory__l8(vlSelf);
    Vcpu___024root___sequent__TOP__29__PROF__Memorytop__l42(vlSelf);
    Vcpu___024root___sequent__TOP__30__PROF__cpu__l107(vlSelf);
    Vcpu___024root___sequent__TOP__31__PROF__ALUtop__l32(vlSelf);
    Vcpu___024root___sequent__TOP__32__PROF__PCtop__l20(vlSelf);
}

VL_ATTR_COLD void Vcpu___024root___final(Vcpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu___024root___final\n"); );
}

VL_ATTR_COLD void Vcpu___024root___ctor_var_reset(Vcpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->CLK = VL_RAND_RESET_I(1);
    vlSelf->rst = VL_RAND_RESET_I(1);
    vlSelf->a0 = VL_RAND_RESET_I(32);
    vlSelf->cpu__DOT__PC = VL_RAND_RESET_I(32);
    vlSelf->cpu__DOT__Instr = VL_RAND_RESET_I(32);
    vlSelf->cpu__DOT__ImmExt = VL_RAND_RESET_I(32);
    vlSelf->cpu__DOT__ALUResult = VL_RAND_RESET_I(32);
    vlSelf->cpu__DOT__RD2 = VL_RAND_RESET_I(32);
    vlSelf->cpu__DOT__Result = VL_RAND_RESET_I(32);
    vlSelf->cpu__DOT__RegWrite = VL_RAND_RESET_I(1);
    vlSelf->cpu__DOT__ResultSrc = VL_RAND_RESET_I(1);
    vlSelf->cpu__DOT__MemWrite = VL_RAND_RESET_I(1);
    vlSelf->cpu__DOT__ALUControl = VL_RAND_RESET_I(4);
    vlSelf->cpu__DOT__ALUSrc = VL_RAND_RESET_I(1);
    vlSelf->cpu__DOT__ImmSrc = VL_RAND_RESET_I(3);
    vlSelf->cpu__DOT__Jump = VL_RAND_RESET_I(1);
    vlSelf->cpu__DOT__JumpReg = VL_RAND_RESET_I(1);
    vlSelf->cpu__DOT__Type = VL_RAND_RESET_I(3);
    vlSelf->cpu__DOT__PCUppSrc = VL_RAND_RESET_I(1);
    vlSelf->cpu__DOT__ImmUppSrc = VL_RAND_RESET_I(1);
    vlSelf->cpu__DOT__Zero = VL_RAND_RESET_I(1);
    vlSelf->cpu__DOT__PCT__DOT__PCTarget = VL_RAND_RESET_I(32);
    vlSelf->cpu__DOT__PCT__DOT__PCNext = VL_RAND_RESET_I(32);
    vlSelf->cpu__DOT__PCT__DOT__PCPlus4 = VL_RAND_RESET_I(32);
    vlSelf->cpu__DOT__PCT__DOT__PCInterm = VL_RAND_RESET_I(32);
    for (int __Vi0=0; __Vi0<268435456; ++__Vi0) {
        vlSelf->cpu__DOT__IM__DOT__ROM[__Vi0] = VL_RAND_RESET_I(8);
    }
    vlSelf->cpu__DOT__CU__DOT__ALUOp = VL_RAND_RESET_I(2);
    vlSelf->cpu__DOT__CU__DOT__Branch = VL_RAND_RESET_I(1);
    vlSelf->cpu__DOT__ALUT__DOT__SrcA = VL_RAND_RESET_I(32);
    vlSelf->cpu__DOT__ALUT__DOT__SrcB = VL_RAND_RESET_I(32);
    vlSelf->cpu__DOT__ALUT__DOT__ImmRes = VL_RAND_RESET_I(32);
    vlSelf->cpu__DOT__ALUT__DOT__WD3 = VL_RAND_RESET_I(32);
    for (int __Vi0=0; __Vi0<32; ++__Vi0) {
        vlSelf->cpu__DOT__ALUT__DOT__RF__DOT__REG_FILE[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->cpu__DOT__ALUT__DOT__RF__DOT__unnamedblk1__DOT__i = 0;
    vlSelf->cpu__DOT__ALUT__DOT__ALU__DOT__Unsigned = VL_RAND_RESET_I(1);
    vlSelf->cpu__DOT__ALUT__DOT__ALU__DOT__DiffSign = VL_RAND_RESET_I(1);
    vlSelf->cpu__DOT__MT__DOT__ReadData = VL_RAND_RESET_I(32);
    vlSelf->cpu__DOT__MT__DOT__WriteData = VL_RAND_RESET_I(32);
    vlSelf->cpu__DOT__MT__DOT__Data = VL_RAND_RESET_I(32);
    for (int __Vi0=0; __Vi0<268435456; ++__Vi0) {
        vlSelf->cpu__DOT__MT__DOT__DM__DOT__RAM[__Vi0] = VL_RAND_RESET_I(8);
    }
    vlSelf->__Vdlyvdim0__cpu__DOT__ALUT__DOT__RF__DOT__REG_FILE__v0 = 0;
    vlSelf->__Vdlyvval__cpu__DOT__ALUT__DOT__RF__DOT__REG_FILE__v0 = VL_RAND_RESET_I(32);
    vlSelf->__Vdlyvset__cpu__DOT__ALUT__DOT__RF__DOT__REG_FILE__v0 = 0;
    vlSelf->__Vdlyvdim0__cpu__DOT__MT__DOT__DM__DOT__RAM__v0 = 0;
    vlSelf->__Vdlyvval__cpu__DOT__MT__DOT__DM__DOT__RAM__v0 = VL_RAND_RESET_I(8);
    vlSelf->__Vdlyvset__cpu__DOT__MT__DOT__DM__DOT__RAM__v0 = 0;
    vlSelf->__Vdlyvdim0__cpu__DOT__MT__DOT__DM__DOT__RAM__v1 = 0;
    vlSelf->__Vdlyvval__cpu__DOT__MT__DOT__DM__DOT__RAM__v1 = VL_RAND_RESET_I(8);
    vlSelf->__Vdlyvdim0__cpu__DOT__MT__DOT__DM__DOT__RAM__v2 = 0;
    vlSelf->__Vdlyvval__cpu__DOT__MT__DOT__DM__DOT__RAM__v2 = VL_RAND_RESET_I(8);
    vlSelf->__Vdlyvdim0__cpu__DOT__MT__DOT__DM__DOT__RAM__v3 = 0;
    vlSelf->__Vdlyvval__cpu__DOT__MT__DOT__DM__DOT__RAM__v3 = VL_RAND_RESET_I(8);
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = VL_RAND_RESET_I(1);
    }
}
