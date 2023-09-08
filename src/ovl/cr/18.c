#include "include_asm.h"

INCLUDE_ASM("asm/ovl/cr/nonmatchings/18", func_80010018);

INCLUDE_ASM("asm/ovl/cr/nonmatchings/18", func_80010278);

INCLUDE_ASM("asm/ovl/cr/nonmatchings/18", func_80010470);

INCLUDE_ASM("asm/ovl/cr/nonmatchings/18", func_80010588);

INCLUDE_ASM("asm/ovl/cr/nonmatchings/18", func_80010638);

/*
 * First match of the project, keeping it as a reference for now
 * TODO: refactor with real structures.
*/

#if 0
INCLUDE_ASM("asm/ovl/cr/nonmatchings/18", func_8001072C);
#else
typedef struct test2 {
    char pad_0[0xC];
    int unkC;
} test2;

typedef struct test {
    char pad_0[0xC];
    struct test2* unkC;
    int pad_C;
    int unk14;
} test;

extern test* D_800EDA44;
extern test* D_800EDA58;
extern int* D_800EE978;

void func_8001072C(void) {
    if ((*D_800EE978 != 0) && (D_800EDA58 != 0) && (D_800EDA44->unk14 & 0x01000000)) {
        D_800EDA58->unkC->unkC = 0xC00;
        *D_800EE978 = 0;
    }
}
#endif

INCLUDE_ASM("asm/ovl/cr/nonmatchings/18", func_8001078C);

INCLUDE_ASM("asm/ovl/cr/nonmatchings/18", func_800107A0);

INCLUDE_ASM("asm/ovl/cr/nonmatchings/18", func_80010838);
