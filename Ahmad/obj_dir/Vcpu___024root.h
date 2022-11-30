// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vcpu.h for the primary calling header

#ifndef VERILATED_VCPU___024ROOT_H_
#define VERILATED_VCPU___024ROOT_H_  // guard

#include "verilated.h"

class Vcpu__Syms;

class Vcpu___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(CLK,0,0);
    VL_IN8(rst,0,0);
    CData/*0:0*/ cpu__DOT__RegWrite;
    CData/*0:0*/ cpu__DOT__ResultSrc;
    CData/*0:0*/ cpu__DOT__MemWrite;
    CData/*3:0*/ cpu__DOT__ALUControl;
    CData/*0:0*/ cpu__DOT__ALUSrc;
    CData/*2:0*/ cpu__DOT__ImmSrc;
    CData/*0:0*/ cpu__DOT__Jump;
    CData/*0:0*/ cpu__DOT__JumpReg;
    CData/*2:0*/ cpu__DOT__Type;
    CData/*0:0*/ cpu__DOT__PCUppSrc;
    CData/*0:0*/ cpu__DOT__ImmUppSrc;
    CData/*0:0*/ cpu__DOT__Zero;
    CData/*1:0*/ cpu__DOT__CU__DOT__ALUOp;
    CData/*0:0*/ cpu__DOT__CU__DOT__Branch;
    CData/*0:0*/ cpu__DOT__ALUT__DOT__ALU__DOT__Unsigned;
    CData/*0:0*/ cpu__DOT__ALUT__DOT__ALU__DOT__DiffSign;
    CData/*4:0*/ __Vdlyvdim0__cpu__DOT__ALUT__DOT__RF__DOT__REG_FILE__v0;
    CData/*0:0*/ __Vdlyvset__cpu__DOT__ALUT__DOT__RF__DOT__REG_FILE__v0;
    CData/*7:0*/ __Vdlyvval__cpu__DOT__MT__DOT__DM__DOT__RAM__v0;
    CData/*0:0*/ __Vdlyvset__cpu__DOT__MT__DOT__DM__DOT__RAM__v0;
    CData/*7:0*/ __Vdlyvval__cpu__DOT__MT__DOT__DM__DOT__RAM__v1;
    CData/*7:0*/ __Vdlyvval__cpu__DOT__MT__DOT__DM__DOT__RAM__v2;
    CData/*7:0*/ __Vdlyvval__cpu__DOT__MT__DOT__DM__DOT__RAM__v3;
    CData/*0:0*/ __Vclklast__TOP__CLK;
    VL_OUT(a0,31,0);
    IData/*31:0*/ cpu__DOT__PC;
    IData/*31:0*/ cpu__DOT__Instr;
    IData/*31:0*/ cpu__DOT__ImmExt;
    IData/*31:0*/ cpu__DOT__ALUResult;
    IData/*31:0*/ cpu__DOT__RD2;
    IData/*31:0*/ cpu__DOT__Result;
    IData/*31:0*/ cpu__DOT__PCT__DOT__PCTarget;
    IData/*31:0*/ cpu__DOT__PCT__DOT__PCNext;
    IData/*31:0*/ cpu__DOT__PCT__DOT__PCPlus4;
    IData/*31:0*/ cpu__DOT__PCT__DOT__PCInterm;
    IData/*31:0*/ cpu__DOT__ALUT__DOT__SrcA;
    IData/*31:0*/ cpu__DOT__ALUT__DOT__SrcB;
    IData/*31:0*/ cpu__DOT__ALUT__DOT__ImmRes;
    IData/*31:0*/ cpu__DOT__ALUT__DOT__WD3;
    IData/*31:0*/ cpu__DOT__ALUT__DOT__RF__DOT__unnamedblk1__DOT__i;
    IData/*31:0*/ cpu__DOT__MT__DOT__ReadData;
    IData/*31:0*/ cpu__DOT__MT__DOT__WriteData;
    IData/*31:0*/ cpu__DOT__MT__DOT__Data;
    IData/*31:0*/ __Vdlyvval__cpu__DOT__ALUT__DOT__RF__DOT__REG_FILE__v0;
    IData/*27:0*/ __Vdlyvdim0__cpu__DOT__MT__DOT__DM__DOT__RAM__v0;
    IData/*27:0*/ __Vdlyvdim0__cpu__DOT__MT__DOT__DM__DOT__RAM__v1;
    IData/*27:0*/ __Vdlyvdim0__cpu__DOT__MT__DOT__DM__DOT__RAM__v2;
    IData/*27:0*/ __Vdlyvdim0__cpu__DOT__MT__DOT__DM__DOT__RAM__v3;
    VlUnpacked<CData/*7:0*/, 268435456> cpu__DOT__IM__DOT__ROM;
    VlUnpacked<IData/*31:0*/, 32> cpu__DOT__ALUT__DOT__RF__DOT__REG_FILE;
    VlUnpacked<CData/*7:0*/, 268435456> cpu__DOT__MT__DOT__DM__DOT__RAM;
    VlUnpacked<CData/*0:0*/, 2> __Vm_traceActivity;

    // INTERNAL VARIABLES
    Vcpu__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vcpu___024root(Vcpu__Syms* symsp, const char* name);
    ~Vcpu___024root();
    VL_UNCOPYABLE(Vcpu___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
