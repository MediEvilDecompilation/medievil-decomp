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

INCLUDE_ASM("asm/game/nonmatchings/91F8C", func_800B569C);

INCLUDE_ASM("asm/game/nonmatchings/91F8C", func_800B56D4);

INCLUDE_ASM("asm/game/nonmatchings/91F8C", func_800B5728);

INCLUDE_ASM("asm/game/nonmatchings/91F8C", func_800B5738);

INCLUDE_ASM("asm/game/nonmatchings/91F8C", func_800B574C);

INCLUDE_ASM("asm/game/nonmatchings/91F8C", func_800B5768);

INCLUDE_ASM("asm/game/nonmatchings/91F8C", func_800B581C);

INCLUDE_ASM("asm/game/nonmatchings/91F8C", func_800B5858);

INCLUDE_ASM("asm/game/nonmatchings/91F8C", func_800B5868);

// problem with nop-s after this function
#ifndef NON_MATCHING
INCLUDE_ASM("asm/game/nonmatchings/91F8C", func_800B5878);
#else
u8* func_800B5878(u8* arg0, u8* arg1, s32 arg2) {
    s32 var_a2;
    u8 temp_v0;
    u8* temp_v1;
    u8* var_a0;
    u8* var_a1;
    u8* var_v0;

    var_a0 = arg0;
    var_a1 = arg1;
    var_a2 = arg2;
    var_v0 = NULL;
    if (var_a0 != NULL) {
        temp_v1 = var_a0;
        if (var_a2 > 0) {
            do {
                temp_v0 = *var_a1;
                var_a1 += 1;
                var_a2 -= 1;
                *var_a0 = temp_v0;
                var_a0 += 1;
            } while (var_a2 > 0);
        }
        var_v0 = temp_v1;
    }
    return var_v0;
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

INCLUDE_ASM("asm/game/nonmatchings/91F8C", func_800B9A04);

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
