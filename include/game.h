#include "common.h"

typedef struct Entity {
    /* 0x00 */ char pad_0[0x90];
    /* 0x90 */ s32 unk90;
    /* 0x94 */ char pad_94[0x10];
    /* 0xA4 */ s32 unkA4;
} Entity;

extern Entity* g_CurrentEntity;