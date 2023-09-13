#include "common.h"
#include "game.h"

typedef struct Boulder {
    /* 0x00 */ char pad_0[0x3C];
    /* 0x3C */ s32 unk3C;
    /* 0x40 */ s32* unk40;
    /* 0x44 */ s32 unk44;
} Boulder;

extern void func_8002BA9C(s32);
extern void func_8004847C(void*, void*);
extern s32 func_80058344(s32);
extern void func_800585B8(s32);
extern void func_8006820C(s32, s32);