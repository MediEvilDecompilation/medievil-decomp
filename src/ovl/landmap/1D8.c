#include "landmap.h"

INCLUDE_ASM("asm/ovl/landmap/nonmatchings/1D8", func_800101D8);

INCLUDE_ASM("asm/ovl/landmap/nonmatchings/1D8", func_800115EC);

INCLUDE_ASM("asm/ovl/landmap/nonmatchings/1D8", func_800117F4);

INCLUDE_ASM("asm/ovl/landmap/nonmatchings/1D8", func_80012124);

INCLUDE_ASM("asm/ovl/landmap/nonmatchings/1D8", func_80012278);

INCLUDE_ASM("asm/ovl/landmap/nonmatchings/1D8", func_800123C8);

INCLUDE_ASM("asm/ovl/landmap/nonmatchings/1D8", func_800124D4);

INCLUDE_ASM("asm/ovl/landmap/nonmatchings/1D8", func_80012590);

INCLUDE_ASM("asm/ovl/landmap/nonmatchings/1D8", func_80012780);

INCLUDE_ASM("asm/ovl/landmap/nonmatchings/1D8", func_800128D0);

INCLUDE_ASM("asm/ovl/landmap/nonmatchings/1D8", func_80012A68);

INCLUDE_ASM("asm/ovl/landmap/nonmatchings/1D8", func_80012B38);

INCLUDE_ASM("asm/ovl/landmap/nonmatchings/1D8", func_80012C48);

INCLUDE_ASM("asm/ovl/landmap/nonmatchings/1D8", func_80012EEC);

INCLUDE_ASM("asm/ovl/landmap/nonmatchings/1D8", func_80013754);

INCLUDE_ASM("asm/ovl/landmap/nonmatchings/1D8", func_80013828);

INCLUDE_ASM("asm/ovl/landmap/nonmatchings/1D8", func_80013BB8);

INCLUDE_ASM("asm/ovl/landmap/nonmatchings/1D8", func_80013FB8);

void func_80014348(void) {
    s32 temp0;
    s32 temp1;

    temp0 = D_80014F98->unkA96E;
    D_80014F98->unkAB10->unk84 = (temp0 - D_80014F98->unk0) - 12;
    temp1 = D_80014F98->unkA972;
    D_80014F98->unkAB10->unk86 = (temp1 - D_80014F98->unk4) - 8;
}

INCLUDE_ASM("asm/ovl/landmap/nonmatchings/1D8", func_80014394);

INCLUDE_ASM("asm/ovl/landmap/nonmatchings/1D8", func_800143FC);

void func_80014460(void) {
}

INCLUDE_ASM("asm/ovl/landmap/nonmatchings/1D8", func_80014468);

bool func_800145B0(s32 arg0) {
    if (arg0 == 0) {
        D_80014F98->unk10 = 4;
        D_80014F98->unk14 = 0;
        func_8004E7B0(1, 1, 0x28);
    }
    return true;
}
