#include "game.h"

INCLUDE_ASM("asm/game/nonmatchings/91F8C", func_800B3430);

INCLUDE_ASM("asm/game/nonmatchings/91F8C", func_800B36CC);

INCLUDE_ASM("asm/game/nonmatchings/91F8C", func_800B3FAC);

INCLUDE_ASM("asm/game/nonmatchings/91F8C", func_800B41C8);

INCLUDE_ASM("asm/game/nonmatchings/91F8C", func_800B4D84);

INCLUDE_ASM("asm/game/nonmatchings/91F8C", func_800B4EE4);

INCLUDE_ASM("asm/game/nonmatchings/91F8C", func_800B4F4C);

INCLUDE_ASM("asm/game/nonmatchings/91F8C", func_800B5040);

INCLUDE_ASM("asm/game/nonmatchings/91F8C", func_800B5050);

INCLUDE_ASM("asm/game/nonmatchings/91F8C", func_800B510C);

INCLUDE_ASM("asm/game/nonmatchings/91F8C", func_800B5388);

INCLUDE_ASM("asm/game/nonmatchings/91F8C", func_800B53C0);

INCLUDE_ASM("asm/game/nonmatchings/91F8C", func_800B53E4);

INCLUDE_ASM("asm/game/nonmatchings/91F8C", func_800B5404);

INCLUDE_ASM("asm/game/nonmatchings/91F8C", func_800B54D0);

INCLUDE_ASM("asm/game/nonmatchings/91F8C", func_800B55C8);

s32 func_800B569C(s32 arg0, s32* arg1) {
    func_800C1784(D_800ED0B0(), arg1);
}

// problem with nop-s after this function
#ifndef NON_MATCHING
INCLUDE_ASM("asm/game/nonmatchings/91F8C", func_800B56D4);
#else
void func_800B56D4(s32 arg0, s32 arg1, s32 arg2) {
    func_800C0ED8(D_800ED0B0(), arg1, arg2);
}
#endif

INCLUDE_ASM("asm/game/nonmatchings/91F8C", func_800B5728);

INCLUDE_ASM("asm/game/nonmatchings/91F8C", func_800B5738);

// problem with nop-s after this function
#ifndef NON_MATCHING
INCLUDE_ASM("asm/game/nonmatchings/91F8C", func_800B574C);
#else
s32 func_800B574C(void) {
    return D_800EC8F4;
}
#endif

INCLUDE_ASM("asm/game/nonmatchings/91F8C", func_800B5768);

INCLUDE_ASM("asm/game/nonmatchings/91F8C", func_800B581C);

INCLUDE_ASM("asm/game/nonmatchings/91F8C", func_800B5858);

INCLUDE_ASM("asm/game/nonmatchings/91F8C", func_800B5868);

// problem with nop-s after this function
#ifndef NON_MATCHING
INCLUDE_ASM("asm/game/nonmatchings/91F8C", func_800B5878);
#else
u8* func_800B5878(u8* arg0, u8* arg1, s32 arg2) {
    u8* ret = NULL;
    u8* temp_v1;
    if (arg0 != NULL) {
        temp_v1 = arg0;
        while (arg2 > 0) {
            *arg0 = *arg1;
            arg0++;
            arg1++;
            arg2--;
        }
        ret = temp_v1;
    }
    return ret;
}
#endif

INCLUDE_ASM("asm/game/nonmatchings/91F8C", func_800B58B8);

INCLUDE_ASM("asm/game/nonmatchings/91F8C", func_800B59C8);

INCLUDE_ASM("asm/game/nonmatchings/91F8C", func_800B5DA4);

INCLUDE_ASM("asm/game/nonmatchings/91F8C", func_800B6238);

INCLUDE_ASM("asm/game/nonmatchings/91F8C", func_800B6724);

INCLUDE_ASM("asm/game/nonmatchings/91F8C", func_800B6E70);

INCLUDE_ASM("asm/game/nonmatchings/91F8C", func_800B7224);

INCLUDE_ASM("asm/game/nonmatchings/91F8C", func_800B76BC);

INCLUDE_ASM("asm/game/nonmatchings/91F8C", func_800B7A04);

INCLUDE_ASM("asm/game/nonmatchings/91F8C", func_800B7DBC);

INCLUDE_ASM("asm/game/nonmatchings/91F8C", func_800B8288);

INCLUDE_ASM("asm/game/nonmatchings/91F8C", func_800B89A8);

INCLUDE_ASM("asm/game/nonmatchings/91F8C", func_800B906C);

// matches with gcc 2.7.2
#ifndef NON_MATCHING
INCLUDE_ASM("asm/game/nonmatchings/91F8C", func_800B9A04);
#else
s32* func_800B9A04(void) {
    *D_800EC928 = 0x100;
    D_800EC924 = 0;
    func_800B9AF4(&D_800EC904, 8);
    func_800A9220(0, &func_800B9A5C);
    return &func_800B9AC8;
}
#endif

INCLUDE_ASM("asm/game/nonmatchings/91F8C", func_800B9A5C);

INCLUDE_ASM("asm/game/nonmatchings/91F8C", func_800B9AC8);

INCLUDE_ASM("asm/game/nonmatchings/91F8C", func_800B9AF4);

INCLUDE_ASM("asm/game/nonmatchings/91F8C", func_800B9B24);

INCLUDE_ASM("asm/game/nonmatchings/91F8C", func_800B9B84);

INCLUDE_ASM("asm/game/nonmatchings/91F8C", func_800B9B94);

INCLUDE_ASM("asm/game/nonmatchings/91F8C", func_800B9BE4);

INCLUDE_ASM("asm/game/nonmatchings/91F8C", func_800B9C18);

INCLUDE_ASM("asm/game/nonmatchings/91F8C", func_800B9E8C);

INCLUDE_ASM("asm/game/nonmatchings/91F8C", func_800B9F5C);

INCLUDE_ASM("asm/game/nonmatchings/91F8C", func_800BA144);

INCLUDE_ASM("asm/game/nonmatchings/91F8C", func_800BA2E0);

INCLUDE_ASM("asm/game/nonmatchings/91F8C", func_800BA3E4);

INCLUDE_ASM("asm/game/nonmatchings/91F8C", func_800BA4A4);

INCLUDE_ASM("asm/game/nonmatchings/91F8C", func_800BA4C4);

INCLUDE_ASM("asm/game/nonmatchings/91F8C", func_800BA4D4);

INCLUDE_ASM("asm/game/nonmatchings/91F8C", func_800BAC58);

INCLUDE_ASM("asm/game/nonmatchings/91F8C", func_800BAC7C);

INCLUDE_ASM("asm/game/nonmatchings/91F8C", func_800BAC8C);

INCLUDE_ASM("asm/game/nonmatchings/91F8C", func_800BACC8);

INCLUDE_ASM("asm/game/nonmatchings/91F8C", func_800BACD8);

INCLUDE_ASM("asm/game/nonmatchings/91F8C", func_800BAD24);

INCLUDE_ASM("asm/game/nonmatchings/91F8C", func_800BAEA4);

INCLUDE_ASM("asm/game/nonmatchings/91F8C", func_800BAF50);
