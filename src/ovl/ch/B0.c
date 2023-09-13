#include "ch.h"

INCLUDE_ASM("asm/ovl/ch/nonmatchings/B0", func_800100B0);

INCLUDE_ASM("asm/ovl/ch/nonmatchings/B0", func_80010110);

INCLUDE_ASM("asm/ovl/ch/nonmatchings/B0", func_8001026C);

INCLUDE_ASM("asm/ovl/ch/nonmatchings/B0", func_800104FC);

INCLUDE_ASM("asm/ovl/ch/nonmatchings/B0", func_8001072C);

INCLUDE_ASM("asm/ovl/ch/nonmatchings/B0", func_80010784);

INCLUDE_ASM("asm/ovl/ch/nonmatchings/B0", func_80010D94);

INCLUDE_ASM("asm/ovl/ch/nonmatchings/B0", func_80010E50);

INCLUDE_ASM("asm/ovl/ch/nonmatchings/B0", func_800110C0);

void BoulderDestroy(void) {
    Entity* currentEntity = *(s32*)0x1F8000A4;
    Boulder* temp_s0 = (Boulder*)currentEntity->unk90;

    if (temp_s0->unk40 != NULL) {
        func_800585B8(temp_s0->unk40);
    }

    func_8002BA9C(temp_s0->unk44);

    if (temp_s0->unk3C != -1) {
        func_8006820C(temp_s0->unk3C, 1);
        temp_s0->unk3C = -1;
    }
}

#ifndef NON_MATCHING
INCLUDE_ASM("asm/ovl/ch/nonmatchings/B0", BoulderSmash);
#else
bool BoulderSmash(void) {
    Entity* currentEntity = *(s32*)0x1F8000A4;
    Boulder* boulder = (Boulder*)currentEntity->unk90;

    if (func_80058344(boulder->unk40) == 0) {
        func_8004847C(currentEntity->unkA4, 3);
    }
    return false;
}
#endif

INCLUDE_ASM("asm/ovl/ch/nonmatchings/B0", func_800111EC);

INCLUDE_ASM("asm/ovl/ch/nonmatchings/B0", func_80011310);

INCLUDE_ASM("asm/ovl/ch/nonmatchings/B0", func_8001138C);

INCLUDE_ASM("asm/ovl/ch/nonmatchings/B0", func_8001140C);

INCLUDE_ASM("asm/ovl/ch/nonmatchings/B0", func_80011474);

INCLUDE_ASM("asm/ovl/ch/nonmatchings/B0", func_80011614);

INCLUDE_ASM("asm/ovl/ch/nonmatchings/B0", func_80011700);

INCLUDE_ASM("asm/ovl/ch/nonmatchings/B0", func_80011854);

INCLUDE_ASM("asm/ovl/ch/nonmatchings/B0", func_800118A4);

INCLUDE_ASM("asm/ovl/ch/nonmatchings/B0", func_80011904);

INCLUDE_ASM("asm/ovl/ch/nonmatchings/B0", func_80011950);

INCLUDE_ASM("asm/ovl/ch/nonmatchings/B0", func_80011A60);

INCLUDE_ASM("asm/ovl/ch/nonmatchings/B0", func_80011A68);

INCLUDE_ASM("asm/ovl/ch/nonmatchings/B0", func_80011A70);

INCLUDE_ASM("asm/ovl/ch/nonmatchings/B0", func_80011AC0);

INCLUDE_ASM("asm/ovl/ch/nonmatchings/B0", func_80011B34);

INCLUDE_ASM("asm/ovl/ch/nonmatchings/B0", func_80011B74);

INCLUDE_ASM("asm/ovl/ch/nonmatchings/B0", func_80011BC4);

INCLUDE_ASM("asm/ovl/ch/nonmatchings/B0", func_80011C98);

INCLUDE_ASM("asm/ovl/ch/nonmatchings/B0", func_80011CE0);

INCLUDE_ASM("asm/ovl/ch/nonmatchings/B0", func_80011D98);

INCLUDE_ASM("asm/ovl/ch/nonmatchings/B0", func_80011DE8);

INCLUDE_ASM("asm/ovl/ch/nonmatchings/B0", func_80011E00);

INCLUDE_ASM("asm/ovl/ch/nonmatchings/B0", func_80012084);

INCLUDE_ASM("asm/ovl/ch/nonmatchings/B0", func_80012194);

INCLUDE_ASM("asm/ovl/ch/nonmatchings/B0", func_8001227C);

INCLUDE_ASM("asm/ovl/ch/nonmatchings/B0", func_80012384);

INCLUDE_ASM("asm/ovl/ch/nonmatchings/B0", func_800124AC);

INCLUDE_ASM("asm/ovl/ch/nonmatchings/B0", func_800124F0);

INCLUDE_ASM("asm/ovl/ch/nonmatchings/B0", func_800125C4);

INCLUDE_ASM("asm/ovl/ch/nonmatchings/B0", func_80012604);

INCLUDE_ASM("asm/ovl/ch/nonmatchings/B0", func_800128BC);

INCLUDE_ASM("asm/ovl/ch/nonmatchings/B0", func_8001290C);

INCLUDE_ASM("asm/ovl/ch/nonmatchings/B0", func_80012958);

INCLUDE_ASM("asm/ovl/ch/nonmatchings/B0", func_80012ABC);

INCLUDE_ASM("asm/ovl/ch/nonmatchings/B0", func_80012B68);

INCLUDE_ASM("asm/ovl/ch/nonmatchings/B0", func_80012CD0);

INCLUDE_ASM("asm/ovl/ch/nonmatchings/B0", func_8001303C);

INCLUDE_ASM("asm/ovl/ch/nonmatchings/B0", func_80013100);

INCLUDE_ASM("asm/ovl/ch/nonmatchings/B0", func_8001315C);

INCLUDE_ASM("asm/ovl/ch/nonmatchings/B0", func_800132AC);

INCLUDE_ASM("asm/ovl/ch/nonmatchings/B0", func_80013330);

INCLUDE_ASM("asm/ovl/ch/nonmatchings/B0", func_800133A0);

INCLUDE_ASM("asm/ovl/ch/nonmatchings/B0", func_800133E0);

INCLUDE_ASM("asm/ovl/ch/nonmatchings/B0", func_800135BC);

INCLUDE_ASM("asm/ovl/ch/nonmatchings/B0", func_800137DC);

INCLUDE_ASM("asm/ovl/ch/nonmatchings/B0", func_8001385C);

INCLUDE_ASM("asm/ovl/ch/nonmatchings/B0", func_8001396C);
