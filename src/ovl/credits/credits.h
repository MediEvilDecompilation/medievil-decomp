#ifndef CREDITS_H
#define CREDITS_H
#include "game.h"

typedef struct CreditsStruct {
    /* 0x00 */ char pad_0[0x84];
    /* 0x84 */ s32 unk84;
    /* 0x88 */ s32 unk88;
} CreditsStruct;

extern CreditsStruct* D_800122A0;

#endif