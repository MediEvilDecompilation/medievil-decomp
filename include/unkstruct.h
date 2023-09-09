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
