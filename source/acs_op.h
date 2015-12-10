// Emacs style mode select -*- C++ -*-
//----------------------------------------------------------------------------
//
// Copyright(C) 2012 David Hill et al.
//
// This program is free software: you can redistribute it and/or modify
// it under the terms of the GNU General Public License as published by
// the Free Software Foundation, either version 3 of the License, or
// (at your option) any later version.
//
// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.
//
// You should have received a copy of the GNU General Public License
// along with this program.  If not, see http://www.gnu.org/licenses/
//
// Additional terms and conditions compatible with the GPLv3 apply. See the
// file COPYING-EE for details.
//
//----------------------------------------------------------------------------
//
// ACS instructions.
//
//----------------------------------------------------------------------------

// Internal instructions.
#ifdef ACS_OP
   ACS_OP(NOP, 0)
   ACS_OP(KILL, 2)

   // Special Commands
   ACS_OP(CALLFUNC,      2)
   ACS_OP(CALLFUNC_IMM, -1)
   ACS_OP(CALLFUNC_ZD,   2)
   ACS_OP(LINESPEC,      2)
   ACS_OP(LINESPEC_IMM, -1)
   ACS_OP(LINESPEC_RET,  2)

   // SET
   ACS_OP(SET_RESULT,    0)
   ACS_OP(SET_LOCALVAR,  1)
   ACS_OP(SET_MAPVAR,    1)
   ACS_OP(SET_WORLDVAR,  1)
   ACS_OP(SET_GLOBALVAR, 1)
   ACS_OP(SET_MAPARR,    1)
   ACS_OP(SET_WORLDARR,  1)
   ACS_OP(SET_GLOBALARR, 1)
   ACS_OP(SET_THINGVAR,  1)

   // GET
   ACS_OP(GET_IMM,       1)
   ACS_OP(GET_FUNCP,     1)
   ACS_OP(GET_LOCALVAR,  1)
   ACS_OP(GET_MAPVAR,    1)
   ACS_OP(GET_WORLDVAR,  1)
   ACS_OP(GET_GLOBALVAR, 1)
   ACS_OP(GET_MAPARR,    1)
   ACS_OP(GET_WORLDARR,  1)
   ACS_OP(GET_GLOBALARR, 1)
   ACS_OP(GET_STRINGARR, 0)
   ACS_OP(GET_THINGVAR,  1)
   ACS_OP(GET_LEVELARR,  0)

   // GETARR
   ACS_OP(GETARR_IMM, 1)

   // CHK
   ACS_OP(CHK_THINGVAR, 1)

   // Binary Ops
   ACS_OP(ADD_STACK,     0)
   ACS_OP(ADD_LOCALVAR,  1)
   ACS_OP(ADD_MAPVAR,    1)
   ACS_OP(ADD_WORLDVAR,  1)
   ACS_OP(ADD_GLOBALVAR, 1)
   ACS_OP(ADD_MAPARR,    1)
   ACS_OP(ADD_WORLDARR,  1)
   ACS_OP(ADD_GLOBALARR, 1)
   ACS_OP(AND_STACK,     0)
   ACS_OP(AND_LOCALVAR,  1)
   ACS_OP(AND_MAPVAR,    1)
   ACS_OP(AND_WORLDVAR,  1)
   ACS_OP(AND_GLOBALVAR, 1)
   ACS_OP(AND_MAPARR,    1)
   ACS_OP(AND_WORLDARR,  1)
   ACS_OP(AND_GLOBALARR, 1)
   ACS_OP(CMP_EQ,        0)
   ACS_OP(CMP_NE,        0)
   ACS_OP(CMP_LT,        0)
   ACS_OP(CMP_GT,        0)
   ACS_OP(CMP_LE,        0)
   ACS_OP(CMP_GE,        0)
   ACS_OP(DEC_LOCALVAR,  1)
   ACS_OP(DEC_MAPVAR,    1)
   ACS_OP(DEC_WORLDVAR,  1)
   ACS_OP(DEC_GLOBALVAR, 1)
   ACS_OP(DEC_MAPARR,    1)
   ACS_OP(DEC_WORLDARR,  1)
   ACS_OP(DEC_GLOBALARR, 1)
   ACS_OP(DIV_STACK,     0)
   ACS_OP(DIV_LOCALVAR,  1)
   ACS_OP(DIV_MAPVAR,    1)
   ACS_OP(DIV_WORLDVAR,  1)
   ACS_OP(DIV_GLOBALVAR, 1)
   ACS_OP(DIV_MAPARR,    1)
   ACS_OP(DIV_WORLDARR,  1)
   ACS_OP(DIV_GLOBALARR, 1)
   ACS_OP(DIVX_STACK,    0)
   ACS_OP(IOR_STACK,     0)
   ACS_OP(IOR_LOCALVAR,  1)
   ACS_OP(IOR_MAPVAR,    1)
   ACS_OP(IOR_WORLDVAR,  1)
   ACS_OP(IOR_GLOBALVAR, 1)
   ACS_OP(IOR_MAPARR,    1)
   ACS_OP(IOR_WORLDARR,  1)
   ACS_OP(IOR_GLOBALARR, 1)
   ACS_OP(INC_LOCALVAR,  1)
   ACS_OP(INC_MAPVAR,    1)
   ACS_OP(INC_WORLDVAR,  1)
   ACS_OP(INC_GLOBALVAR, 1)
   ACS_OP(INC_MAPARR,    1)
   ACS_OP(INC_WORLDARR,  1)
   ACS_OP(INC_GLOBALARR, 1)
   ACS_OP(LSH_STACK,     0)
   ACS_OP(LSH_LOCALVAR,  1)
   ACS_OP(LSH_MAPVAR,    1)
   ACS_OP(LSH_WORLDVAR,  1)
   ACS_OP(LSH_GLOBALVAR, 1)
   ACS_OP(LSH_MAPARR,    1)
   ACS_OP(LSH_WORLDARR,  1)
   ACS_OP(LSH_GLOBALARR, 1)
   ACS_OP(MOD_STACK,     0)
   ACS_OP(MOD_LOCALVAR,  1)
   ACS_OP(MOD_MAPVAR,    1)
   ACS_OP(MOD_WORLDVAR,  1)
   ACS_OP(MOD_GLOBALVAR, 1)
   ACS_OP(MOD_MAPARR,    1)
   ACS_OP(MOD_WORLDARR,  1)
   ACS_OP(MOD_GLOBALARR, 1)
   ACS_OP(MUL_STACK,     0)
   ACS_OP(MUL_LOCALVAR,  1)
   ACS_OP(MUL_MAPVAR,    1)
   ACS_OP(MUL_WORLDVAR,  1)
   ACS_OP(MUL_GLOBALVAR, 1)
   ACS_OP(MUL_MAPARR,    1)
   ACS_OP(MUL_WORLDARR,  1)
   ACS_OP(MUL_GLOBALARR, 1)
   ACS_OP(MULX_STACK,    0)
   ACS_OP(RSH_STACK,     0)
   ACS_OP(RSH_LOCALVAR,  1)
   ACS_OP(RSH_MAPVAR,    1)
   ACS_OP(RSH_WORLDVAR,  1)
   ACS_OP(RSH_GLOBALVAR, 1)
   ACS_OP(RSH_MAPARR,    1)
   ACS_OP(RSH_WORLDARR,  1)
   ACS_OP(RSH_GLOBALARR, 1)
   ACS_OP(SUB_STACK,     0)
   ACS_OP(SUB_LOCALVAR,  1)
   ACS_OP(SUB_MAPVAR,    1)
   ACS_OP(SUB_WORLDVAR,  1)
   ACS_OP(SUB_GLOBALVAR, 1)
   ACS_OP(SUB_MAPARR,    1)
   ACS_OP(SUB_WORLDARR,  1)
   ACS_OP(SUB_GLOBALARR, 1)
   ACS_OP(XOR_STACK,     0)
   ACS_OP(XOR_LOCALVAR,  1)
   ACS_OP(XOR_MAPVAR,    1)
   ACS_OP(XOR_WORLDVAR,  1)
   ACS_OP(XOR_GLOBALVAR, 1)
   ACS_OP(XOR_MAPARR,    1)
   ACS_OP(XOR_WORLDARR,  1)
   ACS_OP(XOR_GLOBALARR, 1)

   // Unary Ops
   ACS_OP(INVERT_STACK, 0)
   ACS_OP(NEGATE_STACK, 0)

   // Logical Ops
   ACS_OP(LOGAND_STACK, 0)
   ACS_OP(LOGIOR_STACK, 0)
   ACS_OP(LOGNOT_STACK, 0)

   // Trigonometry Ops
   ACS_OP(TRIG_COS,         0)
   ACS_OP(TRIG_SIN,         0)
   ACS_OP(TRIG_VECTORANGLE, 0)

   // Branching
   ACS_OP(BRANCH_CALL,       0)
   ACS_OP(BRANCH_CALL_IMM,   1)
   ACS_OP(BRANCH_CASE,       2)
   ACS_OP(BRANCH_CASETABLE, -1)
   ACS_OP(BRANCH_IMM,        1)
   ACS_OP(BRANCH_NOTZERO,    1)
   ACS_OP(BRANCH_RETURN,     0)
   ACS_OP(BRANCH_STACK,      0)
   ACS_OP(BRANCH_ZERO,       1)

   // Stack Control
   ACS_OP(STACK_COPY, 0)
   ACS_OP(STACK_DROP, 0)
   ACS_OP(STACK_SWAP, 0)

   // Script Control
   ACS_OP(DELAY,     0)
   ACS_OP(DELAY_IMM, 1)
   ACS_OP(POLYWAIT,     0)
   ACS_OP(POLYWAIT_IMM, 1)
   ACS_OP(SCRIPT_RESTART,   0)
   ACS_OP(SCRIPT_SUSPEND,   0)
   ACS_OP(SCRIPT_TERMINATE, 0)
   ACS_OP(SCRIPTWAIT,     0)
   ACS_OP(SCRIPTWAIT_IMM, 1)
   ACS_OP(SCRIPTWAITNAME,     0)
   ACS_OP(SCRIPTWAITNAME_IMM, 1)
   ACS_OP(TAGWAIT,     0)
   ACS_OP(TAGWAIT_IMM, 1)

   // Printing
   ACS_OP(STARTPRINT,       0)
   ACS_OP(ENDPRINT,         0)
   ACS_OP(ENDPRINTBOLD,     0)
   ACS_OP(ENDPRINTLOG,      0)
   ACS_OP(ENDPRINTSTRING,   0)
   ACS_OP(PRINTMAPARRAY,    0)
   ACS_OP(PRINTMAPRANGE,    0)
   ACS_OP(PRINTWORLDARRAY,  0)
   ACS_OP(PRINTWORLDRANGE,  0)
   ACS_OP(PRINTGLOBALARRAY, 0)
   ACS_OP(PRINTGLOBALRANGE, 0)
   ACS_OP(PRINTCHAR,        0)
   ACS_OP(PRINTFIXED,       0)
   ACS_OP(PRINTINT,         0)
   ACS_OP(PRINTINT_BIN,     0)
   ACS_OP(PRINTINT_HEX,     0)
   ACS_OP(PRINTNAME,        0)
   ACS_OP(PRINTSTRING,      0)

   // Miscellaneous
   ACS_OP(CLEARLINESPECIAL, 0)
   ACS_OP(GAMESKILL, 0)
   ACS_OP(GAMETYPE, 0)
   ACS_OP(GETSCREENHEIGHT, 0)
   ACS_OP(GETSCREENWIDTH,  0)
   ACS_OP(PLAYERCOUNT, 0)
   ACS_OP(LINEOFFSETY, 0)
   ACS_OP(LINESIDE, 0)
   ACS_OP(SETGRAVITY,     0)
   ACS_OP(SETGRAVITY_IMM, 1)
   ACS_OP(STRCPYMAP, 0)
   ACS_OP(STRCPYWORLD, 0)
   ACS_OP(STRCPYGLOBAL, 0)
   ACS_OP(STRLEN, 0)
   ACS_OP(TAGSTRING, 0)
   ACS_OP(TIMER, 0)
#endif//ACS_OP

// ACS0 instructions.
#ifdef ACS0_OP
   /*   0 */ ACS0_OP(NOP, NOP, 0, false)
   /*   1 */ ACS0_OP(SCRIPT_TERMINATE, SCRIPT_TERMINATE, 0, false)
   /*   2 */ ACS0_OP(SCRIPT_SUSPEND, SCRIPT_SUSPEND, 0, false)
   /*   3 */ ACS0_OP(GET_IMM, GET_IMM, 1, false)
   /*   4 */ ACS0_OP(LINESPEC,     LINESPEC1,     1, true)
   /*   5 */ ACS0_OP(LINESPEC,     LINESPEC2,     1, true)
   /*   6 */ ACS0_OP(LINESPEC,     LINESPEC3,     1, true)
   /*   7 */ ACS0_OP(LINESPEC,     LINESPEC4,     1, true)
   /*   8 */ ACS0_OP(LINESPEC,     LINESPEC5,     1, true)
   /*   9 */ ACS0_OP(LINESPEC_IMM, LINESPEC1_IMM, 2, false)
   /*  10 */ ACS0_OP(LINESPEC_IMM, LINESPEC2_IMM, 3, false)
   /*  11 */ ACS0_OP(LINESPEC_IMM, LINESPEC3_IMM, 4, false)
   /*  12 */ ACS0_OP(LINESPEC_IMM, LINESPEC4_IMM, 5, false)
   /*  13 */ ACS0_OP(LINESPEC_IMM, LINESPEC5_IMM, 6, false)
   /*  14 */ ACS0_OP(ADD_STACK, ADD_STACK, 0, false)
   /*  15 */ ACS0_OP(SUB_STACK, SUB_STACK, 0, false)
   /*  16 */ ACS0_OP(MUL_STACK, MUL_STACK, 0, false)
   /*  17 */ ACS0_OP(DIV_STACK, DIV_STACK, 0, false)
   /*  18 */ ACS0_OP(MOD_STACK, MOD_STACK, 0, false)
   /*  19 */ ACS0_OP(CMP_EQ, CMP_EQ, 0, false)
   /*  20 */ ACS0_OP(CMP_NE, CMP_NE, 0, false)
   /*  21 */ ACS0_OP(CMP_LT, CMP_LT, 0, false)
   /*  22 */ ACS0_OP(CMP_GT, CMP_GT, 0, false)
   /*  23 */ ACS0_OP(CMP_LE, CMP_LE, 0, false)
   /*  24 */ ACS0_OP(CMP_GE, CMP_GE, 0, false)
   /*  25 */ ACS0_OP(SET_LOCALVAR, SET_LOCALVAR, 1, true)
   /*  26 */ ACS0_OP(SET_MAPVAR,   SET_MAPVAR,   1, true)
   /*  27 */ ACS0_OP(SET_WORLDVAR, SET_WORLDVAR, 1, true)
   /*  28 */ ACS0_OP(GET_LOCALVAR, GET_LOCALVAR, 1, true)
   /*  29 */ ACS0_OP(GET_MAPVAR,   GET_MAPVAR,   1, true)
   /*  30 */ ACS0_OP(GET_WORLDVAR, GET_WORLDVAR, 1, true)
   /*  31 */ ACS0_OP(ADD_LOCALVAR, ADD_LOCALVAR, 1, true)
   /*  32 */ ACS0_OP(ADD_MAPVAR,   ADD_MAPVAR,   1, true)
   /*  33 */ ACS0_OP(ADD_WORLDVAR, ADD_WORLDVAR, 1, true)
   /*  34 */ ACS0_OP(SUB_LOCALVAR, SUB_LOCALVAR, 1, true)
   /*  35 */ ACS0_OP(SUB_MAPVAR,   SUB_MAPVAR,   1, true)
   /*  36 */ ACS0_OP(SUB_WORLDVAR, SUB_WORLDVAR, 1, true)
   /*  37 */ ACS0_OP(MUL_LOCALVAR, MUL_LOCALVAR, 1, true)
   /*  38 */ ACS0_OP(MUL_MAPVAR,   MUL_MAPVAR,   1, true)
   /*  39 */ ACS0_OP(MUL_WORLDVAR, MUL_WORLDVAR, 1, true)
   /*  40 */ ACS0_OP(DIV_LOCALVAR, DIV_LOCALVAR, 1, true)
   /*  41 */ ACS0_OP(DIV_MAPVAR,   DIV_MAPVAR,   1, true)
   /*  42 */ ACS0_OP(DIV_WORLDVAR, DIV_WORLDVAR, 1, true)
   /*  43 */ ACS0_OP(MOD_LOCALVAR, MOD_LOCALVAR, 1, true)
   /*  44 */ ACS0_OP(MOD_MAPVAR,   MOD_MAPVAR,   1, true)
   /*  45 */ ACS0_OP(MOD_WORLDVAR, MOD_WORLDVAR, 1, true)
   /*  46 */ ACS0_OP(INC_LOCALVAR, INC_LOCALVAR, 1, true)
   /*  47 */ ACS0_OP(INC_MAPVAR,   INC_MAPVAR,   1, true)
   /*  48 */ ACS0_OP(INC_WORLDVAR, INC_WORLDVAR, 1, true)
   /*  49 */ ACS0_OP(DEC_LOCALVAR, DEC_LOCALVAR, 1, true)
   /*  50 */ ACS0_OP(DEC_MAPVAR,   DEC_MAPVAR,   1, true)
   /*  51 */ ACS0_OP(DEC_WORLDVAR, DEC_WORLDVAR, 1, true)
   /*  52 */ ACS0_OP(BRANCH_IMM, BRANCH_IMM, 1, false)
   /*  53 */ ACS0_OP(BRANCH_NOTZERO, BRANCH_NOTZERO, 1, false)
   /*  54 */ ACS0_OP(STACK_DROP, STACK_DROP, 0, false)
   /*  55 */ ACS0_OP(DELAY,     DELAY,     0, false)
   /*  56 */ ACS0_OP(DELAY_IMM, DELAY_IMM, 1, false)
   /*  57 */ ACS0_OP(CALLFUNC,     RANDOM,     0, false)
   /*  58 */ ACS0_OP(CALLFUNC_IMM, RANDOM_IMM, 2, false)
   /*  59 */ ACS0_OP(CALLFUNC,     THINGCOUNT,     0, false)
   /*  60 */ ACS0_OP(CALLFUNC_IMM, THINGCOUNT_IMM, 2, false)
   /*  61 */ ACS0_OP(TAGWAIT,     TAGWAIT,     0, false)
   /*  62 */ ACS0_OP(TAGWAIT_IMM, TAGWAIT_IMM, 1, false)
   /*  63 */ ACS0_OP(POLYWAIT,     POLYWAIT,     0, false)
   /*  64 */ ACS0_OP(POLYWAIT_IMM, POLYWAIT_IMM, 1, false)
   /*  65 */ ACS0_OP(CALLFUNC,     CHANGEFLOOR,     0, false)
   /*  66 */ ACS0_OP(CALLFUNC_IMM, CHANGEFLOOR_IMM, 2, false)
   /*  67 */ ACS0_OP(CALLFUNC,     CHANGECEILING,     0, false)
   /*  68 */ ACS0_OP(CALLFUNC_IMM, CHANGECEILING_IMM, 2, false)
   /*  69 */ ACS0_OP(SCRIPT_RESTART, SCRIPT_RESTART, 0, false)
   /*  70 */ ACS0_OP(LOGAND_STACK, LOGAND_STACK, 0, false)
   /*  71 */ ACS0_OP(LOGIOR_STACK, LOGIOR_STACK, 0, false)
   /*  72 */ ACS0_OP(AND_STACK, AND_STACK, 0, false)
   /*  73 */ ACS0_OP(IOR_STACK, IOR_STACK, 0, false)
   /*  74 */ ACS0_OP(XOR_STACK, XOR_STACK, 0, false)
   /*  75 */ ACS0_OP(LOGNOT_STACK, LOGNOT_STACK, 0, false)
   /*  76 */ ACS0_OP(LSH_STACK, LSH_STACK, 0, false)
   /*  77 */ ACS0_OP(RSH_STACK, RSH_STACK, 0, false)
   /*  78 */ ACS0_OP(NEGATE_STACK, NEGATE_STACK, 0, false)
   /*  79 */ ACS0_OP(BRANCH_ZERO, BRANCH_ZERO, 1, false)
   /*  80 */ ACS0_OP(LINESIDE, LINESIDE, 0, false)
   /*  81 */ ACS0_OP(SCRIPTWAIT,     SCRIPTWAIT,     0, false)
   /*  82 */ ACS0_OP(SCRIPTWAIT_IMM, SCRIPTWAIT_IMM, 1, false)
   /*  83 */ ACS0_OP(CLEARLINESPECIAL, CLEARLINESPECIAL, 0, false)
   /*  84 */ ACS0_OP(BRANCH_CASE, BRANCH_CASE, 2, false)
   /*  85 */ ACS0_OP(STARTPRINT, STARTPRINT, 0, false)
   /*  86 */ ACS0_OP(ENDPRINT, ENDPRINT, 0, false)
   /*  87 */ ACS0_OP(PRINTSTRING, PRINTSTRING, 0, false)
   /*  88 */ ACS0_OP(PRINTINT, PRINTINT, 0, false)
   /*  89 */ ACS0_OP(PRINTCHAR, PRINTCHAR, 0, false)
   /*  90 */ ACS0_OP(PLAYERCOUNT, PLAYERCOUNT, 0, false)
   /*  91 */ ACS0_OP(GAMETYPE, GAMETYPE, 0, false)
   /*  92 */ ACS0_OP(GAMESKILL, GAMESKILL, 0, false)
   /*  93 */ ACS0_OP(TIMER, TIMER, 0, false)
   /*  94 */ ACS0_OP(CALLFUNC, SECTORSOUND, 0, false)
   /*  95 */ ACS0_OP(CALLFUNC, AMBIENTSOUND, 0, false)
   /*  96 */ ACS0_OP(CALLFUNC, SOUNDSEQUENCE, 0, false)
   /*  97 */ ACS0_OP(CALLFUNC, SETLINETEXTURE, 0, false)
   /*  98 */ ACS0_OP(CALLFUNC, SETLINEBLOCKING, 0, false)
   /*  99 */ ACS0_OP(CALLFUNC, SETLINESPECIAL, 0, false)
   /* 100 */ ACS0_OP(CALLFUNC, THINGSOUND, 0, false)
   /* 101 */ ACS0_OP(ENDPRINTBOLD, ENDPRINTBOLD, 0, false)
#endif//ACS0_OP

// ACSE (ZDoom) instructions.
#ifdef ACSE_OP
   /* 102 */ ACSE_OP(CALLFUNC, ACTIVATORSOUND, 0, false)
   /* 103 */ ACSE_OP(CALLFUNC, AMBIENTSOUNDLOCAL, 0, false)
   /* 104 */ ACSE_OP(CALLFUNC, SETLINEMONSTERBLOCKING, 0, false)
   /* 105 */ ACSE_OP(KILL, OPCODE105, 0, false)
   /* 106 */ ACSE_OP(KILL, OPCODE106, 0, false)
   /* 107 */ ACSE_OP(KILL, OPCODE107, 0, false)
   /* 108 */ ACSE_OP(KILL, OPCODE108, 0, false)
   /* 109 */ ACSE_OP(KILL, OPCODE109, 0, false)
   /* 110 */ ACSE_OP(KILL, OPCODE110, 0, false)
   /* 111 */ ACSE_OP(KILL, OPCODE111, 0, false)
   /* 112 */ ACSE_OP(KILL, OPCODE112, 0, false)
   /* 113 */ ACSE_OP(KILL, OPCODE113, 0, false)
   /* 114 */ ACSE_OP(KILL, OPCODE114, 0, false)
   /* 115 */ ACSE_OP(KILL, OPCODE115, 0, false)
   /* 116 */ ACSE_OP(KILL, OPCODE116, 0, false)
   /* 117 */ ACSE_OP(KILL, OPCODE117, 0, false)
   /* 118 */ ACSE_OP(KILL, OPCODE118, 0, false)
   /* 119 */ ACSE_OP(KILL, ACTIVATORTEAM, 0, false)
   /* 120 */ ACSE_OP(GET_THINGVAR, ACTIVATORHEALTH, 0, false)
   /* 121 */ ACSE_OP(GET_THINGVAR, ACTIVATORARMOR,  0, false)
   /* 122 */ ACSE_OP(GET_THINGVAR, ACTIVATORFRAGS,  0, false)
   /* 123 */ ACSE_OP(KILL, OPCODE123, 0, false)
   /* 124 */ ACSE_OP(KILL, BLUETEAMCOUNT, 0, false)
   /* 125 */ ACSE_OP(KILL, REDTEAMCOUNT, 0, false)
   /* 126 */ ACSE_OP(KILL, BLUETEAMSCORE, 0, false)
   /* 127 */ ACSE_OP(KILL, REDTEAMSCORE, 0, false)
   /* 128 */ ACSE_OP(GAMETYPE, GAMETYPE_ONEFLAGCTF, 0, false)
   /* 129 */ ACSE_OP(KILL, GETINVASIONWAVE, 0, false)
   /* 130 */ ACSE_OP(KILL, GETINVASIONSTATE, 0, false)
   /* 131 */ ACSE_OP(PRINTNAME, PRINTNAME, 0, false)
   /* 132 */ ACSE_OP(CALLFUNC, SETMUSIC_ST, 0, false)
   /* 133 */ ACSE_OP(KILL, CONSOLECOMMAND_IMM, 3, false)
   /* 134 */ ACSE_OP(KILL, CONSOLECOMMAND,     0, false)
   /* 135 */ ACSE_OP(GAMETYPE, GAMETYPE_SINGLEPLAYER, 0, false)
   /* 136 */ ACSE_OP(MULX_STACK, MULX_STACK, 0, false)
   /* 137 */ ACSE_OP(DIVX_STACK, DIVX_STACK, 0, false)
   /* 138 */ ACSE_OP(SETGRAVITY,     SETGRAVITY,     0, false)
   /* 139 */ ACSE_OP(SETGRAVITY_IMM, SETGRAVITY_IMM, 1, false)
   /* 140 */ ACSE_OP(KILL, SETAIRCONTROL,     0, false)
   /* 141 */ ACSE_OP(KILL, SETAIRCONTROL_IMM, 1, false)
   /* 142 */ ACSE_OP(KILL, CLEARINVENTORY, 0, false)
   /* 143 */ ACSE_OP(KILL, ADDINVENTORY,     0, false)
   /* 144 */ ACSE_OP(KILL, ADDINVENTORY_IMM, 2, false)
   /* 145 */ ACSE_OP(KILL, SUBINVENTORY,     0, false)
   /* 146 */ ACSE_OP(KILL, SUBINVENTORY_IMM, 2, false)
   /* 147 */ ACSE_OP(KILL, GETINVENTORY,     0, false)
   /* 148 */ ACSE_OP(KILL, GETINVENTORY_IMM, 1, false)
   /* 149 */ ACSE_OP(CALLFUNC,     SPAWNPOINT,     0, false)
   /* 150 */ ACSE_OP(CALLFUNC_IMM, SPAWNPOINT_IMM, 6, false)
   /* 151 */ ACSE_OP(CALLFUNC,     SPAWNSPOT,     0, false)
   /* 152 */ ACSE_OP(CALLFUNC_IMM, SPAWNSPOT_IMM, 4, false)
   /* 153 */ ACSE_OP(CALLFUNC,     SETMUSIC,     0, false)
   /* 154 */ ACSE_OP(CALLFUNC_IMM, SETMUSIC_IMM, 3, false)
   /* 155 */ ACSE_OP(CALLFUNC,     SETMUSICLOCAL,     0, false)
   /* 156 */ ACSE_OP(CALLFUNC_IMM, SETMUSICLOCAL_IMM, 3, false)
   /* 157 */ ACSE_OP(PRINTFIXED, PRINTFIXED, 0, false)
   /* 158 */ ACSE_OP(PRINTSTRING, PRINTLANGUAGE, 0, false)
   /* 159 */ ACSE_OP(KILL, STARTPRINTHUDOPTION, 0, false)
   /* 160 */ ACSE_OP(KILL, ENDPRINTHUDOPTION, 0, false)
   /* 161 */ ACSE_OP(KILL, ENDPRINTHUD, 0, false)
   /* 162 */ ACSE_OP(KILL, ENDPRINTHUDBOLD, 0, false)
   /* 163 */ ACSE_OP(KILL, OPCODE163, 0, false)
   /* 164 */ ACSE_OP(KILL, OPCODE164, 0, false)
   /* 165 */ ACSE_OP(KILL, SETFONT,     0, false)
   /* 166 */ ACSE_OP(KILL, SETFONT_IMM, 1, false)
   /* 167 */ ACSE_OP(GET_IMM, GET_IMM_BYTE, 1, false)
   /* 168 */ ACSE_OP(LINESPEC_IMM, LINESPEC1_IMM_BYTE, 2, false)
   /* 169 */ ACSE_OP(LINESPEC_IMM, LINESPEC2_IMM_BYTE, 3, false)
   /* 170 */ ACSE_OP(LINESPEC_IMM, LINESPEC3_IMM_BYTE, 4, false)
   /* 171 */ ACSE_OP(LINESPEC_IMM, LINESPEC4_IMM_BYTE, 5, false)
   /* 172 */ ACSE_OP(LINESPEC_IMM, LINESPEC5_IMM_BYTE, 6, false)
   /* 173 */ ACSE_OP(DELAY_IMM, DELAY_IMM_BYTE, 1, false)
   /* 174 */ ACSE_OP(CALLFUNC_IMM, RANDOM_IMM_BYTE, 2, false)
   /* 175 */ ACSE_OP(GETARR_IMM, GETARR_IMM_BYTE, -1, false)
   /* 176 */ ACSE_OP(GETARR_IMM, GET2_IMM_BYTE, 2, false)
   /* 177 */ ACSE_OP(GETARR_IMM, GET3_IMM_BYTE, 3, false)
   /* 178 */ ACSE_OP(GETARR_IMM, GET4_IMM_BYTE, 4, false)
   /* 179 */ ACSE_OP(GETARR_IMM, GET5_IMM_BYTE, 5, false)
   /* 180 */ ACSE_OP(CALLFUNC, SETTHINGSPECIAL, 0, false)
   /* 181 */ ACSE_OP(SET_GLOBALVAR, SET_GLOBALVAR, 1, true)
   /* 182 */ ACSE_OP(GET_GLOBALVAR, GET_GLOBALVAR, 1, true)
   /* 183 */ ACSE_OP(ADD_GLOBALVAR, ADD_GLOBALVAR, 1, true)
   /* 184 */ ACSE_OP(SUB_GLOBALVAR, SUB_GLOBALVAR, 1, true)
   /* 185 */ ACSE_OP(MUL_GLOBALVAR, MUL_GLOBALVAR, 1, true)
   /* 186 */ ACSE_OP(DIV_GLOBALVAR, DIV_GLOBALVAR, 1, true)
   /* 187 */ ACSE_OP(MOD_GLOBALVAR, MOD_GLOBALVAR, 1, true)
   /* 188 */ ACSE_OP(INC_GLOBALVAR, INC_GLOBALVAR, 1, true)
   /* 189 */ ACSE_OP(DEC_GLOBALVAR, DEC_GLOBALVAR, 1, true)
   /* 190 */ ACSE_OP(KILL, FADETO, 0, false)
   /* 191 */ ACSE_OP(KILL, FADERANGE, 0, false)
   /* 192 */ ACSE_OP(KILL, CANCELFADE, 0, false)
   /* 193 */ ACSE_OP(KILL, PLAYMOVIE, 0, false)
   /* 194 */ ACSE_OP(KILL, SETFLOORTRIGGER, 0, false)
   /* 195 */ ACSE_OP(KILL, SETCEILINGTRIGGER, 0, false)
   /* 196 */ ACSE_OP(GET_THINGVAR, GET_THINGX, 0, false)
   /* 197 */ ACSE_OP(GET_THINGVAR, GET_THINGY, 0, false)
   /* 198 */ ACSE_OP(GET_THINGVAR, GET_THINGZ, 0, false)
   /* 199 */ ACSE_OP(KILL, STARTTRANSLATION, 0, false)
   /* 200 */ ACSE_OP(KILL, TRANSLATIONRANGE1, 0, false)
   /* 201 */ ACSE_OP(KILL, TRANSLATIONRANGE2, 0, false)
   /* 202 */ ACSE_OP(KILL, ENDTRANSLATION, 0, false)
   /* 203 */ ACSE_OP(BRANCH_CALL_IMM, BRANCH_CALL_IMM,    1, true)
   /* 204 */ ACSE_OP(BRANCH_CALL_IMM, BRANCH_CALLDISCARD, 1, true)
   /* 205 */ ACSE_OP(BRANCH_RETURN,   BRANCH_RETURNVOID,  0, false)
   /* 206 */ ACSE_OP(BRANCH_RETURN,   BRANCH_RETURN,      0, false)
   /* 207 */ ACSE_OP(GET_MAPARR, GET_MAPARR, 1, true)
   /* 208 */ ACSE_OP(SET_MAPARR, SET_MAPARR, 1, true)
   /* 209 */ ACSE_OP(ADD_MAPARR, ADD_MAPARR, 1, true)
   /* 210 */ ACSE_OP(SUB_MAPARR, SUB_MAPARR, 1, true)
   /* 211 */ ACSE_OP(MUL_MAPARR, MUL_MAPARR, 1, true)
   /* 212 */ ACSE_OP(DIV_MAPARR, DIV_MAPARR, 1, true)
   /* 213 */ ACSE_OP(MOD_MAPARR, MOD_MAPARR, 1, true)
   /* 214 */ ACSE_OP(INC_MAPARR, INC_MAPARR, 1, true)
   /* 215 */ ACSE_OP(DEC_MAPARR, DEC_MAPARR, 1, true)
   /* 216 */ ACSE_OP(STACK_COPY, STACK_COPY, 0, false)
   /* 217 */ ACSE_OP(STACK_SWAP, STACK_SWAP, 0, false)
   /* 218 */ ACSE_OP(KILL, OPCODE218, 0, false)
   /* 219 */ ACSE_OP(KILL, OPCODE219, 0, false)
   /* 220 */ ACSE_OP(TRIG_SIN, TRIG_SIN, 0, false)
   /* 221 */ ACSE_OP(TRIG_COS, TRIG_COS, 0, false)
   /* 222 */ ACSE_OP(TRIG_VECTORANGLE, TRIG_VECTORANGLE, 0, false)
   /* 223 */ ACSE_OP(KILL, CHECKWEAPON, 0, false)
   /* 224 */ ACSE_OP(KILL, SETWEAPON, 0, false)
   /* 225 */ ACSE_OP(TAGSTRING, TAGSTRING, 0, false)
   /* 226 */ ACSE_OP(GET_WORLDARR, GET_WORLDARR, 1, true)
   /* 227 */ ACSE_OP(SET_WORLDARR, SET_WORLDARR, 1, true)
   /* 228 */ ACSE_OP(ADD_WORLDARR, ADD_WORLDARR, 1, true)
   /* 229 */ ACSE_OP(SUB_WORLDARR, SUB_WORLDARR, 1, true)
   /* 230 */ ACSE_OP(MUL_WORLDARR, MUL_WORLDARR, 1, true)
   /* 231 */ ACSE_OP(DIV_WORLDARR, DIV_WORLDARR, 1, true)
   /* 232 */ ACSE_OP(MOD_WORLDARR, MOD_WORLDARR, 1, true)
   /* 233 */ ACSE_OP(INC_WORLDARR, INC_WORLDARR, 1, true)
   /* 234 */ ACSE_OP(DEC_WORLDARR, DEC_WORLDARR, 1, true)
   /* 235 */ ACSE_OP(GET_GLOBALARR, GET_GLOBALARR, 1, true)
   /* 236 */ ACSE_OP(SET_GLOBALARR, SET_GLOBALARR, 1, true)
   /* 237 */ ACSE_OP(ADD_GLOBALARR, ADD_GLOBALARR, 1, true)
   /* 238 */ ACSE_OP(SUB_GLOBALARR, SUB_GLOBALARR, 1, true)
   /* 239 */ ACSE_OP(MUL_GLOBALARR, MUL_GLOBALARR, 1, true)
   /* 240 */ ACSE_OP(DIV_GLOBALARR, DIV_GLOBALARR, 1, true)
   /* 241 */ ACSE_OP(MOD_GLOBALARR, MOD_GLOBALARR, 1, true)
   /* 242 */ ACSE_OP(INC_GLOBALARR, INC_GLOBALARR, 1, true)
   /* 243 */ ACSE_OP(DEC_GLOBALARR, DEC_GLOBALARR, 1, true)
   /* 244 */ ACSE_OP(KILL, SETMARINEWEAPON, 0, false)
   /* 245 */ ACSE_OP(CALLFUNC, SET_THINGARR, 0, false)
   /* 246 */ ACSE_OP(CALLFUNC, GET_THINGARR, 0, false)
   /* 247 */ ACSE_OP(GET_THINGVAR, PLAYERNUMBER, 0, false)
   /* 248 */ ACSE_OP(GET_THINGVAR, ACTIVATORTID, 0, false)
   /* 249 */ ACSE_OP(KILL, SETMARINESPRITE, 0, false)
   /* 250 */ ACSE_OP(GETSCREENWIDTH,  GETSCREENWIDTH,  0, false)
   /* 251 */ ACSE_OP(GETSCREENHEIGHT, GETSCREENHEIGHT, 0, false)
   /* 252 */ ACSE_OP(CALLFUNC, THINGPROJECTILE, 0, false)
   /* 253 */ ACSE_OP(STRLEN, STRLEN, 0, false)
   /* 254 */ ACSE_OP(KILL, SETHUDSIZE, 0, false)
   /* 255 */ ACSE_OP(CALLFUNC, GET_CVAR, 0, false)
   /* 256 */ ACSE_OP(BRANCH_CASETABLE, BRANCH_CASETABLE, -1, false)
   /* 257 */ ACSE_OP(SET_RESULT, SET_RESULT, 0, false)
   /* 258 */ ACSE_OP(LINEOFFSETY, LINEOFFSETY, 0, false)
   /* 259 */ ACSE_OP(GET_THINGVAR, GET_THINGFLOORZ, 0, false)
   /* 260 */ ACSE_OP(GET_THINGVAR, GET_THINGANGLE, 0, false)
   /* 261 */ ACSE_OP(CALLFUNC, GETSECTORFLOORZ, 0, false)
   /* 262 */ ACSE_OP(CALLFUNC, GETSECTORCEILINGZ, 0, false)
   /* 263 */ ACSE_OP(LINESPEC_RET, LINESPEC5_RET, 1, false)
   /* 264 */ ACSE_OP(GET_THINGVAR, SIGILPIECES, 0, false)
   /* 265 */ ACSE_OP(GET_LEVELARR, GET_LEVELARR, 0, false)
   /* 266 */ ACSE_OP(KILL, CHANGESKY, 0, false)
   /* 267 */ ACSE_OP(KILL, PLAYERINGAME, 0, false)
   /* 268 */ ACSE_OP(KILL, PLAYERISBOT, 0, false)
   /* 269 */ ACSE_OP(KILL, SETCAMERATOTEXTURE, 0, false)
   /* 270 */ ACSE_OP(ENDPRINTLOG, ENDPRINTLOG, 0, false)
   /* 271 */ ACSE_OP(KILL, GETAMMOCAPACITY, 0, false)
   /* 272 */ ACSE_OP(KILL, SETAMMOCAPACITY, 0, false)
   /* 273 */ ACSE_OP(PRINTMAPARRAY, PRINTMAPARRAY, 0, false)
   /* 274 */ ACSE_OP(PRINTWORLDARRAY, PRINTWORLDARRAY, 0, false)
   /* 275 */ ACSE_OP(PRINTGLOBALARRAY, PRINTGLOBALARRAY, 0, false)
   /* 276 */ ACSE_OP(SET_THINGVAR, SET_THINGANGLE, 0, false)
   /* 277 */ ACSE_OP(KILL, OPCODE277, 0, false)
   /* 278 */ ACSE_OP(KILL, OPCODE278, 0, false)
   /* 279 */ ACSE_OP(KILL, OPCODE279, 0, false)
   /* 280 */ ACSE_OP(CALLFUNC, SPAWNPROJECTILE, 0, false)
   /* 281 */ ACSE_OP(CALLFUNC, GETSECTORLIGHTLEVEL, 0, false)
   /* 282 */ ACSE_OP(GET_THINGVAR, GET_THINGCEILINGZ, 0, false)
   /* 283 */ ACSE_OP(CALLFUNC, SETTHINGPOSITION, 0, false)
   /* 284 */ ACSE_OP(KILL, CLEARTHINGINVENTORY, 0, false)
   /* 285 */ ACSE_OP(KILL, ADDTHINGINVENTORY, 0, false)
   /* 286 */ ACSE_OP(KILL, SUBTHINGINVENTORY, 0, false)
   /* 287 */ ACSE_OP(KILL, GETTHINGINVENTORY, 0, false)
   /* 288 */ ACSE_OP(CALLFUNC, THINGCOUNTNAME, 0, false)
   /* 289 */ ACSE_OP(CALLFUNC, SPAWNSPOTANGLE, 0, false)
   /* 290 */ ACSE_OP(KILL, PLAYERCLASS, 0, false)
   /* 291 */ ACSE_OP(AND_LOCALVAR,  AND_LOCALVAR,  1, true)
   /* 292 */ ACSE_OP(AND_MAPVAR,    AND_MAPVAR,    1, true)
   /* 293 */ ACSE_OP(AND_WORLDVAR,  AND_WORLDVAR,  1, true)
   /* 294 */ ACSE_OP(AND_GLOBALVAR, AND_GLOBALVAR, 1, true)
   /* 295 */ ACSE_OP(AND_MAPARR,    AND_MAPARR,    1, true)
   /* 296 */ ACSE_OP(AND_WORLDARR,  AND_WORLDARR,  1, true)
   /* 297 */ ACSE_OP(AND_GLOBALARR, AND_GLOBALARR, 1, true)
   /* 298 */ ACSE_OP(XOR_LOCALVAR,  XOR_LOCALVAR,  1, true)
   /* 299 */ ACSE_OP(XOR_MAPVAR,    XOR_MAPVAR,    1, true)
   /* 300 */ ACSE_OP(XOR_WORLDVAR,  XOR_WORLDVAR,  1, true)
   /* 301 */ ACSE_OP(XOR_GLOBALVAR, XOR_GLOBALVAR, 1, true)
   /* 302 */ ACSE_OP(XOR_MAPARR,    XOR_MAPARR,    1, true)
   /* 303 */ ACSE_OP(XOR_WORLDARR,  XOR_WORLDARR,  1, true)
   /* 304 */ ACSE_OP(XOR_GLOBALARR, XOR_GLOBALARR, 1, true)
   /* 305 */ ACSE_OP(IOR_LOCALVAR,  IOR_LOCALVAR,  1, true)
   /* 306 */ ACSE_OP(IOR_MAPVAR,    IOR_MAPVAR,    1, true)
   /* 307 */ ACSE_OP(IOR_WORLDVAR,  IOR_WORLDVAR,  1, true)
   /* 308 */ ACSE_OP(IOR_GLOBALVAR, IOR_GLOBALVAR, 1, true)
   /* 309 */ ACSE_OP(IOR_MAPARR,    IOR_MAPARR,    1, true)
   /* 310 */ ACSE_OP(IOR_WORLDARR,  IOR_WORLDARR,  1, true)
   /* 311 */ ACSE_OP(IOR_GLOBALARR, IOR_GLOBALARR, 1, true)
   /* 312 */ ACSE_OP(LSH_LOCALVAR,  LSH_LOCALVAR,  1, true)
   /* 313 */ ACSE_OP(LSH_MAPVAR,    LSH_MAPVAR,    1, true)
   /* 314 */ ACSE_OP(LSH_WORLDVAR,  LSH_WORLDVAR,  1, true)
   /* 315 */ ACSE_OP(LSH_GLOBALVAR, LSH_GLOBALVAR, 1, true)
   /* 316 */ ACSE_OP(LSH_MAPARR,    LSH_MAPARR,    1, true)
   /* 317 */ ACSE_OP(LSH_WORLDARR,  LSH_WORLDARR,  1, true)
   /* 318 */ ACSE_OP(LSH_GLOBALARR, LSH_GLOBALARR, 1, true)
   /* 319 */ ACSE_OP(RSH_LOCALVAR,  RSH_LOCALVAR,  1, true)
   /* 320 */ ACSE_OP(RSH_MAPVAR,    RSH_MAPVAR,    1, true)
   /* 321 */ ACSE_OP(RSH_WORLDVAR,  RSH_WORLDVAR,  1, true)
   /* 322 */ ACSE_OP(RSH_GLOBALVAR, RSH_GLOBALVAR, 1, true)
   /* 323 */ ACSE_OP(RSH_MAPARR,    RSH_MAPARR,    1, true)
   /* 324 */ ACSE_OP(RSH_WORLDARR,  RSH_WORLDARR,  1, true)
   /* 325 */ ACSE_OP(RSH_GLOBALARR, RSH_GLOBALARR, 1, true)
   /* 326 */ ACSE_OP(KILL, GET_PLAYERARR, 0, false)
   /* 327 */ ACSE_OP(KILL, CHANGELEVEL, 0, false)
   /* 328 */ ACSE_OP(CALLFUNC, SECTORDAMAGE, 0, false)
   /* 329 */ ACSE_OP(CALLFUNC, REPLACETEXTURES, 0, false)
   /* 330 */ ACSE_OP(INVERT_STACK, INVERT_STACK, 0, false)
   /* 331 */ ACSE_OP(GET_THINGVAR, GET_THINGPITCH, 0, false)
   /* 332 */ ACSE_OP(SET_THINGVAR, SET_THINGPITCH, 0, false)
   /* 333 */ ACSE_OP(KILL, PRINTBIND, 0, false)
   /* 334 */ ACSE_OP(CALLFUNC, SETTHINGSTATE, 0, false)
   /* 335 */ ACSE_OP(CALLFUNC, THINGDAMAGE, 0, false)
   /* 336 */ ACSE_OP(KILL, USEINVENTORY, 0, false)
   /* 337 */ ACSE_OP(KILL, USETHINGINVENTORY, 0, false)
   /* 338 */ ACSE_OP(CHK_THINGVAR, CHK_THINGCEILINGTEXTURE, 0, false)
   /* 339 */ ACSE_OP(CHK_THINGVAR, CHK_THINGFLOORTEXTURE, 0, false)
   /* 340 */ ACSE_OP(GET_THINGVAR, GET_THINGLIGHTLEVEL, 0, false)
   /* 341 */ ACSE_OP(KILL, SETMUGSHOTSTATE, 0, false)
   /* 342 */ ACSE_OP(CALLFUNC, THINGCOUNTSECTOR, 0, false)
   /* 343 */ ACSE_OP(CALLFUNC, THINGCOUNTNAMESECTOR, 0, false)
   /* 344 */ ACSE_OP(KILL, CHECKPLAYERCAMERA, 0, false)
   /* 345 */ ACSE_OP(KILL, MORPHTHING, 0, false)
   /* 346 */ ACSE_OP(KILL, UNMORPHTHING, 0, false)
   /* 347 */ ACSE_OP(CALLFUNC, GETPLAYERINPUT, 0, false)
   /* 348 */ ACSE_OP(CALLFUNC, CLASSIFYTHING, 0, false)
   /* 349 */ ACSE_OP(PRINTINT_BIN, PRINTINT_BIN, 0, false)
   /* 350 */ ACSE_OP(PRINTINT_HEX, PRINTINT_HEX, 0, false)
   /* 351 */ ACSE_OP(CALLFUNC_ZD, CALLFUNC, 2, true)
   /* 352 */ ACSE_OP(ENDPRINTSTRING, ENDPRINTSTRING, 0, false)
   /* 353 */ ACSE_OP(PRINTMAPRANGE, PRINTMAPRANGE, 0, false)
   /* 354 */ ACSE_OP(PRINTWORLDRANGE, PRINTWORLDRANGE, 0, false)
   /* 355 */ ACSE_OP(PRINTGLOBALRANGE, PRINTGLOBALRANGE, 0, false)
   /* 356 */ ACSE_OP(STRCPYMAP, STRCPYMAP, 0, false)
   /* 357 */ ACSE_OP(STRCPYWORLD, STRCPYWORLD, 0, false)
   /* 358 */ ACSE_OP(STRCPYGLOBAL, STRCPYGLOBAL, 0, false)
   /* 359 */ ACSE_OP(GET_FUNCP, GET_FUNCP, 1, true)
   /* 360 */ ACSE_OP(BRANCH_CALL, BRANCH_CALL, 0, false)
   /* 361 */ ACSE_OP(SCRIPTWAITNAME, SCRIPTWAITNAME, 0, false)
   /* 362 */ ACSE_OP(KILL, TRANSLATIONRANGE3, 0, false)
   /* 363 */ ACSE_OP(BRANCH_STACK, BRANCH_STACK, 0, false)
#endif//ACSE_OP

// Internal callfunc functions.
#ifdef ACS_FUNC
   ACS_FUNC(NOP)
   ACS_FUNC(ActivatorSound)
   ACS_FUNC(AmbientSound)
   ACS_FUNC(AmbientSoundLocal)
   ACS_FUNC(ChangeCeiling)
   ACS_FUNC(ChangeFloor)
   ACS_FUNC(CheckSight)
   ACS_FUNC(CheckThingFlag)
   ACS_FUNC(CheckThingType)
   ACS_FUNC(ChkThingVar)
   ACS_FUNC(ClassifyThing)
   ACS_FUNC(ExecuteScriptName)
   ACS_FUNC(ExecuteScriptAlwaysName)
   ACS_FUNC(ExecuteScriptResultName)
   ACS_FUNC(GetCVar)
   ACS_FUNC(GetCVarString)
   ACS_FUNC(GetPlayerInput)
   ACS_FUNC(GetPolyobjX)
   ACS_FUNC(GetPolyobjY)
   ACS_FUNC(GetThingVar)
   ACS_FUNC(GetSectorCeilingZ)
   ACS_FUNC(GetSectorFloorZ)
   ACS_FUNC(GetSectorLightLevel)
   ACS_FUNC(IsTIDUsed)
   ACS_FUNC(PlaySound)
   ACS_FUNC(PlayThingSound)
   ACS_FUNC(Random)
   ACS_FUNC(RadiusQuake)
   ACS_FUNC(ReplaceTextures)
   ACS_FUNC(SectorDamage)
   ACS_FUNC(SectorSound)
   ACS_FUNC(SetActivator)
   ACS_FUNC(SetActivatorToTarget)
   ACS_FUNC(SetLineBlocking)
   ACS_FUNC(SetLineMonsterBlocking)
   ACS_FUNC(SetLineSpecial)
   ACS_FUNC(SetLineTexture)
   ACS_FUNC(SetMusic)
   ACS_FUNC(SetMusicLocal)
   ACS_FUNC(SetSkyDelta)
   ACS_FUNC(SetThingAngle)
   ACS_FUNC(SetThingMomentum)
   ACS_FUNC(SetThingPitch)
   ACS_FUNC(SetThingPosition)
   ACS_FUNC(SetThingSpecial)
   ACS_FUNC(SetThingState)
   ACS_FUNC(SetThingVar)
   ACS_FUNC(SoundSequence)
   ACS_FUNC(SoundSequenceThing)
   ACS_FUNC(SpawnPoint)
   ACS_FUNC(SpawnPointForced)
   ACS_FUNC(SpawnProjectile)
   ACS_FUNC(SpawnSpot)
   ACS_FUNC(SpawnSpotForced)
   ACS_FUNC(SpawnSpotAngle)
   ACS_FUNC(SpawnSpotAngleForced)
   ACS_FUNC(Sqrt)
   ACS_FUNC(SqrtFixed)
   ACS_FUNC(StopSound)
   ACS_FUNC(StrCaseCmp)
   ACS_FUNC(StrCmp)
   ACS_FUNC(StrLeft)
   ACS_FUNC(StrMid)
   ACS_FUNC(StrRight)
   ACS_FUNC(SuspendScriptName)
   ACS_FUNC(TerminateScriptName)
   ACS_FUNC(ThingCount)
   ACS_FUNC(ThingCountName)
   ACS_FUNC(ThingCountNameSector)
   ACS_FUNC(ThingCountSector)
   ACS_FUNC(ThingDamage)
   ACS_FUNC(ThingProjectile)
   ACS_FUNC(ThingSound)
   ACS_FUNC(TrigHypot)
   ACS_FUNC(UniqueTID)
#endif//ACS_FUNC

// EOF

