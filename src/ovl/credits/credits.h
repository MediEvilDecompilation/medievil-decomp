#ifndef CREDITS_H
#define CREDITS_H
#include "game.h"

typedef struct CreditsStruct_unk80 {
    /* 0x00 */ char pad_0[0x4];
    /* 0x04 */ s32 unk4;

} CreditsStruct_unk80;

typedef struct CreditsStruct {
    /* 0x00 */ char pad_0[0x7C];
    /* 0x7C */ s32 unk7C;
    /* 0x80 */ CreditsStruct_unk80* unk80;
    /* 0x84 */ s32 unk84;
    /* 0x88 */ s32 unk88;
    /* 0x8C */ s16 unk8C;
    /* 0x8E */ s16 unk8E;
    /* 0x90 */ s32 unk90;
    /* 0x94 */ char pad_94[0x78];
    /* 0x10C */ s32 unk10C;
    /* 0x110 */ s32 unk110;
    /* 0x114 */ s32 unk114;
    /* 0x118 */ s32 unk118;
} CreditsStruct;

extern CreditsStruct* D_800122A0;

#endif
