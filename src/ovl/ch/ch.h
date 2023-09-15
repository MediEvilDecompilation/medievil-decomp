#ifndef CH_H
#define CH_H

#include "game.h"

typedef struct Boulder {
    /* 0x00 */ char pad_0[0x3C];
    /* 0x3C */ s32 unk3C;
    /* 0x40 */ s32* unk40;
    /* 0x44 */ s32 unk44;
} Boulder;

typedef struct Gargoyle {
    /* 0x00 */ s32 fragments;
    /* 0x04 */ char pad_4[0x4];
    /* 0x08 */ s32 unk8;
} Gargoyle;

typedef struct Zarok {
    /* 0x00 */ char pad_0[0x4];
    /* 0x04 */ s32 unk4;
    /* 0x08 */ s32 unk8;
    /* 0x0C */ char pad_0C[0x30];
    /* 0x3C */ s16 unk3C;
} Zarok;

extern CVECTOR D_80014F78;

extern void func_8002BA9C(s32);
extern void func_8004847C(void*, void*);
extern s32 func_80058344(s32);
extern void DestroyFragments(s32);
extern void func_8006820C(s32, s32);

#endif