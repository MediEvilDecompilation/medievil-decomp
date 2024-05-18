#include "game.h"

s32 func_80021CA4(void) {
    func_80099AFC();
    func_80059CCC();
    *(s32*)0x1F8000A0 = 0xF00DFACE;
    *(s32*)0x1F8000B8 = 0xF00DFACE;
    func_80059E58();
    return 0;
}

INCLUDE_ASM("asm/game/nonmatchings/800", func_80021CEC);

INCLUDE_ASM("asm/game/nonmatchings/800", func_80022AE8);

void func_80022B5C(void) {
    u16 var_v1;

    if (D_800EEE64 == 3) {
        var_v1 = D_800EEE5E;
    } else {
        var_v1 = 0;
    }
    func_800234C4(&D_800EE020, D_800CDF5C[var_v1], 0x10);
}

INCLUDE_ASM("asm/game/nonmatchings/800", func_80022BBC);

void func_80023008(void) {
    func_8002348C(&D_800EDFF8, 0, 0x28);
    if (D_800EEE24 & 0x20) {
        D_800F191C.unk4 = 0;
        D_800F191C.unk5 = 0;
    }
}

INCLUDE_ASM("asm/game/nonmatchings/800", func_80023058);

INCLUDE_ASM("asm/game/nonmatchings/800", func_800231C4);

bool func_80023338(void) {
    return !!func_8009B23C();
}

bool func_80023358(void* arg0, s32 arg1) {
    func_80099B84(arg1);
    func_80099BC8(arg1);
    return true;
}

void func_8002338C(void* arg0, s32 arg1) {
    func_80065F6C(arg1);
}

void func_800233AC(void* arg0, s32 arg1) {
    func_8005CEE0(arg1);
}

INCLUDE_ASM("asm/game/nonmatchings/800", func_800233CC);

// Probably needs permuter for the IF condition
#ifndef NON_MATCHING
INCLUDE_ASM("asm/game/nonmatchings/800", func_8002348C);
#else
void func_8002348C(s32* arg0, u8 arg1, s32 arg2) {
    s32 temp_a1 = arg1;

    while (arg2 != 0) {
        *arg0 = (temp_a1 << 0x18) | (temp_a1 << 0x10) | (temp_a1 << 8) | temp_a1;
        arg2 -= 4;
        arg0++;
    }
}
#endif

void func_800234C4(s32* arg0, s32* arg1, s32 arg2) {
    while (arg2 != 0) {
        *arg0 = *arg1;
        arg0++;
        arg1++;
        arg2 -= 4;
    }
}

INCLUDE_ASM("asm/game/nonmatchings/800", func_800234EC);

INCLUDE_ASM("asm/game/nonmatchings/800", func_8002353C);

INCLUDE_ASM("asm/game/nonmatchings/800", func_8002364C);

INCLUDE_ASM("asm/game/nonmatchings/800", func_8002395C);

void func_80023A30(void) {
    func_800646B4();
    func_8004EC8C();
    func_8002D0A0();
    func_80040B5C();
    func_80065904();
    func_80075A88();
    func_8004D3D8();
    func_8005E314();
    func_80069BB8();
    func_800716FC();
    func_8009BF68();
}

INCLUDE_ASM("asm/game/nonmatchings/800", func_80023AA0);

INCLUDE_ASM("asm/game/nonmatchings/800", func_80023CB0);

INCLUDE_ASM("asm/game/nonmatchings/800", func_80023D4C);

INCLUDE_ASM("asm/game/nonmatchings/800", func_80023E0C);

INCLUDE_ASM("asm/game/nonmatchings/800", func_80023E38);

INCLUDE_ASM("asm/game/nonmatchings/800", func_800241C8);

INCLUDE_ASM("asm/game/nonmatchings/800", func_800241E0);

INCLUDE_ASM("asm/game/nonmatchings/800", func_800241F4);

void func_80024674(void) {
    s32 (**var_s0)();
    s32 (*temp_v0)();

    var_s0 = &D_800EE030;
    while (*var_s0 != NULL) {
        temp_v0 = *var_s0;
        var_s0++;
        temp_v0();
    }
}

void func_800246C0(void) {
    void (**var_s0)();
    void (*temp_v0)();

    var_s0 = &D_800EE1BC;
    while (*var_s0 != NULL) {
        temp_v0 = *var_s0;
        var_s0++;
        temp_v0();
    }
}

INCLUDE_ASM("asm/game/nonmatchings/800", func_8002470C);

INCLUDE_ASM("asm/game/nonmatchings/800", func_80024754);

INCLUDE_ASM("asm/game/nonmatchings/800", func_800247E4);

INCLUDE_ASM("asm/game/nonmatchings/800", func_80024A90);

INCLUDE_ASM("asm/game/nonmatchings/800", func_80025260);

INCLUDE_ASM("asm/game/nonmatchings/800", func_80025BD8);

INCLUDE_ASM("asm/game/nonmatchings/800", func_80026408);

INCLUDE_ASM("asm/game/nonmatchings/800", func_80026C6C);

INCLUDE_ASM("asm/game/nonmatchings/800", func_80026DF0);

INCLUDE_ASM("asm/game/nonmatchings/800", func_80026E20);

INCLUDE_ASM("asm/game/nonmatchings/800", func_80026E90);

INCLUDE_ASM("asm/game/nonmatchings/800", func_80026F74);

INCLUDE_ASM("asm/game/nonmatchings/800", func_8002722C);

INCLUDE_ASM("asm/game/nonmatchings/800", func_80027284);

void func_80027638(void) {
}

void func_80027640(void) {
}

void func_80027648(void) {
}

INCLUDE_ASM("asm/game/nonmatchings/800", func_80027650);

INCLUDE_ASM("asm/game/nonmatchings/800", func_80027698);

INCLUDE_ASM("asm/game/nonmatchings/800", func_80027888);

INCLUDE_ASM("asm/game/nonmatchings/800", func_80027914);

INCLUDE_ASM("asm/game/nonmatchings/800", func_80027B78);

INCLUDE_ASM("asm/game/nonmatchings/800", func_80027E1C);

INCLUDE_ASM("asm/game/nonmatchings/800", func_80027F18);

INCLUDE_ASM("asm/game/nonmatchings/800", func_80027F40);

INCLUDE_ASM("asm/game/nonmatchings/800", func_800283D0);

INCLUDE_ASM("asm/game/nonmatchings/800", func_80028710);

INCLUDE_ASM("asm/game/nonmatchings/800", func_800289A0);

INCLUDE_ASM("asm/game/nonmatchings/800", func_80029234);

INCLUDE_ASM("asm/game/nonmatchings/800", func_800292F4);

INCLUDE_ASM("asm/game/nonmatchings/800", func_80029338);

INCLUDE_ASM("asm/game/nonmatchings/800", func_80029470);

INCLUDE_ASM("asm/game/nonmatchings/800", func_8002984C);

INCLUDE_ASM("asm/game/nonmatchings/800", func_8002990C);

INCLUDE_ASM("asm/game/nonmatchings/800", func_80029950);

INCLUDE_ASM("asm/game/nonmatchings/800", func_80029AFC);

INCLUDE_ASM("asm/game/nonmatchings/800", func_80029E74);

INCLUDE_ASM("asm/game/nonmatchings/800", func_80029F9C);

INCLUDE_ASM("asm/game/nonmatchings/800", func_80029FFC);

INCLUDE_ASM("asm/game/nonmatchings/800", func_8002A06C);

INCLUDE_ASM("asm/game/nonmatchings/800", func_8002A0D0);

INCLUDE_ASM("asm/game/nonmatchings/800", func_8002A128);

INCLUDE_ASM("asm/game/nonmatchings/800", func_8002A180);

void func_8002A39C(void) {
}

void func_8002A3A4(void) {
}

void func_8002A3AC(void) {
}

INCLUDE_ASM("asm/game/nonmatchings/800", func_8002A3B4);

INCLUDE_ASM("asm/game/nonmatchings/800", func_8002A674);

INCLUDE_ASM("asm/game/nonmatchings/800", func_8002A7A8);

INCLUDE_ASM("asm/game/nonmatchings/800", func_8002A924);

INCLUDE_ASM("asm/game/nonmatchings/800", func_8002ABF0);

INCLUDE_ASM("asm/game/nonmatchings/800", func_8002AEC4);

INCLUDE_ASM("asm/game/nonmatchings/800", func_8002AFD8);

INCLUDE_ASM("asm/game/nonmatchings/800", func_8002B0DC);

INCLUDE_ASM("asm/game/nonmatchings/800", func_8002B1DC);

INCLUDE_ASM("asm/game/nonmatchings/800", func_8002B2C4);

INCLUDE_ASM("asm/game/nonmatchings/800", func_8002B31C);

INCLUDE_ASM("asm/game/nonmatchings/800", func_8002B44C);

INCLUDE_ASM("asm/game/nonmatchings/800", func_8002B490);

INCLUDE_ASM("asm/game/nonmatchings/800", func_8002B568);

INCLUDE_ASM("asm/game/nonmatchings/800", func_8002B5CC);

void func_8002B83C(void) {
    s32 temp_v0;

    temp_v0 = func_800A403C(0x50, 0);
    D_800EE0B4 = temp_v0;
    func_8002348C(temp_v0, 0, 0x50);
}

INCLUDE_ASM("asm/game/nonmatchings/800", func_8002B878);

INCLUDE_ASM("asm/game/nonmatchings/800", func_8002B8E8);

INCLUDE_ASM("asm/game/nonmatchings/800", func_8002B980);

INCLUDE_ASM("asm/game/nonmatchings/800", func_8002BA9C);

INCLUDE_ASM("asm/game/nonmatchings/800", func_8002BAEC);

INCLUDE_ASM("asm/game/nonmatchings/800", func_8002BF28);

INCLUDE_ASM("asm/game/nonmatchings/800", func_8002C01C);

INCLUDE_ASM("asm/game/nonmatchings/800", func_8002C034);

INCLUDE_ASM("asm/game/nonmatchings/800", func_8002C9F8);

INCLUDE_ASM("asm/game/nonmatchings/800", func_8002CA84);

INCLUDE_ASM("asm/game/nonmatchings/800", func_8002CBD0);

INCLUDE_ASM("asm/game/nonmatchings/800", func_8002CF08);

INCLUDE_ASM("asm/game/nonmatchings/800", func_8002D0A0);

INCLUDE_ASM("asm/game/nonmatchings/800", func_8002D0F4);

INCLUDE_ASM("asm/game/nonmatchings/800", func_8002D124);

INCLUDE_ASM("asm/game/nonmatchings/800", func_8002D1F8);

INCLUDE_ASM("asm/game/nonmatchings/800", func_8002D21C);

INCLUDE_ASM("asm/game/nonmatchings/800", func_8002E53C);

INCLUDE_ASM("asm/game/nonmatchings/800", func_8002E5AC);

INCLUDE_ASM("asm/game/nonmatchings/800", func_8002E690);

INCLUDE_ASM("asm/game/nonmatchings/800", func_8002E758);

INCLUDE_ASM("asm/game/nonmatchings/800", func_8002E7EC);

INCLUDE_ASM("asm/game/nonmatchings/800", func_8002E8C8);

INCLUDE_ASM("asm/game/nonmatchings/800", func_8002EA0C);

INCLUDE_ASM("asm/game/nonmatchings/800", func_8002EAD0);

INCLUDE_ASM("asm/game/nonmatchings/800", func_8002EB88);

INCLUDE_ASM("asm/game/nonmatchings/800", func_8002EC14);

void func_8002EE10(void) {
}

INCLUDE_ASM("asm/game/nonmatchings/800", func_8002EE18);

INCLUDE_ASM("asm/game/nonmatchings/800", func_8002F200);

INCLUDE_ASM("asm/game/nonmatchings/800", func_8002F220);

INCLUDE_ASM("asm/game/nonmatchings/800", func_8002F248);

INCLUDE_ASM("asm/game/nonmatchings/800", func_8002F3C8);

INCLUDE_ASM("asm/game/nonmatchings/800", func_8002F488);

INCLUDE_ASM("asm/game/nonmatchings/800", func_8002F810);

void func_8002F83C(void) {
}

INCLUDE_ASM("asm/game/nonmatchings/800", func_8002F844);

void func_8002F910(void) {
}

INCLUDE_ASM("asm/game/nonmatchings/800", func_8002F918);

INCLUDE_ASM("asm/game/nonmatchings/800", func_8002F9B8);

INCLUDE_ASM("asm/game/nonmatchings/800", func_8002FA8C);

INCLUDE_ASM("asm/game/nonmatchings/800", func_8002FB00);

INCLUDE_ASM("asm/game/nonmatchings/800", func_8002FB68);

void func_8002FD04(void) {
}

INCLUDE_ASM("asm/game/nonmatchings/800", func_8002FD0C);

INCLUDE_ASM("asm/game/nonmatchings/800", func_800310DC);

INCLUDE_ASM("asm/game/nonmatchings/800", func_800312C8);

INCLUDE_ASM("asm/game/nonmatchings/800", func_8003131C);

INCLUDE_ASM("asm/game/nonmatchings/800", func_800314B8);

INCLUDE_ASM("asm/game/nonmatchings/800", func_800314D8);

INCLUDE_ASM("asm/game/nonmatchings/800", func_80031A94);

INCLUDE_ASM("asm/game/nonmatchings/800", func_80031B04);

INCLUDE_ASM("asm/game/nonmatchings/800", func_80031B6C);

INCLUDE_ASM("asm/game/nonmatchings/800", func_80031D70);

INCLUDE_ASM("asm/game/nonmatchings/800", func_8003226C);

INCLUDE_ASM("asm/game/nonmatchings/800", func_80032298);

INCLUDE_ASM("asm/game/nonmatchings/800", func_80032598);

INCLUDE_ASM("asm/game/nonmatchings/800", func_800328BC);

INCLUDE_ASM("asm/game/nonmatchings/800", func_80032C58);

INCLUDE_ASM("asm/game/nonmatchings/800", func_80033EA8);

INCLUDE_ASM("asm/game/nonmatchings/800", func_80033EF8);

INCLUDE_ASM("asm/game/nonmatchings/800", func_80033F30);

INCLUDE_ASM("asm/game/nonmatchings/800", func_80033F74);

INCLUDE_ASM("asm/game/nonmatchings/800", func_8003414C);

INCLUDE_ASM("asm/game/nonmatchings/800", func_8003421C);

INCLUDE_ASM("asm/game/nonmatchings/800", func_800342B0);

INCLUDE_ASM("asm/game/nonmatchings/800", func_800344A0);

INCLUDE_ASM("asm/game/nonmatchings/800", func_80034654);

INCLUDE_ASM("asm/game/nonmatchings/800", func_80034828);

INCLUDE_ASM("asm/game/nonmatchings/800", func_800348AC);

INCLUDE_ASM("asm/game/nonmatchings/800", func_8003499C);

INCLUDE_ASM("asm/game/nonmatchings/800", func_80034E3C);

INCLUDE_ASM("asm/game/nonmatchings/800", func_8003515C);

INCLUDE_ASM("asm/game/nonmatchings/800", func_800354C4);

INCLUDE_ASM("asm/game/nonmatchings/800", func_800361B4);

INCLUDE_ASM("asm/game/nonmatchings/800", func_80036500);

INCLUDE_ASM("asm/game/nonmatchings/800", func_800366B4);

INCLUDE_ASM("asm/game/nonmatchings/800", func_80036810);

INCLUDE_ASM("asm/game/nonmatchings/800", func_80037564);

INCLUDE_ASM("asm/game/nonmatchings/800", func_80037BC4);

INCLUDE_ASM("asm/game/nonmatchings/800", func_80037DD4);

INCLUDE_ASM("asm/game/nonmatchings/800", func_80037FB8);

INCLUDE_ASM("asm/game/nonmatchings/800", func_800380EC);

INCLUDE_ASM("asm/game/nonmatchings/800", func_8003825C);

INCLUDE_ASM("asm/game/nonmatchings/800", func_8003844C);

INCLUDE_ASM("asm/game/nonmatchings/800", func_800385C0);

INCLUDE_ASM("asm/game/nonmatchings/800", func_80038610);

INCLUDE_ASM("asm/game/nonmatchings/800", func_800388CC);

INCLUDE_ASM("asm/game/nonmatchings/800", func_80038C14);

INCLUDE_ASM("asm/game/nonmatchings/800", func_80038F38);

INCLUDE_ASM("asm/game/nonmatchings/800", func_8003966C);

INCLUDE_ASM("asm/game/nonmatchings/800", func_80039AAC);

INCLUDE_ASM("asm/game/nonmatchings/800", func_80039FA8);

INCLUDE_ASM("asm/game/nonmatchings/800", func_8003A9F4);

INCLUDE_ASM("asm/game/nonmatchings/800", func_8003ABD8);

INCLUDE_ASM("asm/game/nonmatchings/800", func_8003AEE0);

INCLUDE_ASM("asm/game/nonmatchings/800", func_8003B088);

INCLUDE_ASM("asm/game/nonmatchings/800", func_8003B218);

INCLUDE_ASM("asm/game/nonmatchings/800", func_8003B27C);

INCLUDE_ASM("asm/game/nonmatchings/800", func_8003B394);

INCLUDE_ASM("asm/game/nonmatchings/800", func_8003B578);

INCLUDE_ASM("asm/game/nonmatchings/800", func_8003BA6C);

INCLUDE_ASM("asm/game/nonmatchings/800", func_8003BAF0);

INCLUDE_ASM("asm/game/nonmatchings/800", func_8003BB18);

INCLUDE_ASM("asm/game/nonmatchings/800", func_8003BBAC);

INCLUDE_ASM("asm/game/nonmatchings/800", func_8003BC2C);

INCLUDE_ASM("asm/game/nonmatchings/800", func_8003BCC8);

INCLUDE_ASM("asm/game/nonmatchings/800", func_8003BDA0);

INCLUDE_ASM("asm/game/nonmatchings/800", func_8003BDC8);

INCLUDE_ASM("asm/game/nonmatchings/800", func_8003BECC);

INCLUDE_ASM("asm/game/nonmatchings/800", func_8003BF2C);

INCLUDE_ASM("asm/game/nonmatchings/800", func_8003C070);

INCLUDE_ASM("asm/game/nonmatchings/800", func_8003C2B0);

INCLUDE_ASM("asm/game/nonmatchings/800", func_8003C344);

void func_8003C3F4(unkStruct_8003C3F4* arg0) {
    arg0->unk18 = 0;
    func_800A42B4(arg0->unk20);
}

INCLUDE_ASM("asm/game/nonmatchings/800", func_8003C41C);

INCLUDE_ASM("asm/game/nonmatchings/800", func_8003C534);

INCLUDE_ASM("asm/game/nonmatchings/800", func_8003C60C);

INCLUDE_ASM("asm/game/nonmatchings/800", func_8003C74C);

INCLUDE_ASM("asm/game/nonmatchings/800", func_8003C7AC);

INCLUDE_ASM("asm/game/nonmatchings/800", func_8003C8D4);

INCLUDE_ASM("asm/game/nonmatchings/800", func_8003C9B8);

INCLUDE_ASM("asm/game/nonmatchings/800", func_8003CB50);

INCLUDE_ASM("asm/game/nonmatchings/800", func_8003CC44);

INCLUDE_ASM("asm/game/nonmatchings/800", func_8003CE2C);

INCLUDE_ASM("asm/game/nonmatchings/800", func_8003D6A8);

INCLUDE_ASM("asm/game/nonmatchings/800", func_8003D808);

INCLUDE_ASM("asm/game/nonmatchings/800", func_8003D838);

INCLUDE_ASM("asm/game/nonmatchings/800", func_8003E004);

INCLUDE_ASM("asm/game/nonmatchings/800", func_8003E2C0);

INCLUDE_ASM("asm/game/nonmatchings/800", func_8003E430);

INCLUDE_ASM("asm/game/nonmatchings/800", func_8003E638);

INCLUDE_ASM("asm/game/nonmatchings/800", func_8003E824);

INCLUDE_ASM("asm/game/nonmatchings/800", func_8003EF44);

INCLUDE_ASM("asm/game/nonmatchings/800", func_8003F140);

INCLUDE_ASM("asm/game/nonmatchings/800", func_8003F3A4);

INCLUDE_ASM("asm/game/nonmatchings/800", func_8003F4EC);

INCLUDE_ASM("asm/game/nonmatchings/800", func_8003F578);

INCLUDE_ASM("asm/game/nonmatchings/800", func_8003F70C);

INCLUDE_ASM("asm/game/nonmatchings/800", func_8003FC08);

INCLUDE_ASM("asm/game/nonmatchings/800", func_8003FFCC);

INCLUDE_ASM("asm/game/nonmatchings/800", func_80040188);

INCLUDE_ASM("asm/game/nonmatchings/800", func_800403E0);

INCLUDE_ASM("asm/game/nonmatchings/800", func_8004050C);

INCLUDE_ASM("asm/game/nonmatchings/800", func_80040684);

INCLUDE_ASM("asm/game/nonmatchings/800", func_800407F4);

INCLUDE_ASM("asm/game/nonmatchings/800", func_8004084C);

INCLUDE_ASM("asm/game/nonmatchings/800", func_80040998);

INCLUDE_ASM("asm/game/nonmatchings/800", func_80040B5C);

INCLUDE_ASM("asm/game/nonmatchings/800", func_80040C98);

INCLUDE_ASM("asm/game/nonmatchings/800", func_800410A4);

INCLUDE_ASM("asm/game/nonmatchings/800", func_80041314);

INCLUDE_ASM("asm/game/nonmatchings/800", func_800414D4);

INCLUDE_ASM("asm/game/nonmatchings/800", func_8004165C);

INCLUDE_ASM("asm/game/nonmatchings/800", func_80041844);

INCLUDE_ASM("asm/game/nonmatchings/800", func_80041924);

INCLUDE_ASM("asm/game/nonmatchings/800", func_80041ADC);

INCLUDE_ASM("asm/game/nonmatchings/800", func_800420E4);

INCLUDE_ASM("asm/game/nonmatchings/800", func_80042358);

INCLUDE_ASM("asm/game/nonmatchings/800", func_80042458);

INCLUDE_ASM("asm/game/nonmatchings/800", func_800424F8);

INCLUDE_ASM("asm/game/nonmatchings/800", func_800428B0);

INCLUDE_ASM("asm/game/nonmatchings/800", func_800429A0);

INCLUDE_ASM("asm/game/nonmatchings/800", func_80042A34);

INCLUDE_ASM("asm/game/nonmatchings/800", func_80042BC4);

INCLUDE_ASM("asm/game/nonmatchings/800", func_80042C28);

INCLUDE_ASM("asm/game/nonmatchings/800", func_80042E20);

INCLUDE_ASM("asm/game/nonmatchings/800", func_80042F2C);

INCLUDE_ASM("asm/game/nonmatchings/800", func_8004334C);

INCLUDE_ASM("asm/game/nonmatchings/800", func_80043434);

INCLUDE_ASM("asm/game/nonmatchings/800", func_800434EC);

INCLUDE_ASM("asm/game/nonmatchings/800", func_80043590);

INCLUDE_ASM("asm/game/nonmatchings/800", func_800435AC);

INCLUDE_ASM("asm/game/nonmatchings/800", func_80043880);

INCLUDE_ASM("asm/game/nonmatchings/800", func_800439A4);

INCLUDE_ASM("asm/game/nonmatchings/800", func_80043A98);

INCLUDE_ASM("asm/game/nonmatchings/800", func_80043B30);

INCLUDE_ASM("asm/game/nonmatchings/800", func_80043C44);

INCLUDE_ASM("asm/game/nonmatchings/800", func_80043D40);

INCLUDE_ASM("asm/game/nonmatchings/800", func_80043D80);

INCLUDE_ASM("asm/game/nonmatchings/800", func_80043E10);

INCLUDE_ASM("asm/game/nonmatchings/800", func_80043E4C);

INCLUDE_ASM("asm/game/nonmatchings/800", func_800448D8);

INCLUDE_ASM("asm/game/nonmatchings/800", func_8004528C);

INCLUDE_ASM("asm/game/nonmatchings/800", func_800458E8);

INCLUDE_ASM("asm/game/nonmatchings/800", func_80046138);

INCLUDE_ASM("asm/game/nonmatchings/800", func_800462A4);

INCLUDE_ASM("asm/game/nonmatchings/800", func_80046350);

INCLUDE_ASM("asm/game/nonmatchings/800", func_80046408);

INCLUDE_ASM("asm/game/nonmatchings/800", func_800467E8);

INCLUDE_ASM("asm/game/nonmatchings/800", func_800468EC);

INCLUDE_ASM("asm/game/nonmatchings/800", func_80046A9C);

INCLUDE_ASM("asm/game/nonmatchings/800", func_80046D74);

INCLUDE_ASM("asm/game/nonmatchings/800", func_80046E14);

INCLUDE_ASM("asm/game/nonmatchings/800", func_80046F04);

INCLUDE_ASM("asm/game/nonmatchings/800", func_80046F84);

INCLUDE_ASM("asm/game/nonmatchings/800", func_80047064);

INCLUDE_ASM("asm/game/nonmatchings/800", func_80047124);

INCLUDE_ASM("asm/game/nonmatchings/800", func_80047210);

INCLUDE_ASM("asm/game/nonmatchings/800", func_800472F8);

INCLUDE_ASM("asm/game/nonmatchings/800", func_8004752C);

INCLUDE_ASM("asm/game/nonmatchings/800", func_8004759C);

INCLUDE_ASM("asm/game/nonmatchings/800", func_80047600);

INCLUDE_ASM("asm/game/nonmatchings/800", func_80047770);

INCLUDE_ASM("asm/game/nonmatchings/800", func_8004788C);

INCLUDE_ASM("asm/game/nonmatchings/800", func_80047988);

INCLUDE_ASM("asm/game/nonmatchings/800", func_80047A5C);

INCLUDE_ASM("asm/game/nonmatchings/800", func_80047ABC);

INCLUDE_ASM("asm/game/nonmatchings/800", func_80047B1C);

INCLUDE_ASM("asm/game/nonmatchings/800", func_80047B78);

INCLUDE_ASM("asm/game/nonmatchings/800", func_80047BD0);

INCLUDE_ASM("asm/game/nonmatchings/800", func_80047C84);

INCLUDE_ASM("asm/game/nonmatchings/800", func_80047CA4);

INCLUDE_ASM("asm/game/nonmatchings/800", func_80047CF4);

INCLUDE_ASM("asm/game/nonmatchings/800", func_80047D68);

INCLUDE_ASM("asm/game/nonmatchings/800", func_80047E20);

INCLUDE_ASM("asm/game/nonmatchings/800", func_80047EE8);

INCLUDE_ASM("asm/game/nonmatchings/800", func_80047F60);

INCLUDE_ASM("asm/game/nonmatchings/800", func_80047F98);

INCLUDE_ASM("asm/game/nonmatchings/800", func_80047FC8);

INCLUDE_ASM("asm/game/nonmatchings/800", func_80048184);

INCLUDE_ASM("asm/game/nonmatchings/800", func_80048214);

INCLUDE_ASM("asm/game/nonmatchings/800", func_800482FC);

INCLUDE_ASM("asm/game/nonmatchings/800", func_800483F8);

INCLUDE_ASM("asm/game/nonmatchings/800", func_8004847C);

INCLUDE_ASM("asm/game/nonmatchings/800", func_800484BC);

INCLUDE_ASM("asm/game/nonmatchings/800", func_80048548);

INCLUDE_ASM("asm/game/nonmatchings/800", func_800485EC);

INCLUDE_ASM("asm/game/nonmatchings/800", func_800486E4);

INCLUDE_ASM("asm/game/nonmatchings/800", func_80048758);

INCLUDE_ASM("asm/game/nonmatchings/800", func_80048CD8);

INCLUDE_ASM("asm/game/nonmatchings/800", func_80048DB8);

INCLUDE_ASM("asm/game/nonmatchings/800", func_800490B0);

INCLUDE_ASM("asm/game/nonmatchings/800", func_80049150);

INCLUDE_ASM("asm/game/nonmatchings/800", func_800491E4);

INCLUDE_ASM("asm/game/nonmatchings/800", func_80049420);

INCLUDE_ASM("asm/game/nonmatchings/800", func_80049824);

INCLUDE_ASM("asm/game/nonmatchings/800", func_80049B64);

INCLUDE_ASM("asm/game/nonmatchings/800", func_80049D68);

INCLUDE_ASM("asm/game/nonmatchings/800", func_8004A184);

INCLUDE_ASM("asm/game/nonmatchings/800", func_8004A2E0);

INCLUDE_ASM("asm/game/nonmatchings/800", func_8004A458);

INCLUDE_ASM("asm/game/nonmatchings/800", func_8004A62C);

INCLUDE_ASM("asm/game/nonmatchings/800", func_8004A82C);

INCLUDE_ASM("asm/game/nonmatchings/800", func_8004B074);

INCLUDE_ASM("asm/game/nonmatchings/800", func_8004B26C);

INCLUDE_ASM("asm/game/nonmatchings/800", func_8004B30C);

INCLUDE_ASM("asm/game/nonmatchings/800", func_8004B54C);

INCLUDE_ASM("asm/game/nonmatchings/800", func_8004B808);

INCLUDE_ASM("asm/game/nonmatchings/800", func_8004B820);

INCLUDE_ASM("asm/game/nonmatchings/800", func_8004B978);

INCLUDE_ASM("asm/game/nonmatchings/800", func_8004BABC);

INCLUDE_ASM("asm/game/nonmatchings/800", func_8004BB74);

INCLUDE_ASM("asm/game/nonmatchings/800", func_8004BCA0);

INCLUDE_ASM("asm/game/nonmatchings/800", func_8004BD04);

INCLUDE_ASM("asm/game/nonmatchings/800", func_8004BD58);

INCLUDE_ASM("asm/game/nonmatchings/800", func_8004C21C);

INCLUDE_ASM("asm/game/nonmatchings/800", func_8004C25C);

INCLUDE_ASM("asm/game/nonmatchings/800", func_8004C4EC);

INCLUDE_ASM("asm/game/nonmatchings/800", func_8004C550);

INCLUDE_ASM("asm/game/nonmatchings/800", func_8004C9D0);

INCLUDE_ASM("asm/game/nonmatchings/800", func_8004CB28);

INCLUDE_ASM("asm/game/nonmatchings/800", func_8004CC60);

INCLUDE_ASM("asm/game/nonmatchings/800", func_8004CD7C);

INCLUDE_ASM("asm/game/nonmatchings/800", func_8004CF90);

INCLUDE_ASM("asm/game/nonmatchings/800", func_8004D3D8);

INCLUDE_ASM("asm/game/nonmatchings/800", func_8004D42C);

INCLUDE_ASM("asm/game/nonmatchings/800", func_8004DCCC);

INCLUDE_ASM("asm/game/nonmatchings/800", func_8004DFA0);

INCLUDE_ASM("asm/game/nonmatchings/800", func_8004E0F4);

INCLUDE_ASM("asm/game/nonmatchings/800", func_8004E1F0);

INCLUDE_ASM("asm/game/nonmatchings/800", func_8004E270);

INCLUDE_ASM("asm/game/nonmatchings/800", func_8004E340);

INCLUDE_ASM("asm/game/nonmatchings/800", func_8004E6DC);

INCLUDE_ASM("asm/game/nonmatchings/800", func_8004E730);

INCLUDE_ASM("asm/game/nonmatchings/800", func_8004E7B0);

INCLUDE_ASM("asm/game/nonmatchings/800", func_8004E820);

INCLUDE_ASM("asm/game/nonmatchings/800", func_8004E8A8);

INCLUDE_ASM("asm/game/nonmatchings/800", func_8004E974);

INCLUDE_ASM("asm/game/nonmatchings/800", func_8004E9F0);

INCLUDE_ASM("asm/game/nonmatchings/800", func_8004EAB8);

INCLUDE_ASM("asm/game/nonmatchings/800", func_8004EC8C);

INCLUDE_ASM("asm/game/nonmatchings/800", func_8004ECE0);

INCLUDE_ASM("asm/game/nonmatchings/800", func_8004EE40);

INCLUDE_ASM("asm/game/nonmatchings/800", func_8004F284);

INCLUDE_ASM("asm/game/nonmatchings/800", func_8004F2B0);

INCLUDE_ASM("asm/game/nonmatchings/800", func_8004F570);

INCLUDE_ASM("asm/game/nonmatchings/800", func_8004F63C);

INCLUDE_ASM("asm/game/nonmatchings/800", func_8004FBBC);

INCLUDE_ASM("asm/game/nonmatchings/800", func_8004FDE4);

INCLUDE_ASM("asm/game/nonmatchings/800", func_800506F0);

void func_80050814(void) {
}

INCLUDE_ASM("asm/game/nonmatchings/800", func_8005081C);

INCLUDE_ASM("asm/game/nonmatchings/800", func_80050B80);

INCLUDE_ASM("asm/game/nonmatchings/800", func_80051030);

INCLUDE_ASM("asm/game/nonmatchings/800", func_8005119C);

INCLUDE_ASM("asm/game/nonmatchings/800", func_800514CC);

INCLUDE_ASM("asm/game/nonmatchings/800", func_800514FC);

INCLUDE_ASM("asm/game/nonmatchings/800", func_80051698);

INCLUDE_ASM("asm/game/nonmatchings/800", func_80051738);

INCLUDE_ASM("asm/game/nonmatchings/800", func_8005176C);

INCLUDE_ASM("asm/game/nonmatchings/800", func_800520DC);

INCLUDE_ASM("asm/game/nonmatchings/800", func_8005238C);

INCLUDE_ASM("asm/game/nonmatchings/800", func_800523B0);

INCLUDE_ASM("asm/game/nonmatchings/800", func_800523D4);

INCLUDE_ASM("asm/game/nonmatchings/800", func_800523F8);

INCLUDE_ASM("asm/game/nonmatchings/800", func_800524D8);

INCLUDE_ASM("asm/game/nonmatchings/800", func_8005250C);

INCLUDE_ASM("asm/game/nonmatchings/800", func_80052654);

INCLUDE_ASM("asm/game/nonmatchings/800", func_80052B28);

INCLUDE_ASM("asm/game/nonmatchings/800", func_80052B5C);

INCLUDE_ASM("asm/game/nonmatchings/800", func_80052DB4);

INCLUDE_ASM("asm/game/nonmatchings/800", func_80052E34);

INCLUDE_ASM("asm/game/nonmatchings/800", func_80052EAC);

INCLUDE_ASM("asm/game/nonmatchings/800", func_800530EC);

INCLUDE_ASM("asm/game/nonmatchings/800", func_800531E8);

INCLUDE_ASM("asm/game/nonmatchings/800", func_800532F8);

INCLUDE_ASM("asm/game/nonmatchings/800", func_800534A4);

INCLUDE_ASM("asm/game/nonmatchings/800", func_80053A48);

INCLUDE_ASM("asm/game/nonmatchings/800", func_80053A88);

INCLUDE_ASM("asm/game/nonmatchings/800", func_80053B1C);

INCLUDE_ASM("asm/game/nonmatchings/800", func_80053CC0);

INCLUDE_ASM("asm/game/nonmatchings/800", func_80054904);

INCLUDE_ASM("asm/game/nonmatchings/800", func_80055054);

INCLUDE_ASM("asm/game/nonmatchings/800", func_800551C0);

INCLUDE_ASM("asm/game/nonmatchings/800", func_80055954);

INCLUDE_ASM("asm/game/nonmatchings/800", func_80055A70);

INCLUDE_ASM("asm/game/nonmatchings/800", func_80055BA0);

INCLUDE_ASM("asm/game/nonmatchings/800", func_8005605C);

INCLUDE_ASM("asm/game/nonmatchings/800", func_800563B4);

INCLUDE_ASM("asm/game/nonmatchings/800", func_80056644);

INCLUDE_ASM("asm/game/nonmatchings/800", func_80056850);

INCLUDE_ASM("asm/game/nonmatchings/800", func_80056A18);

INCLUDE_ASM("asm/game/nonmatchings/800", func_80057104);

INCLUDE_ASM("asm/game/nonmatchings/800", func_80057190);

INCLUDE_ASM("asm/game/nonmatchings/800", func_800574F0);

INCLUDE_ASM("asm/game/nonmatchings/800", func_800576A8);

INCLUDE_ASM("asm/game/nonmatchings/800", func_80057BAC);

INCLUDE_ASM("asm/game/nonmatchings/800", func_80057BCC);

INCLUDE_ASM("asm/game/nonmatchings/800", func_80057D50);

INCLUDE_ASM("asm/game/nonmatchings/800", func_800580B8);

INCLUDE_ASM("asm/game/nonmatchings/800", func_80058344);

INCLUDE_ASM("asm/game/nonmatchings/800", DestroyFragments);

INCLUDE_ASM("asm/game/nonmatchings/800", func_80058614);

void func_80058688(unkStruct_80058688* arg0) {
    func_800A42B4(arg0->unk28);
    func_800A42B4(arg0);
}

INCLUDE_ASM("asm/game/nonmatchings/800", func_800586BC);

INCLUDE_ASM("asm/game/nonmatchings/800", func_80058BB8);

INCLUDE_ASM("asm/game/nonmatchings/800", func_80058D3C);

INCLUDE_ASM("asm/game/nonmatchings/800", func_80058E2C);

INCLUDE_ASM("asm/game/nonmatchings/800", func_80059CCC);

INCLUDE_ASM("asm/game/nonmatchings/800", func_80059E58);

INCLUDE_ASM("asm/game/nonmatchings/800", func_8005A5DC);

INCLUDE_ASM("asm/game/nonmatchings/800", func_8005A6B0);

INCLUDE_ASM("asm/game/nonmatchings/800", func_8005A71C);

INCLUDE_ASM("asm/game/nonmatchings/800", func_8005A834);

INCLUDE_ASM("asm/game/nonmatchings/800", func_8005A898);

INCLUDE_ASM("asm/game/nonmatchings/800", func_8005A99C);

INCLUDE_ASM("asm/game/nonmatchings/800", func_8005A9E0);

INCLUDE_ASM("asm/game/nonmatchings/800", func_8005AD88);

INCLUDE_ASM("asm/game/nonmatchings/800", func_8005AF44);

INCLUDE_ASM("asm/game/nonmatchings/800", func_8005B040);

INCLUDE_ASM("asm/game/nonmatchings/800", func_8005B078);

INCLUDE_ASM("asm/game/nonmatchings/800", func_8005B9A4);

INCLUDE_ASM("asm/game/nonmatchings/800", func_8005BB9C);

INCLUDE_ASM("asm/game/nonmatchings/800", func_8005BBE0);

INCLUDE_ASM("asm/game/nonmatchings/800", func_8005BC34);

INCLUDE_ASM("asm/game/nonmatchings/800", func_8005BED0);

INCLUDE_ASM("asm/game/nonmatchings/800", func_8005BF5C);

INCLUDE_ASM("asm/game/nonmatchings/800", func_8005BFD8);

INCLUDE_ASM("asm/game/nonmatchings/800", func_8005C054);

INCLUDE_ASM("asm/game/nonmatchings/800", func_8005C14C);

INCLUDE_ASM("asm/game/nonmatchings/800", func_8005C20C);

INCLUDE_ASM("asm/game/nonmatchings/800", func_8005C278);

INCLUDE_ASM("asm/game/nonmatchings/800", func_8005C2E4);

INCLUDE_ASM("asm/game/nonmatchings/800", func_8005C354);

INCLUDE_ASM("asm/game/nonmatchings/800", func_8005C4E8);

INCLUDE_ASM("asm/game/nonmatchings/800", func_8005C5D8);

INCLUDE_ASM("asm/game/nonmatchings/800", func_8005C6CC);

INCLUDE_ASM("asm/game/nonmatchings/800", func_8005C708);

INCLUDE_ASM("asm/game/nonmatchings/800", func_8005C764);

INCLUDE_ASM("asm/game/nonmatchings/800", func_8005C7B0);

INCLUDE_ASM("asm/game/nonmatchings/800", func_8005C828);

INCLUDE_ASM("asm/game/nonmatchings/800", func_8005C874);

INCLUDE_ASM("asm/game/nonmatchings/800", func_8005C958);

INCLUDE_ASM("asm/game/nonmatchings/800", func_8005C994);

INCLUDE_ASM("asm/game/nonmatchings/800", func_8005CA18);

INCLUDE_ASM("asm/game/nonmatchings/800", func_8005CAAC);

INCLUDE_ASM("asm/game/nonmatchings/800", func_8005CE3C);

INCLUDE_ASM("asm/game/nonmatchings/800", func_8005CEE0);

INCLUDE_ASM("asm/game/nonmatchings/800", func_8005D054);

INCLUDE_ASM("asm/game/nonmatchings/800", func_8005D154);

INCLUDE_ASM("asm/game/nonmatchings/800", func_8005D35C);

INCLUDE_ASM("asm/game/nonmatchings/800", func_8005D624);

INCLUDE_ASM("asm/game/nonmatchings/800", func_8005D880);

INCLUDE_ASM("asm/game/nonmatchings/800", func_8005D92C);

INCLUDE_ASM("asm/game/nonmatchings/800", func_8005D97C);

INCLUDE_ASM("asm/game/nonmatchings/800", func_8005DBA4);

INCLUDE_ASM("asm/game/nonmatchings/800", func_8005DE00);

INCLUDE_ASM("asm/game/nonmatchings/800", func_8005DF28);

INCLUDE_ASM("asm/game/nonmatchings/800", func_8005E048);

INCLUDE_ASM("asm/game/nonmatchings/800", func_8005E07C);

INCLUDE_ASM("asm/game/nonmatchings/800", func_8005E104);

INCLUDE_ASM("asm/game/nonmatchings/800", func_8005E1DC);

INCLUDE_ASM("asm/game/nonmatchings/800", func_8005E210);

INCLUDE_ASM("asm/game/nonmatchings/800", func_8005E21C);

INCLUDE_ASM("asm/game/nonmatchings/800", func_8005E234);

INCLUDE_ASM("asm/game/nonmatchings/800", func_8005E314);

INCLUDE_ASM("asm/game/nonmatchings/800", func_8005E37C);

INCLUDE_ASM("asm/game/nonmatchings/800", func_8005E468);

INCLUDE_ASM("asm/game/nonmatchings/800", func_8005E540);

INCLUDE_ASM("asm/game/nonmatchings/800", func_8005E820);

INCLUDE_ASM("asm/game/nonmatchings/800", func_8005F528);

INCLUDE_ASM("asm/game/nonmatchings/800", func_80060D04);

INCLUDE_ASM("asm/game/nonmatchings/800", func_80060D48);

INCLUDE_ASM("asm/game/nonmatchings/800", func_80060DB8);

INCLUDE_ASM("asm/game/nonmatchings/800", func_80060E58);

INCLUDE_ASM("asm/game/nonmatchings/800", func_80061038);

INCLUDE_ASM("asm/game/nonmatchings/800", func_800610C4);

INCLUDE_ASM("asm/game/nonmatchings/800", func_80061B00);

INCLUDE_ASM("asm/game/nonmatchings/800", func_80061D54);

s32 func_80061D70(unkStruct_80061D70* arg0) {
    arg0->unk0 = &D_800EDBF8;
    arg0->unk4 = 0;
    return 0xF;
}

INCLUDE_ASM("asm/game/nonmatchings/800", func_80061D88);

INCLUDE_ASM("asm/game/nonmatchings/800", func_80062040);

INCLUDE_ASM("asm/game/nonmatchings/800", func_800620D0);

INCLUDE_ASM("asm/game/nonmatchings/800", func_80062128);

INCLUDE_ASM("asm/game/nonmatchings/800", func_80062178);

INCLUDE_ASM("asm/game/nonmatchings/800", func_800621BC);

INCLUDE_ASM("asm/game/nonmatchings/800", func_80062204);

INCLUDE_ASM("asm/game/nonmatchings/800", func_8006226C);

INCLUDE_ASM("asm/game/nonmatchings/800", func_80062400);

INCLUDE_ASM("asm/game/nonmatchings/800", func_80062488);

INCLUDE_ASM("asm/game/nonmatchings/800", func_800624C8);

INCLUDE_ASM("asm/game/nonmatchings/800", func_80062520);

INCLUDE_ASM("asm/game/nonmatchings/800", func_80062580);

INCLUDE_ASM("asm/game/nonmatchings/800", func_80062730);

INCLUDE_ASM("asm/game/nonmatchings/800", func_80062798);

INCLUDE_ASM("asm/game/nonmatchings/800", func_800629DC);

INCLUDE_ASM("asm/game/nonmatchings/800", func_80062A98);

INCLUDE_ASM("asm/game/nonmatchings/800", func_80062E08);

INCLUDE_ASM("asm/game/nonmatchings/800", func_80063110);

INCLUDE_ASM("asm/game/nonmatchings/800", func_8006337C);

INCLUDE_ASM("asm/game/nonmatchings/800", func_8006342C);

INCLUDE_ASM("asm/game/nonmatchings/800", func_80063580);

INCLUDE_ASM("asm/game/nonmatchings/800", func_800635D4);

INCLUDE_ASM("asm/game/nonmatchings/800", func_80063754);

INCLUDE_ASM("asm/game/nonmatchings/800", func_800638D8);

INCLUDE_ASM("asm/game/nonmatchings/800", func_80063AC4);

INCLUDE_ASM("asm/game/nonmatchings/800", func_80063BB4);

INCLUDE_ASM("asm/game/nonmatchings/800", func_80063CCC);

INCLUDE_ASM("asm/game/nonmatchings/800", func_80063DE0);

INCLUDE_ASM("asm/game/nonmatchings/800", func_80063F14);

INCLUDE_ASM("asm/game/nonmatchings/800", func_80063F9C);

INCLUDE_ASM("asm/game/nonmatchings/800", func_80064138);

INCLUDE_ASM("asm/game/nonmatchings/800", func_80064148);

INCLUDE_ASM("asm/game/nonmatchings/800", func_80064174);

INCLUDE_ASM("asm/game/nonmatchings/800", func_80064194);

INCLUDE_ASM("asm/game/nonmatchings/800", func_80064230);

INCLUDE_ASM("asm/game/nonmatchings/800", func_80064270);

INCLUDE_ASM("asm/game/nonmatchings/800", func_800646B4);

INCLUDE_ASM("asm/game/nonmatchings/800", func_800648A8);

INCLUDE_ASM("asm/game/nonmatchings/800", func_800653CC);

INCLUDE_ASM("asm/game/nonmatchings/800", func_800653EC);

INCLUDE_ASM("asm/game/nonmatchings/800", func_80065424);

INCLUDE_ASM("asm/game/nonmatchings/800", func_800654BC);

INCLUDE_ASM("asm/game/nonmatchings/800", func_80065618);

INCLUDE_ASM("asm/game/nonmatchings/800", func_80065660);

INCLUDE_ASM("asm/game/nonmatchings/800", func_80065904);

INCLUDE_ASM("asm/game/nonmatchings/800", func_80065A1C);

INCLUDE_ASM("asm/game/nonmatchings/800", func_80065B5C);

INCLUDE_ASM("asm/game/nonmatchings/800", func_80065C14);

INCLUDE_ASM("asm/game/nonmatchings/800", func_80065CD8);

INCLUDE_ASM("asm/game/nonmatchings/800", func_80065D00);

INCLUDE_ASM("asm/game/nonmatchings/800", func_80065D34);

INCLUDE_ASM("asm/game/nonmatchings/800", func_80065D68);

INCLUDE_ASM("asm/game/nonmatchings/800", func_80065DA0);

INCLUDE_ASM("asm/game/nonmatchings/800", func_80065DEC);

INCLUDE_ASM("asm/game/nonmatchings/800", func_80065E6C);

INCLUDE_ASM("asm/game/nonmatchings/800", func_80065F6C);

INCLUDE_ASM("asm/game/nonmatchings/800", func_80066250);

INCLUDE_ASM("asm/game/nonmatchings/800", func_80066270);

INCLUDE_ASM("asm/game/nonmatchings/800", func_80066324);

INCLUDE_ASM("asm/game/nonmatchings/800", func_80066344);

INCLUDE_ASM("asm/game/nonmatchings/800", func_80066398);

INCLUDE_ASM("asm/game/nonmatchings/800", func_800663EC);

INCLUDE_ASM("asm/game/nonmatchings/800", func_800664D8);

INCLUDE_ASM("asm/game/nonmatchings/800", func_80066950);

INCLUDE_ASM("asm/game/nonmatchings/800", func_80066B6C);

INCLUDE_ASM("asm/game/nonmatchings/800", func_80066C30);

INCLUDE_ASM("asm/game/nonmatchings/800", func_80066C6C);

INCLUDE_ASM("asm/game/nonmatchings/800", func_80066D08);

INCLUDE_ASM("asm/game/nonmatchings/800", func_80066E28);

INCLUDE_ASM("asm/game/nonmatchings/800", func_80067410);

INCLUDE_ASM("asm/game/nonmatchings/800", func_80067FB0);

INCLUDE_ASM("asm/game/nonmatchings/800", func_800681AC);

INCLUDE_ASM("asm/game/nonmatchings/800", func_8006820C);

INCLUDE_ASM("asm/game/nonmatchings/800", func_800682B4);

INCLUDE_ASM("asm/game/nonmatchings/800", func_80068310);

INCLUDE_ASM("asm/game/nonmatchings/800", func_8006839C);

INCLUDE_ASM("asm/game/nonmatchings/800", func_800683DC);

INCLUDE_ASM("asm/game/nonmatchings/800", func_800683F4);

INCLUDE_ASM("asm/game/nonmatchings/800", func_80068458);

INCLUDE_ASM("asm/game/nonmatchings/800", func_800684A4);

INCLUDE_ASM("asm/game/nonmatchings/800", func_800684B4);

INCLUDE_ASM("asm/game/nonmatchings/800", func_80068740);

void func_80068788(s16 arg0, unkStruct_80068788* arg1) {
    arg1->unk0 = arg0;
    arg1->unk2 = 0;
    arg1->unk4 = 0;
    arg1->unk6 = 0;
    if (arg1->unk8 == 0) {
        arg1->unk8 = func_800A403C((arg0 & 0xFFFF) * 8, 0);
    }
}

INCLUDE_ASM("asm/game/nonmatchings/800", func_800687D4);

INCLUDE_ASM("asm/game/nonmatchings/800", func_80068818);

INCLUDE_ASM("asm/game/nonmatchings/800", func_800689D8);

INCLUDE_ASM("asm/game/nonmatchings/800", func_80068ED0);

INCLUDE_ASM("asm/game/nonmatchings/800", func_80069048);

INCLUDE_ASM("asm/game/nonmatchings/800", func_800691E8);

INCLUDE_ASM("asm/game/nonmatchings/800", func_800692C4);

INCLUDE_ASM("asm/game/nonmatchings/800", func_800694FC);

INCLUDE_ASM("asm/game/nonmatchings/800", func_800696DC);

INCLUDE_ASM("asm/game/nonmatchings/800", func_8006993C);

INCLUDE_ASM("asm/game/nonmatchings/800", func_800699B0);

INCLUDE_ASM("asm/game/nonmatchings/800", func_80069A10);

INCLUDE_ASM("asm/game/nonmatchings/800", func_80069B34);

INCLUDE_ASM("asm/game/nonmatchings/800", func_80069B8C);

void func_80069BB8(void) {
}

INCLUDE_ASM("asm/game/nonmatchings/800", func_80069BC0);

INCLUDE_ASM("asm/game/nonmatchings/800", func_80069C10);

INCLUDE_ASM("asm/game/nonmatchings/800", func_80069C30);

INCLUDE_ASM("asm/game/nonmatchings/800", func_8006A5F0);

INCLUDE_ASM("asm/game/nonmatchings/800", func_8006A6A0);

INCLUDE_ASM("asm/game/nonmatchings/800", func_8006A77C);

INCLUDE_ASM("asm/game/nonmatchings/800", func_8006A7D8);

INCLUDE_ASM("asm/game/nonmatchings/800", func_8006AA94);

INCLUDE_ASM("asm/game/nonmatchings/800", func_8006ABE0);

INCLUDE_ASM("asm/game/nonmatchings/800", func_8006AF00);

INCLUDE_ASM("asm/game/nonmatchings/800", func_8006B034);

INCLUDE_ASM("asm/game/nonmatchings/800", func_8006B104);

INCLUDE_ASM("asm/game/nonmatchings/800", func_8006C344);

INCLUDE_ASM("asm/game/nonmatchings/800", func_8006C6E0);

INCLUDE_ASM("asm/game/nonmatchings/800", func_8006C9E4);

INCLUDE_ASM("asm/game/nonmatchings/800", func_8006CA18);

INCLUDE_ASM("asm/game/nonmatchings/800", func_8006CAB0);

INCLUDE_ASM("asm/game/nonmatchings/800", func_8006CB74);

INCLUDE_ASM("asm/game/nonmatchings/800", func_8006CBB8);

INCLUDE_ASM("asm/game/nonmatchings/800", func_8006CC48);

INCLUDE_ASM("asm/game/nonmatchings/800", func_8006CC64);

INCLUDE_ASM("asm/game/nonmatchings/800", func_8006CCC8);

INCLUDE_ASM("asm/game/nonmatchings/800", func_8006CCE4);

INCLUDE_ASM("asm/game/nonmatchings/800", func_8006CD00);

INCLUDE_ASM("asm/game/nonmatchings/800", func_8006CD7C);

INCLUDE_ASM("asm/game/nonmatchings/800", func_8006CDBC);

INCLUDE_ASM("asm/game/nonmatchings/800", func_8006CE00);

INCLUDE_ASM("asm/game/nonmatchings/800", func_8006CE0C);

INCLUDE_ASM("asm/game/nonmatchings/800", func_8006CED0);

INCLUDE_ASM("asm/game/nonmatchings/800", func_8006CF08);

INCLUDE_ASM("asm/game/nonmatchings/800", func_8006CF74);

INCLUDE_ASM("asm/game/nonmatchings/800", func_8006D008);

INCLUDE_ASM("asm/game/nonmatchings/800", func_8006D060);

INCLUDE_ASM("asm/game/nonmatchings/800", func_8006D164);

INCLUDE_ASM("asm/game/nonmatchings/800", func_8006D4CC);

INCLUDE_ASM("asm/game/nonmatchings/800", func_8006D518);

INCLUDE_ASM("asm/game/nonmatchings/800", func_8006D5C4);

INCLUDE_ASM("asm/game/nonmatchings/800", func_8006D6A0);

INCLUDE_ASM("asm/game/nonmatchings/800", func_8006D6D4);

INCLUDE_ASM("asm/game/nonmatchings/800", func_8006D74C);

INCLUDE_ASM("asm/game/nonmatchings/800", func_8006D960);

INCLUDE_ASM("asm/game/nonmatchings/800", func_8006D9BC);

INCLUDE_ASM("asm/game/nonmatchings/800", func_8006DA8C);

void func_8006DB4C(s32 arg0) {
    func_8006CF74(6, 0);
    func_8006CF74(7, 0);
    func_8006DA8C(arg0);
}

INCLUDE_ASM("asm/game/nonmatchings/800", func_8006DB8C);

INCLUDE_ASM("asm/game/nonmatchings/800", func_8006DBD8);

INCLUDE_ASM("asm/game/nonmatchings/800", func_8006DC20);

INCLUDE_ASM("asm/game/nonmatchings/800", func_8006DC40);

INCLUDE_ASM("asm/game/nonmatchings/800", func_8006DC50);

INCLUDE_ASM("asm/game/nonmatchings/800", func_8006DC7C);

INCLUDE_ASM("asm/game/nonmatchings/800", func_8006DD60);

INCLUDE_ASM("asm/game/nonmatchings/800", func_8006DDFC);

INCLUDE_ASM("asm/game/nonmatchings/800", func_8006DE30);

INCLUDE_ASM("asm/game/nonmatchings/800", func_8006DE74);

INCLUDE_ASM("asm/game/nonmatchings/800", func_8006DE9C);

INCLUDE_ASM("asm/game/nonmatchings/800", func_8006DEC4);

INCLUDE_ASM("asm/game/nonmatchings/800", func_8006DF24);

INCLUDE_ASM("asm/game/nonmatchings/800", func_8006DF4C);

INCLUDE_ASM("asm/game/nonmatchings/800", func_8006DF74);

INCLUDE_ASM("asm/game/nonmatchings/800", func_8006DFF4);

INCLUDE_ASM("asm/game/nonmatchings/800", func_8006E01C);

INCLUDE_ASM("asm/game/nonmatchings/800", func_8006E044);

INCLUDE_ASM("asm/game/nonmatchings/800", func_8006E0C4);

INCLUDE_ASM("asm/game/nonmatchings/800", func_8006E110);

INCLUDE_ASM("asm/game/nonmatchings/800", func_8006E150);

INCLUDE_ASM("asm/game/nonmatchings/800", func_8006E190);

INCLUDE_ASM("asm/game/nonmatchings/800", func_8006E1BC);

INCLUDE_ASM("asm/game/nonmatchings/800", func_8006E200);

INCLUDE_ASM("asm/game/nonmatchings/800", func_8006E23C);

INCLUDE_ASM("asm/game/nonmatchings/800", func_8006E298);

INCLUDE_ASM("asm/game/nonmatchings/800", func_8006E2B4);

INCLUDE_ASM("asm/game/nonmatchings/800", func_8006E2F4);

INCLUDE_ASM("asm/game/nonmatchings/800", func_8006E340);

INCLUDE_ASM("asm/game/nonmatchings/800", func_8006E390);

INCLUDE_ASM("asm/game/nonmatchings/800", func_8006E3DC);

INCLUDE_ASM("asm/game/nonmatchings/800", func_8006E420);

INCLUDE_ASM("asm/game/nonmatchings/800", func_8006E454);

INCLUDE_ASM("asm/game/nonmatchings/800", func_8006E4D4);

INCLUDE_ASM("asm/game/nonmatchings/800", func_8006E4F4);

INCLUDE_ASM("asm/game/nonmatchings/800", func_8006E540);

INCLUDE_ASM("asm/game/nonmatchings/800", func_8006E588);

INCLUDE_ASM("asm/game/nonmatchings/800", func_8006E608);

INCLUDE_ASM("asm/game/nonmatchings/800", func_8006E628);

INCLUDE_ASM("asm/game/nonmatchings/800", func_8006E674);

INCLUDE_ASM("asm/game/nonmatchings/800", func_8006E688);

INCLUDE_ASM("asm/game/nonmatchings/800", func_8006E6DC);

INCLUDE_ASM("asm/game/nonmatchings/800", func_8006E704);

INCLUDE_ASM("asm/game/nonmatchings/800", func_8006E730);

INCLUDE_ASM("asm/game/nonmatchings/800", func_8006E760);

INCLUDE_ASM("asm/game/nonmatchings/800", func_8006E7BC);

INCLUDE_ASM("asm/game/nonmatchings/800", func_8006E818);

INCLUDE_ASM("asm/game/nonmatchings/800", func_8006E834);

INCLUDE_ASM("asm/game/nonmatchings/800", func_8006E844);

INCLUDE_ASM("asm/game/nonmatchings/800", func_8006E874);

INCLUDE_ASM("asm/game/nonmatchings/800", func_8006E8A4);

INCLUDE_ASM("asm/game/nonmatchings/800", func_8006ECD0);

INCLUDE_ASM("asm/game/nonmatchings/800", func_8006ECF4);

INCLUDE_ASM("asm/game/nonmatchings/800", func_8006ED4C);

INCLUDE_ASM("asm/game/nonmatchings/800", func_8006ED68);

INCLUDE_ASM("asm/game/nonmatchings/800", func_8006ED78);

INCLUDE_ASM("asm/game/nonmatchings/800", func_8006EDCC);

INCLUDE_ASM("asm/game/nonmatchings/800", func_8006EE44);

INCLUDE_ASM("asm/game/nonmatchings/800", func_8006EEB4);

INCLUDE_ASM("asm/game/nonmatchings/800", func_8006EF44);

INCLUDE_ASM("asm/game/nonmatchings/800", func_8006EF70);

INCLUDE_ASM("asm/game/nonmatchings/800", func_8006F090);

INCLUDE_ASM("asm/game/nonmatchings/800", func_8006F0C4);

INCLUDE_ASM("asm/game/nonmatchings/800", func_8006F0F4);

INCLUDE_ASM("asm/game/nonmatchings/800", func_8006F114);

INCLUDE_ASM("asm/game/nonmatchings/800", func_8006F148);

INCLUDE_ASM("asm/game/nonmatchings/800", func_8006F1DC);

INCLUDE_ASM("asm/game/nonmatchings/800", func_8006F31C);

INCLUDE_ASM("asm/game/nonmatchings/800", func_8006F350);

INCLUDE_ASM("asm/game/nonmatchings/800", func_8006F378);

INCLUDE_ASM("asm/game/nonmatchings/800", func_8006F4D8);

INCLUDE_ASM("asm/game/nonmatchings/800", func_8006F520);

INCLUDE_ASM("asm/game/nonmatchings/800", func_8006F5A8);

INCLUDE_ASM("asm/game/nonmatchings/800", func_8006F8E4);

INCLUDE_ASM("asm/game/nonmatchings/800", func_8006F8F8);

INCLUDE_ASM("asm/game/nonmatchings/800", func_8006F9C4);

INCLUDE_ASM("asm/game/nonmatchings/800", func_8006FA68);

INCLUDE_ASM("asm/game/nonmatchings/800", func_8006FB10);

INCLUDE_ASM("asm/game/nonmatchings/800", func_8006FBF0);

INCLUDE_ASM("asm/game/nonmatchings/800", func_8006FC30);

INCLUDE_ASM("asm/game/nonmatchings/800", func_8006FFB0);

INCLUDE_ASM("asm/game/nonmatchings/800", func_80070090);

INCLUDE_ASM("asm/game/nonmatchings/800", func_800700E4);

INCLUDE_ASM("asm/game/nonmatchings/800", func_80070158);

INCLUDE_ASM("asm/game/nonmatchings/800", func_80070310);

INCLUDE_ASM("asm/game/nonmatchings/800", func_800703B0);

INCLUDE_ASM("asm/game/nonmatchings/800", func_80070DA8);

INCLUDE_ASM("asm/game/nonmatchings/800", func_80070DF0);

INCLUDE_ASM("asm/game/nonmatchings/800", func_80070E84);

INCLUDE_ASM("asm/game/nonmatchings/800", func_80070F00);

INCLUDE_ASM("asm/game/nonmatchings/800", func_80070F40);

INCLUDE_ASM("asm/game/nonmatchings/800", func_80070F6C);

INCLUDE_ASM("asm/game/nonmatchings/800", func_800710C0);

INCLUDE_ASM("asm/game/nonmatchings/800", func_800710F8);

INCLUDE_ASM("asm/game/nonmatchings/800", func_800711A8);

INCLUDE_ASM("asm/game/nonmatchings/800", func_80071234);

INCLUDE_ASM("asm/game/nonmatchings/800", func_80071250);

INCLUDE_ASM("asm/game/nonmatchings/800", func_800712A8);

INCLUDE_ASM("asm/game/nonmatchings/800", func_8007134C);

INCLUDE_ASM("asm/game/nonmatchings/800", func_800713CC);

INCLUDE_ASM("asm/game/nonmatchings/800", func_8007142C);

INCLUDE_ASM("asm/game/nonmatchings/800", func_80071458);

INCLUDE_ASM("asm/game/nonmatchings/800", func_800716FC);

INCLUDE_ASM("asm/game/nonmatchings/800", func_80071738);

INCLUDE_ASM("asm/game/nonmatchings/800", func_80071788);

INCLUDE_ASM("asm/game/nonmatchings/800", func_80072CFC);

void func_80072D64(s32 arg0) {
    func_800A42B4(arg0 - 4);
}

INCLUDE_ASM("asm/game/nonmatchings/800", func_80072D84);

INCLUDE_ASM("asm/game/nonmatchings/800", func_80073224);

INCLUDE_ASM("asm/game/nonmatchings/800", func_800733B0);

INCLUDE_ASM("asm/game/nonmatchings/800", func_8007349C);

INCLUDE_ASM("asm/game/nonmatchings/800", func_80073644);

INCLUDE_ASM("asm/game/nonmatchings/800", func_80073798);

INCLUDE_ASM("asm/game/nonmatchings/800", func_80073FC0);

INCLUDE_ASM("asm/game/nonmatchings/800", func_80074098);

INCLUDE_ASM("asm/game/nonmatchings/800", func_80074104);

INCLUDE_ASM("asm/game/nonmatchings/800", func_80074458);

INCLUDE_ASM("asm/game/nonmatchings/800", func_800745F4);

INCLUDE_ASM("asm/game/nonmatchings/800", func_800749D8);

void func_80074AB0(void) {
}

INCLUDE_ASM("asm/game/nonmatchings/800", func_80074AB8);

INCLUDE_ASM("asm/game/nonmatchings/800", func_80074BDC);

INCLUDE_ASM("asm/game/nonmatchings/800", func_80074C14);

INCLUDE_ASM("asm/game/nonmatchings/800", func_80074E14);

INCLUDE_ASM("asm/game/nonmatchings/800", func_80074FCC);

INCLUDE_ASM("asm/game/nonmatchings/800", func_8007519C);

INCLUDE_ASM("asm/game/nonmatchings/800", func_8007523C);

INCLUDE_ASM("asm/game/nonmatchings/800", func_8007546C);

INCLUDE_ASM("asm/game/nonmatchings/800", func_800756A8);

INCLUDE_ASM("asm/game/nonmatchings/800", func_8007577C);

INCLUDE_ASM("asm/game/nonmatchings/800", func_80075860);

INCLUDE_ASM("asm/game/nonmatchings/800", func_80075958);

INCLUDE_ASM("asm/game/nonmatchings/800", func_80075A88);

INCLUDE_ASM("asm/game/nonmatchings/800", func_80075B2C);

INCLUDE_ASM("asm/game/nonmatchings/800", func_80075E30);

INCLUDE_ASM("asm/game/nonmatchings/800", func_80075E7C);

INCLUDE_ASM("asm/game/nonmatchings/800", func_80075EC8);

INCLUDE_ASM("asm/game/nonmatchings/800", func_80075F10);

INCLUDE_ASM("asm/game/nonmatchings/800", func_80075FBC);

INCLUDE_ASM("asm/game/nonmatchings/800", func_80076098);

INCLUDE_ASM("asm/game/nonmatchings/800", func_800762B0);

INCLUDE_ASM("asm/game/nonmatchings/800", func_8007643C);

INCLUDE_ASM("asm/game/nonmatchings/800", func_80076480);

INCLUDE_ASM("asm/game/nonmatchings/800", func_80076550);

INCLUDE_ASM("asm/game/nonmatchings/800", func_80076614);

INCLUDE_ASM("asm/game/nonmatchings/800", func_80076718);

INCLUDE_ASM("asm/game/nonmatchings/800", func_80076B68);

INCLUDE_ASM("asm/game/nonmatchings/800", func_80076C4C);

INCLUDE_ASM("asm/game/nonmatchings/800", func_80076DB0);

INCLUDE_ASM("asm/game/nonmatchings/800", func_80076F90);

INCLUDE_ASM("asm/game/nonmatchings/800", func_80077060);

INCLUDE_ASM("asm/game/nonmatchings/800", func_8007729C);

INCLUDE_ASM("asm/game/nonmatchings/800", func_80077398);

INCLUDE_ASM("asm/game/nonmatchings/800", func_80077788);

INCLUDE_ASM("asm/game/nonmatchings/800", func_80077904);

INCLUDE_ASM("asm/game/nonmatchings/800", func_80077A44);

INCLUDE_ASM("asm/game/nonmatchings/800", func_80077BC4);

INCLUDE_ASM("asm/game/nonmatchings/800", func_80077E54);

INCLUDE_ASM("asm/game/nonmatchings/800", func_80078208);

INCLUDE_ASM("asm/game/nonmatchings/800", func_80078460);

INCLUDE_ASM("asm/game/nonmatchings/800", func_800786A0);

INCLUDE_ASM("asm/game/nonmatchings/800", func_800788E0);

INCLUDE_ASM("asm/game/nonmatchings/800", func_80078A78);

INCLUDE_ASM("asm/game/nonmatchings/800", func_80078C74);

INCLUDE_ASM("asm/game/nonmatchings/800", func_80078E4C);

INCLUDE_ASM("asm/game/nonmatchings/800", func_80078FF4);

INCLUDE_ASM("asm/game/nonmatchings/800", func_80079050);

INCLUDE_ASM("asm/game/nonmatchings/800", func_800790AC);

INCLUDE_ASM("asm/game/nonmatchings/800", func_800791C4);

INCLUDE_ASM("asm/game/nonmatchings/800", func_800792E0);

INCLUDE_ASM("asm/game/nonmatchings/800", func_800793D0);

INCLUDE_ASM("asm/game/nonmatchings/800", func_800795E0);

INCLUDE_ASM("asm/game/nonmatchings/800", func_80079CA8);

INCLUDE_ASM("asm/game/nonmatchings/800", func_80079D10);

INCLUDE_ASM("asm/game/nonmatchings/800", func_80079DD8);

INCLUDE_ASM("asm/game/nonmatchings/800", func_80079E50);

INCLUDE_ASM("asm/game/nonmatchings/800", func_80079F70);

INCLUDE_ASM("asm/game/nonmatchings/800", func_80079F98);

INCLUDE_ASM("asm/game/nonmatchings/800", func_8007A02C);

void func_8007A0C0(void) {
    func_800A42B4(D_800F17B8);
    D_800F17B8 = 0;
}

INCLUDE_ASM("asm/game/nonmatchings/800", func_8007A0F0);

INCLUDE_ASM("asm/game/nonmatchings/800", func_8007A180);

INCLUDE_ASM("asm/game/nonmatchings/800", func_8007A25C);

INCLUDE_ASM("asm/game/nonmatchings/800", func_8007A2D4);

INCLUDE_ASM("asm/game/nonmatchings/800", func_8007A358);

INCLUDE_ASM("asm/game/nonmatchings/800", func_8007A430);

INCLUDE_ASM("asm/game/nonmatchings/800", func_8007A45C);

INCLUDE_ASM("asm/game/nonmatchings/800", func_8007A4A0);

INCLUDE_ASM("asm/game/nonmatchings/800", func_8007A578);

INCLUDE_ASM("asm/game/nonmatchings/800", func_8007A5D4);

INCLUDE_ASM("asm/game/nonmatchings/800", func_8007A614);

INCLUDE_ASM("asm/game/nonmatchings/800", func_8007A62C);

INCLUDE_ASM("asm/game/nonmatchings/800", func_8007A7F8);

INCLUDE_ASM("asm/game/nonmatchings/800", func_8007A824);

INCLUDE_ASM("asm/game/nonmatchings/800", func_8007A858);

INCLUDE_ASM("asm/game/nonmatchings/800", func_8007A890);

INCLUDE_ASM("asm/game/nonmatchings/800", func_8007A8C4);

INCLUDE_ASM("asm/game/nonmatchings/800", func_8007A914);

INCLUDE_ASM("asm/game/nonmatchings/800", func_8007A920);

INCLUDE_ASM("asm/game/nonmatchings/800", func_8007A930);

INCLUDE_ASM("asm/game/nonmatchings/800", func_8007AAA0);

INCLUDE_ASM("asm/game/nonmatchings/800", func_8007ABCC);

INCLUDE_ASM("asm/game/nonmatchings/800", func_8007AD4C);

INCLUDE_ASM("asm/game/nonmatchings/800", func_8007B068);

INCLUDE_ASM("asm/game/nonmatchings/800", func_8007B100);

INCLUDE_ASM("asm/game/nonmatchings/800", func_8007B2F0);

INCLUDE_ASM("asm/game/nonmatchings/800", func_8007B638);

INCLUDE_ASM("asm/game/nonmatchings/800", func_8007B80C);

INCLUDE_ASM("asm/game/nonmatchings/800", func_8007B9D4);

INCLUDE_ASM("asm/game/nonmatchings/800", func_8007BA08);

INCLUDE_ASM("asm/game/nonmatchings/800", func_8007BA78);

INCLUDE_ASM("asm/game/nonmatchings/800", func_8007BB2C);

INCLUDE_ASM("asm/game/nonmatchings/800", func_8007BBA0);

INCLUDE_ASM("asm/game/nonmatchings/800", func_8007BBD4);

INCLUDE_ASM("asm/game/nonmatchings/800", func_8007BEAC);

INCLUDE_ASM("asm/game/nonmatchings/800", func_8007C030);

INCLUDE_ASM("asm/game/nonmatchings/800", func_8007C1A0);

INCLUDE_ASM("asm/game/nonmatchings/800", func_8007C2D4);

INCLUDE_ASM("asm/game/nonmatchings/800", func_8007C6C4);

INCLUDE_ASM("asm/game/nonmatchings/800", func_8007C87C);

INCLUDE_ASM("asm/game/nonmatchings/800", func_8007CA68);

INCLUDE_ASM("asm/game/nonmatchings/800", func_8007CE50);

INCLUDE_ASM("asm/game/nonmatchings/800", func_8007CF90);

INCLUDE_ASM("asm/game/nonmatchings/800", func_8007D338);

INCLUDE_ASM("asm/game/nonmatchings/800", func_8007D568);

INCLUDE_ASM("asm/game/nonmatchings/800", func_8007D60C);

INCLUDE_ASM("asm/game/nonmatchings/800", func_8007D6E8);

INCLUDE_ASM("asm/game/nonmatchings/800", func_8007D784);

INCLUDE_ASM("asm/game/nonmatchings/800", func_8007D9E8);

INCLUDE_ASM("asm/game/nonmatchings/800", func_8007DA10);

INCLUDE_ASM("asm/game/nonmatchings/800", func_8007DB98);

INCLUDE_ASM("asm/game/nonmatchings/800", func_8007DE90);

INCLUDE_ASM("asm/game/nonmatchings/800", func_8007DEDC);

INCLUDE_ASM("asm/game/nonmatchings/800", func_8007DF98);

INCLUDE_ASM("asm/game/nonmatchings/800", func_8007E14C);

INCLUDE_ASM("asm/game/nonmatchings/800", func_8007E214);

INCLUDE_ASM("asm/game/nonmatchings/800", func_8007E2C8);

INCLUDE_ASM("asm/game/nonmatchings/800", func_8007EE5C);

INCLUDE_ASM("asm/game/nonmatchings/800", func_8007EED8);

INCLUDE_ASM("asm/game/nonmatchings/800", func_8007F358);

INCLUDE_ASM("asm/game/nonmatchings/800", func_8007FCC0);

INCLUDE_ASM("asm/game/nonmatchings/800", func_80080050);

INCLUDE_ASM("asm/game/nonmatchings/800", func_800800B0);

INCLUDE_ASM("asm/game/nonmatchings/800", func_80080108);

INCLUDE_ASM("asm/game/nonmatchings/800", func_80080180);

INCLUDE_ASM("asm/game/nonmatchings/800", func_80080294);

INCLUDE_ASM("asm/game/nonmatchings/800", func_80080318);

INCLUDE_ASM("asm/game/nonmatchings/800", func_80080324);

INCLUDE_ASM("asm/game/nonmatchings/800", func_800803A8);

INCLUDE_ASM("asm/game/nonmatchings/800", func_800803F8);

INCLUDE_ASM("asm/game/nonmatchings/800", func_8008041C);

INCLUDE_ASM("asm/game/nonmatchings/800", func_80080440);

INCLUDE_ASM("asm/game/nonmatchings/800", func_8008045C);

INCLUDE_ASM("asm/game/nonmatchings/800", func_80080484);

INCLUDE_ASM("asm/game/nonmatchings/800", func_800804AC);

INCLUDE_ASM("asm/game/nonmatchings/800", func_800804D0);

INCLUDE_ASM("asm/game/nonmatchings/800", func_800809DC);

INCLUDE_ASM("asm/game/nonmatchings/800", func_80080ADC);

INCLUDE_ASM("asm/game/nonmatchings/800", func_80080B8C);

INCLUDE_ASM("asm/game/nonmatchings/800", func_80080C00);

void func_80080E0C(unkStruct_80080E0C* arg0) {
    s32 temp_a0;

    temp_a0 = arg0->unk1C0;
    if (temp_a0 != 0) {
        func_8008D56C(temp_a0);
        func_800A42B4(arg0->unk1C0);
        arg0->unk1C0 = 0;
    }
}

INCLUDE_ASM("asm/game/nonmatchings/800", func_80080E54);

INCLUDE_ASM("asm/game/nonmatchings/800", func_80080F7C);

INCLUDE_ASM("asm/game/nonmatchings/800", func_8008112C);

INCLUDE_ASM("asm/game/nonmatchings/800", func_8008144C);

INCLUDE_ASM("asm/game/nonmatchings/800", func_800815B4);

INCLUDE_ASM("asm/game/nonmatchings/800", func_80081674);

INCLUDE_ASM("asm/game/nonmatchings/800", func_80081854);

INCLUDE_ASM("asm/game/nonmatchings/800", func_80081DE8);

INCLUDE_ASM("asm/game/nonmatchings/800", func_80081ED0);

INCLUDE_ASM("asm/game/nonmatchings/800", func_80081F94);

INCLUDE_ASM("asm/game/nonmatchings/800", func_80082150);

INCLUDE_ASM("asm/game/nonmatchings/800", func_800821AC);

INCLUDE_ASM("asm/game/nonmatchings/800", func_800821F4);

INCLUDE_ASM("asm/game/nonmatchings/800", func_800827E8);

INCLUDE_ASM("asm/game/nonmatchings/800", func_80082850);

INCLUDE_ASM("asm/game/nonmatchings/800", func_80082A10);

INCLUDE_ASM("asm/game/nonmatchings/800", func_80082EB4);

INCLUDE_ASM("asm/game/nonmatchings/800", func_80082F20);

INCLUDE_ASM("asm/game/nonmatchings/800", func_80082FE4);

INCLUDE_ASM("asm/game/nonmatchings/800", func_80083094);

INCLUDE_ASM("asm/game/nonmatchings/800", func_800833BC);

INCLUDE_ASM("asm/game/nonmatchings/800", func_80083484);

INCLUDE_ASM("asm/game/nonmatchings/800", func_80083670);

INCLUDE_ASM("asm/game/nonmatchings/800", func_8008372C);

INCLUDE_ASM("asm/game/nonmatchings/800", func_80083BF8);

INCLUDE_ASM("asm/game/nonmatchings/800", func_80083D20);

INCLUDE_ASM("asm/game/nonmatchings/800", func_80083D54);

INCLUDE_ASM("asm/game/nonmatchings/800", func_80083E18);

INCLUDE_ASM("asm/game/nonmatchings/800", func_80083EFC);

INCLUDE_ASM("asm/game/nonmatchings/800", func_80083FF0);

INCLUDE_ASM("asm/game/nonmatchings/800", func_80084070);

INCLUDE_ASM("asm/game/nonmatchings/800", func_80084080);

INCLUDE_ASM("asm/game/nonmatchings/800", func_8008420C);

INCLUDE_ASM("asm/game/nonmatchings/800", func_800844FC);

INCLUDE_ASM("asm/game/nonmatchings/800", func_8008455C);

INCLUDE_ASM("asm/game/nonmatchings/800", func_800845B4);

INCLUDE_ASM("asm/game/nonmatchings/800", func_80084704);

INCLUDE_ASM("asm/game/nonmatchings/800", func_800847BC);

INCLUDE_ASM("asm/game/nonmatchings/800", func_80084818);

INCLUDE_ASM("asm/game/nonmatchings/800", func_80084974);

INCLUDE_ASM("asm/game/nonmatchings/800", func_80084B28);

INCLUDE_ASM("asm/game/nonmatchings/800", func_80084CB0);

INCLUDE_ASM("asm/game/nonmatchings/800", func_800852EC);

INCLUDE_ASM("asm/game/nonmatchings/800", func_80085320);

INCLUDE_ASM("asm/game/nonmatchings/800", func_8008534C);

INCLUDE_ASM("asm/game/nonmatchings/800", func_800860C0);

INCLUDE_ASM("asm/game/nonmatchings/800", func_8008621C);

INCLUDE_ASM("asm/game/nonmatchings/800", func_80086378);

INCLUDE_ASM("asm/game/nonmatchings/800", func_80086474);

INCLUDE_ASM("asm/game/nonmatchings/800", func_800866BC);

INCLUDE_ASM("asm/game/nonmatchings/800", func_8008674C);

INCLUDE_ASM("asm/game/nonmatchings/800", func_80086C30);

INCLUDE_ASM("asm/game/nonmatchings/800", func_800877EC);

INCLUDE_ASM("asm/game/nonmatchings/800", func_80087A6C);

INCLUDE_ASM("asm/game/nonmatchings/800", func_80087ACC);

INCLUDE_ASM("asm/game/nonmatchings/800", func_80087B20);

INCLUDE_ASM("asm/game/nonmatchings/800", func_80087C88);

INCLUDE_ASM("asm/game/nonmatchings/800", func_80087DCC);

INCLUDE_ASM("asm/game/nonmatchings/800", func_80087FDC);

INCLUDE_ASM("asm/game/nonmatchings/800", func_800882CC);

INCLUDE_ASM("asm/game/nonmatchings/800", func_80088398);

INCLUDE_ASM("asm/game/nonmatchings/800", func_80088424);

INCLUDE_ASM("asm/game/nonmatchings/800", func_800884E8);

INCLUDE_ASM("asm/game/nonmatchings/800", func_80088528);

INCLUDE_ASM("asm/game/nonmatchings/800", func_80088660);

INCLUDE_ASM("asm/game/nonmatchings/800", func_800887B0);

INCLUDE_ASM("asm/game/nonmatchings/800", func_8008892C);

INCLUDE_ASM("asm/game/nonmatchings/800", func_80088A58);

INCLUDE_ASM("asm/game/nonmatchings/800", func_80088E70);

INCLUDE_ASM("asm/game/nonmatchings/800", func_80089288);

INCLUDE_ASM("asm/game/nonmatchings/800", func_800897E0);

INCLUDE_ASM("asm/game/nonmatchings/800", func_80089844);

INCLUDE_ASM("asm/game/nonmatchings/800", func_80089904);

INCLUDE_ASM("asm/game/nonmatchings/800", func_80089A44);

INCLUDE_ASM("asm/game/nonmatchings/800", func_8008A0E0);

INCLUDE_ASM("asm/game/nonmatchings/800", func_8008A2F0);

INCLUDE_ASM("asm/game/nonmatchings/800", func_8008A4B0);

INCLUDE_ASM("asm/game/nonmatchings/800", func_8008A594);

INCLUDE_ASM("asm/game/nonmatchings/800", func_8008A6DC);

INCLUDE_ASM("asm/game/nonmatchings/800", func_8008A7E0);

INCLUDE_ASM("asm/game/nonmatchings/800", func_8008A884);

INCLUDE_ASM("asm/game/nonmatchings/800", func_8008A910);

INCLUDE_ASM("asm/game/nonmatchings/800", func_8008AA00);

INCLUDE_ASM("asm/game/nonmatchings/800", func_8008AC30);

INCLUDE_ASM("asm/game/nonmatchings/800", func_8008AD98);

INCLUDE_ASM("asm/game/nonmatchings/800", func_8008AF2C);

INCLUDE_ASM("asm/game/nonmatchings/800", func_8008AF6C);

INCLUDE_ASM("asm/game/nonmatchings/800", func_8008AF98);

INCLUDE_ASM("asm/game/nonmatchings/800", func_8008B288);

INCLUDE_ASM("asm/game/nonmatchings/800", func_8008B5FC);

INCLUDE_ASM("asm/game/nonmatchings/800", func_8008B6E8);

INCLUDE_ASM("asm/game/nonmatchings/800", func_8008BB28);

INCLUDE_ASM("asm/game/nonmatchings/800", func_8008BC64);

INCLUDE_ASM("asm/game/nonmatchings/800", func_8008BCA0);

INCLUDE_ASM("asm/game/nonmatchings/800", func_8008BCCC);

INCLUDE_ASM("asm/game/nonmatchings/800", func_8008BCF8);

INCLUDE_ASM("asm/game/nonmatchings/800", func_8008BE94);

INCLUDE_ASM("asm/game/nonmatchings/800", func_8008C048);

INCLUDE_ASM("asm/game/nonmatchings/800", func_8008C198);

INCLUDE_ASM("asm/game/nonmatchings/800", func_8008C6AC);

INCLUDE_ASM("asm/game/nonmatchings/800", func_8008C6D4);

INCLUDE_ASM("asm/game/nonmatchings/800", func_8008C700);

INCLUDE_ASM("asm/game/nonmatchings/800", func_8008C7E4);

INCLUDE_ASM("asm/game/nonmatchings/800", func_8008C830);

INCLUDE_ASM("asm/game/nonmatchings/800", func_8008CFE0);

void func_8008D474(unkStruct_8008E45C* arg0) {
    arg0->unkE = (s16)arg0->unk19;
}

INCLUDE_ASM("asm/game/nonmatchings/800", func_8008D480);

INCLUDE_ASM("asm/game/nonmatchings/800", func_8008D534);

INCLUDE_ASM("asm/game/nonmatchings/800", func_8008D56C);

INCLUDE_ASM("asm/game/nonmatchings/800", func_8008D5B8);

INCLUDE_ASM("asm/game/nonmatchings/800", func_8008DE58);

void func_8008E45C(unkStruct_8008E45C* arg0) {
    arg0->unkE = arg0->unk19;
}

INCLUDE_ASM("asm/game/nonmatchings/800", func_8008E468);

INCLUDE_ASM("asm/game/nonmatchings/800", func_8008E688);

INCLUDE_ASM("asm/game/nonmatchings/800", func_8008E81C);

INCLUDE_ASM("asm/game/nonmatchings/800", func_8008E874);

INCLUDE_ASM("asm/game/nonmatchings/800", func_8008E8E8);

INCLUDE_ASM("asm/game/nonmatchings/800", func_8008E980);

INCLUDE_ASM("asm/game/nonmatchings/800", func_8008ECDC);

INCLUDE_ASM("asm/game/nonmatchings/800", func_8008ED24);

INCLUDE_ASM("asm/game/nonmatchings/800", func_8008ED84);

INCLUDE_ASM("asm/game/nonmatchings/800", func_8008F008);

INCLUDE_ASM("asm/game/nonmatchings/800", func_8008F10C);

INCLUDE_ASM("asm/game/nonmatchings/800", func_8008F16C);

INCLUDE_ASM("asm/game/nonmatchings/800", func_8008F48C);

INCLUDE_ASM("asm/game/nonmatchings/800", func_8008F528);

INCLUDE_ASM("asm/game/nonmatchings/800", func_8008F6F4);

INCLUDE_ASM("asm/game/nonmatchings/800", func_8008F99C);

INCLUDE_ASM("asm/game/nonmatchings/800", func_8008FBF4);

INCLUDE_ASM("asm/game/nonmatchings/800", func_8008FC58);

INCLUDE_ASM("asm/game/nonmatchings/800", func_8008FE54);

INCLUDE_ASM("asm/game/nonmatchings/800", func_80090174);

INCLUDE_ASM("asm/game/nonmatchings/800", func_800901A0);

INCLUDE_ASM("asm/game/nonmatchings/800", func_80090378);

INCLUDE_ASM("asm/game/nonmatchings/800", func_800903E4);

INCLUDE_ASM("asm/game/nonmatchings/800", func_80090690);

INCLUDE_ASM("asm/game/nonmatchings/800", func_800906BC);

INCLUDE_ASM("asm/game/nonmatchings/800", func_800908F0);

INCLUDE_ASM("asm/game/nonmatchings/800", func_80090988);

INCLUDE_ASM("asm/game/nonmatchings/800", func_80090AC4);

INCLUDE_ASM("asm/game/nonmatchings/800", func_80090C04);

INCLUDE_ASM("asm/game/nonmatchings/800", func_80090E10);

INCLUDE_ASM("asm/game/nonmatchings/800", func_80090EAC);

INCLUDE_ASM("asm/game/nonmatchings/800", func_80090F08);

INCLUDE_ASM("asm/game/nonmatchings/800", func_80090F54);

INCLUDE_ASM("asm/game/nonmatchings/800", func_80090FCC);

INCLUDE_ASM("asm/game/nonmatchings/800", func_80090FFC);

INCLUDE_ASM("asm/game/nonmatchings/800", func_80091454);

INCLUDE_ASM("asm/game/nonmatchings/800", func_80091514);

INCLUDE_ASM("asm/game/nonmatchings/800", func_80091924);

INCLUDE_ASM("asm/game/nonmatchings/800", func_80091B80);

INCLUDE_ASM("asm/game/nonmatchings/800", func_80091BC8);

INCLUDE_ASM("asm/game/nonmatchings/800", func_80091E64);

INCLUDE_ASM("asm/game/nonmatchings/800", func_800922C4);

INCLUDE_ASM("asm/game/nonmatchings/800", func_80092384);

INCLUDE_ASM("asm/game/nonmatchings/800", func_80092400);

INCLUDE_ASM("asm/game/nonmatchings/800", func_80092528);

INCLUDE_ASM("asm/game/nonmatchings/800", func_80092650);

INCLUDE_ASM("asm/game/nonmatchings/800", func_800926A0);

INCLUDE_ASM("asm/game/nonmatchings/800", func_80092744);

INCLUDE_ASM("asm/game/nonmatchings/800", func_80092764);

INCLUDE_ASM("asm/game/nonmatchings/800", func_80092BD8);

INCLUDE_ASM("asm/game/nonmatchings/800", func_80092D6C);

INCLUDE_ASM("asm/game/nonmatchings/800", func_800930F8);

INCLUDE_ASM("asm/game/nonmatchings/800", func_80093464);

INCLUDE_ASM("asm/game/nonmatchings/800", func_800934C4);

INCLUDE_ASM("asm/game/nonmatchings/800", func_800936C0);

INCLUDE_ASM("asm/game/nonmatchings/800", func_800939F8);

INCLUDE_ASM("asm/game/nonmatchings/800", func_80093A4C);

INCLUDE_ASM("asm/game/nonmatchings/800", func_80093A90);

INCLUDE_ASM("asm/game/nonmatchings/800", func_80093AD0);

INCLUDE_ASM("asm/game/nonmatchings/800", func_80093B70);

INCLUDE_ASM("asm/game/nonmatchings/800", func_80093EA0);

INCLUDE_ASM("asm/game/nonmatchings/800", func_80093FF8);

INCLUDE_ASM("asm/game/nonmatchings/800", func_80094430);

INCLUDE_ASM("asm/game/nonmatchings/800", func_800946B8);

INCLUDE_ASM("asm/game/nonmatchings/800", func_800948BC);

INCLUDE_ASM("asm/game/nonmatchings/800", func_80094920);

INCLUDE_ASM("asm/game/nonmatchings/800", func_800949A8);

INCLUDE_ASM("asm/game/nonmatchings/800", func_80094A40);

INCLUDE_ASM("asm/game/nonmatchings/800", func_80094A8C);

INCLUDE_ASM("asm/game/nonmatchings/800", func_80094B54);

INCLUDE_ASM("asm/game/nonmatchings/800", func_80094E74);

INCLUDE_ASM("asm/game/nonmatchings/800", func_80094E88);

INCLUDE_ASM("asm/game/nonmatchings/800", func_80094EF0);

INCLUDE_ASM("asm/game/nonmatchings/800", func_80094F98);

INCLUDE_ASM("asm/game/nonmatchings/800", func_800955A0);

INCLUDE_ASM("asm/game/nonmatchings/800", func_80095618);

INCLUDE_ASM("asm/game/nonmatchings/800", func_800956F4);

INCLUDE_ASM("asm/game/nonmatchings/800", func_8009582C);

INCLUDE_ASM("asm/game/nonmatchings/800", func_80095A78);

INCLUDE_ASM("asm/game/nonmatchings/800", func_80095BAC);

INCLUDE_ASM("asm/game/nonmatchings/800", func_80095CE4);

INCLUDE_ASM("asm/game/nonmatchings/800", func_80095FE8);

INCLUDE_ASM("asm/game/nonmatchings/800", func_80096034);

INCLUDE_ASM("asm/game/nonmatchings/800", func_800966E8);

INCLUDE_ASM("asm/game/nonmatchings/800", func_800967F4);

INCLUDE_ASM("asm/game/nonmatchings/800", func_80096848);

INCLUDE_ASM("asm/game/nonmatchings/800", func_800969EC);

INCLUDE_ASM("asm/game/nonmatchings/800", func_80096AF4);

INCLUDE_ASM("asm/game/nonmatchings/800", func_80096C14);

INCLUDE_ASM("asm/game/nonmatchings/800", func_80096FC0);

INCLUDE_ASM("asm/game/nonmatchings/800", func_80097210);

INCLUDE_ASM("asm/game/nonmatchings/800", func_80097260);

INCLUDE_ASM("asm/game/nonmatchings/800", func_800973D0);

INCLUDE_ASM("asm/game/nonmatchings/800", func_80097620);

INCLUDE_ASM("asm/game/nonmatchings/800", func_80097A9C);

boolean func_80097E28(void) {
    return false;
}

INCLUDE_ASM("asm/game/nonmatchings/800", func_80097E30);

INCLUDE_ASM("asm/game/nonmatchings/800", func_800980C4);

void func_800980F8(void) {
    func_80048214();
}

INCLUDE_ASM("asm/game/nonmatchings/800", func_80098118);

INCLUDE_ASM("asm/game/nonmatchings/800", func_800981D0);

INCLUDE_ASM("asm/game/nonmatchings/800", func_800983F4);

INCLUDE_ASM("asm/game/nonmatchings/800", func_80098404);

INCLUDE_ASM("asm/game/nonmatchings/800", func_80098574);

INCLUDE_ASM("asm/game/nonmatchings/800", func_800986E0);

INCLUDE_ASM("asm/game/nonmatchings/800", func_80098728);

INCLUDE_ASM("asm/game/nonmatchings/800", func_800987B8);

INCLUDE_ASM("asm/game/nonmatchings/800", func_80098830);

INCLUDE_ASM("asm/game/nonmatchings/800", func_800988A4);

INCLUDE_ASM("asm/game/nonmatchings/800", func_8009897C);

INCLUDE_ASM("asm/game/nonmatchings/800", func_800989CC);

INCLUDE_ASM("asm/game/nonmatchings/800", func_80098A78);

INCLUDE_ASM("asm/game/nonmatchings/800", func_80098BBC);

INCLUDE_ASM("asm/game/nonmatchings/800", func_80098F18);

INCLUDE_ASM("asm/game/nonmatchings/800", func_80099324);

INCLUDE_ASM("asm/game/nonmatchings/800", func_80099374);

INCLUDE_ASM("asm/game/nonmatchings/800", func_800995D4);

INCLUDE_ASM("asm/game/nonmatchings/800", func_80099630);

INCLUDE_ASM("asm/game/nonmatchings/800", func_80099664);

INCLUDE_ASM("asm/game/nonmatchings/800", func_80099A54);

INCLUDE_ASM("asm/game/nonmatchings/800", func_80099B6C);

INCLUDE_ASM("asm/game/nonmatchings/800", func_80099B78);

void func_80099B84(unkStruct_80099B84* arg0) {
    if (arg0->unk8 & 8) {
        func_800A0CB4();
        return;
    }
    func_800B3430();
}

INCLUDE_ASM("asm/game/nonmatchings/800", func_80099BC8);

INCLUDE_ASM("asm/game/nonmatchings/800", func_80099C0C);

INCLUDE_ASM("asm/game/nonmatchings/800", func_80099C80);

INCLUDE_ASM("asm/game/nonmatchings/800", func_80099E38);

INCLUDE_ASM("asm/game/nonmatchings/800", func_8009A2C0);

INCLUDE_ASM("asm/game/nonmatchings/800", func_8009A344);

INCLUDE_ASM("asm/game/nonmatchings/800", func_8009A4C8);

INCLUDE_ASM("asm/game/nonmatchings/800", func_8009A61C);

INCLUDE_ASM("asm/game/nonmatchings/800", func_8009A798);

INCLUDE_ASM("asm/game/nonmatchings/800", func_8009A83C);

INCLUDE_ASM("asm/game/nonmatchings/800", func_8009A8F8);

INCLUDE_ASM("asm/game/nonmatchings/800", func_8009A9A8);

INCLUDE_ASM("asm/game/nonmatchings/800", func_8009AA18);

INCLUDE_ASM("asm/game/nonmatchings/800", func_8009AADC);

INCLUDE_ASM("asm/game/nonmatchings/800", func_8009AC70);

INCLUDE_ASM("asm/game/nonmatchings/800", func_8009AFD8);

INCLUDE_ASM("asm/game/nonmatchings/800", func_8009B04C);

INCLUDE_ASM("asm/game/nonmatchings/800", func_8009B164);

INCLUDE_ASM("asm/game/nonmatchings/800", func_8009B1AC);

INCLUDE_ASM("asm/game/nonmatchings/800", func_8009B23C);

INCLUDE_ASM("asm/game/nonmatchings/800", func_8009B5B4);

INCLUDE_ASM("asm/game/nonmatchings/800", func_8009B67C);

INCLUDE_ASM("asm/game/nonmatchings/800", func_8009B7CC);

INCLUDE_ASM("asm/game/nonmatchings/800", func_8009B824);

void func_8009B83C(void) {
}

void func_8009B844(void) {
}

INCLUDE_ASM("asm/game/nonmatchings/800", func_8009B84C);

INCLUDE_ASM("asm/game/nonmatchings/800", func_8009BBFC);

INCLUDE_ASM("asm/game/nonmatchings/800", func_8009BC64);

INCLUDE_ASM("asm/game/nonmatchings/800", func_8009BEE8);

INCLUDE_ASM("asm/game/nonmatchings/800", func_8009BF28);

INCLUDE_ASM("asm/game/nonmatchings/800", func_8009BF68);

INCLUDE_ASM("asm/game/nonmatchings/800", func_8009C028);

INCLUDE_ASM("asm/game/nonmatchings/800", func_8009C070);

INCLUDE_ASM("asm/game/nonmatchings/800", func_8009C094);

INCLUDE_ASM("asm/game/nonmatchings/800", func_8009C0B4);

INCLUDE_ASM("asm/game/nonmatchings/800", func_8009C0FC);

void func_8009C194(void) {
}

void func_8009C19C(void) {
}

INCLUDE_ASM("asm/game/nonmatchings/800", func_8009C1A4);

INCLUDE_ASM("asm/game/nonmatchings/800", func_8009C318);

INCLUDE_ASM("asm/game/nonmatchings/800", func_8009C374);

INCLUDE_ASM("asm/game/nonmatchings/800", func_8009C40C);

INCLUDE_ASM("asm/game/nonmatchings/800", func_8009C474);

INCLUDE_ASM("asm/game/nonmatchings/800", func_8009C590);

INCLUDE_ASM("asm/game/nonmatchings/800", func_8009C620);

INCLUDE_ASM("asm/game/nonmatchings/800", func_8009C680);

INCLUDE_ASM("asm/game/nonmatchings/800", func_8009C738);

INCLUDE_ASM("asm/game/nonmatchings/800", func_8009C7E4);

INCLUDE_ASM("asm/game/nonmatchings/800", func_8009C854);

INCLUDE_ASM("asm/game/nonmatchings/800", func_8009C914);

INCLUDE_ASM("asm/game/nonmatchings/800", func_8009CE0C);

void func_8009CE8C(unkStruct_8009CE8C* arg0, unkStruct_8009CE8C_2* arg1) {
    arg0->unk3 = 2;
    arg0->unk4 = func_8009D484(arg1->unk0, arg1->unk2);
    arg0->unk8 = 0;
}

INCLUDE_ASM("asm/game/nonmatchings/800", func_8009CECC);

INCLUDE_ASM("asm/game/nonmatchings/800", func_8009D0C4);

INCLUDE_ASM("asm/game/nonmatchings/800", func_8009D334);

INCLUDE_ASM("asm/game/nonmatchings/800", func_8009D354);

INCLUDE_ASM("asm/game/nonmatchings/800", func_8009D3EC);

INCLUDE_ASM("asm/game/nonmatchings/800", func_8009D484);

INCLUDE_ASM("asm/game/nonmatchings/800", func_8009D4A0);

INCLUDE_ASM("asm/game/nonmatchings/800", func_8009D520);

INCLUDE_ASM("asm/game/nonmatchings/800", func_8009D538);

INCLUDE_ASM("asm/game/nonmatchings/800", func_8009D618);

INCLUDE_ASM("asm/game/nonmatchings/800", func_8009D848);

INCLUDE_ASM("asm/game/nonmatchings/800", func_8009DA84);

INCLUDE_ASM("asm/game/nonmatchings/800", func_8009DD04);

INCLUDE_ASM("asm/game/nonmatchings/800", func_8009DD28);

INCLUDE_ASM("asm/game/nonmatchings/800", func_8009DD3C);

INCLUDE_ASM("asm/game/nonmatchings/800", func_8009DD7C);

INCLUDE_ASM("asm/game/nonmatchings/800", func_8009DDC4);

INCLUDE_ASM("asm/game/nonmatchings/800", func_8009DDF4);

INCLUDE_ASM("asm/game/nonmatchings/800", func_8009DE18);

INCLUDE_ASM("asm/game/nonmatchings/800", func_8009E0C8);

INCLUDE_ASM("asm/game/nonmatchings/800", func_8009E328);

INCLUDE_ASM("asm/game/nonmatchings/800", func_8009E478);

INCLUDE_ASM("asm/game/nonmatchings/800", func_8009E5B4);

INCLUDE_ASM("asm/game/nonmatchings/800", func_8009E5E8);

INCLUDE_ASM("asm/game/nonmatchings/800", func_8009E72C);

INCLUDE_ASM("asm/game/nonmatchings/800", func_8009E7CC);

INCLUDE_ASM("asm/game/nonmatchings/800", func_8009E8C8);

INCLUDE_ASM("asm/game/nonmatchings/800", func_8009E8F0);

INCLUDE_ASM("asm/game/nonmatchings/800", func_8009E91C);

INCLUDE_ASM("asm/game/nonmatchings/800", func_8009EBA4);

INCLUDE_ASM("asm/game/nonmatchings/800", func_8009EC80);

INCLUDE_ASM("asm/game/nonmatchings/800", func_8009EFC4);

INCLUDE_ASM("asm/game/nonmatchings/800", func_8009F2F4);

INCLUDE_ASM("asm/game/nonmatchings/800", func_8009F508);

INCLUDE_ASM("asm/game/nonmatchings/800", func_8009F514);

INCLUDE_ASM("asm/game/nonmatchings/800", func_8009F530);

INCLUDE_ASM("asm/game/nonmatchings/800", func_8009F810);

INCLUDE_ASM("asm/game/nonmatchings/800", func_8009F9B4);

INCLUDE_ASM("asm/game/nonmatchings/800", func_8009FAD0);

INCLUDE_ASM("asm/game/nonmatchings/800", func_8009FAF4);

INCLUDE_ASM("asm/game/nonmatchings/800", func_8009FB80);

INCLUDE_ASM("asm/game/nonmatchings/800", func_8009FBA4);

INCLUDE_ASM("asm/game/nonmatchings/800", func_8009FC30);

INCLUDE_ASM("asm/game/nonmatchings/800", func_8009FC54);

INCLUDE_ASM("asm/game/nonmatchings/800", func_8009FCE0);

INCLUDE_ASM("asm/game/nonmatchings/800", func_8009FD2C);

INCLUDE_ASM("asm/game/nonmatchings/800", func_8009FD78);

INCLUDE_ASM("asm/game/nonmatchings/800", func_800A0480);

INCLUDE_ASM("asm/game/nonmatchings/800", func_800A05A8);

INCLUDE_ASM("asm/game/nonmatchings/800", func_800A05FC);

boolean func_800A0724(unkStruct_800A0724* arg0, s8 arg1, s8 arg2, s8 arg3) {
    arg0->unk120 = arg1;
    arg0->unk121 = arg2;
    arg0->unk122 = arg3;
    return true;
}

INCLUDE_ASM("asm/game/nonmatchings/800", func_800A0738);

void func_800A0748(unkStruct_800A0748* arg0, s32 arg1) {
    arg0->unk6E = (s32)(1 << (0xF - (arg1 & 0xFFFF)));
    arg0->unk6C = (s32)((0xF - arg0->unk6A) - arg1);
}

INCLUDE_ASM("asm/game/nonmatchings/800", func_800A0774);

INCLUDE_ASM("asm/game/nonmatchings/800", func_800A0884);

INCLUDE_ASM("asm/game/nonmatchings/800", func_800A08EC);

INCLUDE_ASM("asm/game/nonmatchings/800", func_800A0B00);

INCLUDE_ASM("asm/game/nonmatchings/800", func_800A0C3C);

INCLUDE_ASM("asm/game/nonmatchings/800", func_800A0CB4);

INCLUDE_ASM("asm/game/nonmatchings/800", func_800A105C);

INCLUDE_ASM("asm/game/nonmatchings/800", func_800A2150);

INCLUDE_ASM("asm/game/nonmatchings/800", func_800A21BC);

INCLUDE_ASM("asm/game/nonmatchings/800", func_800A2298);

INCLUDE_ASM("asm/game/nonmatchings/800", func_800A22E4);

INCLUDE_ASM("asm/game/nonmatchings/800", func_800A2378);

INCLUDE_ASM("asm/game/nonmatchings/800", func_800A23B0);

INCLUDE_ASM("asm/game/nonmatchings/800", func_800A24AC);

INCLUDE_ASM("asm/game/nonmatchings/800", func_800A26E8);

INCLUDE_ASM("asm/game/nonmatchings/800", func_800A27DC);

INCLUDE_ASM("asm/game/nonmatchings/800", func_800A2860);

INCLUDE_ASM("asm/game/nonmatchings/800", func_800A292C);

INCLUDE_ASM("asm/game/nonmatchings/800", func_800A2A84);

INCLUDE_ASM("asm/game/nonmatchings/800", func_800A2BD4);

INCLUDE_ASM("asm/game/nonmatchings/800", func_800A2BEC);

INCLUDE_ASM("asm/game/nonmatchings/800", func_800A2C04);

INCLUDE_ASM("asm/game/nonmatchings/800", func_800A2C1C);

INCLUDE_ASM("asm/game/nonmatchings/800", func_800A2CEC);

INCLUDE_ASM("asm/game/nonmatchings/800", func_800A2D4C);

INCLUDE_ASM("asm/game/nonmatchings/800", func_800A2E14);

INCLUDE_ASM("asm/game/nonmatchings/800", func_800A3864);

INCLUDE_ASM("asm/game/nonmatchings/800", func_800A394C);

INCLUDE_ASM("asm/game/nonmatchings/800", func_800A3980);

INCLUDE_ASM("asm/game/nonmatchings/800", func_800A39D4);

INCLUDE_ASM("asm/game/nonmatchings/800", func_800A39FC);

INCLUDE_ASM("asm/game/nonmatchings/800", func_800A3BE0);

INCLUDE_ASM("asm/game/nonmatchings/800", func_800A3CE4);

INCLUDE_ASM("asm/game/nonmatchings/800", func_800A3D60);

INCLUDE_ASM("asm/game/nonmatchings/800", func_800A3D8C);

INCLUDE_ASM("asm/game/nonmatchings/800", func_800A3D9C);

INCLUDE_ASM("asm/game/nonmatchings/800", func_800A3F14);

INCLUDE_ASM("asm/game/nonmatchings/800", func_800A3FAC);

INCLUDE_ASM("asm/game/nonmatchings/800", func_800A403C);

INCLUDE_ASM("asm/game/nonmatchings/800", func_800A41E8);

INCLUDE_ASM("asm/game/nonmatchings/800", func_800A42B4);

void func_800A43B0(void) {
}

INCLUDE_ASM("asm/game/nonmatchings/800", func_800A43B8);

INCLUDE_ASM("asm/game/nonmatchings/800", func_800A43E8);

INCLUDE_ASM("asm/game/nonmatchings/800", func_800A4588);

INCLUDE_ASM("asm/game/nonmatchings/800", func_800A45E8);

INCLUDE_ASM("asm/game/nonmatchings/800", func_800A4628);

INCLUDE_ASM("asm/game/nonmatchings/800", func_800A47C0);

INCLUDE_ASM("asm/game/nonmatchings/800", func_800A4830);

INCLUDE_ASM("asm/game/nonmatchings/800", func_800A4880);

INCLUDE_ASM("asm/game/nonmatchings/800", func_800A48D0);

INCLUDE_ASM("asm/game/nonmatchings/800", func_800A4AF8);

INCLUDE_ASM("asm/game/nonmatchings/800", func_800A4B40);

void func_800A4B5C(unkStruct_800A4B5C* arg0) {
    unkStruct_800A4B5C* temp_v1;

    temp_v1 = arg0->unk2C;
    temp_v1->unk1A = 0;
    temp_v1->unk2 = (u16)(temp_v1->unk2 | 3);
    arg0->unkA = (u16)(arg0->unkA | 0x100);
}

INCLUDE_ASM("asm/game/nonmatchings/800", func_800A4B88);

INCLUDE_ASM("asm/game/nonmatchings/800", func_800A4BFC);

INCLUDE_ASM("asm/game/nonmatchings/800", func_800A4CBC);

INCLUDE_ASM("asm/game/nonmatchings/800", func_800A4CFC);

INCLUDE_ASM("asm/game/nonmatchings/800", func_800A4E0C);

INCLUDE_ASM("asm/game/nonmatchings/800", func_800A4E3C);

INCLUDE_ASM("asm/game/nonmatchings/800", func_800A4F4C);

INCLUDE_ASM("asm/game/nonmatchings/800", func_800A505C);

void func_800A519C(unkStruct_800A519C* arg0) {
    arg0->unk8E = 2;
}

INCLUDE_ASM("asm/game/nonmatchings/800", func_800A51A8);

void func_800A5298(void) {
    func_800A3BE0();
}

INCLUDE_ASM("asm/game/nonmatchings/800", func_800A52B8);

INCLUDE_ASM("asm/game/nonmatchings/800", func_800A5774);

INCLUDE_ASM("asm/game/nonmatchings/800", func_800A6254);

INCLUDE_ASM("asm/game/nonmatchings/800", func_800A62EC);

INCLUDE_ASM("asm/game/nonmatchings/800", func_800A6304);

INCLUDE_ASM("asm/game/nonmatchings/800", func_800A6340);

INCLUDE_ASM("asm/game/nonmatchings/800", func_800A6358);

INCLUDE_ASM("asm/game/nonmatchings/800", func_800A6384);

bool func_800A63B0(unkStruct_800A63B0* arg0) {
    unkStruct_800A63B0* temp_v1 = arg0->unk18 + (arg0->unk1C * 4);

    arg0->unk10 = temp_v1->unk6;
    arg0->unk11 = temp_v1->unk5;
    arg0->unk12 = temp_v1->unk4;
    arg0->unk1C += 2;

    return true;
}

INCLUDE_ASM("asm/game/nonmatchings/800", func_800A63F4);

INCLUDE_ASM("asm/game/nonmatchings/800", func_800A6420);

INCLUDE_ASM("asm/game/nonmatchings/800", func_800A6458);

INCLUDE_ASM("asm/game/nonmatchings/800", func_800A648C);

bool func_800A64C4(unkStruct_800A64C4* arg0) {
    arg0->unkC = (u16)(arg0->unkC | 0x200);
    arg0->unk1C = (u16)(arg0->unk1C + 1);
    return true;
}

INCLUDE_ASM("asm/game/nonmatchings/800", func_800A64E4);

INCLUDE_ASM("asm/game/nonmatchings/800", func_800A6504);

INCLUDE_ASM("asm/game/nonmatchings/800", func_800A6538);

INCLUDE_ASM("asm/game/nonmatchings/800", func_800A6588);

s32 func_800A6594(s16* arg0) {
    *(arg0 + 0x10) = 0x7FFF;
    return 0;
}

bool func_800A65A4(unkStruct_800A65A4* arg0) {
    unkStruct_800A65A4* temp_v1;

    if (arg0->unkC & 0x20) {
        func_800A519C();
    } else {
        temp_v1 = arg0->unk28;
        temp_v1->unkA = (u16)(temp_v1->unkA | 0x100);
    }
    return false;
}

INCLUDE_ASM("asm/game/nonmatchings/800", func_800A65F8);

INCLUDE_ASM("asm/game/nonmatchings/800", func_800A6758);

INCLUDE_ASM("asm/game/nonmatchings/800", func_800A69E0);

INCLUDE_ASM("asm/game/nonmatchings/800", func_800A69F0);

INCLUDE_ASM("asm/game/nonmatchings/800", func_800A6A3C);

INCLUDE_ASM("asm/game/nonmatchings/800", func_800A6B98);

INCLUDE_ASM("asm/game/nonmatchings/800", func_800A7124);

INCLUDE_ASM("asm/game/nonmatchings/800", func_800A7268);

INCLUDE_ASM("asm/game/nonmatchings/800", func_800A7474);

INCLUDE_ASM("asm/game/nonmatchings/800", func_800A76C8);

INCLUDE_ASM("asm/game/nonmatchings/800", func_800A78C0);

INCLUDE_ASM("asm/game/nonmatchings/800", func_800A7928);

INCLUDE_ASM("asm/game/nonmatchings/800", func_800A7A3C);

INCLUDE_ASM("asm/game/nonmatchings/800", func_800A7C4C);

INCLUDE_ASM("asm/game/nonmatchings/800", func_800A7E4C);

INCLUDE_ASM("asm/game/nonmatchings/800", func_800A802C);

INCLUDE_ASM("asm/game/nonmatchings/800", func_800A804C);

INCLUDE_ASM("asm/game/nonmatchings/800", func_800A80E0);

INCLUDE_ASM("asm/game/nonmatchings/800", func_800A8154);

INCLUDE_ASM("asm/game/nonmatchings/800", func_800A8200);

INCLUDE_ASM("asm/game/nonmatchings/800", func_800A8338);

INCLUDE_ASM("asm/game/nonmatchings/800", func_800A83E0);

INCLUDE_ASM("asm/game/nonmatchings/800", func_800A8564);

INCLUDE_ASM("asm/game/nonmatchings/800", func_800A862C);

INCLUDE_ASM("asm/game/nonmatchings/800", func_800A863C);

INCLUDE_ASM("asm/game/nonmatchings/800", func_800A8648);

INCLUDE_ASM("asm/game/nonmatchings/800", func_800A8684);

INCLUDE_ASM("asm/game/nonmatchings/800", func_800A8690);

INCLUDE_ASM("asm/game/nonmatchings/800", func_800A8898);

INCLUDE_ASM("asm/game/nonmatchings/800", func_800A88F0);

INCLUDE_ASM("asm/game/nonmatchings/800", func_800A8948);

INCLUDE_ASM("asm/game/nonmatchings/800", func_800A8B00);

INCLUDE_ASM("asm/game/nonmatchings/800", func_800A8C80);

INCLUDE_ASM("asm/game/nonmatchings/800", func_800A8DC0);

void func_800A8E94(void) {
    func_800A3BE0();
}

INCLUDE_ASM("asm/game/nonmatchings/800", func_800A8EB4);

INCLUDE_ASM("asm/game/nonmatchings/800", func_800A8EC8);

INCLUDE_ASM("asm/game/nonmatchings/800", func_800A8FEC);

INCLUDE_ASM("asm/game/nonmatchings/800", func_800A91E0);

INCLUDE_ASM("asm/game/nonmatchings/800", func_800A9220);

INCLUDE_ASM("asm/game/nonmatchings/800", func_800A9250);

INCLUDE_ASM("asm/game/nonmatchings/800", func_800A9280);

INCLUDE_ASM("asm/game/nonmatchings/800", func_800A92B4);

u16 func_800A92E4(void) {
    return D_800EA27E;
}

/**
 * Matches with 2.8.1 on decomp.me with standard instructions -- does not match in the repo currently
 * https://decomp.me/scratch/6vneo
 */
#ifndef NON_MATCHING
INCLUDE_ASM("asm/game/nonmatchings/800", func_800A92F4);
#else
u32 func_800A92F4(u16 arg0) {
    u32 temp_v0 = (u16)(*D_800EB30C);
    *D_800EB30C = arg0;
    return temp_v0;
}
#endif

INCLUDE_ASM("asm/game/nonmatchings/800", func_800A930C);

INCLUDE_ASM("asm/game/nonmatchings/800", func_800A93E4);

INCLUDE_ASM("asm/game/nonmatchings/800", func_800A95B4);

INCLUDE_ASM("asm/game/nonmatchings/800", func_800A96FC);

INCLUDE_ASM("asm/game/nonmatchings/800", func_800A979C);

void func_800A9814(s32* arg0, s32 arg1) {
    s32 var_v0;
    s32* var_a0;

    var_a0 = arg0;
    var_v0 = arg1 - 1;
    if (arg1 != 0) {
        do {
            *var_a0 = 0;
            var_v0 -= 1;
            var_a0 += 1;
        } while (var_v0 != -1);
    }
}
