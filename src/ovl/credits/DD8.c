#include "credits.h"

INCLUDE_ASM("asm/ovl/credits/nonmatchings/DD8", func_80010DD8);

INCLUDE_ASM("asm/ovl/credits/nonmatchings/DD8", func_80011298);

INCLUDE_ASM("asm/ovl/credits/nonmatchings/DD8", func_80011590);

void func_800116A8(s32 arg0) {
    CreditsStruct* var_a1;
    s32 var_a2;

    //! FAKE:
    var_a1 = (s32)D_800122A0 + 0x9C;

    D_800122A0->unk80 = arg0;
    D_800122A0->unk84 = arg0;
    D_800122A0->unk7C = 0;
    D_800122A0->unk90 = 0;
    D_800122A0->unk8C = 1;
    D_800122A0->unk10C = 0;
    D_800122A0->unk110 = 0;
    D_800122A0->unk114 = 0;

    for (var_a2 = 0; var_a2 < 40; var_a2++) {
        var_a1->unk118 = 0;
        //! FAKE:
        var_a1 = (s32)var_a1 - 4;
    }
}

INCLUDE_ASM("asm/ovl/credits/nonmatchings/DD8", func_800116F4);

INCLUDE_ASM("asm/ovl/credits/nonmatchings/DD8", func_80011CAC);

INCLUDE_ASM("asm/ovl/credits/nonmatchings/DD8", func_80011D3C);

INCLUDE_ASM("asm/ovl/credits/nonmatchings/DD8", func_80012108);

INCLUDE_ASM("asm/ovl/credits/nonmatchings/DD8", func_800121A0);

INCLUDE_ASM("asm/ovl/credits/nonmatchings/DD8", func_800121D4);

bool func_80012214(void) {
    D_800122A0->unk84 = (s32)D_800122A0->unk88;
    return true;
}

bool func_80012234(void) {
    s32 temp_v0 = D_800122A0->unk84 + 8;

    D_800122A0->unk84 = temp_v0;
    D_800122A0->unk88 = temp_v0;
    return true;
}

INCLUDE_ASM("asm/ovl/credits/nonmatchings/DD8", func_8001225C);
