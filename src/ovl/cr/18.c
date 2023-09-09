#include "cr.h"

INCLUDE_ASM("asm/ovl/cr/nonmatchings/18", func_80010018);

INCLUDE_ASM("asm/ovl/cr/nonmatchings/18", func_80010278);

INCLUDE_ASM("asm/ovl/cr/nonmatchings/18", func_80010470);

INCLUDE_ASM("asm/ovl/cr/nonmatchings/18", func_80010588);

INCLUDE_ASM("asm/ovl/cr/nonmatchings/18", func_80010638);

void func_8001072C(void) {
    if ((*D_800EE978 != 0) && (D_800EDA58 != NULL) && (D_800EDA44->unk14 & 0x01000000)) {
        D_800EDA58->unkC->unkC = 0xC00;
        *D_800EE978 = 0;
    }
}

void func_8001078C(void) {
    D_800EE938 = 0;
    D_800EDC10 = 0;
}

INCLUDE_ASM("asm/ovl/cr/nonmatchings/18", func_800107A0);

INCLUDE_ASM("asm/ovl/cr/nonmatchings/18", func_80010838);
