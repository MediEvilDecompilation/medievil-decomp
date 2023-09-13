#include "common.h"
#include "game.h"

typedef struct Boulder {
    char pad_0[0x3C];
    s32 unk3C;
    s32* unk40;
    s32 unk44;
} Boulder;

extern void func_8002BA9C(s32);
extern void func_800585B8(s32);
extern void func_8006820C(s32, s32);