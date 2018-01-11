#include "CPU.hpp"
#include <stdint.h>

// 0x0 : NOP
// bytes:	1
// cycles:	4
// Flags:	[ - - - - ]
// Operands: 
void CPU::NOP() { 

}

// 0x1 : LD
// bytes:	3
// cycles:	12
// Flags:	[ - - - - ]
// Operands: BC d16 
void CPU::LD_BC_d16(uint8_t operand) { 

}

// 0x2 : LD
// bytes:	1
// cycles:	8
// Flags:	[ - - - - ]
// Operands: (BC) A 
void CPU::LD_BC_E_A() { 

}

// 0x3 : INC
// bytes:	1
// cycles:	8
// Flags:	[ - - - - ]
// Operands: BC 
void CPU::INC_BC() { 

}

// 0x4 : INC
// bytes:	1
// cycles:	4
// Flags:	[ Z 0 H - ]
// Operands: B 
void CPU::INC_B() { 

}

// 0x5 : DEC
// bytes:	1
// cycles:	4
// Flags:	[ Z 1 H - ]
// Operands: B 
void CPU::DEC_B() { 

}

// 0x6 : LD
// bytes:	2
// cycles:	8
// Flags:	[ - - - - ]
// Operands: B d8 
void CPU::LD_B_d8(uint8_t operand) { 

}

// 0x7 : RLCA
// bytes:	1
// cycles:	4
// Flags:	[ 0 0 0 C ]
// Operands: 
void CPU::RLCA() { 

}

// 0x8 : LD
// bytes:	3
// cycles:	20
// Flags:	[ - - - - ]
// Operands: (a16) SP 
void CPU::LD_a16_E_SP(uint16_t operand) { 

}

// 0x9 : ADD
// bytes:	1
// cycles:	8
// Flags:	[ - 0 H C ]
// Operands: HL BC 
void CPU::ADD_HL_BC() { 

}

// 0xa : LD
// bytes:	1
// cycles:	8
// Flags:	[ - - - - ]
// Operands: A (BC) 
void CPU::LD_A_BC_E() { 

}

// 0xb : DEC
// bytes:	1
// cycles:	8
// Flags:	[ - - - - ]
// Operands: BC 
void CPU::DEC_BC() { 

}

// 0xc : INC
// bytes:	1
// cycles:	4
// Flags:	[ Z 0 H - ]
// Operands: C 
void CPU::INC_C() { 

}

// 0xd : DEC
// bytes:	1
// cycles:	4
// Flags:	[ Z 1 H - ]
// Operands: C 
void CPU::DEC_C() { 

}

// 0xe : LD
// bytes:	2
// cycles:	8
// Flags:	[ - - - - ]
// Operands: C d8 
void CPU::LD_C_d8(uint8_t operand) { 

}

// 0xf : RRCA
// bytes:	1
// cycles:	4
// Flags:	[ 0 0 0 C ]
// Operands: 
void CPU::RRCA() { 

}

// 0x10 : STOP
// bytes:	2
// cycles:	4
// Flags:	[ - - - - ]
// Operands: 0 
void CPU::STOP_0() { 

}

// 0x11 : LD
// bytes:	3
// cycles:	12
// Flags:	[ - - - - ]
// Operands: DE d16 
void CPU::LD_DE_d16(uint8_t operand) { 

}

// 0x12 : LD
// bytes:	1
// cycles:	8
// Flags:	[ - - - - ]
// Operands: (DE) A 
void CPU::LD_DE_E_A() { 

}

// 0x13 : INC
// bytes:	1
// cycles:	8
// Flags:	[ - - - - ]
// Operands: DE 
void CPU::INC_DE() { 

}

// 0x14 : INC
// bytes:	1
// cycles:	4
// Flags:	[ Z 0 H - ]
// Operands: D 
void CPU::INC_D() { 

}

// 0x15 : DEC
// bytes:	1
// cycles:	4
// Flags:	[ Z 1 H - ]
// Operands: D 
void CPU::DEC_D() { 

}

// 0x16 : LD
// bytes:	2
// cycles:	8
// Flags:	[ - - - - ]
// Operands: D d8 
void CPU::LD_D_d8(uint8_t operand) { 

}

// 0x17 : RLA
// bytes:	1
// cycles:	4
// Flags:	[ 0 0 0 C ]
// Operands: 
void CPU::RLA() { 

}

// 0x18 : JR
// bytes:	2
// cycles:	12
// Flags:	[ - - - - ]
// Operands: r8 
void CPU::JR_r8(uint8_t operand) { 

}

// 0x19 : ADD
// bytes:	1
// cycles:	8
// Flags:	[ - 0 H C ]
// Operands: HL DE 
void CPU::ADD_HL_DE() { 

}

// 0x1a : LD
// bytes:	1
// cycles:	8
// Flags:	[ - - - - ]
// Operands: A (DE) 
void CPU::LD_A_DE_E() { 

}

// 0x1b : DEC
// bytes:	1
// cycles:	8
// Flags:	[ - - - - ]
// Operands: DE 
void CPU::DEC_DE() { 

}

// 0x1c : INC
// bytes:	1
// cycles:	4
// Flags:	[ Z 0 H - ]
// Operands: E 
void CPU::INC_E() { 

}

// 0x1d : DEC
// bytes:	1
// cycles:	4
// Flags:	[ Z 1 H - ]
// Operands: E 
void CPU::DEC_E() { 

}

// 0x1e : LD
// bytes:	2
// cycles:	8
// Flags:	[ - - - - ]
// Operands: E d8 
void CPU::LD_E_d8(uint8_t operand) { 

}

// 0x1f : RRA
// bytes:	1
// cycles:	4
// Flags:	[ 0 0 0 C ]
// Operands: 
void CPU::RRA() { 

}

// 0x20 : JR
// bytes:	2
// cycles:	12
// Flags:	[ - - - - ]
// Operands: NZ r8 
void CPU::JR_NZ_r8(uint8_t operand) { 

}

// 0x21 : LD
// bytes:	3
// cycles:	12
// Flags:	[ - - - - ]
// Operands: HL d16 
void CPU::LD_HL_d16(uint8_t operand) { 

}

// 0x22 : LD
// bytes:	1
// cycles:	8
// Flags:	[ - - - - ]
// Operands: (HL+) A 
void CPU::LD_HLI_E_A() { 

}

// 0x23 : INC
// bytes:	1
// cycles:	8
// Flags:	[ - - - - ]
// Operands: HL 
void CPU::INC_HL() { 

}

// 0x24 : INC
// bytes:	1
// cycles:	4
// Flags:	[ Z 0 H - ]
// Operands: H 
void CPU::INC_H() { 

}

// 0x25 : DEC
// bytes:	1
// cycles:	4
// Flags:	[ Z 1 H - ]
// Operands: H 
void CPU::DEC_H() { 

}

// 0x26 : LD
// bytes:	2
// cycles:	8
// Flags:	[ - - - - ]
// Operands: H d8 
void CPU::LD_H_d8(uint8_t operand) { 

}

// 0x27 : DAA
// bytes:	1
// cycles:	4
// Flags:	[ Z - 0 C ]
// Operands: 
void CPU::DAA() { 

}

// 0x28 : JR
// bytes:	2
// cycles:	12
// Flags:	[ - - - - ]
// Operands: Z r8 
void CPU::JR_Z_r8(uint8_t operand) { 

}

// 0x29 : ADD
// bytes:	1
// cycles:	8
// Flags:	[ - 0 H C ]
// Operands: HL HL 
void CPU::ADD_HL_HL() { 

}

// 0x2a : LD
// bytes:	1
// cycles:	8
// Flags:	[ - - - - ]
// Operands: A (HL+) 
void CPU::LD_A_HLI_E() { 

}

// 0x2b : DEC
// bytes:	1
// cycles:	8
// Flags:	[ - - - - ]
// Operands: HL 
void CPU::DEC_HL() { 

}

// 0x2c : INC
// bytes:	1
// cycles:	4
// Flags:	[ Z 0 H - ]
// Operands: L 
void CPU::INC_L() { 

}

// 0x2d : DEC
// bytes:	1
// cycles:	4
// Flags:	[ Z 1 H - ]
// Operands: L 
void CPU::DEC_L() { 

}

// 0x2e : LD
// bytes:	2
// cycles:	8
// Flags:	[ - - - - ]
// Operands: L d8 
void CPU::LD_L_d8(uint8_t operand) { 

}

// 0x2f : CPL
// bytes:	1
// cycles:	4
// Flags:	[ - 1 1 - ]
// Operands: 
void CPU::CPL() { 

}

// 0x30 : JR
// bytes:	2
// cycles:	12
// Flags:	[ - - - - ]
// Operands: NC r8 
void CPU::JR_NC_r8(uint8_t operand) { 

}

// 0x31 : LD
// bytes:	3
// cycles:	12
// Flags:	[ - - - - ]
// Operands: SP d16 
void CPU::LD_SP_d16(uint8_t operand) { 

}

// 0x32 : LD
// bytes:	1
// cycles:	8
// Flags:	[ - - - - ]
// Operands: (HL-) A 
void CPU::LD_HLD_E_A() { 

}

// 0x33 : INC
// bytes:	1
// cycles:	8
// Flags:	[ - - - - ]
// Operands: SP 
void CPU::INC_SP() { 

}

// 0x34 : INC
// bytes:	1
// cycles:	12
// Flags:	[ Z 0 H - ]
// Operands: (HL) 
void CPU::INC_HL_E() { 

}

// 0x35 : DEC
// bytes:	1
// cycles:	12
// Flags:	[ Z 1 H - ]
// Operands: (HL) 
void CPU::DEC_HL_E() { 

}

// 0x36 : LD
// bytes:	2
// cycles:	12
// Flags:	[ - - - - ]
// Operands: (HL) d8 
void CPU::LD_HL_E_d8(uint8_t operand) { 

}

// 0x37 : SCF
// bytes:	1
// cycles:	4
// Flags:	[ - 0 0 1 ]
// Operands: 
void CPU::SCF() { 

}

// 0x38 : JR
// bytes:	2
// cycles:	12
// Flags:	[ - - - - ]
// Operands: C r8 
void CPU::JR_C_r8(uint8_t operand) { 

}

// 0x39 : ADD
// bytes:	1
// cycles:	8
// Flags:	[ - 0 H C ]
// Operands: HL SP 
void CPU::ADD_HL_SP() { 

}

// 0x3a : LD
// bytes:	1
// cycles:	8
// Flags:	[ - - - - ]
// Operands: A (HL-) 
void CPU::LD_A_HLD_E() { 

}

// 0x3b : DEC
// bytes:	1
// cycles:	8
// Flags:	[ - - - - ]
// Operands: SP 
void CPU::DEC_SP() { 

}

// 0x3c : INC
// bytes:	1
// cycles:	4
// Flags:	[ Z 0 H - ]
// Operands: A 
void CPU::INC_A() { 

}

// 0x3d : DEC
// bytes:	1
// cycles:	4
// Flags:	[ Z 1 H - ]
// Operands: A 
void CPU::DEC_A() { 

}

// 0x3e : LD
// bytes:	2
// cycles:	8
// Flags:	[ - - - - ]
// Operands: A d8 
void CPU::LD_A_d8(uint8_t operand) { 

}

// 0x3f : CCF
// bytes:	1
// cycles:	4
// Flags:	[ - 0 0 C ]
// Operands: 
void CPU::CCF() { 

}

// 0x40 : LD
// bytes:	1
// cycles:	4
// Flags:	[ - - - - ]
// Operands: B B 
void CPU::LD_B_B() { 

}

// 0x41 : LD
// bytes:	1
// cycles:	4
// Flags:	[ - - - - ]
// Operands: B C 
void CPU::LD_B_C() { 

}

// 0x42 : LD
// bytes:	1
// cycles:	4
// Flags:	[ - - - - ]
// Operands: B D 
void CPU::LD_B_D() { 

}

// 0x43 : LD
// bytes:	1
// cycles:	4
// Flags:	[ - - - - ]
// Operands: B E 
void CPU::LD_B_E() { 

}

// 0x44 : LD
// bytes:	1
// cycles:	4
// Flags:	[ - - - - ]
// Operands: B H 
void CPU::LD_B_H() { 

}

// 0x45 : LD
// bytes:	1
// cycles:	4
// Flags:	[ - - - - ]
// Operands: B L 
void CPU::LD_B_L() { 

}

// 0x46 : LD
// bytes:	1
// cycles:	8
// Flags:	[ - - - - ]
// Operands: B (HL) 
void CPU::LD_B_HL_E() { 

}

// 0x47 : LD
// bytes:	1
// cycles:	4
// Flags:	[ - - - - ]
// Operands: B A 
void CPU::LD_B_A() { 

}

// 0x48 : LD
// bytes:	1
// cycles:	4
// Flags:	[ - - - - ]
// Operands: C B 
void CPU::LD_C_B() { 

}

// 0x49 : LD
// bytes:	1
// cycles:	4
// Flags:	[ - - - - ]
// Operands: C C 
void CPU::LD_C_C() { 

}

// 0x4a : LD
// bytes:	1
// cycles:	4
// Flags:	[ - - - - ]
// Operands: C D 
void CPU::LD_C_D() { 

}

// 0x4b : LD
// bytes:	1
// cycles:	4
// Flags:	[ - - - - ]
// Operands: C E 
void CPU::LD_C_E() { 

}

// 0x4c : LD
// bytes:	1
// cycles:	4
// Flags:	[ - - - - ]
// Operands: C H 
void CPU::LD_C_H() { 

}

// 0x4d : LD
// bytes:	1
// cycles:	4
// Flags:	[ - - - - ]
// Operands: C L 
void CPU::LD_C_L() { 

}

// 0x4e : LD
// bytes:	1
// cycles:	8
// Flags:	[ - - - - ]
// Operands: C (HL) 
void CPU::LD_C_HL_E() { 

}

// 0x4f : LD
// bytes:	1
// cycles:	4
// Flags:	[ - - - - ]
// Operands: C A 
void CPU::LD_C_A() { 

}

// 0x50 : LD
// bytes:	1
// cycles:	4
// Flags:	[ - - - - ]
// Operands: D B 
void CPU::LD_D_B() { 

}

// 0x51 : LD
// bytes:	1
// cycles:	4
// Flags:	[ - - - - ]
// Operands: D C 
void CPU::LD_D_C() { 

}

// 0x52 : LD
// bytes:	1
// cycles:	4
// Flags:	[ - - - - ]
// Operands: D D 
void CPU::LD_D_D() { 

}

// 0x53 : LD
// bytes:	1
// cycles:	4
// Flags:	[ - - - - ]
// Operands: D E 
void CPU::LD_D_E() { 

}

// 0x54 : LD
// bytes:	1
// cycles:	4
// Flags:	[ - - - - ]
// Operands: D H 
void CPU::LD_D_H() { 

}

// 0x55 : LD
// bytes:	1
// cycles:	4
// Flags:	[ - - - - ]
// Operands: D L 
void CPU::LD_D_L() { 

}

// 0x56 : LD
// bytes:	1
// cycles:	8
// Flags:	[ - - - - ]
// Operands: D (HL) 
void CPU::LD_D_HL_E() { 

}

// 0x57 : LD
// bytes:	1
// cycles:	4
// Flags:	[ - - - - ]
// Operands: D A 
void CPU::LD_D_A() { 

}

// 0x58 : LD
// bytes:	1
// cycles:	4
// Flags:	[ - - - - ]
// Operands: E B 
void CPU::LD_E_B() { 

}

// 0x59 : LD
// bytes:	1
// cycles:	4
// Flags:	[ - - - - ]
// Operands: E C 
void CPU::LD_E_C() { 

}

// 0x5a : LD
// bytes:	1
// cycles:	4
// Flags:	[ - - - - ]
// Operands: E D 
void CPU::LD_E_D() { 

}

// 0x5b : LD
// bytes:	1
// cycles:	4
// Flags:	[ - - - - ]
// Operands: E E 
void CPU::LD_E_E() { 

}

// 0x5c : LD
// bytes:	1
// cycles:	4
// Flags:	[ - - - - ]
// Operands: E H 
void CPU::LD_E_H() { 

}

// 0x5d : LD
// bytes:	1
// cycles:	4
// Flags:	[ - - - - ]
// Operands: E L 
void CPU::LD_E_L() { 

}

// 0x5e : LD
// bytes:	1
// cycles:	8
// Flags:	[ - - - - ]
// Operands: E (HL) 
void CPU::LD_E_HL_E() { 

}

// 0x5f : LD
// bytes:	1
// cycles:	4
// Flags:	[ - - - - ]
// Operands: E A 
void CPU::LD_E_A() { 

}

// 0x60 : LD
// bytes:	1
// cycles:	4
// Flags:	[ - - - - ]
// Operands: H B 
void CPU::LD_H_B() { 

}

// 0x61 : LD
// bytes:	1
// cycles:	4
// Flags:	[ - - - - ]
// Operands: H C 
void CPU::LD_H_C() { 

}

// 0x62 : LD
// bytes:	1
// cycles:	4
// Flags:	[ - - - - ]
// Operands: H D 
void CPU::LD_H_D() { 

}

// 0x63 : LD
// bytes:	1
// cycles:	4
// Flags:	[ - - - - ]
// Operands: H E 
void CPU::LD_H_E() { 

}

// 0x64 : LD
// bytes:	1
// cycles:	4
// Flags:	[ - - - - ]
// Operands: H H 
void CPU::LD_H_H() { 

}

// 0x65 : LD
// bytes:	1
// cycles:	4
// Flags:	[ - - - - ]
// Operands: H L 
void CPU::LD_H_L() { 

}

// 0x66 : LD
// bytes:	1
// cycles:	8
// Flags:	[ - - - - ]
// Operands: H (HL) 
void CPU::LD_H_HL_E() { 

}

// 0x67 : LD
// bytes:	1
// cycles:	4
// Flags:	[ - - - - ]
// Operands: H A 
void CPU::LD_H_A() { 

}

// 0x68 : LD
// bytes:	1
// cycles:	4
// Flags:	[ - - - - ]
// Operands: L B 
void CPU::LD_L_B() { 

}

// 0x69 : LD
// bytes:	1
// cycles:	4
// Flags:	[ - - - - ]
// Operands: L C 
void CPU::LD_L_C() { 

}

// 0x6a : LD
// bytes:	1
// cycles:	4
// Flags:	[ - - - - ]
// Operands: L D 
void CPU::LD_L_D() { 

}

// 0x6b : LD
// bytes:	1
// cycles:	4
// Flags:	[ - - - - ]
// Operands: L E 
void CPU::LD_L_E() { 

}

// 0x6c : LD
// bytes:	1
// cycles:	4
// Flags:	[ - - - - ]
// Operands: L H 
void CPU::LD_L_H() { 

}

// 0x6d : LD
// bytes:	1
// cycles:	4
// Flags:	[ - - - - ]
// Operands: L L 
void CPU::LD_L_L() { 

}

// 0x6e : LD
// bytes:	1
// cycles:	8
// Flags:	[ - - - - ]
// Operands: L (HL) 
void CPU::LD_L_HL_E() { 

}

// 0x6f : LD
// bytes:	1
// cycles:	4
// Flags:	[ - - - - ]
// Operands: L A 
void CPU::LD_L_A() { 

}

// 0x70 : LD
// bytes:	1
// cycles:	8
// Flags:	[ - - - - ]
// Operands: (HL) B 
void CPU::LD_HL_E_B() { 

}

// 0x71 : LD
// bytes:	1
// cycles:	8
// Flags:	[ - - - - ]
// Operands: (HL) C 
void CPU::LD_HL_E_C() { 

}

// 0x72 : LD
// bytes:	1
// cycles:	8
// Flags:	[ - - - - ]
// Operands: (HL) D 
void CPU::LD_HL_E_D() { 

}

// 0x73 : LD
// bytes:	1
// cycles:	8
// Flags:	[ - - - - ]
// Operands: (HL) E 
void CPU::LD_HL_E_E() { 

}

// 0x74 : LD
// bytes:	1
// cycles:	8
// Flags:	[ - - - - ]
// Operands: (HL) H 
void CPU::LD_HL_E_H() { 

}

// 0x75 : LD
// bytes:	1
// cycles:	8
// Flags:	[ - - - - ]
// Operands: (HL) L 
void CPU::LD_HL_E_L() { 

}

// 0x76 : HALT
// bytes:	1
// cycles:	4
// Flags:	[ - - - - ]
// Operands: 
void CPU::HALT() { 

}

// 0x77 : LD
// bytes:	1
// cycles:	8
// Flags:	[ - - - - ]
// Operands: (HL) A 
void CPU::LD_HL_E_A() { 

}

// 0x78 : LD
// bytes:	1
// cycles:	4
// Flags:	[ - - - - ]
// Operands: A B 
void CPU::LD_A_B() { 

}

// 0x79 : LD
// bytes:	1
// cycles:	4
// Flags:	[ - - - - ]
// Operands: A C 
void CPU::LD_A_C() { 

}

// 0x7a : LD
// bytes:	1
// cycles:	4
// Flags:	[ - - - - ]
// Operands: A D 
void CPU::LD_A_D() { 

}

// 0x7b : LD
// bytes:	1
// cycles:	4
// Flags:	[ - - - - ]
// Operands: A E 
void CPU::LD_A_E() { 

}

// 0x7c : LD
// bytes:	1
// cycles:	4
// Flags:	[ - - - - ]
// Operands: A H 
void CPU::LD_A_H() { 

}

// 0x7d : LD
// bytes:	1
// cycles:	4
// Flags:	[ - - - - ]
// Operands: A L 
void CPU::LD_A_L() { 

}

// 0x7e : LD
// bytes:	1
// cycles:	8
// Flags:	[ - - - - ]
// Operands: A (HL) 
void CPU::LD_A_HL_E() { 

}

// 0x7f : LD
// bytes:	1
// cycles:	4
// Flags:	[ - - - - ]
// Operands: A A 
void CPU::LD_A_A() { 

}

// 0x80 : ADD
// bytes:	1
// cycles:	4
// Flags:	[ Z 0 H C ]
// Operands: A B 
void CPU::ADD_A_B() { 

}

// 0x81 : ADD
// bytes:	1
// cycles:	4
// Flags:	[ Z 0 H C ]
// Operands: A C 
void CPU::ADD_A_C() { 

}

// 0x82 : ADD
// bytes:	1
// cycles:	4
// Flags:	[ Z 0 H C ]
// Operands: A D 
void CPU::ADD_A_D() { 

}

// 0x83 : ADD
// bytes:	1
// cycles:	4
// Flags:	[ Z 0 H C ]
// Operands: A E 
void CPU::ADD_A_E() { 

}

// 0x84 : ADD
// bytes:	1
// cycles:	4
// Flags:	[ Z 0 H C ]
// Operands: A H 
void CPU::ADD_A_H() { 

}

// 0x85 : ADD
// bytes:	1
// cycles:	4
// Flags:	[ Z 0 H C ]
// Operands: A L 
void CPU::ADD_A_L() { 

}

// 0x86 : ADD
// bytes:	1
// cycles:	8
// Flags:	[ Z 0 H C ]
// Operands: A (HL) 
void CPU::ADD_A_HL_E() { 

}

// 0x87 : ADD
// bytes:	1
// cycles:	4
// Flags:	[ Z 0 H C ]
// Operands: A A 
void CPU::ADD_A_A() { 

}

// 0x88 : ADC
// bytes:	1
// cycles:	4
// Flags:	[ Z 0 H C ]
// Operands: A B 
void CPU::ADC_A_B() { 

}

// 0x89 : ADC
// bytes:	1
// cycles:	4
// Flags:	[ Z 0 H C ]
// Operands: A C 
void CPU::ADC_A_C() { 

}

// 0x8a : ADC
// bytes:	1
// cycles:	4
// Flags:	[ Z 0 H C ]
// Operands: A D 
void CPU::ADC_A_D() { 

}

// 0x8b : ADC
// bytes:	1
// cycles:	4
// Flags:	[ Z 0 H C ]
// Operands: A E 
void CPU::ADC_A_E() { 

}

// 0x8c : ADC
// bytes:	1
// cycles:	4
// Flags:	[ Z 0 H C ]
// Operands: A H 
void CPU::ADC_A_H() { 

}

// 0x8d : ADC
// bytes:	1
// cycles:	4
// Flags:	[ Z 0 H C ]
// Operands: A L 
void CPU::ADC_A_L() { 

}

// 0x8e : ADC
// bytes:	1
// cycles:	8
// Flags:	[ Z 0 H C ]
// Operands: A (HL) 
void CPU::ADC_A_HL_E() { 

}

// 0x8f : ADC
// bytes:	1
// cycles:	4
// Flags:	[ Z 0 H C ]
// Operands: A A 
void CPU::ADC_A_A() { 

}

// 0x90 : SUB
// bytes:	1
// cycles:	4
// Flags:	[ Z 1 H C ]
// Operands: B 
void CPU::SUB_B() { 

}

// 0x91 : SUB
// bytes:	1
// cycles:	4
// Flags:	[ Z 1 H C ]
// Operands: C 
void CPU::SUB_C() { 

}

// 0x92 : SUB
// bytes:	1
// cycles:	4
// Flags:	[ Z 1 H C ]
// Operands: D 
void CPU::SUB_D() { 

}

// 0x93 : SUB
// bytes:	1
// cycles:	4
// Flags:	[ Z 1 H C ]
// Operands: E 
void CPU::SUB_E() { 

}

// 0x94 : SUB
// bytes:	1
// cycles:	4
// Flags:	[ Z 1 H C ]
// Operands: H 
void CPU::SUB_H() { 

}

// 0x95 : SUB
// bytes:	1
// cycles:	4
// Flags:	[ Z 1 H C ]
// Operands: L 
void CPU::SUB_L() { 

}

// 0x96 : SUB
// bytes:	1
// cycles:	8
// Flags:	[ Z 1 H C ]
// Operands: (HL) 
void CPU::SUB_HL_E() { 

}

// 0x97 : SUB
// bytes:	1
// cycles:	4
// Flags:	[ Z 1 H C ]
// Operands: A 
void CPU::SUB_A() { 

}

// 0x98 : SBC
// bytes:	1
// cycles:	4
// Flags:	[ Z 1 H C ]
// Operands: A B 
void CPU::SBC_A_B() { 

}

// 0x99 : SBC
// bytes:	1
// cycles:	4
// Flags:	[ Z 1 H C ]
// Operands: A C 
void CPU::SBC_A_C() { 

}

// 0x9a : SBC
// bytes:	1
// cycles:	4
// Flags:	[ Z 1 H C ]
// Operands: A D 
void CPU::SBC_A_D() { 

}

// 0x9b : SBC
// bytes:	1
// cycles:	4
// Flags:	[ Z 1 H C ]
// Operands: A E 
void CPU::SBC_A_E() { 

}

// 0x9c : SBC
// bytes:	1
// cycles:	4
// Flags:	[ Z 1 H C ]
// Operands: A H 
void CPU::SBC_A_H() { 

}

// 0x9d : SBC
// bytes:	1
// cycles:	4
// Flags:	[ Z 1 H C ]
// Operands: A L 
void CPU::SBC_A_L() { 

}

// 0x9e : SBC
// bytes:	1
// cycles:	8
// Flags:	[ Z 1 H C ]
// Operands: A (HL) 
void CPU::SBC_A_HL_E() { 

}

// 0x9f : SBC
// bytes:	1
// cycles:	4
// Flags:	[ Z 1 H C ]
// Operands: A A 
void CPU::SBC_A_A() { 

}

// 0xa0 : AND
// bytes:	1
// cycles:	4
// Flags:	[ Z 0 1 0 ]
// Operands: B 
void CPU::AND_B() { 

}

// 0xa1 : AND
// bytes:	1
// cycles:	4
// Flags:	[ Z 0 1 0 ]
// Operands: C 
void CPU::AND_C() { 

}

// 0xa2 : AND
// bytes:	1
// cycles:	4
// Flags:	[ Z 0 1 0 ]
// Operands: D 
void CPU::AND_D() { 

}

// 0xa3 : AND
// bytes:	1
// cycles:	4
// Flags:	[ Z 0 1 0 ]
// Operands: E 
void CPU::AND_E() { 

}

// 0xa4 : AND
// bytes:	1
// cycles:	4
// Flags:	[ Z 0 1 0 ]
// Operands: H 
void CPU::AND_H() { 

}

// 0xa5 : AND
// bytes:	1
// cycles:	4
// Flags:	[ Z 0 1 0 ]
// Operands: L 
void CPU::AND_L() { 

}

// 0xa6 : AND
// bytes:	1
// cycles:	8
// Flags:	[ Z 0 1 0 ]
// Operands: (HL) 
void CPU::AND_HL_E() { 

}

// 0xa7 : AND
// bytes:	1
// cycles:	4
// Flags:	[ Z 0 1 0 ]
// Operands: A 
void CPU::AND_A() { 

}

// 0xa8 : XOR
// bytes:	1
// cycles:	4
// Flags:	[ Z 0 0 0 ]
// Operands: B 
void CPU::XOR_B() { 

}

// 0xa9 : XOR
// bytes:	1
// cycles:	4
// Flags:	[ Z 0 0 0 ]
// Operands: C 
void CPU::XOR_C() { 

}

// 0xaa : XOR
// bytes:	1
// cycles:	4
// Flags:	[ Z 0 0 0 ]
// Operands: D 
void CPU::XOR_D() { 

}

// 0xab : XOR
// bytes:	1
// cycles:	4
// Flags:	[ Z 0 0 0 ]
// Operands: E 
void CPU::XOR_E() { 

}

// 0xac : XOR
// bytes:	1
// cycles:	4
// Flags:	[ Z 0 0 0 ]
// Operands: H 
void CPU::XOR_H() { 

}

// 0xad : XOR
// bytes:	1
// cycles:	4
// Flags:	[ Z 0 0 0 ]
// Operands: L 
void CPU::XOR_L() { 

}

// 0xae : XOR
// bytes:	1
// cycles:	8
// Flags:	[ Z 0 0 0 ]
// Operands: (HL) 
void CPU::XOR_HL_E() { 

}

// 0xaf : XOR
// bytes:	1
// cycles:	4
// Flags:	[ Z 0 0 0 ]
// Operands: A 
void CPU::XOR_A() { 

}

// 0xb0 : OR
// bytes:	1
// cycles:	4
// Flags:	[ Z 0 0 0 ]
// Operands: B 
void CPU::OR_B() { 

}

// 0xb1 : OR
// bytes:	1
// cycles:	4
// Flags:	[ Z 0 0 0 ]
// Operands: C 
void CPU::OR_C() { 

}

// 0xb2 : OR
// bytes:	1
// cycles:	4
// Flags:	[ Z 0 0 0 ]
// Operands: D 
void CPU::OR_D() { 

}

// 0xb3 : OR
// bytes:	1
// cycles:	4
// Flags:	[ Z 0 0 0 ]
// Operands: E 
void CPU::OR_E() { 

}

// 0xb4 : OR
// bytes:	1
// cycles:	4
// Flags:	[ Z 0 0 0 ]
// Operands: H 
void CPU::OR_H() { 

}

// 0xb5 : OR
// bytes:	1
// cycles:	4
// Flags:	[ Z 0 0 0 ]
// Operands: L 
void CPU::OR_L() { 

}

// 0xb6 : OR
// bytes:	1
// cycles:	8
// Flags:	[ Z 0 0 0 ]
// Operands: (HL) 
void CPU::OR_HL_E() { 

}

// 0xb7 : OR
// bytes:	1
// cycles:	4
// Flags:	[ Z 0 0 0 ]
// Operands: A 
void CPU::OR_A() { 

}

// 0xb8 : CP
// bytes:	1
// cycles:	4
// Flags:	[ Z 1 H C ]
// Operands: B 
void CPU::CP_B() { 

}

// 0xb9 : CP
// bytes:	1
// cycles:	4
// Flags:	[ Z 1 H C ]
// Operands: C 
void CPU::CP_C() { 

}

// 0xba : CP
// bytes:	1
// cycles:	4
// Flags:	[ Z 1 H C ]
// Operands: D 
void CPU::CP_D() { 

}

// 0xbb : CP
// bytes:	1
// cycles:	4
// Flags:	[ Z 1 H C ]
// Operands: E 
void CPU::CP_E() { 

}

// 0xbc : CP
// bytes:	1
// cycles:	4
// Flags:	[ Z 1 H C ]
// Operands: H 
void CPU::CP_H() { 

}

// 0xbd : CP
// bytes:	1
// cycles:	4
// Flags:	[ Z 1 H C ]
// Operands: L 
void CPU::CP_L() { 

}

// 0xbe : CP
// bytes:	1
// cycles:	8
// Flags:	[ Z 1 H C ]
// Operands: (HL) 
void CPU::CP_HL_E() { 

}

// 0xbf : CP
// bytes:	1
// cycles:	4
// Flags:	[ Z 1 H C ]
// Operands: A 
void CPU::CP_A() { 

}

// 0xc0 : RET
// bytes:	1
// cycles:	20
// Flags:	[ - - - - ]
// Operands: NZ 
void CPU::RET_NZ() { 

}

// 0xc1 : POP
// bytes:	1
// cycles:	12
// Flags:	[ - - - - ]
// Operands: BC 
void CPU::POP_BC() { 

}

// 0xc2 : JP
// bytes:	3
// cycles:	16
// Flags:	[ - - - - ]
// Operands: NZ a16 
void CPU::JP_NZ_a16(uint8_t operand) { 

}

// 0xc3 : JP
// bytes:	3
// cycles:	16
// Flags:	[ - - - - ]
// Operands: a16 
void CPU::JP_a16(uint8_t operand) { 

}

// 0xc4 : CALL
// bytes:	3
// cycles:	24
// Flags:	[ - - - - ]
// Operands: NZ a16 
void CPU::CALL_NZ_a16(uint8_t operand) { 

}

// 0xc5 : PUSH
// bytes:	1
// cycles:	16
// Flags:	[ - - - - ]
// Operands: BC 
void CPU::PUSH_BC() { 

}

// 0xc6 : ADD
// bytes:	2
// cycles:	8
// Flags:	[ Z 0 H C ]
// Operands: A d8 
void CPU::ADD_A_d8(uint8_t operand) { 

}

// 0xc7 : RST
// bytes:	1
// cycles:	16
// Flags:	[ - - - - ]
// Operands: 00H 
void CPU::RST_00H() { 

}

// 0xc8 : RET
// bytes:	1
// cycles:	20
// Flags:	[ - - - - ]
// Operands: Z 
void CPU::RET_Z() { 

}

// 0xc9 : RET
// bytes:	1
// cycles:	16
// Flags:	[ - - - - ]
// Operands: 
void CPU::RET() { 

}

// 0xca : JP
// bytes:	3
// cycles:	16
// Flags:	[ - - - - ]
// Operands: Z a16 
void CPU::JP_Z_a16(uint8_t operand) { 

}

// 0xcb : PREFIX
// bytes:	1
// cycles:	4
// Flags:	[ - - - - ]
// Operands: CB 
void CPU::PREFIX_CB() { 

}

// 0xcc : CALL
// bytes:	3
// cycles:	24
// Flags:	[ - - - - ]
// Operands: Z a16 
void CPU::CALL_Z_a16(uint8_t operand) { 

}

// 0xcd : CALL
// bytes:	3
// cycles:	24
// Flags:	[ - - - - ]
// Operands: a16 
void CPU::CALL_a16(uint8_t operand) { 

}

// 0xce : ADC
// bytes:	2
// cycles:	8
// Flags:	[ Z 0 H C ]
// Operands: A d8 
void CPU::ADC_A_d8(uint8_t operand) { 

}

// 0xcf : RST
// bytes:	1
// cycles:	16
// Flags:	[ - - - - ]
// Operands: 08H 
void CPU::RST_08H() { 

}

// 0xd0 : RET
// bytes:	1
// cycles:	20
// Flags:	[ - - - - ]
// Operands: NC 
void CPU::RET_NC() { 

}

// 0xd1 : POP
// bytes:	1
// cycles:	12
// Flags:	[ - - - - ]
// Operands: DE 
void CPU::POP_DE() { 

}

// 0xd2 : JP
// bytes:	3
// cycles:	16
// Flags:	[ - - - - ]
// Operands: NC a16 
void CPU::JP_NC_a16(uint8_t operand) { 

}

// 0xd4 : CALL
// bytes:	3
// cycles:	24
// Flags:	[ - - - - ]
// Operands: NC a16 
void CPU::CALL_NC_a16(uint8_t operand) { 

}

// 0xd5 : PUSH
// bytes:	1
// cycles:	16
// Flags:	[ - - - - ]
// Operands: DE 
void CPU::PUSH_DE() { 

}

// 0xd6 : SUB
// bytes:	2
// cycles:	8
// Flags:	[ Z 1 H C ]
// Operands: d8 
void CPU::SUB_d8(uint8_t operand) { 

}

// 0xd7 : RST
// bytes:	1
// cycles:	16
// Flags:	[ - - - - ]
// Operands: 10H 
void CPU::RST_10H() { 

}

// 0xd8 : RET
// bytes:	1
// cycles:	20
// Flags:	[ - - - - ]
// Operands: C 
void CPU::RET_C() { 

}

// 0xd9 : RETI
// bytes:	1
// cycles:	16
// Flags:	[ - - - - ]
// Operands: 
void CPU::RETI() { 

}

// 0xda : JP
// bytes:	3
// cycles:	16
// Flags:	[ - - - - ]
// Operands: C a16 
void CPU::JP_C_a16(uint8_t operand) { 

}

// 0xdc : CALL
// bytes:	3
// cycles:	24
// Flags:	[ - - - - ]
// Operands: C a16 
void CPU::CALL_C_a16(uint8_t operand) { 

}

// 0xde : SBC
// bytes:	2
// cycles:	8
// Flags:	[ Z 1 H C ]
// Operands: A d8 
void CPU::SBC_A_d8(uint8_t operand) { 

}

// 0xdf : RST
// bytes:	1
// cycles:	16
// Flags:	[ - - - - ]
// Operands: 18H 
void CPU::RST_18H() { 

}

// 0xe0 : LDH
// bytes:	2
// cycles:	12
// Flags:	[ - - - - ]
// Operands: (a8) A 
void CPU::LDH_a8_E_A(uint8_t operand) { 

}

// 0xe1 : POP
// bytes:	1
// cycles:	12
// Flags:	[ - - - - ]
// Operands: HL 
void CPU::POP_HL() { 

}

// 0xe2 : LD
// bytes:	2
// cycles:	8
// Flags:	[ - - - - ]
// Operands: (C) A 
void CPU::LD_C_E_A() { 

}

// 0xe5 : PUSH
// bytes:	1
// cycles:	16
// Flags:	[ - - - - ]
// Operands: HL 
void CPU::PUSH_HL() { 

}

// 0xe6 : AND
// bytes:	2
// cycles:	8
// Flags:	[ Z 0 1 0 ]
// Operands: d8 
void CPU::AND_d8(uint8_t operand) { 

}

// 0xe7 : RST
// bytes:	1
// cycles:	16
// Flags:	[ - - - - ]
// Operands: 20H 
void CPU::RST_20H() { 

}

// 0xe8 : ADD
// bytes:	2
// cycles:	16
// Flags:	[ 0 0 H C ]
// Operands: SP r8 
void CPU::ADD_SP_r8(uint8_t operand) { 

}

// 0xe9 : JP
// bytes:	1
// cycles:	4
// Flags:	[ - - - - ]
// Operands: (HL) 
void CPU::JP_HL_E() { 

}

// 0xea : LD
// bytes:	3
// cycles:	16
// Flags:	[ - - - - ]
// Operands: (a16) A 
void CPU::LD_a16_E_A(uint16_t operand) { 

}

// 0xee : XOR
// bytes:	2
// cycles:	8
// Flags:	[ Z 0 0 0 ]
// Operands: d8 
void CPU::XOR_d8(uint8_t operand) { 

}

// 0xef : RST
// bytes:	1
// cycles:	16
// Flags:	[ - - - - ]
// Operands: 28H 
void CPU::RST_28H() { 

}

// 0xf0 : LDH
// bytes:	2
// cycles:	12
// Flags:	[ - - - - ]
// Operands: A (a8) 
void CPU::LDH_A_a8_E(uint8_t operand) { 

}

// 0xf1 : POP
// bytes:	1
// cycles:	12
// Flags:	[ Z N H C ]
// Operands: AF 
void CPU::POP_AF() { 

}

// 0xf2 : LD
// bytes:	2
// cycles:	8
// Flags:	[ - - - - ]
// Operands: A (C) 
void CPU::LD_A_C_E() { 

}

// 0xf3 : DI
// bytes:	1
// cycles:	4
// Flags:	[ - - - - ]
// Operands: 
void CPU::DI() { 

}

// 0xf5 : PUSH
// bytes:	1
// cycles:	16
// Flags:	[ - - - - ]
// Operands: AF 
void CPU::PUSH_AF() { 

}

// 0xf6 : OR
// bytes:	2
// cycles:	8
// Flags:	[ Z 0 0 0 ]
// Operands: d8 
void CPU::OR_d8(uint8_t operand) { 

}

// 0xf7 : RST
// bytes:	1
// cycles:	16
// Flags:	[ - - - - ]
// Operands: 30H 
void CPU::RST_30H() { 

}

// 0xf8 : LD
// bytes:	2
// cycles:	12
// Flags:	[ 0 0 H C ]
// Operands: HL SP+r8 
void CPU::LD_HL_SPIr8() { 

}

// 0xf9 : LD
// bytes:	1
// cycles:	8
// Flags:	[ - - - - ]
// Operands: SP HL 
void CPU::LD_SP_HL() { 

}

// 0xfa : LD
// bytes:	3
// cycles:	16
// Flags:	[ - - - - ]
// Operands: A (a16) 
void CPU::LD_A_a16_E(uint16_t operand) { 

}

// 0xfb : EI
// bytes:	1
// cycles:	4
// Flags:	[ - - - - ]
// Operands: 
void CPU::EI() { 

}

// 0xfe : CP
// bytes:	2
// cycles:	8
// Flags:	[ Z 1 H C ]
// Operands: d8 
void CPU::CP_d8(uint8_t operand) { 

}

// 0xff : RST
// bytes:	1
// cycles:	16
// Flags:	[ - - - - ]
// Operands: 38H 
void CPU::RST_38H() { 

}

// 0x0 : RLC
// bytes:	2
// cycles:	8
// Flags:	[ Z 0 0 C ]
// Operands: B 
void CPU::CB_RLC_B() { 

}

// 0x1 : RLC
// bytes:	2
// cycles:	8
// Flags:	[ Z 0 0 C ]
// Operands: C 
void CPU::CB_RLC_C() { 

}

// 0x2 : RLC
// bytes:	2
// cycles:	8
// Flags:	[ Z 0 0 C ]
// Operands: D 
void CPU::CB_RLC_D() { 

}

// 0x3 : RLC
// bytes:	2
// cycles:	8
// Flags:	[ Z 0 0 C ]
// Operands: E 
void CPU::CB_RLC_E() { 

}

// 0x4 : RLC
// bytes:	2
// cycles:	8
// Flags:	[ Z 0 0 C ]
// Operands: H 
void CPU::CB_RLC_H() { 

}

// 0x5 : RLC
// bytes:	2
// cycles:	8
// Flags:	[ Z 0 0 C ]
// Operands: L 
void CPU::CB_RLC_L() { 

}

// 0x6 : RLC
// bytes:	2
// cycles:	16
// Flags:	[ Z 0 0 C ]
// Operands: (HL) 
void CPU::CB_RLC_HL_E() { 

}

// 0x7 : RLC
// bytes:	2
// cycles:	8
// Flags:	[ Z 0 0 C ]
// Operands: A 
void CPU::CB_RLC_A() { 

}

// 0x8 : RRC
// bytes:	2
// cycles:	8
// Flags:	[ Z 0 0 C ]
// Operands: B 
void CPU::CB_RRC_B() { 

}

// 0x9 : RRC
// bytes:	2
// cycles:	8
// Flags:	[ Z 0 0 C ]
// Operands: C 
void CPU::CB_RRC_C() { 

}

// 0xa : RRC
// bytes:	2
// cycles:	8
// Flags:	[ Z 0 0 C ]
// Operands: D 
void CPU::CB_RRC_D() { 

}

// 0xb : RRC
// bytes:	2
// cycles:	8
// Flags:	[ Z 0 0 C ]
// Operands: E 
void CPU::CB_RRC_E() { 

}

// 0xc : RRC
// bytes:	2
// cycles:	8
// Flags:	[ Z 0 0 C ]
// Operands: H 
void CPU::CB_RRC_H() { 

}

// 0xd : RRC
// bytes:	2
// cycles:	8
// Flags:	[ Z 0 0 C ]
// Operands: L 
void CPU::CB_RRC_L() { 

}

// 0xe : RRC
// bytes:	2
// cycles:	16
// Flags:	[ Z 0 0 C ]
// Operands: (HL) 
void CPU::CB_RRC_HL_E() { 

}

// 0xf : RRC
// bytes:	2
// cycles:	8
// Flags:	[ Z 0 0 C ]
// Operands: A 
void CPU::CB_RRC_A() { 

}

// 0x10 : RL
// bytes:	2
// cycles:	8
// Flags:	[ Z 0 0 C ]
// Operands: B 
void CPU::CB_RL_B() { 

}

// 0x11 : RL
// bytes:	2
// cycles:	8
// Flags:	[ Z 0 0 C ]
// Operands: C 
void CPU::CB_RL_C() { 

}

// 0x12 : RL
// bytes:	2
// cycles:	8
// Flags:	[ Z 0 0 C ]
// Operands: D 
void CPU::CB_RL_D() { 

}

// 0x13 : RL
// bytes:	2
// cycles:	8
// Flags:	[ Z 0 0 C ]
// Operands: E 
void CPU::CB_RL_E() { 

}

// 0x14 : RL
// bytes:	2
// cycles:	8
// Flags:	[ Z 0 0 C ]
// Operands: H 
void CPU::CB_RL_H() { 

}

// 0x15 : RL
// bytes:	2
// cycles:	8
// Flags:	[ Z 0 0 C ]
// Operands: L 
void CPU::CB_RL_L() { 

}

// 0x16 : RL
// bytes:	2
// cycles:	16
// Flags:	[ Z 0 0 C ]
// Operands: (HL) 
void CPU::CB_RL_HL_E() { 

}

// 0x17 : RL
// bytes:	2
// cycles:	8
// Flags:	[ Z 0 0 C ]
// Operands: A 
void CPU::CB_RL_A() { 

}

// 0x18 : RR
// bytes:	2
// cycles:	8
// Flags:	[ Z 0 0 C ]
// Operands: B 
void CPU::CB_RR_B() { 

}

// 0x19 : RR
// bytes:	2
// cycles:	8
// Flags:	[ Z 0 0 C ]
// Operands: C 
void CPU::CB_RR_C() { 

}

// 0x1a : RR
// bytes:	2
// cycles:	8
// Flags:	[ Z 0 0 C ]
// Operands: D 
void CPU::CB_RR_D() { 

}

// 0x1b : RR
// bytes:	2
// cycles:	8
// Flags:	[ Z 0 0 C ]
// Operands: E 
void CPU::CB_RR_E() { 

}

// 0x1c : RR
// bytes:	2
// cycles:	8
// Flags:	[ Z 0 0 C ]
// Operands: H 
void CPU::CB_RR_H() { 

}

// 0x1d : RR
// bytes:	2
// cycles:	8
// Flags:	[ Z 0 0 C ]
// Operands: L 
void CPU::CB_RR_L() { 

}

// 0x1e : RR
// bytes:	2
// cycles:	16
// Flags:	[ Z 0 0 C ]
// Operands: (HL) 
void CPU::CB_RR_HL_E() { 

}

// 0x1f : RR
// bytes:	2
// cycles:	8
// Flags:	[ Z 0 0 C ]
// Operands: A 
void CPU::CB_RR_A() { 

}

// 0x20 : SLA
// bytes:	2
// cycles:	8
// Flags:	[ Z 0 0 C ]
// Operands: B 
void CPU::CB_SLA_B() { 

}

// 0x21 : SLA
// bytes:	2
// cycles:	8
// Flags:	[ Z 0 0 C ]
// Operands: C 
void CPU::CB_SLA_C() { 

}

// 0x22 : SLA
// bytes:	2
// cycles:	8
// Flags:	[ Z 0 0 C ]
// Operands: D 
void CPU::CB_SLA_D() { 

}

// 0x23 : SLA
// bytes:	2
// cycles:	8
// Flags:	[ Z 0 0 C ]
// Operands: E 
void CPU::CB_SLA_E() { 

}

// 0x24 : SLA
// bytes:	2
// cycles:	8
// Flags:	[ Z 0 0 C ]
// Operands: H 
void CPU::CB_SLA_H() { 

}

// 0x25 : SLA
// bytes:	2
// cycles:	8
// Flags:	[ Z 0 0 C ]
// Operands: L 
void CPU::CB_SLA_L() { 

}

// 0x26 : SLA
// bytes:	2
// cycles:	16
// Flags:	[ Z 0 0 C ]
// Operands: (HL) 
void CPU::CB_SLA_HL_E() { 

}

// 0x27 : SLA
// bytes:	2
// cycles:	8
// Flags:	[ Z 0 0 C ]
// Operands: A 
void CPU::CB_SLA_A() { 

}

// 0x28 : SRA
// bytes:	2
// cycles:	8
// Flags:	[ Z 0 0 0 ]
// Operands: B 
void CPU::CB_SRA_B() { 

}

// 0x29 : SRA
// bytes:	2
// cycles:	8
// Flags:	[ Z 0 0 0 ]
// Operands: C 
void CPU::CB_SRA_C() { 

}

// 0x2a : SRA
// bytes:	2
// cycles:	8
// Flags:	[ Z 0 0 0 ]
// Operands: D 
void CPU::CB_SRA_D() { 

}

// 0x2b : SRA
// bytes:	2
// cycles:	8
// Flags:	[ Z 0 0 0 ]
// Operands: E 
void CPU::CB_SRA_E() { 

}

// 0x2c : SRA
// bytes:	2
// cycles:	8
// Flags:	[ Z 0 0 0 ]
// Operands: H 
void CPU::CB_SRA_H() { 

}

// 0x2d : SRA
// bytes:	2
// cycles:	8
// Flags:	[ Z 0 0 0 ]
// Operands: L 
void CPU::CB_SRA_L() { 

}

// 0x2e : SRA
// bytes:	2
// cycles:	16
// Flags:	[ Z 0 0 0 ]
// Operands: (HL) 
void CPU::CB_SRA_HL_E() { 

}

// 0x2f : SRA
// bytes:	2
// cycles:	8
// Flags:	[ Z 0 0 0 ]
// Operands: A 
void CPU::CB_SRA_A() { 

}

// 0x30 : SWAP
// bytes:	2
// cycles:	8
// Flags:	[ Z 0 0 0 ]
// Operands: B 
void CPU::CB_SWAP_B() { 

}

// 0x31 : SWAP
// bytes:	2
// cycles:	8
// Flags:	[ Z 0 0 0 ]
// Operands: C 
void CPU::CB_SWAP_C() { 

}

// 0x32 : SWAP
// bytes:	2
// cycles:	8
// Flags:	[ Z 0 0 0 ]
// Operands: D 
void CPU::CB_SWAP_D() { 

}

// 0x33 : SWAP
// bytes:	2
// cycles:	8
// Flags:	[ Z 0 0 0 ]
// Operands: E 
void CPU::CB_SWAP_E() { 

}

// 0x34 : SWAP
// bytes:	2
// cycles:	8
// Flags:	[ Z 0 0 0 ]
// Operands: H 
void CPU::CB_SWAP_H() { 

}

// 0x35 : SWAP
// bytes:	2
// cycles:	8
// Flags:	[ Z 0 0 0 ]
// Operands: L 
void CPU::CB_SWAP_L() { 

}

// 0x36 : SWAP
// bytes:	2
// cycles:	16
// Flags:	[ Z 0 0 0 ]
// Operands: (HL) 
void CPU::CB_SWAP_HL_E() { 

}

// 0x37 : SWAP
// bytes:	2
// cycles:	8
// Flags:	[ Z 0 0 0 ]
// Operands: A 
void CPU::CB_SWAP_A() { 

}

// 0x38 : SRL
// bytes:	2
// cycles:	8
// Flags:	[ Z 0 0 C ]
// Operands: B 
void CPU::CB_SRL_B() { 

}

// 0x39 : SRL
// bytes:	2
// cycles:	8
// Flags:	[ Z 0 0 C ]
// Operands: C 
void CPU::CB_SRL_C() { 

}

// 0x3a : SRL
// bytes:	2
// cycles:	8
// Flags:	[ Z 0 0 C ]
// Operands: D 
void CPU::CB_SRL_D() { 

}

// 0x3b : SRL
// bytes:	2
// cycles:	8
// Flags:	[ Z 0 0 C ]
// Operands: E 
void CPU::CB_SRL_E() { 

}

// 0x3c : SRL
// bytes:	2
// cycles:	8
// Flags:	[ Z 0 0 C ]
// Operands: H 
void CPU::CB_SRL_H() { 

}

// 0x3d : SRL
// bytes:	2
// cycles:	8
// Flags:	[ Z 0 0 C ]
// Operands: L 
void CPU::CB_SRL_L() { 

}

// 0x3e : SRL
// bytes:	2
// cycles:	16
// Flags:	[ Z 0 0 C ]
// Operands: (HL) 
void CPU::CB_SRL_HL_E() { 

}

// 0x3f : SRL
// bytes:	2
// cycles:	8
// Flags:	[ Z 0 0 C ]
// Operands: A 
void CPU::CB_SRL_A() { 

}

// 0x40 : BIT
// bytes:	2
// cycles:	8
// Flags:	[ Z 0 1 - ]
// Operands: 0 B 
void CPU::CB_BIT_0_B() { 

}

// 0x41 : BIT
// bytes:	2
// cycles:	8
// Flags:	[ Z 0 1 - ]
// Operands: 0 C 
void CPU::CB_BIT_0_C() { 

}

// 0x42 : BIT
// bytes:	2
// cycles:	8
// Flags:	[ Z 0 1 - ]
// Operands: 0 D 
void CPU::CB_BIT_0_D() { 

}

// 0x43 : BIT
// bytes:	2
// cycles:	8
// Flags:	[ Z 0 1 - ]
// Operands: 0 E 
void CPU::CB_BIT_0_E() { 

}

// 0x44 : BIT
// bytes:	2
// cycles:	8
// Flags:	[ Z 0 1 - ]
// Operands: 0 H 
void CPU::CB_BIT_0_H() { 

}

// 0x45 : BIT
// bytes:	2
// cycles:	8
// Flags:	[ Z 0 1 - ]
// Operands: 0 L 
void CPU::CB_BIT_0_L() { 

}

// 0x46 : BIT
// bytes:	2
// cycles:	16
// Flags:	[ Z 0 1 - ]
// Operands: 0 (HL) 
void CPU::CB_BIT_0_HL_E() { 

}

// 0x47 : BIT
// bytes:	2
// cycles:	8
// Flags:	[ Z 0 1 - ]
// Operands: 0 A 
void CPU::CB_BIT_0_A() { 

}

// 0x48 : BIT
// bytes:	2
// cycles:	8
// Flags:	[ Z 0 1 - ]
// Operands: 1 B 
void CPU::CB_BIT_1_B() { 

}

// 0x49 : BIT
// bytes:	2
// cycles:	8
// Flags:	[ Z 0 1 - ]
// Operands: 1 C 
void CPU::CB_BIT_1_C() { 

}

// 0x4a : BIT
// bytes:	2
// cycles:	8
// Flags:	[ Z 0 1 - ]
// Operands: 1 D 
void CPU::CB_BIT_1_D() { 

}

// 0x4b : BIT
// bytes:	2
// cycles:	8
// Flags:	[ Z 0 1 - ]
// Operands: 1 E 
void CPU::CB_BIT_1_E() { 

}

// 0x4c : BIT
// bytes:	2
// cycles:	8
// Flags:	[ Z 0 1 - ]
// Operands: 1 H 
void CPU::CB_BIT_1_H() { 

}

// 0x4d : BIT
// bytes:	2
// cycles:	8
// Flags:	[ Z 0 1 - ]
// Operands: 1 L 
void CPU::CB_BIT_1_L() { 

}

// 0x4e : BIT
// bytes:	2
// cycles:	16
// Flags:	[ Z 0 1 - ]
// Operands: 1 (HL) 
void CPU::CB_BIT_1_HL_E() { 

}

// 0x4f : BIT
// bytes:	2
// cycles:	8
// Flags:	[ Z 0 1 - ]
// Operands: 1 A 
void CPU::CB_BIT_1_A() { 

}

// 0x50 : BIT
// bytes:	2
// cycles:	8
// Flags:	[ Z 0 1 - ]
// Operands: 2 B 
void CPU::CB_BIT_2_B() { 

}

// 0x51 : BIT
// bytes:	2
// cycles:	8
// Flags:	[ Z 0 1 - ]
// Operands: 2 C 
void CPU::CB_BIT_2_C() { 

}

// 0x52 : BIT
// bytes:	2
// cycles:	8
// Flags:	[ Z 0 1 - ]
// Operands: 2 D 
void CPU::CB_BIT_2_D() { 

}

// 0x53 : BIT
// bytes:	2
// cycles:	8
// Flags:	[ Z 0 1 - ]
// Operands: 2 E 
void CPU::CB_BIT_2_E() { 

}

// 0x54 : BIT
// bytes:	2
// cycles:	8
// Flags:	[ Z 0 1 - ]
// Operands: 2 H 
void CPU::CB_BIT_2_H() { 

}

// 0x55 : BIT
// bytes:	2
// cycles:	8
// Flags:	[ Z 0 1 - ]
// Operands: 2 L 
void CPU::CB_BIT_2_L() { 

}

// 0x56 : BIT
// bytes:	2
// cycles:	16
// Flags:	[ Z 0 1 - ]
// Operands: 2 (HL) 
void CPU::CB_BIT_2_HL_E() { 

}

// 0x57 : BIT
// bytes:	2
// cycles:	8
// Flags:	[ Z 0 1 - ]
// Operands: 2 A 
void CPU::CB_BIT_2_A() { 

}

// 0x58 : BIT
// bytes:	2
// cycles:	8
// Flags:	[ Z 0 1 - ]
// Operands: 3 B 
void CPU::CB_BIT_3_B() { 

}

// 0x59 : BIT
// bytes:	2
// cycles:	8
// Flags:	[ Z 0 1 - ]
// Operands: 3 C 
void CPU::CB_BIT_3_C() { 

}

// 0x5a : BIT
// bytes:	2
// cycles:	8
// Flags:	[ Z 0 1 - ]
// Operands: 3 D 
void CPU::CB_BIT_3_D() { 

}

// 0x5b : BIT
// bytes:	2
// cycles:	8
// Flags:	[ Z 0 1 - ]
// Operands: 3 E 
void CPU::CB_BIT_3_E() { 

}

// 0x5c : BIT
// bytes:	2
// cycles:	8
// Flags:	[ Z 0 1 - ]
// Operands: 3 H 
void CPU::CB_BIT_3_H() { 

}

// 0x5d : BIT
// bytes:	2
// cycles:	8
// Flags:	[ Z 0 1 - ]
// Operands: 3 L 
void CPU::CB_BIT_3_L() { 

}

// 0x5e : BIT
// bytes:	2
// cycles:	16
// Flags:	[ Z 0 1 - ]
// Operands: 3 (HL) 
void CPU::CB_BIT_3_HL_E() { 

}

// 0x5f : BIT
// bytes:	2
// cycles:	8
// Flags:	[ Z 0 1 - ]
// Operands: 3 A 
void CPU::CB_BIT_3_A() { 

}

// 0x60 : BIT
// bytes:	2
// cycles:	8
// Flags:	[ Z 0 1 - ]
// Operands: 4 B 
void CPU::CB_BIT_4_B() { 

}

// 0x61 : BIT
// bytes:	2
// cycles:	8
// Flags:	[ Z 0 1 - ]
// Operands: 4 C 
void CPU::CB_BIT_4_C() { 

}

// 0x62 : BIT
// bytes:	2
// cycles:	8
// Flags:	[ Z 0 1 - ]
// Operands: 4 D 
void CPU::CB_BIT_4_D() { 

}

// 0x63 : BIT
// bytes:	2
// cycles:	8
// Flags:	[ Z 0 1 - ]
// Operands: 4 E 
void CPU::CB_BIT_4_E() { 

}

// 0x64 : BIT
// bytes:	2
// cycles:	8
// Flags:	[ Z 0 1 - ]
// Operands: 4 H 
void CPU::CB_BIT_4_H() { 

}

// 0x65 : BIT
// bytes:	2
// cycles:	8
// Flags:	[ Z 0 1 - ]
// Operands: 4 L 
void CPU::CB_BIT_4_L() { 

}

// 0x66 : BIT
// bytes:	2
// cycles:	16
// Flags:	[ Z 0 1 - ]
// Operands: 4 (HL) 
void CPU::CB_BIT_4_HL_E() { 

}

// 0x67 : BIT
// bytes:	2
// cycles:	8
// Flags:	[ Z 0 1 - ]
// Operands: 4 A 
void CPU::CB_BIT_4_A() { 

}

// 0x68 : BIT
// bytes:	2
// cycles:	8
// Flags:	[ Z 0 1 - ]
// Operands: 5 B 
void CPU::CB_BIT_5_B() { 

}

// 0x69 : BIT
// bytes:	2
// cycles:	8
// Flags:	[ Z 0 1 - ]
// Operands: 5 C 
void CPU::CB_BIT_5_C() { 

}

// 0x6a : BIT
// bytes:	2
// cycles:	8
// Flags:	[ Z 0 1 - ]
// Operands: 5 D 
void CPU::CB_BIT_5_D() { 

}

// 0x6b : BIT
// bytes:	2
// cycles:	8
// Flags:	[ Z 0 1 - ]
// Operands: 5 E 
void CPU::CB_BIT_5_E() { 

}

// 0x6c : BIT
// bytes:	2
// cycles:	8
// Flags:	[ Z 0 1 - ]
// Operands: 5 H 
void CPU::CB_BIT_5_H() { 

}

// 0x6d : BIT
// bytes:	2
// cycles:	8
// Flags:	[ Z 0 1 - ]
// Operands: 5 L 
void CPU::CB_BIT_5_L() { 

}

// 0x6e : BIT
// bytes:	2
// cycles:	16
// Flags:	[ Z 0 1 - ]
// Operands: 5 (HL) 
void CPU::CB_BIT_5_HL_E() { 

}

// 0x6f : BIT
// bytes:	2
// cycles:	8
// Flags:	[ Z 0 1 - ]
// Operands: 5 A 
void CPU::CB_BIT_5_A() { 

}

// 0x70 : BIT
// bytes:	2
// cycles:	8
// Flags:	[ Z 0 1 - ]
// Operands: 6 B 
void CPU::CB_BIT_6_B() { 

}

// 0x71 : BIT
// bytes:	2
// cycles:	8
// Flags:	[ Z 0 1 - ]
// Operands: 6 C 
void CPU::CB_BIT_6_C() { 

}

// 0x72 : BIT
// bytes:	2
// cycles:	8
// Flags:	[ Z 0 1 - ]
// Operands: 6 D 
void CPU::CB_BIT_6_D() { 

}

// 0x73 : BIT
// bytes:	2
// cycles:	8
// Flags:	[ Z 0 1 - ]
// Operands: 6 E 
void CPU::CB_BIT_6_E() { 

}

// 0x74 : BIT
// bytes:	2
// cycles:	8
// Flags:	[ Z 0 1 - ]
// Operands: 6 H 
void CPU::CB_BIT_6_H() { 

}

// 0x75 : BIT
// bytes:	2
// cycles:	8
// Flags:	[ Z 0 1 - ]
// Operands: 6 L 
void CPU::CB_BIT_6_L() { 

}

// 0x76 : BIT
// bytes:	2
// cycles:	16
// Flags:	[ Z 0 1 - ]
// Operands: 6 (HL) 
void CPU::CB_BIT_6_HL_E() { 

}

// 0x77 : BIT
// bytes:	2
// cycles:	8
// Flags:	[ Z 0 1 - ]
// Operands: 6 A 
void CPU::CB_BIT_6_A() { 

}

// 0x78 : BIT
// bytes:	2
// cycles:	8
// Flags:	[ Z 0 1 - ]
// Operands: 7 B 
void CPU::CB_BIT_7_B() { 

}

// 0x79 : BIT
// bytes:	2
// cycles:	8
// Flags:	[ Z 0 1 - ]
// Operands: 7 C 
void CPU::CB_BIT_7_C() { 

}

// 0x7a : BIT
// bytes:	2
// cycles:	8
// Flags:	[ Z 0 1 - ]
// Operands: 7 D 
void CPU::CB_BIT_7_D() { 

}

// 0x7b : BIT
// bytes:	2
// cycles:	8
// Flags:	[ Z 0 1 - ]
// Operands: 7 E 
void CPU::CB_BIT_7_E() { 

}

// 0x7c : BIT
// bytes:	2
// cycles:	8
// Flags:	[ Z 0 1 - ]
// Operands: 7 H 
void CPU::CB_BIT_7_H() { 

}

// 0x7d : BIT
// bytes:	2
// cycles:	8
// Flags:	[ Z 0 1 - ]
// Operands: 7 L 
void CPU::CB_BIT_7_L() { 

}

// 0x7e : BIT
// bytes:	2
// cycles:	16
// Flags:	[ Z 0 1 - ]
// Operands: 7 (HL) 
void CPU::CB_BIT_7_HL_E() { 

}

// 0x7f : BIT
// bytes:	2
// cycles:	8
// Flags:	[ Z 0 1 - ]
// Operands: 7 A 
void CPU::CB_BIT_7_A() { 

}

// 0x80 : RES
// bytes:	2
// cycles:	8
// Flags:	[ - - - - ]
// Operands: 0 B 
void CPU::CB_RES_0_B() { 

}

// 0x81 : RES
// bytes:	2
// cycles:	8
// Flags:	[ - - - - ]
// Operands: 0 C 
void CPU::CB_RES_0_C() { 

}

// 0x82 : RES
// bytes:	2
// cycles:	8
// Flags:	[ - - - - ]
// Operands: 0 D 
void CPU::CB_RES_0_D() { 

}

// 0x83 : RES
// bytes:	2
// cycles:	8
// Flags:	[ - - - - ]
// Operands: 0 E 
void CPU::CB_RES_0_E() { 

}

// 0x84 : RES
// bytes:	2
// cycles:	8
// Flags:	[ - - - - ]
// Operands: 0 H 
void CPU::CB_RES_0_H() { 

}

// 0x85 : RES
// bytes:	2
// cycles:	8
// Flags:	[ - - - - ]
// Operands: 0 L 
void CPU::CB_RES_0_L() { 

}

// 0x86 : RES
// bytes:	2
// cycles:	16
// Flags:	[ - - - - ]
// Operands: 0 (HL) 
void CPU::CB_RES_0_HL_E() { 

}

// 0x87 : RES
// bytes:	2
// cycles:	8
// Flags:	[ - - - - ]
// Operands: 0 A 
void CPU::CB_RES_0_A() { 

}

// 0x88 : RES
// bytes:	2
// cycles:	8
// Flags:	[ - - - - ]
// Operands: 1 B 
void CPU::CB_RES_1_B() { 

}

// 0x89 : RES
// bytes:	2
// cycles:	8
// Flags:	[ - - - - ]
// Operands: 1 C 
void CPU::CB_RES_1_C() { 

}

// 0x8a : RES
// bytes:	2
// cycles:	8
// Flags:	[ - - - - ]
// Operands: 1 D 
void CPU::CB_RES_1_D() { 

}

// 0x8b : RES
// bytes:	2
// cycles:	8
// Flags:	[ - - - - ]
// Operands: 1 E 
void CPU::CB_RES_1_E() { 

}

// 0x8c : RES
// bytes:	2
// cycles:	8
// Flags:	[ - - - - ]
// Operands: 1 H 
void CPU::CB_RES_1_H() { 

}

// 0x8d : RES
// bytes:	2
// cycles:	8
// Flags:	[ - - - - ]
// Operands: 1 L 
void CPU::CB_RES_1_L() { 

}

// 0x8e : RES
// bytes:	2
// cycles:	16
// Flags:	[ - - - - ]
// Operands: 1 (HL) 
void CPU::CB_RES_1_HL_E() { 

}

// 0x8f : RES
// bytes:	2
// cycles:	8
// Flags:	[ - - - - ]
// Operands: 1 A 
void CPU::CB_RES_1_A() { 

}

// 0x90 : RES
// bytes:	2
// cycles:	8
// Flags:	[ - - - - ]
// Operands: 2 B 
void CPU::CB_RES_2_B() { 

}

// 0x91 : RES
// bytes:	2
// cycles:	8
// Flags:	[ - - - - ]
// Operands: 2 C 
void CPU::CB_RES_2_C() { 

}

// 0x92 : RES
// bytes:	2
// cycles:	8
// Flags:	[ - - - - ]
// Operands: 2 D 
void CPU::CB_RES_2_D() { 

}

// 0x93 : RES
// bytes:	2
// cycles:	8
// Flags:	[ - - - - ]
// Operands: 2 E 
void CPU::CB_RES_2_E() { 

}

// 0x94 : RES
// bytes:	2
// cycles:	8
// Flags:	[ - - - - ]
// Operands: 2 H 
void CPU::CB_RES_2_H() { 

}

// 0x95 : RES
// bytes:	2
// cycles:	8
// Flags:	[ - - - - ]
// Operands: 2 L 
void CPU::CB_RES_2_L() { 

}

// 0x96 : RES
// bytes:	2
// cycles:	16
// Flags:	[ - - - - ]
// Operands: 2 (HL) 
void CPU::CB_RES_2_HL_E() { 

}

// 0x97 : RES
// bytes:	2
// cycles:	8
// Flags:	[ - - - - ]
// Operands: 2 A 
void CPU::CB_RES_2_A() { 

}

// 0x98 : RES
// bytes:	2
// cycles:	8
// Flags:	[ - - - - ]
// Operands: 3 B 
void CPU::CB_RES_3_B() { 

}

// 0x99 : RES
// bytes:	2
// cycles:	8
// Flags:	[ - - - - ]
// Operands: 3 C 
void CPU::CB_RES_3_C() { 

}

// 0x9a : RES
// bytes:	2
// cycles:	8
// Flags:	[ - - - - ]
// Operands: 3 D 
void CPU::CB_RES_3_D() { 

}

// 0x9b : RES
// bytes:	2
// cycles:	8
// Flags:	[ - - - - ]
// Operands: 3 E 
void CPU::CB_RES_3_E() { 

}

// 0x9c : RES
// bytes:	2
// cycles:	8
// Flags:	[ - - - - ]
// Operands: 3 H 
void CPU::CB_RES_3_H() { 

}

// 0x9d : RES
// bytes:	2
// cycles:	8
// Flags:	[ - - - - ]
// Operands: 3 L 
void CPU::CB_RES_3_L() { 

}

// 0x9e : RES
// bytes:	2
// cycles:	16
// Flags:	[ - - - - ]
// Operands: 3 (HL) 
void CPU::CB_RES_3_HL_E() { 

}

// 0x9f : RES
// bytes:	2
// cycles:	8
// Flags:	[ - - - - ]
// Operands: 3 A 
void CPU::CB_RES_3_A() { 

}

// 0xa0 : RES
// bytes:	2
// cycles:	8
// Flags:	[ - - - - ]
// Operands: 4 B 
void CPU::CB_RES_4_B() { 

}

// 0xa1 : RES
// bytes:	2
// cycles:	8
// Flags:	[ - - - - ]
// Operands: 4 C 
void CPU::CB_RES_4_C() { 

}

// 0xa2 : RES
// bytes:	2
// cycles:	8
// Flags:	[ - - - - ]
// Operands: 4 D 
void CPU::CB_RES_4_D() { 

}

// 0xa3 : RES
// bytes:	2
// cycles:	8
// Flags:	[ - - - - ]
// Operands: 4 E 
void CPU::CB_RES_4_E() { 

}

// 0xa4 : RES
// bytes:	2
// cycles:	8
// Flags:	[ - - - - ]
// Operands: 4 H 
void CPU::CB_RES_4_H() { 

}

// 0xa5 : RES
// bytes:	2
// cycles:	8
// Flags:	[ - - - - ]
// Operands: 4 L 
void CPU::CB_RES_4_L() { 

}

// 0xa6 : RES
// bytes:	2
// cycles:	16
// Flags:	[ - - - - ]
// Operands: 4 (HL) 
void CPU::CB_RES_4_HL_E() { 

}

// 0xa7 : RES
// bytes:	2
// cycles:	8
// Flags:	[ - - - - ]
// Operands: 4 A 
void CPU::CB_RES_4_A() { 

}

// 0xa8 : RES
// bytes:	2
// cycles:	8
// Flags:	[ - - - - ]
// Operands: 5 B 
void CPU::CB_RES_5_B() { 

}

// 0xa9 : RES
// bytes:	2
// cycles:	8
// Flags:	[ - - - - ]
// Operands: 5 C 
void CPU::CB_RES_5_C() { 

}

// 0xaa : RES
// bytes:	2
// cycles:	8
// Flags:	[ - - - - ]
// Operands: 5 D 
void CPU::CB_RES_5_D() { 

}

// 0xab : RES
// bytes:	2
// cycles:	8
// Flags:	[ - - - - ]
// Operands: 5 E 
void CPU::CB_RES_5_E() { 

}

// 0xac : RES
// bytes:	2
// cycles:	8
// Flags:	[ - - - - ]
// Operands: 5 H 
void CPU::CB_RES_5_H() { 

}

// 0xad : RES
// bytes:	2
// cycles:	8
// Flags:	[ - - - - ]
// Operands: 5 L 
void CPU::CB_RES_5_L() { 

}

// 0xae : RES
// bytes:	2
// cycles:	16
// Flags:	[ - - - - ]
// Operands: 5 (HL) 
void CPU::CB_RES_5_HL_E() { 

}

// 0xaf : RES
// bytes:	2
// cycles:	8
// Flags:	[ - - - - ]
// Operands: 5 A 
void CPU::CB_RES_5_A() { 

}

// 0xb0 : RES
// bytes:	2
// cycles:	8
// Flags:	[ - - - - ]
// Operands: 6 B 
void CPU::CB_RES_6_B() { 

}

// 0xb1 : RES
// bytes:	2
// cycles:	8
// Flags:	[ - - - - ]
// Operands: 6 C 
void CPU::CB_RES_6_C() { 

}

// 0xb2 : RES
// bytes:	2
// cycles:	8
// Flags:	[ - - - - ]
// Operands: 6 D 
void CPU::CB_RES_6_D() { 

}

// 0xb3 : RES
// bytes:	2
// cycles:	8
// Flags:	[ - - - - ]
// Operands: 6 E 
void CPU::CB_RES_6_E() { 

}

// 0xb4 : RES
// bytes:	2
// cycles:	8
// Flags:	[ - - - - ]
// Operands: 6 H 
void CPU::CB_RES_6_H() { 

}

// 0xb5 : RES
// bytes:	2
// cycles:	8
// Flags:	[ - - - - ]
// Operands: 6 L 
void CPU::CB_RES_6_L() { 

}

// 0xb6 : RES
// bytes:	2
// cycles:	16
// Flags:	[ - - - - ]
// Operands: 6 (HL) 
void CPU::CB_RES_6_HL_E() { 

}

// 0xb7 : RES
// bytes:	2
// cycles:	8
// Flags:	[ - - - - ]
// Operands: 6 A 
void CPU::CB_RES_6_A() { 

}

// 0xb8 : RES
// bytes:	2
// cycles:	8
// Flags:	[ - - - - ]
// Operands: 7 B 
void CPU::CB_RES_7_B() { 

}

// 0xb9 : RES
// bytes:	2
// cycles:	8
// Flags:	[ - - - - ]
// Operands: 7 C 
void CPU::CB_RES_7_C() { 

}

// 0xba : RES
// bytes:	2
// cycles:	8
// Flags:	[ - - - - ]
// Operands: 7 D 
void CPU::CB_RES_7_D() { 

}

// 0xbb : RES
// bytes:	2
// cycles:	8
// Flags:	[ - - - - ]
// Operands: 7 E 
void CPU::CB_RES_7_E() { 

}

// 0xbc : RES
// bytes:	2
// cycles:	8
// Flags:	[ - - - - ]
// Operands: 7 H 
void CPU::CB_RES_7_H() { 

}

// 0xbd : RES
// bytes:	2
// cycles:	8
// Flags:	[ - - - - ]
// Operands: 7 L 
void CPU::CB_RES_7_L() { 

}

// 0xbe : RES
// bytes:	2
// cycles:	16
// Flags:	[ - - - - ]
// Operands: 7 (HL) 
void CPU::CB_RES_7_HL_E() { 

}

// 0xbf : RES
// bytes:	2
// cycles:	8
// Flags:	[ - - - - ]
// Operands: 7 A 
void CPU::CB_RES_7_A() { 

}

// 0xc0 : SET
// bytes:	2
// cycles:	8
// Flags:	[ - - - - ]
// Operands: 0 B 
void CPU::CB_SET_0_B() { 

}

// 0xc1 : SET
// bytes:	2
// cycles:	8
// Flags:	[ - - - - ]
// Operands: 0 C 
void CPU::CB_SET_0_C() { 

}

// 0xc2 : SET
// bytes:	2
// cycles:	8
// Flags:	[ - - - - ]
// Operands: 0 D 
void CPU::CB_SET_0_D() { 

}

// 0xc3 : SET
// bytes:	2
// cycles:	8
// Flags:	[ - - - - ]
// Operands: 0 E 
void CPU::CB_SET_0_E() { 

}

// 0xc4 : SET
// bytes:	2
// cycles:	8
// Flags:	[ - - - - ]
// Operands: 0 H 
void CPU::CB_SET_0_H() { 

}

// 0xc5 : SET
// bytes:	2
// cycles:	8
// Flags:	[ - - - - ]
// Operands: 0 L 
void CPU::CB_SET_0_L() { 

}

// 0xc6 : SET
// bytes:	2
// cycles:	16
// Flags:	[ - - - - ]
// Operands: 0 (HL) 
void CPU::CB_SET_0_HL_E() { 

}

// 0xc7 : SET
// bytes:	2
// cycles:	8
// Flags:	[ - - - - ]
// Operands: 0 A 
void CPU::CB_SET_0_A() { 

}

// 0xc8 : SET
// bytes:	2
// cycles:	8
// Flags:	[ - - - - ]
// Operands: 1 B 
void CPU::CB_SET_1_B() { 

}

// 0xc9 : SET
// bytes:	2
// cycles:	8
// Flags:	[ - - - - ]
// Operands: 1 C 
void CPU::CB_SET_1_C() { 

}

// 0xca : SET
// bytes:	2
// cycles:	8
// Flags:	[ - - - - ]
// Operands: 1 D 
void CPU::CB_SET_1_D() { 

}

// 0xcb : SET
// bytes:	2
// cycles:	8
// Flags:	[ - - - - ]
// Operands: 1 E 
void CPU::CB_SET_1_E() { 

}

// 0xcc : SET
// bytes:	2
// cycles:	8
// Flags:	[ - - - - ]
// Operands: 1 H 
void CPU::CB_SET_1_H() { 

}

// 0xcd : SET
// bytes:	2
// cycles:	8
// Flags:	[ - - - - ]
// Operands: 1 L 
void CPU::CB_SET_1_L() { 

}

// 0xce : SET
// bytes:	2
// cycles:	16
// Flags:	[ - - - - ]
// Operands: 1 (HL) 
void CPU::CB_SET_1_HL_E() { 

}

// 0xcf : SET
// bytes:	2
// cycles:	8
// Flags:	[ - - - - ]
// Operands: 1 A 
void CPU::CB_SET_1_A() { 

}

// 0xd0 : SET
// bytes:	2
// cycles:	8
// Flags:	[ - - - - ]
// Operands: 2 B 
void CPU::CB_SET_2_B() { 

}

// 0xd1 : SET
// bytes:	2
// cycles:	8
// Flags:	[ - - - - ]
// Operands: 2 C 
void CPU::CB_SET_2_C() { 

}

// 0xd2 : SET
// bytes:	2
// cycles:	8
// Flags:	[ - - - - ]
// Operands: 2 D 
void CPU::CB_SET_2_D() { 

}

// 0xd3 : SET
// bytes:	2
// cycles:	8
// Flags:	[ - - - - ]
// Operands: 2 E 
void CPU::CB_SET_2_E() { 

}

// 0xd4 : SET
// bytes:	2
// cycles:	8
// Flags:	[ - - - - ]
// Operands: 2 H 
void CPU::CB_SET_2_H() { 

}

// 0xd5 : SET
// bytes:	2
// cycles:	8
// Flags:	[ - - - - ]
// Operands: 2 L 
void CPU::CB_SET_2_L() { 

}

// 0xd6 : SET
// bytes:	2
// cycles:	16
// Flags:	[ - - - - ]
// Operands: 2 (HL) 
void CPU::CB_SET_2_HL_E() { 

}

// 0xd7 : SET
// bytes:	2
// cycles:	8
// Flags:	[ - - - - ]
// Operands: 2 A 
void CPU::CB_SET_2_A() { 

}

// 0xd8 : SET
// bytes:	2
// cycles:	8
// Flags:	[ - - - - ]
// Operands: 3 B 
void CPU::CB_SET_3_B() { 

}

// 0xd9 : SET
// bytes:	2
// cycles:	8
// Flags:	[ - - - - ]
// Operands: 3 C 
void CPU::CB_SET_3_C() { 

}

// 0xda : SET
// bytes:	2
// cycles:	8
// Flags:	[ - - - - ]
// Operands: 3 D 
void CPU::CB_SET_3_D() { 

}

// 0xdb : SET
// bytes:	2
// cycles:	8
// Flags:	[ - - - - ]
// Operands: 3 E 
void CPU::CB_SET_3_E() { 

}

// 0xdc : SET
// bytes:	2
// cycles:	8
// Flags:	[ - - - - ]
// Operands: 3 H 
void CPU::CB_SET_3_H() { 

}

// 0xdd : SET
// bytes:	2
// cycles:	8
// Flags:	[ - - - - ]
// Operands: 3 L 
void CPU::CB_SET_3_L() { 

}

// 0xde : SET
// bytes:	2
// cycles:	16
// Flags:	[ - - - - ]
// Operands: 3 (HL) 
void CPU::CB_SET_3_HL_E() { 

}

// 0xdf : SET
// bytes:	2
// cycles:	8
// Flags:	[ - - - - ]
// Operands: 3 A 
void CPU::CB_SET_3_A() { 

}

// 0xe0 : SET
// bytes:	2
// cycles:	8
// Flags:	[ - - - - ]
// Operands: 4 B 
void CPU::CB_SET_4_B() { 

}

// 0xe1 : SET
// bytes:	2
// cycles:	8
// Flags:	[ - - - - ]
// Operands: 4 C 
void CPU::CB_SET_4_C() { 

}

// 0xe2 : SET
// bytes:	2
// cycles:	8
// Flags:	[ - - - - ]
// Operands: 4 D 
void CPU::CB_SET_4_D() { 

}

// 0xe3 : SET
// bytes:	2
// cycles:	8
// Flags:	[ - - - - ]
// Operands: 4 E 
void CPU::CB_SET_4_E() { 

}

// 0xe4 : SET
// bytes:	2
// cycles:	8
// Flags:	[ - - - - ]
// Operands: 4 H 
void CPU::CB_SET_4_H() { 

}

// 0xe5 : SET
// bytes:	2
// cycles:	8
// Flags:	[ - - - - ]
// Operands: 4 L 
void CPU::CB_SET_4_L() { 

}

// 0xe6 : SET
// bytes:	2
// cycles:	16
// Flags:	[ - - - - ]
// Operands: 4 (HL) 
void CPU::CB_SET_4_HL_E() { 

}

// 0xe7 : SET
// bytes:	2
// cycles:	8
// Flags:	[ - - - - ]
// Operands: 4 A 
void CPU::CB_SET_4_A() { 

}

// 0xe8 : SET
// bytes:	2
// cycles:	8
// Flags:	[ - - - - ]
// Operands: 5 B 
void CPU::CB_SET_5_B() { 

}

// 0xe9 : SET
// bytes:	2
// cycles:	8
// Flags:	[ - - - - ]
// Operands: 5 C 
void CPU::CB_SET_5_C() { 

}

// 0xea : SET
// bytes:	2
// cycles:	8
// Flags:	[ - - - - ]
// Operands: 5 D 
void CPU::CB_SET_5_D() { 

}

// 0xeb : SET
// bytes:	2
// cycles:	8
// Flags:	[ - - - - ]
// Operands: 5 E 
void CPU::CB_SET_5_E() { 

}

// 0xec : SET
// bytes:	2
// cycles:	8
// Flags:	[ - - - - ]
// Operands: 5 H 
void CPU::CB_SET_5_H() { 

}

// 0xed : SET
// bytes:	2
// cycles:	8
// Flags:	[ - - - - ]
// Operands: 5 L 
void CPU::CB_SET_5_L() { 

}

// 0xee : SET
// bytes:	2
// cycles:	16
// Flags:	[ - - - - ]
// Operands: 5 (HL) 
void CPU::CB_SET_5_HL_E() { 

}

// 0xef : SET
// bytes:	2
// cycles:	8
// Flags:	[ - - - - ]
// Operands: 5 A 
void CPU::CB_SET_5_A() { 

}

// 0xf0 : SET
// bytes:	2
// cycles:	8
// Flags:	[ - - - - ]
// Operands: 6 B 
void CPU::CB_SET_6_B() { 

}

// 0xf1 : SET
// bytes:	2
// cycles:	8
// Flags:	[ - - - - ]
// Operands: 6 C 
void CPU::CB_SET_6_C() { 

}

// 0xf2 : SET
// bytes:	2
// cycles:	8
// Flags:	[ - - - - ]
// Operands: 6 D 
void CPU::CB_SET_6_D() { 

}

// 0xf3 : SET
// bytes:	2
// cycles:	8
// Flags:	[ - - - - ]
// Operands: 6 E 
void CPU::CB_SET_6_E() { 

}

// 0xf4 : SET
// bytes:	2
// cycles:	8
// Flags:	[ - - - - ]
// Operands: 6 H 
void CPU::CB_SET_6_H() { 

}

// 0xf5 : SET
// bytes:	2
// cycles:	8
// Flags:	[ - - - - ]
// Operands: 6 L 
void CPU::CB_SET_6_L() { 

}

// 0xf6 : SET
// bytes:	2
// cycles:	16
// Flags:	[ - - - - ]
// Operands: 6 (HL) 
void CPU::CB_SET_6_HL_E() { 

}

// 0xf7 : SET
// bytes:	2
// cycles:	8
// Flags:	[ - - - - ]
// Operands: 6 A 
void CPU::CB_SET_6_A() { 

}

// 0xf8 : SET
// bytes:	2
// cycles:	8
// Flags:	[ - - - - ]
// Operands: 7 B 
void CPU::CB_SET_7_B() { 

}

// 0xf9 : SET
// bytes:	2
// cycles:	8
// Flags:	[ - - - - ]
// Operands: 7 C 
void CPU::CB_SET_7_C() { 

}

// 0xfa : SET
// bytes:	2
// cycles:	8
// Flags:	[ - - - - ]
// Operands: 7 D 
void CPU::CB_SET_7_D() { 

}

// 0xfb : SET
// bytes:	2
// cycles:	8
// Flags:	[ - - - - ]
// Operands: 7 E 
void CPU::CB_SET_7_E() { 

}

// 0xfc : SET
// bytes:	2
// cycles:	8
// Flags:	[ - - - - ]
// Operands: 7 H 
void CPU::CB_SET_7_H() { 

}

// 0xfd : SET
// bytes:	2
// cycles:	8
// Flags:	[ - - - - ]
// Operands: 7 L 
void CPU::CB_SET_7_L() { 

}

// 0xfe : SET
// bytes:	2
// cycles:	16
// Flags:	[ - - - - ]
// Operands: 7 (HL) 
void CPU::CB_SET_7_HL_E() { 

}

// 0xff : SET
// bytes:	2
// cycles:	8
// Flags:	[ - - - - ]
// Operands: 7 A 
void CPU::CB_SET_7_A() { 

}

