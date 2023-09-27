#ifndef LANDMAP_H
#define LANDMAP_H

#include "game.h"

typedef struct unkStruct_landmap {
    /* 0x00 */ s16 unk0;
    /* 0x02 */ s16 unk2;
    /* 0x04 */ s16 unk4;
    /* 0x06 */ s16 unk6;
    /* 0x08 */ s16 unk8;
    /* 0x0A */ char pad_A[0x06];
    /* 0x10 */ s32 unk10;
    /* 0x14 */ s32 unk14;
    /* 0x18 */ char pad_18[0xA956];
    /* 0xA96E */ s16 unkA96E;
    /* 0xA970 */ s16 unkA970;
    /* 0xA972 */ s16 unkA972;
    /* 0xA974 */ char pad_A976[0x19C];
    /* 0xAB10 */ struct unkStruct_SP_landmap_unkAB10* unkAB10;
} unkStruct_landmap;

typedef struct unkStruct_SP_landmap_unkAB10 {
    /* 0x00 */ char pad_0[0x84];
    /* 0x84 */ s16 unk84; 
    /* 0x86 */ s16 unk86;
} unkStruct_SP_landmap_unkAB10;

extern void func_8004E7B0(s32, s32, s32);
extern unkStruct_landmap* D_80014F98;

#endif