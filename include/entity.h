#ifndef ENTITY_H
#define ENTITY_H

#include "game.h"

typedef struct CollisionResult {
            /* 0x0 */ VECTOR point;
    /* 0xC */ VECTOR unkC;
} CollisionResult; // size = 0x18

typedef struct ColliderData {
    /* 0x00 */ SVECTOR unk0[8];
    /* 0x40 */ SVECTOR unk40;
    /* 0x48 */ Entity* unk48;
    /* 0x4C */ u16 unk4C;
    /* 0x4E */ u16 unk4E;
    /* 0x50 */ CollisionResult colRes;
} ColliderData; // size = 0x68

typedef struct UnkStruct_ {
    /* 0x00 */ char pad_0[0x10];
    /* 0x10 */ CVECTOR cv;
} UnkStruct_;

typedef struct UnkStruct_Anim_8 {
    /* 0x00 */ char pad_0[0x14];
    /* 0x14 */ struct UnkStruct_** unk14;
} UnkStruct_Anim_8;

typedef struct Animation {
    /* 0x00 */ char pad_0[0x08];
    /* 0x08 */ struct UnkStruct_Anim_8* unk8;
} Animation;

typedef struct Entity {
    /* 0x0C */ char pad_0[0x4C];
    /* 0x4C */ s32 unk4C;
    /* 0x50 */ char pad_50[0xC];
    /* 0x5C */ s8 unk5C;
    /* 0x5D */ char pad_5D[0x16];
    /* 0x74 */ Animation* unk74;
    /* 0x78 */ char pad_78[0x18];
    /* 0x90 */ s32 unk90;
    /* 0x94 */ char pad_94[0x10];
    /* 0xA4 */ s32 unkA4;
} Entity;

/*
 * g_CurrentEntity is allocated in 0x1F8000A4
 * which is part of the PSX D-Cache area.
 */
extern Entity* g_CurrentEntity;
#endif
