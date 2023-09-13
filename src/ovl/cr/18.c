#include "cr.h"

INCLUDE_ASM("asm/ovl/cr/nonmatchings/18", func_80010018);

INCLUDE_ASM("asm/ovl/cr/nonmatchings/18", func_80010278);

INCLUDE_ASM("asm/ovl/cr/nonmatchings/18", func_80010470);

INCLUDE_ASM("asm/ovl/cr/nonmatchings/18", func_80010588);

#ifndef NON_MATCHING
INCLUDE_ASM("asm/ovl/cr/nonmatchings/18", func_80010638);
#else
extern s32 func_800713CC(s32);
extern void func_80047F98(unkStruct_SP_80010638_unk80*);

void func_80010638(void) {
    s32* temp_s1 = D_800EE92C.unk4C;
    unkStruct_SP_80010638* temp_a0;
    unkStruct_SP_80010638_unk80* temp_a0_2;
    
    if (func_800713CC(0xB621) == 0) {
        func_8007134C(0xB621, 0);
        D_800EE92C.unkB = 1;
        func_80064148(&D_800111D0, 0);
    } else {
        func_80047F60(D_800EDB3C->unk530);
        func_800485EC(-0x5CA, 0, 0x11, 1);
        temp_a0 = *(unkStruct_SP_80010638**)0x1F8000A4;
        temp_a0->unk80->unk42 = 0x400;
        temp_a0_2 = temp_a0->unk80;
        temp_a0_2->unk0 |= 0x20000;
        func_80047F98(temp_a0_2);
        if (D_800EEE64.unk98 == -1) {
            D_800EEE64.unk98 = -0x8000;
        } else {
            D_800EEE64.unk9A = 0;
        }
    }
    *temp_s1 = 1;
}
#endif


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
    u8 temp_s0 = D_800EE92C.unkC;
    s8 temp_v1;
    
    if (temp_s0 == 1) {
        temp_v1 = func_80049B64(0xB621, 1)->unk5C;
        if (temp_v1 == temp_s0) {
            D_800EDC10 = temp_v1;
            D_800EE92C.unkC = 0;
        }
    }

    temp_s0 = D_800EE92C.unkC;
    if ((temp_s0 == 2) && (func_80049B64(0xB451, 1)->unk5C == 1)) {
        D_800EDC10 = temp_s0;
        D_800EE92C.unkC = 0;
    }
}

INCLUDE_ASM("asm/ovl/cr/nonmatchings/18", func_80010838);
