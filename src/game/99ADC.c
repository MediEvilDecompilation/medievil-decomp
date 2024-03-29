#include "game.h"

INCLUDE_ASM("asm/game/nonmatchings/99ADC", func_800BAF80);

INCLUDE_ASM("asm/game/nonmatchings/99ADC", func_800BAF98);

INCLUDE_ASM("asm/game/nonmatchings/99ADC", func_800BAFA8);

INCLUDE_ASM("asm/game/nonmatchings/99ADC", func_800BAFB8);

INCLUDE_ASM("asm/game/nonmatchings/99ADC", func_800BB064);

INCLUDE_ASM("asm/game/nonmatchings/99ADC", func_800BB0AC);

INCLUDE_ASM("asm/game/nonmatchings/99ADC", func_800BB0C0);

INCLUDE_ASM("asm/game/nonmatchings/99ADC", func_800BB0D4);

INCLUDE_ASM("asm/game/nonmatchings/99ADC", func_800BB0E8);

INCLUDE_ASM("asm/game/nonmatchings/99ADC", func_800BB0FC);

// matches with gcc 2.7.2
#ifndef NON_MATCHING
INCLUDE_ASM("asm/game/nonmatchings/99ADC", func_800BB110);
#else
s32 func_800BB110(void) {
    D_800F6D08 = 1;
    return 0;
}
#endif

INCLUDE_ASM("asm/game/nonmatchings/99ADC", func_800BB124);

INCLUDE_ASM("asm/game/nonmatchings/99ADC", func_800BB138);

INCLUDE_ASM("asm/game/nonmatchings/99ADC", func_800BB168);

INCLUDE_ASM("asm/game/nonmatchings/99ADC", func_800BB344);

INCLUDE_ASM("asm/game/nonmatchings/99ADC", func_800BB3F8);

INCLUDE_ASM("asm/game/nonmatchings/99ADC", func_800BB500);

INCLUDE_ASM("asm/game/nonmatchings/99ADC", func_800BB5D8);

// matches with gcc 2.7.2
#ifndef NON_MATCHING
INCLUDE_ASM("asm/game/nonmatchings/99ADC", func_800BB6B0);
#else
s32 func_800BB6B0(void) {
    return D_800F6CF0 + (D_800F6CF4 * 2) + (D_800F6CF8 * 4) + (D_800F6CFC * 8);
}
#endif

INCLUDE_ASM("asm/game/nonmatchings/99ADC", func_800BB6EC);

INCLUDE_ASM("asm/game/nonmatchings/99ADC", func_800BB728);

INCLUDE_ASM("asm/game/nonmatchings/99ADC", func_800BB738);

INCLUDE_ASM("asm/game/nonmatchings/99ADC", func_800BB7B4);

// matches with gcc 2.7.2
#ifndef NON_MATCHING
INCLUDE_ASM("asm/game/nonmatchings/99ADC", func_800BB820);
#else
u32 func_800BB820(void) {
    return D_800EC9B4 >> 0x1F;
}
#endif

INCLUDE_ASM("asm/game/nonmatchings/99ADC", func_800BB838);

INCLUDE_ASM("asm/game/nonmatchings/99ADC", func_800BB848);

INCLUDE_ASM("asm/game/nonmatchings/99ADC", func_800BB888);

INCLUDE_ASM("asm/game/nonmatchings/99ADC", func_800BB898);

INCLUDE_ASM("asm/game/nonmatchings/99ADC", func_800BB8A8);

INCLUDE_ASM("asm/game/nonmatchings/99ADC", func_800BB8B8);

INCLUDE_ASM("asm/game/nonmatchings/99ADC", func_800BB8C8);

INCLUDE_ASM("asm/game/nonmatchings/99ADC", func_800BB8D8);

INCLUDE_ASM("asm/game/nonmatchings/99ADC", func_800BB8E8);

INCLUDE_ASM("asm/game/nonmatchings/99ADC", func_800BBA84);

INCLUDE_ASM("asm/game/nonmatchings/99ADC", func_800BBB88);

INCLUDE_ASM("asm/game/nonmatchings/99ADC", func_800BBB98);

INCLUDE_ASM("asm/game/nonmatchings/99ADC", func_800BBBA8);

INCLUDE_ASM("asm/game/nonmatchings/99ADC", func_800BBBB8);

INCLUDE_ASM("asm/game/nonmatchings/99ADC", func_800BBBC8);

INCLUDE_ASM("asm/game/nonmatchings/99ADC", func_800BBE58);

INCLUDE_ASM("asm/game/nonmatchings/99ADC", func_800BC018);

INCLUDE_ASM("asm/game/nonmatchings/99ADC", func_800BC0D4);

INCLUDE_ASM("asm/game/nonmatchings/99ADC", func_800BC354);

INCLUDE_ASM("asm/game/nonmatchings/99ADC", func_800BC3D8);

INCLUDE_ASM("asm/game/nonmatchings/99ADC", func_800BC41C);

INCLUDE_ASM("asm/game/nonmatchings/99ADC", func_800BC4C0);

// matches with gcc 2.7.2
#ifndef NON_MATCHING
INCLUDE_ASM("asm/game/nonmatchings/99ADC", func_800BC518);
#else
s32 func_800BC518(void) {
    *D_800EC9D8 = (*D_800EC9D8 & 0xF0FFFFFF) | 0x20000000;
}
#endif

// matches with gcc 2.7.2
#ifndef NON_MATCHING
INCLUDE_ASM("asm/game/nonmatchings/99ADC", func_800BC540);
#else
s32 func_800BC540(void) {
    *D_800EC9D8 = (*D_800EC9D8 & 0xF0FFFFFF) | 0x22000000;
}
#endif

INCLUDE_ASM("asm/game/nonmatchings/99ADC", func_800BC568);
