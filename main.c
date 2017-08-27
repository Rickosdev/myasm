#include <stdio.h>

const char* symbol[]={
    "NP","REX.W","REX.B","REX.R","REX.X",
    "/0","/1","/2","/3","/4","/5","/6","/7","/r",
    "ib","iw","id","io","r8","r16","r32","r64",
    "imm8","imm16","imm32","imm64","r/m8","r/m16","r/m32","r/m64",
    "m8","m16","m32","m64","m128",
    "AH","BH","CH","DH","AL","BL","CL","DL","AX","BX","CX","DX",
    "R8W","R9W","R10W","R11W","R12W","R13W","R14W","R15W",
    "EAX","EBX","ECX","EDX","R8D","R9D","R10D","R11D","R12D","R13D","R14D","R15D",
    "RAX","RBX","RCX","RDX","R8","R9","R10","R11","R12","R13","R14","R15"
};
enum {
    NP,REXW,REXB,REXR,REXX,s0,s1,s2,s3,s4,s5,s6,s7,sr,ib,iw,id,io,r8,r16,r32,r64,imm8,imm16,
    immm32,imm64,rm8,rm16,rm32,rm64,m8,m16,m32,m64,m128,AH,BH,CH,DH,AL,BL,CL,DL,AX,BX,CX,DX,
    R8W,R9W,R10W,R11W,R12W,R13W,R14W,R15W,EAX,EBX,ECX,EDX,R8D,R9D,R10D,R11D,R12D,R13D,R14D,R15D,
    RAX,RBX,RCX,RDX,R8,R9,R10,R11,R12,R13,R14,R15
};

