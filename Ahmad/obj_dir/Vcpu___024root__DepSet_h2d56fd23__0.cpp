// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcpu.h for the primary calling header

#include "verilated.h"

#include "Vcpu___024root.h"

VL_INLINE_OPT void Vcpu___024root___sequent__TOP__4__PROF__DataMemory__l29(Vcpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu___024root___sequent__TOP__4__PROF__DataMemory__l29\n"); );
    // Body
    vlSelf->__Vdlyvset__cpu__DOT__MT__DOT__DM__DOT__RAM__v0 = 0U;
}

VL_INLINE_OPT void Vcpu___024root___sequent__TOP__5__PROF__RegisterFile__l33(Vcpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu___024root___sequent__TOP__5__PROF__RegisterFile__l33\n"); );
    // Body
    vlSelf->__Vdlyvset__cpu__DOT__ALUT__DOT__RF__DOT__REG_FILE__v0 = 0U;
}

VL_INLINE_OPT void Vcpu___024root___sequent__TOP__6__PROF__DataMemory__l27(Vcpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu___024root___sequent__TOP__6__PROF__DataMemory__l27\n"); );
    // Body
    VL_WRITEF("Address%9#\nReadData%10#\n",28,(0xffffffcU 
                                               & vlSelf->cpu__DOT__ALUResult),
              32,vlSelf->cpu__DOT__MT__DOT__ReadData);
}

VL_INLINE_OPT void Vcpu___024root___sequent__TOP__8__PROF__DataMemory__l27(Vcpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu___024root___sequent__TOP__8__PROF__DataMemory__l27\n"); );
    // Body
    if (vlSelf->cpu__DOT__MemWrite) {
        vlSelf->__Vdlyvval__cpu__DOT__MT__DOT__DM__DOT__RAM__v0 
            = (vlSelf->cpu__DOT__MT__DOT__WriteData 
               >> 0x18U);
        vlSelf->__Vdlyvset__cpu__DOT__MT__DOT__DM__DOT__RAM__v0 = 1U;
        vlSelf->__Vdlyvdim0__cpu__DOT__MT__DOT__DM__DOT__RAM__v0 
            = (0xffffffcU & vlSelf->cpu__DOT__ALUResult);
        vlSelf->__Vdlyvval__cpu__DOT__MT__DOT__DM__DOT__RAM__v1 
            = (0xffU & (vlSelf->cpu__DOT__MT__DOT__WriteData 
                        >> 0x10U));
        vlSelf->__Vdlyvdim0__cpu__DOT__MT__DOT__DM__DOT__RAM__v1 
            = (0xfffffffU & ((IData)(1U) + (0xffffffcU 
                                            & vlSelf->cpu__DOT__ALUResult)));
        vlSelf->__Vdlyvval__cpu__DOT__MT__DOT__DM__DOT__RAM__v2 
            = (0xffU & (vlSelf->cpu__DOT__MT__DOT__WriteData 
                        >> 8U));
        vlSelf->__Vdlyvdim0__cpu__DOT__MT__DOT__DM__DOT__RAM__v2 
            = (0xfffffffU & ((IData)(2U) + (0xffffffcU 
                                            & vlSelf->cpu__DOT__ALUResult)));
        vlSelf->__Vdlyvval__cpu__DOT__MT__DOT__DM__DOT__RAM__v3 
            = (0xffU & vlSelf->cpu__DOT__MT__DOT__WriteData);
        vlSelf->__Vdlyvdim0__cpu__DOT__MT__DOT__DM__DOT__RAM__v3 
            = (0xfffffffU & ((IData)(3U) + (0xffffffcU 
                                            & vlSelf->cpu__DOT__ALUResult)));
    }
}

VL_INLINE_OPT void Vcpu___024root___sequent__TOP__9__PROF__RegisterFile__l32(Vcpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu___024root___sequent__TOP__9__PROF__RegisterFile__l32\n"); );
    // Body
    if (vlSelf->cpu__DOT__RegWrite) {
        vlSelf->__Vdlyvval__cpu__DOT__ALUT__DOT__RF__DOT__REG_FILE__v0 
            = vlSelf->cpu__DOT__ALUT__DOT__WD3;
        vlSelf->__Vdlyvset__cpu__DOT__ALUT__DOT__RF__DOT__REG_FILE__v0 = 1U;
        vlSelf->__Vdlyvdim0__cpu__DOT__ALUT__DOT__RF__DOT__REG_FILE__v0 
            = (0x1fU & (vlSelf->cpu__DOT__Instr >> 7U));
    }
}

VL_INLINE_OPT void Vcpu___024root___sequent__TOP__10__PROF__PCReg__l11(Vcpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu___024root___sequent__TOP__10__PROF__PCReg__l11\n"); );
    // Body
    vlSelf->cpu__DOT__PC = ((IData)(vlSelf->rst) ? 0U
                             : vlSelf->cpu__DOT__PCT__DOT__PCNext);
}

VL_INLINE_OPT void Vcpu___024root___sequent__TOP__11__PROF__DataMemory__l29(Vcpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu___024root___sequent__TOP__11__PROF__DataMemory__l29\n"); );
    // Body
    if (vlSelf->__Vdlyvset__cpu__DOT__MT__DOT__DM__DOT__RAM__v0) {
        vlSelf->cpu__DOT__MT__DOT__DM__DOT__RAM[vlSelf->__Vdlyvdim0__cpu__DOT__MT__DOT__DM__DOT__RAM__v0] 
            = vlSelf->__Vdlyvval__cpu__DOT__MT__DOT__DM__DOT__RAM__v0;
        vlSelf->cpu__DOT__MT__DOT__DM__DOT__RAM[vlSelf->__Vdlyvdim0__cpu__DOT__MT__DOT__DM__DOT__RAM__v1] 
            = vlSelf->__Vdlyvval__cpu__DOT__MT__DOT__DM__DOT__RAM__v1;
        vlSelf->cpu__DOT__MT__DOT__DM__DOT__RAM[vlSelf->__Vdlyvdim0__cpu__DOT__MT__DOT__DM__DOT__RAM__v2] 
            = vlSelf->__Vdlyvval__cpu__DOT__MT__DOT__DM__DOT__RAM__v2;
        vlSelf->cpu__DOT__MT__DOT__DM__DOT__RAM[vlSelf->__Vdlyvdim0__cpu__DOT__MT__DOT__DM__DOT__RAM__v3] 
            = vlSelf->__Vdlyvval__cpu__DOT__MT__DOT__DM__DOT__RAM__v3;
    }
}

VL_INLINE_OPT void Vcpu___024root___sequent__TOP__12__PROF__RegisterFile__l33(Vcpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu___024root___sequent__TOP__12__PROF__RegisterFile__l33\n"); );
    // Body
    if (vlSelf->__Vdlyvset__cpu__DOT__ALUT__DOT__RF__DOT__REG_FILE__v0) {
        vlSelf->cpu__DOT__ALUT__DOT__RF__DOT__REG_FILE[vlSelf->__Vdlyvdim0__cpu__DOT__ALUT__DOT__RF__DOT__REG_FILE__v0] 
            = vlSelf->__Vdlyvval__cpu__DOT__ALUT__DOT__RF__DOT__REG_FILE__v0;
    }
}

VL_INLINE_OPT void Vcpu___024root___sequent__TOP__14__PROF__RegisterFile__l25(Vcpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu___024root___sequent__TOP__14__PROF__RegisterFile__l25\n"); );
    // Body
    vlSelf->a0 = vlSelf->cpu__DOT__ALUT__DOT__RF__DOT__REG_FILE
        [0xaU];
}

VL_INLINE_OPT void Vcpu___024root___sequent__TOP__15__PROF__PCReg__l16(Vcpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu___024root___sequent__TOP__15__PROF__PCReg__l16\n"); );
    // Body
    VL_WRITEF("\n\n\n\nProgram Counter: %10#\n",32,
              vlSelf->cpu__DOT__PC);
}

VL_INLINE_OPT void Vcpu___024root___sequent__TOP__16__PROF__InstrMemory__l20(Vcpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu___024root___sequent__TOP__16__PROF__InstrMemory__l20\n"); );
    // Body
    vlSelf->cpu__DOT__Instr = ((vlSelf->cpu__DOT__IM__DOT__ROM
                                [(0xfffffffU & vlSelf->cpu__DOT__PC)] 
                                << 0x18U) | ((vlSelf->cpu__DOT__IM__DOT__ROM
                                              [(0xfffffffU 
                                                & ((IData)(1U) 
                                                   + vlSelf->cpu__DOT__PC))] 
                                              << 0x10U) 
                                             | ((vlSelf->cpu__DOT__IM__DOT__ROM
                                                 [(0xfffffffU 
                                                   & ((IData)(2U) 
                                                      + vlSelf->cpu__DOT__PC))] 
                                                 << 8U) 
                                                | vlSelf->cpu__DOT__IM__DOT__ROM
                                                [(0xfffffffU 
                                                  & ((IData)(3U) 
                                                     + vlSelf->cpu__DOT__PC))])));
}

VL_INLINE_OPT void Vcpu___024root___sequent__TOP__17__PROF__RegisterFile__l25(Vcpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu___024root___sequent__TOP__17__PROF__RegisterFile__l25\n"); );
    // Body
    vlSelf->cpu__DOT__RD2 = vlSelf->cpu__DOT__ALUT__DOT__RF__DOT__REG_FILE
        [(0x1fU & (vlSelf->cpu__DOT__Instr >> 0x14U))];
}

VL_INLINE_OPT void Vcpu___024root___sequent__TOP__18__PROF__MainDecoder__l17(Vcpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu___024root___sequent__TOP__18__PROF__MainDecoder__l17\n"); );
    // Body
    vlSelf->cpu__DOT__Jump = 0U;
    vlSelf->cpu__DOT__JumpReg = 0U;
    vlSelf->cpu__DOT__CU__DOT__Branch = 0U;
    vlSelf->cpu__DOT__ResultSrc = 0U;
    vlSelf->cpu__DOT__MemWrite = 0U;
    vlSelf->cpu__DOT__ALUSrc = 1U;
    vlSelf->cpu__DOT__ImmSrc = 7U;
    vlSelf->cpu__DOT__RegWrite = 0U;
    vlSelf->cpu__DOT__CU__DOT__ALUOp = 3U;
    vlSelf->cpu__DOT__PCUppSrc = 0U;
    vlSelf->cpu__DOT__ImmUppSrc = 0U;
    if ((0x40U & vlSelf->cpu__DOT__Instr)) {
        if (VL_LIKELY((0x20U & vlSelf->cpu__DOT__Instr))) {
            if (VL_UNLIKELY((0x10U & vlSelf->cpu__DOT__Instr))) {
                VL_WRITEF("Invalid Instruction\n");
            } else if ((8U & vlSelf->cpu__DOT__Instr)) {
                if (VL_LIKELY((4U & vlSelf->cpu__DOT__Instr))) {
                    if (VL_LIKELY((2U & vlSelf->cpu__DOT__Instr))) {
                        if (VL_LIKELY((1U & vlSelf->cpu__DOT__Instr))) {
                            vlSelf->cpu__DOT__Jump = 1U;
                            vlSelf->cpu__DOT__ImmSrc = 0U;
                            vlSelf->cpu__DOT__RegWrite = 1U;
                        } else {
                            VL_WRITEF("Invalid Instruction\n");
                        }
                    } else {
                        VL_WRITEF("Invalid Instruction\n");
                    }
                } else {
                    VL_WRITEF("Invalid Instruction\n");
                }
            } else if ((4U & vlSelf->cpu__DOT__Instr)) {
                if (VL_LIKELY((2U & vlSelf->cpu__DOT__Instr))) {
                    if (VL_LIKELY((1U & vlSelf->cpu__DOT__Instr))) {
                        vlSelf->cpu__DOT__Jump = 1U;
                        vlSelf->cpu__DOT__JumpReg = 1U;
                        vlSelf->cpu__DOT__ImmSrc = 4U;
                        vlSelf->cpu__DOT__RegWrite = 1U;
                    } else {
                        VL_WRITEF("Invalid Instruction\n");
                    }
                } else {
                    VL_WRITEF("Invalid Instruction\n");
                }
            } else if (VL_LIKELY((2U & vlSelf->cpu__DOT__Instr))) {
                if (VL_LIKELY((1U & vlSelf->cpu__DOT__Instr))) {
                    vlSelf->cpu__DOT__ImmSrc = 3U;
                    vlSelf->cpu__DOT__CU__DOT__ALUOp = 1U;
                    vlSelf->cpu__DOT__ALUSrc = 0U;
                    vlSelf->cpu__DOT__CU__DOT__Branch = 1U;
                } else {
                    VL_WRITEF("Invalid Instruction\n");
                }
            } else {
                VL_WRITEF("Invalid Instruction\n");
            }
        } else {
            VL_WRITEF("Invalid Instruction\n");
        }
    } else if ((0x20U & vlSelf->cpu__DOT__Instr)) {
        if ((0x10U & vlSelf->cpu__DOT__Instr)) {
            if (VL_UNLIKELY((8U & vlSelf->cpu__DOT__Instr))) {
                VL_WRITEF("Invalid Instruction\n");
            } else if ((4U & vlSelf->cpu__DOT__Instr)) {
                if (VL_LIKELY((2U & vlSelf->cpu__DOT__Instr))) {
                    if (VL_LIKELY((1U & vlSelf->cpu__DOT__Instr))) {
                        vlSelf->cpu__DOT__ImmSrc = 1U;
                        vlSelf->cpu__DOT__RegWrite = 1U;
                        vlSelf->cpu__DOT__ImmUppSrc = 1U;
                    } else {
                        VL_WRITEF("Invalid Instruction\n");
                    }
                } else {
                    VL_WRITEF("Invalid Instruction\n");
                }
            } else if (VL_LIKELY((2U & vlSelf->cpu__DOT__Instr))) {
                if (VL_LIKELY((1U & vlSelf->cpu__DOT__Instr))) {
                    vlSelf->cpu__DOT__RegWrite = 1U;
                    vlSelf->cpu__DOT__ALUSrc = 0U;
                    vlSelf->cpu__DOT__CU__DOT__ALUOp = 2U;
                } else {
                    VL_WRITEF("Invalid Instruction\n");
                }
            } else {
                VL_WRITEF("Invalid Instruction\n");
            }
        } else if (VL_UNLIKELY((8U & vlSelf->cpu__DOT__Instr))) {
            VL_WRITEF("Invalid Instruction\n");
        } else if (VL_UNLIKELY((4U & vlSelf->cpu__DOT__Instr))) {
            VL_WRITEF("Invalid Instruction\n");
        } else if (VL_LIKELY((2U & vlSelf->cpu__DOT__Instr))) {
            if (VL_LIKELY((1U & vlSelf->cpu__DOT__Instr))) {
                vlSelf->cpu__DOT__ImmSrc = 2U;
                vlSelf->cpu__DOT__ALUSrc = 0U;
                vlSelf->cpu__DOT__MemWrite = 1U;
            } else {
                VL_WRITEF("Invalid Instruction\n");
            }
        } else {
            VL_WRITEF("Invalid Instruction\n");
        }
    } else if ((0x10U & vlSelf->cpu__DOT__Instr)) {
        if (VL_UNLIKELY((8U & vlSelf->cpu__DOT__Instr))) {
            VL_WRITEF("Invalid Instruction\n");
        } else if ((4U & vlSelf->cpu__DOT__Instr)) {
            if (VL_LIKELY((2U & vlSelf->cpu__DOT__Instr))) {
                if (VL_LIKELY((1U & vlSelf->cpu__DOT__Instr))) {
                    vlSelf->cpu__DOT__ImmSrc = 1U;
                    vlSelf->cpu__DOT__RegWrite = 1U;
                    vlSelf->cpu__DOT__PCUppSrc = 1U;
                } else {
                    VL_WRITEF("Invalid Instruction\n");
                }
            } else {
                VL_WRITEF("Invalid Instruction\n");
            }
        } else if (VL_LIKELY((2U & vlSelf->cpu__DOT__Instr))) {
            if (VL_LIKELY((1U & vlSelf->cpu__DOT__Instr))) {
                vlSelf->cpu__DOT__RegWrite = 1U;
                vlSelf->cpu__DOT__ImmSrc = 0U;
                vlSelf->cpu__DOT__CU__DOT__ALUOp = 2U;
            } else {
                VL_WRITEF("Invalid Instruction\n");
            }
        } else {
            VL_WRITEF("Invalid Instruction\n");
        }
    } else if (VL_UNLIKELY((8U & vlSelf->cpu__DOT__Instr))) {
        VL_WRITEF("Invalid Instruction\n");
    } else if (VL_UNLIKELY((4U & vlSelf->cpu__DOT__Instr))) {
        VL_WRITEF("Invalid Instruction\n");
    } else if (VL_LIKELY((2U & vlSelf->cpu__DOT__Instr))) {
        if (VL_LIKELY((1U & vlSelf->cpu__DOT__Instr))) {
            vlSelf->cpu__DOT__RegWrite = 1U;
            vlSelf->cpu__DOT__ImmSrc = 0U;
            vlSelf->cpu__DOT__ResultSrc = 1U;
            vlSelf->cpu__DOT__CU__DOT__ALUOp = 0U;
        } else {
            VL_WRITEF("Invalid Instruction\n");
        }
    } else {
        VL_WRITEF("Invalid Instruction\n");
    }
}

VL_INLINE_OPT void Vcpu___024root___sequent__TOP__19__PROF__ALUtop__l51(Vcpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu___024root___sequent__TOP__19__PROF__ALUtop__l51\n"); );
    // Body
    vlSelf->cpu__DOT__ALUT__DOT__SrcA = ((IData)(vlSelf->cpu__DOT__PCUppSrc)
                                          ? ((IData)(4U) 
                                             + vlSelf->cpu__DOT__PC)
                                          : vlSelf->cpu__DOT__ALUT__DOT__RF__DOT__REG_FILE
                                         [(0x1fU & 
                                           (vlSelf->cpu__DOT__Instr 
                                            >> 0xfU))]);
}

VL_INLINE_OPT void Vcpu___024root___sequent__TOP__20__PROF__ALUDecoder__l10(Vcpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu___024root___sequent__TOP__20__PROF__ALUDecoder__l10\n"); );
    // Body
    vlSelf->cpu__DOT__Type = 7U;
    if ((0U == (IData)(vlSelf->cpu__DOT__CU__DOT__ALUOp))) {
        vlSelf->cpu__DOT__Type = (7U & (vlSelf->cpu__DOT__Instr 
                                        >> 0xcU));
    }
}

VL_INLINE_OPT void Vcpu___024root___sequent__TOP__21__PROF__ALUDecoder__l10(Vcpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu___024root___sequent__TOP__21__PROF__ALUDecoder__l10\n"); );
    // Body
    vlSelf->cpu__DOT__ALUControl = ((0U == (IData)(vlSelf->cpu__DOT__CU__DOT__ALUOp))
                                     ? 0U : ((1U == (IData)(vlSelf->cpu__DOT__CU__DOT__ALUOp))
                                              ? ((0x4000U 
                                                  & vlSelf->cpu__DOT__Instr)
                                                  ? 
                                                 (2U 
                                                  | (1U 
                                                     & (vlSelf->cpu__DOT__Instr 
                                                        >> 0xdU)))
                                                  : 0U)
                                              : ((2U 
                                                  == (IData)(vlSelf->cpu__DOT__CU__DOT__ALUOp))
                                                  ? 
                                                 ((8U 
                                                   & (((0x4000U 
                                                        & vlSelf->cpu__DOT__Instr)
                                                        ? 
                                                       (vlSelf->cpu__DOT__Instr 
                                                        >> 0x1eU)
                                                        : (IData)(
                                                                  (0x40000020U 
                                                                   == 
                                                                   (0x40000020U 
                                                                    & vlSelf->cpu__DOT__Instr)))) 
                                                      << 3U)) 
                                                  | (7U 
                                                     & (vlSelf->cpu__DOT__Instr 
                                                        >> 0xcU)))
                                                  : 0U)));
}

VL_INLINE_OPT void Vcpu___024root___sequent__TOP__22__PROF__SignExtend__l7(Vcpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu___024root___sequent__TOP__22__PROF__SignExtend__l7\n"); );
    // Body
    vlSelf->cpu__DOT__ImmExt = ((4U & (IData)(vlSelf->cpu__DOT__ImmSrc))
                                 ? ((2U & (IData)(vlSelf->cpu__DOT__ImmSrc))
                                     ? 0U : ((1U & (IData)(vlSelf->cpu__DOT__ImmSrc))
                                              ? 0U : 
                                             (((- (IData)(
                                                          (vlSelf->cpu__DOT__Instr 
                                                           >> 0x1fU))) 
                                               << 0x13U) 
                                              | ((0x7f800U 
                                                  & (vlSelf->cpu__DOT__Instr 
                                                     >> 1U)) 
                                                 | ((0x400U 
                                                     & (vlSelf->cpu__DOT__Instr 
                                                        >> 0xaU)) 
                                                    | (0x3ffU 
                                                       & (vlSelf->cpu__DOT__Instr 
                                                          >> 0x15U)))))))
                                 : ((2U & (IData)(vlSelf->cpu__DOT__ImmSrc))
                                     ? ((1U & (IData)(vlSelf->cpu__DOT__ImmSrc))
                                         ? (((- (IData)(
                                                        (vlSelf->cpu__DOT__Instr 
                                                         >> 0x1fU))) 
                                             << 0xbU) 
                                            | ((0x400U 
                                                & (vlSelf->cpu__DOT__Instr 
                                                   << 3U)) 
                                               | ((0x3f0U 
                                                   & (vlSelf->cpu__DOT__Instr 
                                                      >> 0x15U)) 
                                                  | (0xfU 
                                                     & (vlSelf->cpu__DOT__Instr 
                                                        >> 8U)))))
                                         : (((- (IData)(
                                                        (vlSelf->cpu__DOT__Instr 
                                                         >> 0x1fU))) 
                                             << 0xcU) 
                                            | ((0xfe0U 
                                                & (vlSelf->cpu__DOT__Instr 
                                                   >> 0x14U)) 
                                               | (0x1fU 
                                                  & (vlSelf->cpu__DOT__Instr 
                                                     >> 7U)))))
                                     : ((1U & (IData)(vlSelf->cpu__DOT__ImmSrc))
                                         ? (0xfffff000U 
                                            & vlSelf->cpu__DOT__Instr)
                                         : (((- (IData)(
                                                        (vlSelf->cpu__DOT__Instr 
                                                         >> 0x1fU))) 
                                             << 0xcU) 
                                            | (vlSelf->cpu__DOT__Instr 
                                               >> 0x14U)))));
}

VL_INLINE_OPT void Vcpu___024root___sequent__TOP__23__PROF__ALUtop__l54(Vcpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu___024root___sequent__TOP__23__PROF__ALUtop__l54\n"); );
    // Body
    vlSelf->cpu__DOT__ALUT__DOT__SrcB = ((IData)(vlSelf->cpu__DOT__ALUSrc)
                                          ? vlSelf->cpu__DOT__ImmExt
                                          : vlSelf->cpu__DOT__RD2);
}

VL_INLINE_OPT void Vcpu___024root___sequent__TOP__24__PROF__ALU__l17(Vcpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu___024root___sequent__TOP__24__PROF__ALU__l17\n"); );
    // Body
    VL_WRITEF("ALU1: %x\nALU2: %x\n",32,vlSelf->cpu__DOT__ALUT__DOT__SrcA,
              32,vlSelf->cpu__DOT__ALUT__DOT__SrcB);
}

VL_INLINE_OPT void Vcpu___024root___sequent__TOP__25__PROF__ALU__l17(Vcpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu___024root___sequent__TOP__25__PROF__ALU__l17\n"); );
    // Body
    vlSelf->cpu__DOT__Zero = (vlSelf->cpu__DOT__ALUT__DOT__SrcA 
                              == vlSelf->cpu__DOT__ALUT__DOT__SrcB);
    if ((4U & (IData)(vlSelf->cpu__DOT__ALUControl))) {
        vlSelf->cpu__DOT__ALUResult = ((2U & (IData)(vlSelf->cpu__DOT__ALUControl))
                                        ? ((1U & (IData)(vlSelf->cpu__DOT__ALUControl))
                                            ? (vlSelf->cpu__DOT__ALUT__DOT__SrcA 
                                               & vlSelf->cpu__DOT__ALUT__DOT__SrcB)
                                            : (vlSelf->cpu__DOT__ALUT__DOT__SrcA 
                                               | vlSelf->cpu__DOT__ALUT__DOT__SrcB))
                                        : ((1U & (IData)(vlSelf->cpu__DOT__ALUControl))
                                            ? ((8U 
                                                & (IData)(vlSelf->cpu__DOT__ALUControl))
                                                ? (vlSelf->cpu__DOT__ALUT__DOT__SrcA 
                                                   >> 
                                                   (0x1fU 
                                                    & vlSelf->cpu__DOT__ALUT__DOT__SrcB))
                                                : (vlSelf->cpu__DOT__ALUT__DOT__SrcA 
                                                   >> 
                                                   (0x1fU 
                                                    & vlSelf->cpu__DOT__ALUT__DOT__SrcB)))
                                            : (vlSelf->cpu__DOT__ALUT__DOT__SrcA 
                                               ^ vlSelf->cpu__DOT__ALUT__DOT__SrcB)));
    } else if ((2U & (IData)(vlSelf->cpu__DOT__ALUControl))) {
        if ((1U & (IData)(vlSelf->cpu__DOT__ALUControl))) {
            vlSelf->cpu__DOT__Zero = (vlSelf->cpu__DOT__ALUT__DOT__SrcA 
                                      < vlSelf->cpu__DOT__ALUT__DOT__SrcB);
            vlSelf->cpu__DOT__ALUResult = vlSelf->cpu__DOT__Zero;
        } else {
            vlSelf->cpu__DOT__ALUT__DOT__ALU__DOT__Unsigned 
                = (vlSelf->cpu__DOT__ALUT__DOT__SrcA 
                   < vlSelf->cpu__DOT__ALUT__DOT__SrcB);
            vlSelf->cpu__DOT__ALUT__DOT__ALU__DOT__DiffSign 
                = (((vlSelf->cpu__DOT__ALUT__DOT__SrcA 
                     ^ vlSelf->cpu__DOT__ALUT__DOT__SrcB) 
                    >> 0x1fU) ? 1U : (1U & (IData)(vlSelf->cpu__DOT__ALUT__DOT__ALU__DOT__Unsigned)));
            vlSelf->cpu__DOT__Zero = (1U & ((vlSelf->cpu__DOT__ALUT__DOT__SrcB 
                                             >> 0x1fU)
                                             ? (~ (IData)(vlSelf->cpu__DOT__ALUT__DOT__ALU__DOT__DiffSign))
                                             : (IData)(vlSelf->cpu__DOT__ALUT__DOT__ALU__DOT__DiffSign)));
            vlSelf->cpu__DOT__ALUResult = vlSelf->cpu__DOT__Zero;
        }
    } else {
        vlSelf->cpu__DOT__ALUResult = ((1U & (IData)(vlSelf->cpu__DOT__ALUControl))
                                        ? (vlSelf->cpu__DOT__ALUT__DOT__SrcA 
                                           << (0x1fU 
                                               & vlSelf->cpu__DOT__ALUT__DOT__SrcB))
                                        : ((8U & (IData)(vlSelf->cpu__DOT__ALUControl))
                                            ? (vlSelf->cpu__DOT__ALUT__DOT__SrcA 
                                               - vlSelf->cpu__DOT__ALUT__DOT__SrcB)
                                            : (vlSelf->cpu__DOT__ALUT__DOT__SrcA 
                                               + vlSelf->cpu__DOT__ALUT__DOT__SrcB)));
    }
}

VL_INLINE_OPT void Vcpu___024root___sequent__TOP__26__PROF__DataMemory__l24(Vcpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu___024root___sequent__TOP__26__PROF__DataMemory__l24\n"); );
    // Body
    vlSelf->cpu__DOT__MT__DOT__ReadData = ((vlSelf->cpu__DOT__MT__DOT__DM__DOT__RAM
                                            [(0xffffffcU 
                                              & vlSelf->cpu__DOT__ALUResult)] 
                                            << 0x18U) 
                                           | ((vlSelf->cpu__DOT__MT__DOT__DM__DOT__RAM
                                               [(0xfffffffU 
                                                 & ((IData)(1U) 
                                                    + 
                                                    (0xffffffcU 
                                                     & vlSelf->cpu__DOT__ALUResult)))] 
                                               << 0x10U) 
                                              | ((vlSelf->cpu__DOT__MT__DOT__DM__DOT__RAM
                                                  [
                                                  (0xfffffffU 
                                                   & ((IData)(2U) 
                                                      + 
                                                      (0xffffffcU 
                                                       & vlSelf->cpu__DOT__ALUResult)))] 
                                                  << 8U) 
                                                 | vlSelf->cpu__DOT__MT__DOT__DM__DOT__RAM
                                                 [(0xfffffffU 
                                                   & ((IData)(3U) 
                                                      + 
                                                      (0xffffffcU 
                                                       & vlSelf->cpu__DOT__ALUResult)))])));
}

VL_INLINE_OPT void Vcpu___024root___sequent__TOP__27__PROF__StoreMemory__l9(Vcpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu___024root___sequent__TOP__27__PROF__StoreMemory__l9\n"); );
    // Body
    vlSelf->cpu__DOT__MT__DOT__WriteData = ((0U == 
                                             (3U & (IData)(vlSelf->cpu__DOT__Type)))
                                             ? ((2U 
                                                 & vlSelf->cpu__DOT__ALUResult)
                                                 ? 
                                                ((1U 
                                                  & vlSelf->cpu__DOT__ALUResult)
                                                  ? 
                                                 ((vlSelf->cpu__DOT__RD2 
                                                   << 0x18U) 
                                                  | (0xffffffU 
                                                     & vlSelf->cpu__DOT__MT__DOT__ReadData))
                                                  : 
                                                 ((0xff000000U 
                                                   & vlSelf->cpu__DOT__MT__DOT__ReadData) 
                                                  | ((0xff0000U 
                                                      & (vlSelf->cpu__DOT__RD2 
                                                         << 0x10U)) 
                                                     | (0xffffU 
                                                        & vlSelf->cpu__DOT__MT__DOT__ReadData))))
                                                 : 
                                                ((1U 
                                                  & vlSelf->cpu__DOT__ALUResult)
                                                  ? 
                                                 ((0xffff0000U 
                                                   & vlSelf->cpu__DOT__MT__DOT__ReadData) 
                                                  | ((0xff00U 
                                                      & (vlSelf->cpu__DOT__RD2 
                                                         << 8U)) 
                                                     | (0xffU 
                                                        & vlSelf->cpu__DOT__MT__DOT__ReadData)))
                                                  : 
                                                 ((0xffffff00U 
                                                   & vlSelf->cpu__DOT__MT__DOT__ReadData) 
                                                  | (0xffU 
                                                     & vlSelf->cpu__DOT__RD2))))
                                             : ((1U 
                                                 == 
                                                 (3U 
                                                  & (IData)(vlSelf->cpu__DOT__Type)))
                                                 ? 
                                                ((2U 
                                                  & vlSelf->cpu__DOT__ALUResult)
                                                  ? 
                                                 ((0xffff0000U 
                                                   & vlSelf->cpu__DOT__RD2) 
                                                  | (0xffffU 
                                                     & vlSelf->cpu__DOT__MT__DOT__ReadData))
                                                  : 
                                                 ((0xffff0000U 
                                                   & vlSelf->cpu__DOT__MT__DOT__ReadData) 
                                                  | (0xffffU 
                                                     & vlSelf->cpu__DOT__RD2)))
                                                 : vlSelf->cpu__DOT__RD2));
}

VL_INLINE_OPT void Vcpu___024root___sequent__TOP__28__PROF__LoadMemory__l8(Vcpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu___024root___sequent__TOP__28__PROF__LoadMemory__l8\n"); );
    // Body
    vlSelf->cpu__DOT__MT__DOT__Data = ((4U & (IData)(vlSelf->cpu__DOT__Type))
                                        ? ((2U & (IData)(vlSelf->cpu__DOT__Type))
                                            ? vlSelf->cpu__DOT__MT__DOT__ReadData
                                            : ((1U 
                                                & (IData)(vlSelf->cpu__DOT__Type))
                                                ? (
                                                   (2U 
                                                    & vlSelf->cpu__DOT__ALUResult)
                                                    ? 
                                                   (0xffff0000U 
                                                    & vlSelf->cpu__DOT__MT__DOT__ReadData)
                                                    : 
                                                   (0xffffU 
                                                    & vlSelf->cpu__DOT__MT__DOT__ReadData))
                                                : (
                                                   (2U 
                                                    & vlSelf->cpu__DOT__ALUResult)
                                                    ? 
                                                   ((1U 
                                                     & vlSelf->cpu__DOT__ALUResult)
                                                     ? 
                                                    (vlSelf->cpu__DOT__MT__DOT__ReadData 
                                                     >> 0x18U)
                                                     : 
                                                    (0xffU 
                                                     & (vlSelf->cpu__DOT__MT__DOT__ReadData 
                                                        >> 0x10U)))
                                                    : 
                                                   ((1U 
                                                     & vlSelf->cpu__DOT__ALUResult)
                                                     ? 
                                                    (0xffU 
                                                     & (vlSelf->cpu__DOT__MT__DOT__ReadData 
                                                        >> 8U))
                                                     : 
                                                    (0xffU 
                                                     & vlSelf->cpu__DOT__MT__DOT__ReadData)))))
                                        : ((2U & (IData)(vlSelf->cpu__DOT__Type))
                                            ? vlSelf->cpu__DOT__MT__DOT__ReadData
                                            : ((1U 
                                                & (IData)(vlSelf->cpu__DOT__Type))
                                                ? (
                                                   (2U 
                                                    & vlSelf->cpu__DOT__ALUResult)
                                                    ? 
                                                   (0xffff0000U 
                                                    & vlSelf->cpu__DOT__MT__DOT__ReadData)
                                                    : 
                                                   (((- (IData)(
                                                                (1U 
                                                                 & (vlSelf->cpu__DOT__MT__DOT__ReadData 
                                                                    >> 0xfU)))) 
                                                     << 0x10U) 
                                                    | (0xffffU 
                                                       & vlSelf->cpu__DOT__MT__DOT__ReadData)))
                                                : (
                                                   (2U 
                                                    & vlSelf->cpu__DOT__ALUResult)
                                                    ? 
                                                   ((1U 
                                                     & vlSelf->cpu__DOT__ALUResult)
                                                     ? 
                                                    (((- (IData)(
                                                                 (vlSelf->cpu__DOT__MT__DOT__ReadData 
                                                                  >> 0x1fU))) 
                                                      << 8U) 
                                                     | (vlSelf->cpu__DOT__MT__DOT__ReadData 
                                                        >> 0x18U))
                                                     : 
                                                    (((- (IData)(
                                                                 (1U 
                                                                  & (vlSelf->cpu__DOT__MT__DOT__ReadData 
                                                                     >> 0x17U)))) 
                                                      << 8U) 
                                                     | (0xffU 
                                                        & (vlSelf->cpu__DOT__MT__DOT__ReadData 
                                                           >> 0x10U))))
                                                    : 
                                                   ((1U 
                                                     & vlSelf->cpu__DOT__ALUResult)
                                                     ? 
                                                    (((- (IData)(
                                                                 (1U 
                                                                  & (vlSelf->cpu__DOT__MT__DOT__ReadData 
                                                                     >> 0xfU)))) 
                                                      << 8U) 
                                                     | (0xffU 
                                                        & (vlSelf->cpu__DOT__MT__DOT__ReadData 
                                                           >> 8U)))
                                                     : 
                                                    (((- (IData)(
                                                                 (1U 
                                                                  & (vlSelf->cpu__DOT__MT__DOT__ReadData 
                                                                     >> 7U)))) 
                                                      << 8U) 
                                                     | (0xffU 
                                                        & vlSelf->cpu__DOT__MT__DOT__ReadData)))))));
}

VL_INLINE_OPT void Vcpu___024root___sequent__TOP__29__PROF__Memorytop__l42(Vcpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu___024root___sequent__TOP__29__PROF__Memorytop__l42\n"); );
    // Body
    vlSelf->cpu__DOT__Result = ((IData)(vlSelf->cpu__DOT__ResultSrc)
                                 ? vlSelf->cpu__DOT__MT__DOT__Data
                                 : vlSelf->cpu__DOT__ALUResult);
}

VL_INLINE_OPT void Vcpu___024root___sequent__TOP__30__PROF__cpu__l107(Vcpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu___024root___sequent__TOP__30__PROF__cpu__l107\n"); );
    // Body
    VL_WRITEF("Instruction: %x\nALUControl: %b\nALUResult: %x\nResult: %10#\na0: %x\n",
              32,vlSelf->cpu__DOT__Instr,4,(IData)(vlSelf->cpu__DOT__ALUControl),
              32,vlSelf->cpu__DOT__ALUResult,32,vlSelf->cpu__DOT__Result,
              32,vlSelf->a0);
}

VL_INLINE_OPT void Vcpu___024root___sequent__TOP__31__PROF__ALUtop__l32(Vcpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu___024root___sequent__TOP__31__PROF__ALUtop__l32\n"); );
    // Body
    vlSelf->cpu__DOT__ALUT__DOT__ImmRes = ((IData)(vlSelf->cpu__DOT__ImmUppSrc)
                                            ? vlSelf->cpu__DOT__ImmExt
                                            : vlSelf->cpu__DOT__Result);
    vlSelf->cpu__DOT__ALUT__DOT__WD3 = ((IData)(vlSelf->cpu__DOT__Jump)
                                         ? vlSelf->cpu__DOT__PC
                                         : vlSelf->cpu__DOT__ALUT__DOT__ImmRes);
}

VL_INLINE_OPT void Vcpu___024root___sequent__TOP__32__PROF__PCtop__l20(Vcpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu___024root___sequent__TOP__32__PROF__PCtop__l20\n"); );
    // Body
    vlSelf->cpu__DOT__PCT__DOT__PCPlus4 = ((IData)(4U) 
                                           + vlSelf->cpu__DOT__PC);
    vlSelf->cpu__DOT__PCT__DOT__PCTarget = (vlSelf->cpu__DOT__PC 
                                            + vlSelf->cpu__DOT__ImmExt);
    vlSelf->cpu__DOT__PCT__DOT__PCInterm = ((((IData)(vlSelf->cpu__DOT__CU__DOT__Branch) 
                                              & ((vlSelf->cpu__DOT__Instr 
                                                  >> 0xcU) 
                                                 ^ (IData)(vlSelf->cpu__DOT__Zero))) 
                                             | (IData)(vlSelf->cpu__DOT__Jump))
                                             ? vlSelf->cpu__DOT__PCT__DOT__PCTarget
                                             : vlSelf->cpu__DOT__PCT__DOT__PCPlus4);
    vlSelf->cpu__DOT__PCT__DOT__PCNext = ((IData)(vlSelf->cpu__DOT__JumpReg)
                                           ? vlSelf->cpu__DOT__Result
                                           : vlSelf->cpu__DOT__PCT__DOT__PCInterm);
}

void Vcpu___024root___eval(Vcpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu___024root___eval\n"); );
    // Body
    if (((IData)(vlSelf->CLK) & (~ (IData)(vlSelf->__Vclklast__TOP__CLK)))) {
        vlSelf->__Vm_traceActivity[1U] = 1U;
        Vcpu___024root___sequent__TOP__4__PROF__DataMemory__l29(vlSelf);
        Vcpu___024root___sequent__TOP__5__PROF__RegisterFile__l33(vlSelf);
        Vcpu___024root___sequent__TOP__6__PROF__DataMemory__l27(vlSelf);
        Vcpu___024root___sequent__TOP__8__PROF__DataMemory__l27(vlSelf);
        Vcpu___024root___sequent__TOP__9__PROF__RegisterFile__l32(vlSelf);
        Vcpu___024root___sequent__TOP__10__PROF__PCReg__l11(vlSelf);
        Vcpu___024root___sequent__TOP__11__PROF__DataMemory__l29(vlSelf);
        Vcpu___024root___sequent__TOP__12__PROF__RegisterFile__l33(vlSelf);
        Vcpu___024root___sequent__TOP__14__PROF__RegisterFile__l25(vlSelf);
        Vcpu___024root___sequent__TOP__15__PROF__PCReg__l16(vlSelf);
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
    // Final
    vlSelf->__Vclklast__TOP__CLK = vlSelf->CLK;
}

#ifdef VL_DEBUG
void Vcpu___024root___eval_debug_assertions(Vcpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->CLK & 0xfeU))) {
        Verilated::overWidthError("CLK");}
    if (VL_UNLIKELY((vlSelf->rst & 0xfeU))) {
        Verilated::overWidthError("rst");}
}
#endif  // VL_DEBUG
