#ifndef UNKSTRUCT_H
#define UNKSTRUCT_H

#include "types.h"

typedef struct unkStruct_800A63B0 {
    /* 0x00 */ char pad_0[4];
    /* 0x04 */ u8 unk4;
    /* 0x05 */ s8 unk5;
    /* 0x06 */ s8 unk6;
    /* 0x07 */ char pad_7[9];
    /* 0x10 */ s8 unk10;
    /* 0x11 */ s8 unk11;
    /* 0x12 */ s8 unk12;
    /* 0x16 */ char pad_16[2];
    /* 0x18 */ s32 unk18;
    /* 0x1C */ s16 unk1C;
} unkStruct_800A63B0;

typedef struct unkStruct_800EDA44_2 {
    /* 0x00 */ char pad_0[0xC];
    /* 0x0C */ s32 unkC;
} unkStruct_800EDA44_2;

typedef struct unkStruct_800EDA44 {
    /* 0x00 */ char pad_0[0xC];
    /* 0x0C */ struct unkStruct_800EDA44_2* unkC;
    /* 0x10 */ char pad_10[4];
    /* 0x14 */ s32 unk14;
} unkStruct_800EDA44;

typedef struct unkStruct_RET_80049B64 {
    char pad_0[0x5C];
    s8 unk5C;
} unkStruct_RET_80049B64;

typedef struct {
    /* 0x000 */ char pad_0[0x530];
    /* 0x530 */ s32 unk530;
} unkStruct_800EDB3C;

typedef struct {
    /* 0x00 */ char pad_10[0xB];
    /* 0x0B */ s8 unkB;
    /* 0x0C */ u8 unkC;
    /* 0x0D */ char pad_0D[0x3F];
    /* 0x4C */ s32* unk4C;
} unkStruct_D_800EE92C;

typedef struct {
    /* 0x00 */ char pad_0[0x98];
    /* 0x98 */ s16 unk98;
    /* 0x9A */ s16 unk9A;
} unkStruct_800EEE64;

typedef struct unkStruct_SP_80010638_unk80 {
    /* 0x00 */ s32 unk0;
    /* 0x04 */ char pad_4[0x3E];
    /* 0x42 */ s16 unk42;
} unkStruct_SP_80010638_unk80;

typedef struct unkStruct_SP_80010638 {
    /* 0x00 */ s32 unk0;
    /* 0x04 */ char pad_4[0x7C];
    /* 0x80 */ struct unkStruct_SP_80010638_unk80* unk80;
} unkStruct_SP_80010638;

typedef struct unkStruct_800F191C {
    /* 0x00 */ char pad_0[0x4];
    /* 0x04 */ s8 unk4;
    /* 0x05 */ s8 unk5;
} unkStruct_800F191C;

typedef struct unkStruct_800145B0 {
    /* 0x00 */ char pad_0[0x10];
    /* 0x10 */ s32 unk10;
    /* 0x14 */ s32 unk14;
} unkStruct_800145B0;

#endif
