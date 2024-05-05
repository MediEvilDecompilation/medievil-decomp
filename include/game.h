#include "common.h"
#include <psyq/LIBGTE.H>
#include "entity.h"

extern s32* D_800EC9D8;
extern s32 D_800EC8F4;
extern s32 D_800F6CF0;
extern s32 D_800F6CF4;
extern s32 D_800F6CF8;
extern s32 D_800F6CFC;
extern s32 func_800C0ED8(s32, s32, s32);
extern s32 (*D_800ED0B0)();
extern s32 func_800C1784(s32, s32);

extern u16 D_800EA27E;
extern u16* D_800EB30C;

extern s32 func_800A9220(s32, s32*);
extern s32 func_800B9AF4(s32*, s32);
extern s32 D_800EC904;
extern s32 D_800EC924;
extern s32* D_800EC928;
extern s32 func_800B9A5C;
extern s32 func_800B9AC8;
extern s32 D_800F6D08;
extern void func_80059CCC();
extern void func_80059E58();
extern void func_80099AFC();
extern s32 D_800CDF5C[];
extern s32 D_800EE020;
extern u16 D_800EEE5E;
extern s32 D_800EEE64;
extern void func_8002348C(s32, s32, s32);
extern s32 D_800EDFF8;
extern s32 D_800EEE24;
extern unkStruct_800F191C D_800F191C;
extern bool func_8009B23C();
extern void func_80099B84(s32);
extern void func_80099BC8(s32);
extern void func_80065F6C(s32);
extern void func_8005CEE0(s32);
extern void func_8002D0A0();
extern void func_80040B5C();
extern void func_8004D3D8();
extern void func_8004EC8C();
extern void func_8005E314();
extern void func_800646B4();
extern void func_80065904();
extern void func_80069BB8();
extern void func_800716FC();
extern void func_80075A88();
extern void func_8009BF68();
extern s32* (*D_800EE030)();
extern void (*D_800EE1BC)();
extern void func_80048214();
extern void func_800A3BE0();
extern void func_800A42B4(s32);
extern void func_800A0CB4();
extern void func_800B3430();
extern s32 D_800EDBF8;
extern s32 D_800EE0B4;
extern s32 D_800F17B8;
extern s32 func_8009D484(s16, s16);
extern s32 func_800A403C(s32, s32);
extern void func_8008D56C(s32);

typedef struct {
    /* 0x00 */ char pad_0[0x18];
    /* 0x18 */ s32 unk18;
    /* 0x1C */ char pad_1C[0x4];
    /* 0x20 */ s32 unk20;
} unkStruct_8003C3F4;

typedef struct {
    /* 0x00 */ char pad_0[0x2];
    /* 0x02 */ u16 unk2;
    /* 0x04 */ char pad_4[0x6];
    /* 0x0A */ u16 unkA;
    /* 0x0C */ char pad_C[0xE];
    /* 0x1A */ u16 unk1A;
    /* 0x1C */ char pad_1C[0x10];
    /* 0x2C */ s32 unk2C;
} unkStruct_800A4B5C;

typedef struct {
    /* 0x00 */ char pad_0[0x6A];
    /* 0x6A */ s16 unk6A;
    /* 0x6C */ s16 unk6C;
    /* 0x6E */ s16 unk6E;
} unkStruct_800A0748;

typedef struct {
    /* 0x00 */ char pad_0[0x8];
    /* 0x08 */ s32 unk8;
} unkStruct_80099B84;

typedef struct {
    /* 0x00 */ s32* unk0;
    /* 0x04 */ s32 unk4;
} unkStruct_80061D70;

typedef struct {
    /* 0x00 */ char pad_0[0x120];
    /* 0x120 */ s8 unk120;
    /* 0x121 */ s8 unk121;
    /* 0x122 */ s8 unk122;
} unkStruct_800A0724;

typedef struct unkStruct_8008E45C {
/* 0x00 */ char pad_0[0xE];
/* 0x0E */ s16 unkE;
/* 0x10 */ char pad_10[0x9];
/* 0x19 */ u8 unk19;
} unkStruct_8008E45C;

typedef struct {
    /* 0x00 */ char pad_0[0x8E];
    /* 0x8E */ s16 unk8E;
} unkStruct_800A519C;

typedef struct {
    /* 0x00 */ char pad_0[0x03];
    /* 0x03 */ s8 unk3;
    /* 0x04 */ s32 unk4;
    /* 0x08 */ s32 unk8;
} unkStruct_8009CE8C;

typedef struct {
    /* 0x00 */ s16 unk0;
    /* 0x02 */ s16 unk2;
} unkStruct_8009CE8C_2;

typedef struct {
    /* 0x00 */ char pad_0[0x1C0];
    /* 0x1C0 */s32 unk1C0;
} unkStruct_80080E0C;

typedef struct{
    /* 0x00 */ char pad_0[0x0C];
    /* 0x0C */ s16 unkC;
    /* 0x0E */ char pad_E[0x0E];
    /* 0x1C */ s16 unk1C;
} unkStruct_800A64C4;
