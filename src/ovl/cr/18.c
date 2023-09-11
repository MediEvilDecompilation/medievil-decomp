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

void func_800107A0(void) {
    s8 temp_v1;
    u8 temp_s0;

    temp_s0 = D_800EE92C[0xC];
    if (temp_s0 == 1) {
        temp_v1 = func_80049B64(0xB621, 1)->unk5C;
        if (temp_v1 == temp_s0) {
            D_800EDC10 = temp_v1;
            D_800EE92C[0xC] = 0;
        }
    }

    temp_s0 = D_800EE92C[0xC];
    if ((temp_s0 == 2) && (func_80049B64(0xB451, 1)->unk5C == 1)) {
        D_800EDC10 = temp_s0;
        D_800EE92C[0xC] = 0;
    }
}

INCLUDE_ASM("asm/ovl/cr/nonmatchings/18", func_80010838);
