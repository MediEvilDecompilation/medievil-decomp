.SECONDEXPANSION:
.SECONDARY:

# Binaries
MAIN            := main
GAME            := game
OVL_AC            := ac # The Ant Caves
OVL_AG            := ag # The Asylum Grounds
OVL_CC            := cc # The Crystal Caves
OVL_CH            := ch # Cemetery Hill
OVL_CR            := cr # Dan's Crypt
OVL_CREDITS        := credits # Credits
OVL_DC            := dc # Desecrated Church (The Hilltop Mausoleum)
OVL_EE            := ee # The Enchanted Earth
OVL_EH            := eh # The Entrance Hall
OVL_GG            := gg # The Gallows Gauntlet
OVL_GS            := gs # The Ghost Ship
OVL_GY1            := gy1 # The Graveyard
OVL_GY2            := gy2 # Return to the Graveyard
OVL_HH            := hh # Hall of Heroes
OVL_HR             := hr # The Haunted Ruins
OVL_IA            := ia # Inside the Asylum
OLV_LA            := la # The Lake
OVL_LANDMAP        := landmap # The Map of Gallowmere
OVL_PD            := pd # Pools of the Ancient Dead
OVL_PG            := pg # Pumpkin Gorge
OVL_PS            := ps # The Pumpkin Serpent
OVL_SF            := sf # Scarecrow Fields
OVL_SV            := sv # The Sleeping Village
OVL_TD            := td # The Time Device
OVL_TL            := tl # Title Level
OVL_ZL            := zl # Zarok's Lair

# Compiler
CC1PSX          := ./bin/cc1-2.8.1
CROSS           := mipsel-linux-gnu-
AS              := $(CROSS)as
CC              := $(CC1PSX)
LD              := $(CROSS)ld
CPP             := $(CROSS)cpp
OBJCOPY         := $(CROSS)objcopy
AS_FLAGS        += -Iinclude -march=r3000 -mtune=r3000 -no-pad-sections -O1 -G0
PSXCC_FLAGS        := -quiet -mcpu=3000 -fgnu-linker -mgas -gcoff
CC_FLAGS        += -msplit-addresses -O2 -G0 -funsigned-char -w -fpeephole -ffunction-cse -fpcc-struct-return -fcommon -fverbose-asm -msoft-float -g
CPP_FLAGS       += -Iinclude -undef -Wall -fno-builtin
CPP_FLAGS       += -Dmips -D__GNUC__=2 -D__OPTIMIZE__ -D__mips__ -D__mips -Dpsx -D__psx__ -D__psx -D_PSYQ -D__EXTENSIONS__ -D_MIPSEL -D_LANGUAGE_C -DLANGUAGE_C -DHACKS -DUSE_INCLUDE_ASM
LD_FLAGS        := -nostdlib --no-check-sections

# Directories
ASM_DIR         := asm
SRC_DIR         := src
ASSETS_DIR      := assets
INCLUDE_DIR     := include
BUILD_DIR       := build
CONFIG_DIR      := config
TOOLS_DIR       := tools

# Tooling
MAKE			:= make
PYTHON          := python3
SPLAT_DIR       := $(TOOLS_DIR)/splat
SPLAT_APP       := $(SPLAT_DIR)/split.py
# Use local submodule if present, else pip-installed splat64 (python -m splat.scripts.split split)
ifneq ($(wildcard $(SPLAT_APP)),)
  SPLAT         := $(PYTHON) $(SPLAT_APP)
else
  SPLAT         := $(PYTHON) -m splat.scripts.split split
endif
ASMDIFFER_DIR   := $(TOOLS_DIR)/asm-differ
ASMDIFFER_APP   := $(ASMDIFFER_DIR)/diff.py
M2C_DIR         := $(TOOLS_DIR)/m2c
M2C_APP         := $(M2C_DIR)/m2c.py
M2C             := $(PYTHON) $(M2C_APP)
M2C_ARGS        := -P 4
MASPSX_DIR      := $(TOOLS_DIR)/maspsx
MASPSX_APP      := $(MASPSX_DIR)/maspsx.py
MASPSX          := $(PYTHON) $(MASPSX_APP) --expand-div


# List source files (strip so newlines in define don't end up in target names)
define list_src_files
	$(strip $(foreach dir,$(ASM_DIR)/$(1),$(wildcard $(dir)/**.s)) \
		$(foreach dir,$(ASM_DIR)/$(1)/data,$(wildcard $(dir)/**.s)) \
		$(foreach dir,$(SRC_DIR)/$(1),$(wildcard $(dir)/**.c)))
endef

# List object files
define list_o_files
	$(foreach file,$(call list_src_files,$(1)),$(BUILD_DIR)/$(file).o)
endef

# Linking
# undefined_syms.$(1).txt: per-target manual undefined symbols (e.g. undefined_syms.ovlag.txt for overlay ag)
define link
	$(LD) $(LD_FLAGS) -o $(2) \
		-Map $(BUILD_DIR)/$(1).map \
		-T $(CONFIG_DIR)/ld/$(1).ld \
		-T $(CONFIG_DIR)/symbols.txt \
		-T $(CONFIG_DIR)/symbols.game.txt \
		-T $(CONFIG_DIR)/undefined_syms.txt \
		$(if $(wildcard $(CONFIG_DIR)/undefined_syms.$(1).txt),-T $(CONFIG_DIR)/undefined_syms.$(1).txt) \
		-T $(CONFIG_DIR)/undefined_syms_auto.$(1).txt \
		-T $(CONFIG_DIR)/undefined_funcs_auto.$(1).txt
endef


# Build
all: build check
build: main game overlays

init:
	$(MAKE) clean
	$(MAKE) extract -j $(NPROC)
	$(MAKE) all

### Game Executables ###

# This is SCUS_942.27
main: main_dirs $(BUILD_DIR)/SCUS_942.27
$(BUILD_DIR)/SCUS_942.27: $(BUILD_DIR)/$(MAIN).elf
	$(OBJCOPY) -O binary $< $@
$(BUILD_DIR)/$(MAIN).elf: $(call list_o_files,main)
	$(call link,main,$@)

game: game_dirs $(BUILD_DIR)/MEDIEVIL.EXE
$(BUILD_DIR)/MEDIEVIL.EXE: $(BUILD_DIR)/$(GAME).elf
	$(OBJCOPY) -O binary $< $@
$(BUILD_DIR)/$(GAME).elf: $(call list_o_files,game)
	$(call link,game,$@)

# Explicit _dirs for main/game; ovl%_dirs (below) handles overlays (ovl/ac, ovl/ag, ...)
main_dirs:
	$(PYTHON) $(TOOLS_DIR)/make_dirs.py main
game_dirs:
	$(PYTHON) $(TOOLS_DIR)/make_dirs.py game

### Overlays ###
overlays: ac ag cc ch cr credits dc ee eh gg gs gy1 gy2 hh hr ia la landmap pd pg ps sf sv td tl zl

ac: ovlac_dirs $(BUILD_DIR)/AC.BIN
$(BUILD_DIR)/AC.BIN: $(BUILD_DIR)/ovlac.elf
	$(OBJCOPY) -O binary $< $@

ag: ovlag_dirs $(BUILD_DIR)/AG.BIN
$(BUILD_DIR)/AG.BIN: $(BUILD_DIR)/ovlag.elf
	$(OBJCOPY) -O binary $< $@

cc: ovlcc_dirs $(BUILD_DIR)/CC.BIN
$(BUILD_DIR)/CC.BIN: $(BUILD_DIR)/ovlcc.elf
	$(OBJCOPY) -O binary $< $@

ch: ovlch_dirs $(BUILD_DIR)/CH.BIN
$(BUILD_DIR)/CH.BIN: $(BUILD_DIR)/ovlch.elf
	$(OBJCOPY) -O binary $< $@

cr: ovlcr_dirs $(BUILD_DIR)/CR.BIN
$(BUILD_DIR)/CR.BIN: $(BUILD_DIR)/ovlcr.elf
	$(OBJCOPY) -O binary $< $@

credits: ovlcredits_dirs $(BUILD_DIR)/CREDITS.BIN
$(BUILD_DIR)/CREDITS.BIN: $(BUILD_DIR)/ovlcredits.elf
	$(OBJCOPY) -O binary $< $@

dc: ovldc_dirs $(BUILD_DIR)/DC.BIN
$(BUILD_DIR)/DC.BIN: $(BUILD_DIR)/ovldc.elf
	$(OBJCOPY) -O binary $< $@

ee: ovlee_dirs $(BUILD_DIR)/EE.BIN
$(BUILD_DIR)/EE.BIN: $(BUILD_DIR)/ovlee.elf
	$(OBJCOPY) -O binary $< $@

eh: ovleh_dirs $(BUILD_DIR)/EH.BIN
$(BUILD_DIR)/EH.BIN: $(BUILD_DIR)/ovleh.elf
	$(OBJCOPY) -O binary $< $@

gg: ovlgg_dirs $(BUILD_DIR)/GG.BIN
$(BUILD_DIR)/GG.BIN: $(BUILD_DIR)/ovlgg.elf
	$(OBJCOPY) -O binary $< $@

gs: ovlgs_dirs $(BUILD_DIR)/GS.BIN
$(BUILD_DIR)/GS.BIN: $(BUILD_DIR)/ovlgs.elf
	$(OBJCOPY) -O binary $< $@

gy1: ovlgy1_dirs $(BUILD_DIR)/GY1.BIN
$(BUILD_DIR)/GY1.BIN: $(BUILD_DIR)/ovlgy1.elf
	$(OBJCOPY) -O binary $< $@

gy2: ovlgy2_dirs $(BUILD_DIR)/GY2.BIN
$(BUILD_DIR)/GY2.BIN: $(BUILD_DIR)/ovlgy2.elf
	$(OBJCOPY) -O binary $< $@

hh: ovlhh_dirs $(BUILD_DIR)/HH.BIN
$(BUILD_DIR)/HH.BIN: $(BUILD_DIR)/ovlhh.elf
	$(OBJCOPY) -O binary $< $@

hr: ovlhr_dirs $(BUILD_DIR)/HR.BIN
$(BUILD_DIR)/HR.BIN: $(BUILD_DIR)/ovlhr.elf
	$(OBJCOPY) -O binary $< $@

ia: ovlia_dirs $(BUILD_DIR)/IA.BIN
$(BUILD_DIR)/IA.BIN: $(BUILD_DIR)/ovlia.elf
	$(OBJCOPY) -O binary $< $@

la: ovlla_dirs $(BUILD_DIR)/LA.BIN
$(BUILD_DIR)/LA.BIN: $(BUILD_DIR)/ovlla.elf
	$(OBJCOPY) -O binary $< $@

landmap: ovllandmap_dirs $(BUILD_DIR)/LANDMAP.BIN
$(BUILD_DIR)/LANDMAP.BIN: $(BUILD_DIR)/ovllandmap.elf
	$(OBJCOPY) -O binary $< $@

pd: ovlpd_dirs $(BUILD_DIR)/PD.BIN
$(BUILD_DIR)/PD.BIN: $(BUILD_DIR)/ovlpd.elf
	$(OBJCOPY) -O binary $< $@

pg: ovlpg_dirs $(BUILD_DIR)/PG.BIN
$(BUILD_DIR)/PG.BIN: $(BUILD_DIR)/ovlpg.elf
	$(OBJCOPY) -O binary $< $@

ps: ovlps_dirs $(BUILD_DIR)/PS.BIN
$(BUILD_DIR)/PS.BIN: $(BUILD_DIR)/ovlps.elf
	$(OBJCOPY) -O binary $< $@

sf: ovlsf_dirs $(BUILD_DIR)/SF.BIN
$(BUILD_DIR)/SF.BIN: $(BUILD_DIR)/ovlsf.elf
	$(OBJCOPY) -O binary $< $@

sv: ovlsv_dirs $(BUILD_DIR)/SV.BIN
$(BUILD_DIR)/SV.BIN: $(BUILD_DIR)/ovlsv.elf
	$(OBJCOPY) -O binary $< $@

td: ovltd_dirs $(BUILD_DIR)/TD.BIN
$(BUILD_DIR)/TD.BIN: $(BUILD_DIR)/ovltd.elf
	$(OBJCOPY) -O binary $< $@

tl: ovltl_dirs $(BUILD_DIR)/TL.BIN
$(BUILD_DIR)/TL.BIN: $(BUILD_DIR)/ovltl.elf
	$(OBJCOPY) -O binary $< $@

zl: ovlzl_dirs $(BUILD_DIR)/ZL.BIN
$(BUILD_DIR)/ZL.BIN: $(BUILD_DIR)/ovlzl.elf
	$(OBJCOPY) -O binary $< $@

ovl%_dirs:
	$(PYTHON) $(TOOLS_DIR)/make_dirs.py ovl/$*

$(BUILD_DIR)/ovl%.elf: $$(call list_o_files,ovl/$$*)
	$(call link,ovl$*,$@)


# Assembly
$(BUILD_DIR)/%.s.o: %.s
	$(AS) $(AS_FLAGS) -o $@ $<
# Windows: make may use backslashes for targets; pattern and recipe must handle them
ifeq ($(OS),Windows_NT)
$(BUILD_DIR)\%.s.o: %.s
	$(AS) $(AS_FLAGS) -o $(subst \,/,$@) $(subst \,/,$<)
$(BUILD_DIR)\%.c.o: %.c $(MASPSX_APP) $(CC1PSX)
	$(CPP) $(CPP_FLAGS) -lang-c $(subst \,/,$<) | $(CC) $(CC_FLAGS) $(PSXCC_FLAGS)  | $(MASPSX) | $(AS) $(AS_FLAGS) -o $(subst \,/,$@)
endif
$(BUILD_DIR)/%.c.o: %.c $(MASPSX_APP) $(CC1PSX)
	$(CPP) $(CPP_FLAGS) -lang-c $< | $(CC) $(CC_FLAGS) $(PSXCC_FLAGS)  | $(MASPSX) | $(AS) $(AS_FLAGS) -o $@


# Checksum
check:
ifeq ($(OS),Windows_NT)
	@$(PYTHON) $(TOOLS_DIR)/check_sha1.py config/medievil.check.sha
else
	@sha1sum --check config/medievil.check.sha
endif


# asm-differ expected object files
expected: check
ifeq ($(OS),Windows_NT)
	@if exist expected\build rd /s /q expected\build
	@xcopy /e /i /q build expected\build
else
	$(MKDIR) expected/build
	rm -rf expected/build/
	cp -r build/ expected/build/
endif


# Assembly extraction
extract: extract_main extract_game extract_ovlac extract_ovlag extract_ovlcc extract_ovlch extract_ovlcr extract_ovlcredits extract_ovldc extract_ovlee extract_ovleh extract_ovlgg extract_ovlgs extract_ovlgy1 extract_ovlgy2 extract_ovlhh extract_ovlhr extract_ovlia extract_ovlla extract_ovllandmap extract_ovlpd extract_ovlpg extract_ovlps extract_ovlsf extract_ovlsv extract_ovltd extract_ovltl extract_ovlzl

## Main
extract_main:
	$(call concat_to,$(CONFIG_DIR)/symbols.txt,$(CONFIG_DIR)/symbols.main.txt,$(CONFIG_DIR)/generated.symbols.main.txt)
	$(SPLAT) $(CONFIG_DIR)/splat.main.yaml

## Game
extract_game:
	$(call concat_to,$(CONFIG_DIR)/symbols.txt,$(CONFIG_DIR)/symbols.game.txt,$(CONFIG_DIR)/generated.symbols.game.txt)
	$(SPLAT) $(CONFIG_DIR)/splat.game.yaml

## Overlays
extract_ovl%:
	$(call concat_to,$(CONFIG_DIR)/symbols.txt,$(CONFIG_DIR)/symbols.ovl$*.txt,$(CONFIG_DIR)/generated.symbols.ovl$*.txt)
	$(SPLAT) $(CONFIG_DIR)/splat.ovl$*.yaml

# ovlag references main-segment .L labels in rodata; generate PROVIDE for linker
extract_ovlag:
	$(call concat_to,$(CONFIG_DIR)/symbols.txt,$(CONFIG_DIR)/symbols.ovlag.txt,$(CONFIG_DIR)/generated.symbols.ovlag.txt)
	$(SPLAT) $(CONFIG_DIR)/splat.ovlag.yaml
	$(PYTHON) $(TOOLS_DIR)/generate_undefined_syms.py $(CONFIG_DIR)/symbols.ovlag.txt $(CONFIG_DIR)/undefined_syms.ovlag.txt

# ovlcc references main-segment .L labels in rodata; generate PROVIDE for linker
extract_ovlcc:
	$(call concat_to,$(CONFIG_DIR)/symbols.txt,$(CONFIG_DIR)/symbols.ovlcc.txt,$(CONFIG_DIR)/generated.symbols.ovlcc.txt)
	$(SPLAT) $(CONFIG_DIR)/splat.ovlcc.yaml
	$(PYTHON) $(TOOLS_DIR)/generate_undefined_syms.py $(CONFIG_DIR)/symbols.ovlcc.txt $(CONFIG_DIR)/undefined_syms.ovlcc.txt

# ovlch references main-segment .L labels in rodata; generate PROVIDE for linker
extract_ovlch:
	$(call concat_to,$(CONFIG_DIR)/symbols.txt,$(CONFIG_DIR)/symbols.ovlch.txt,$(CONFIG_DIR)/generated.symbols.ovlch.txt)
	$(SPLAT) $(CONFIG_DIR)/splat.ovlch.yaml
	$(PYTHON) $(TOOLS_DIR)/generate_undefined_syms.py $(CONFIG_DIR)/symbols.ovlch.txt $(CONFIG_DIR)/undefined_syms.ovlch.txt

# ovlcredits references main-segment .L labels in rodata; generate PROVIDE for linker
extract_ovlcredits:
	$(call concat_to,$(CONFIG_DIR)/symbols.txt,$(CONFIG_DIR)/symbols.ovlcredits.txt,$(CONFIG_DIR)/generated.symbols.ovlcredits.txt)
	$(SPLAT) $(CONFIG_DIR)/splat.ovlcredits.yaml
	$(PYTHON) $(TOOLS_DIR)/generate_undefined_syms.py $(CONFIG_DIR)/symbols.ovlcredits.txt $(CONFIG_DIR)/undefined_syms.ovlcredits.txt

# ovldc references main-segment .L labels in rodata; generate PROVIDE for linker
extract_ovldc:
	$(call concat_to,$(CONFIG_DIR)/symbols.txt,$(CONFIG_DIR)/symbols.ovldc.txt,$(CONFIG_DIR)/generated.symbols.ovldc.txt)
	$(SPLAT) $(CONFIG_DIR)/splat.ovldc.yaml
	$(PYTHON) $(TOOLS_DIR)/generate_undefined_syms.py $(CONFIG_DIR)/symbols.ovldc.txt $(CONFIG_DIR)/undefined_syms.ovldc.txt

# ovlee references main-segment .L labels in rodata; generate PROVIDE for linker
extract_ovlee:
	$(call concat_to,$(CONFIG_DIR)/symbols.txt,$(CONFIG_DIR)/symbols.ovlee.txt,$(CONFIG_DIR)/generated.symbols.ovlee.txt)
	$(SPLAT) $(CONFIG_DIR)/splat.ovlee.yaml
	$(PYTHON) $(TOOLS_DIR)/generate_undefined_syms.py $(CONFIG_DIR)/symbols.ovlee.txt $(CONFIG_DIR)/undefined_syms.ovlee.txt

# ovleh references main-segment .L labels in rodata; generate PROVIDE for linker
extract_ovleh:
	$(call concat_to,$(CONFIG_DIR)/symbols.txt,$(CONFIG_DIR)/symbols.ovleh.txt,$(CONFIG_DIR)/generated.symbols.ovleh.txt)
	$(SPLAT) $(CONFIG_DIR)/splat.ovleh.yaml
	$(PYTHON) $(TOOLS_DIR)/generate_undefined_syms.py $(CONFIG_DIR)/symbols.ovleh.txt $(CONFIG_DIR)/undefined_syms.ovleh.txt

# ovlgg references main-segment .L labels in rodata; generate PROVIDE for linker
extract_ovlgg:
	$(call concat_to,$(CONFIG_DIR)/symbols.txt,$(CONFIG_DIR)/symbols.ovlgg.txt,$(CONFIG_DIR)/generated.symbols.ovlgg.txt)
	$(SPLAT) $(CONFIG_DIR)/splat.ovlgg.yaml
	$(PYTHON) $(TOOLS_DIR)/generate_undefined_syms.py $(CONFIG_DIR)/symbols.ovlgg.txt $(CONFIG_DIR)/undefined_syms.ovlgg.txt

# ovlgs references main-segment .L labels in rodata; generate PROVIDE for linker
extract_ovlgs:
	$(call concat_to,$(CONFIG_DIR)/symbols.txt,$(CONFIG_DIR)/symbols.ovlgs.txt,$(CONFIG_DIR)/generated.symbols.ovlgs.txt)
	$(SPLAT) $(CONFIG_DIR)/splat.ovlgs.yaml
	$(PYTHON) $(TOOLS_DIR)/generate_undefined_syms.py $(CONFIG_DIR)/symbols.ovlgs.txt $(CONFIG_DIR)/undefined_syms.ovlgs.txt

# ovlgy1 references main-segment .L labels in rodata; generate PROVIDE for linker
extract_ovlgy1:
	$(call concat_to,$(CONFIG_DIR)/symbols.txt,$(CONFIG_DIR)/symbols.ovlgy1.txt,$(CONFIG_DIR)/generated.symbols.ovlgy1.txt)
	$(SPLAT) $(CONFIG_DIR)/splat.ovlgy1.yaml
	$(PYTHON) $(TOOLS_DIR)/generate_undefined_syms.py $(CONFIG_DIR)/symbols.ovlgy1.txt $(CONFIG_DIR)/undefined_syms.ovlgy1.txt

# ovlgy2 references main-segment .L labels in rodata; generate PROVIDE for linker
extract_ovlgy2:
	$(call concat_to,$(CONFIG_DIR)/symbols.txt,$(CONFIG_DIR)/symbols.ovlgy2.txt,$(CONFIG_DIR)/generated.symbols.ovlgy2.txt)
	$(SPLAT) $(CONFIG_DIR)/splat.ovlgy2.yaml
	$(PYTHON) $(TOOLS_DIR)/generate_undefined_syms.py $(CONFIG_DIR)/symbols.ovlgy2.txt $(CONFIG_DIR)/undefined_syms.ovlgy2.txt

# ovlhh references main-segment .L labels in rodata; generate PROVIDE for linker
extract_ovlhh:
	$(call concat_to,$(CONFIG_DIR)/symbols.txt,$(CONFIG_DIR)/symbols.ovlhh.txt,$(CONFIG_DIR)/generated.symbols.ovlhh.txt)
	$(SPLAT) $(CONFIG_DIR)/splat.ovlhh.yaml
	$(PYTHON) $(TOOLS_DIR)/generate_undefined_syms.py $(CONFIG_DIR)/symbols.ovlhh.txt $(CONFIG_DIR)/undefined_syms.ovlhh.txt

# ovlhr references main-segment .L labels in rodata; generate PROVIDE for linker
extract_ovlhr:
	$(call concat_to,$(CONFIG_DIR)/symbols.txt,$(CONFIG_DIR)/symbols.ovlhr.txt,$(CONFIG_DIR)/generated.symbols.ovlhr.txt)
	$(SPLAT) $(CONFIG_DIR)/splat.ovlhr.yaml
	$(PYTHON) $(TOOLS_DIR)/generate_undefined_syms.py $(CONFIG_DIR)/symbols.ovlhr.txt $(CONFIG_DIR)/undefined_syms.ovlhr.txt

# ovlia references main-segment .L labels in rodata; generate PROVIDE for linker
extract_ovlia:
	$(call concat_to,$(CONFIG_DIR)/symbols.txt,$(CONFIG_DIR)/symbols.ovlia.txt,$(CONFIG_DIR)/generated.symbols.ovlia.txt)
	$(SPLAT) $(CONFIG_DIR)/splat.ovlia.yaml
	$(PYTHON) $(TOOLS_DIR)/generate_undefined_syms.py $(CONFIG_DIR)/symbols.ovlia.txt $(CONFIG_DIR)/undefined_syms.ovlia.txt

# ovlla references main-segment .L labels in rodata; generate PROVIDE for linker
extract_ovlla:
	$(call concat_to,$(CONFIG_DIR)/symbols.txt,$(CONFIG_DIR)/symbols.ovlla.txt,$(CONFIG_DIR)/generated.symbols.ovlla.txt)
	$(SPLAT) $(CONFIG_DIR)/splat.ovlla.yaml
	$(PYTHON) $(TOOLS_DIR)/generate_undefined_syms.py $(CONFIG_DIR)/symbols.ovlla.txt $(CONFIG_DIR)/undefined_syms.ovlla.txt

# ovllandmap references main-segment .L labels in rodata; generate PROVIDE for linker
extract_ovllandmap:
	$(call concat_to,$(CONFIG_DIR)/symbols.txt,$(CONFIG_DIR)/symbols.ovllandmap.txt,$(CONFIG_DIR)/generated.symbols.ovllandmap.txt)
	$(SPLAT) $(CONFIG_DIR)/splat.ovllandmap.yaml
	$(PYTHON) $(TOOLS_DIR)/generate_undefined_syms.py $(CONFIG_DIR)/symbols.ovllandmap.txt $(CONFIG_DIR)/undefined_syms.ovllandmap.txt

# ovlpg references main-segment .L labels in rodata; generate PROVIDE for linker
extract_ovlpg:
	$(call concat_to,$(CONFIG_DIR)/symbols.txt,$(CONFIG_DIR)/symbols.ovlpg.txt,$(CONFIG_DIR)/generated.symbols.ovlpg.txt)
	$(SPLAT) $(CONFIG_DIR)/splat.ovlpg.yaml
	$(PYTHON) $(TOOLS_DIR)/generate_undefined_syms.py $(CONFIG_DIR)/symbols.ovlpg.txt $(CONFIG_DIR)/undefined_syms.ovlpg.txt

# ovlps references main-segment .L labels in rodata; generate PROVIDE for linker
extract_ovlps:
	$(call concat_to,$(CONFIG_DIR)/symbols.txt,$(CONFIG_DIR)/symbols.ovlps.txt,$(CONFIG_DIR)/generated.symbols.ovlps.txt)
	$(SPLAT) $(CONFIG_DIR)/splat.ovlps.yaml
	$(PYTHON) $(TOOLS_DIR)/generate_undefined_syms.py $(CONFIG_DIR)/symbols.ovlps.txt $(CONFIG_DIR)/undefined_syms.ovlps.txt

# ovlsf references main-segment .L labels in rodata; generate PROVIDE for linker
extract_ovlsf:
	$(call concat_to,$(CONFIG_DIR)/symbols.txt,$(CONFIG_DIR)/symbols.ovlsf.txt,$(CONFIG_DIR)/generated.symbols.ovlsf.txt)
	$(SPLAT) $(CONFIG_DIR)/splat.ovlsf.yaml
	$(PYTHON) $(TOOLS_DIR)/generate_undefined_syms.py $(CONFIG_DIR)/symbols.ovlsf.txt $(CONFIG_DIR)/undefined_syms.ovlsf.txt

# ovltd references main-segment .L labels in rodata; generate PROVIDE for linker
extract_ovltd:
	$(call concat_to,$(CONFIG_DIR)/symbols.txt,$(CONFIG_DIR)/symbols.ovltd.txt,$(CONFIG_DIR)/generated.symbols.ovltd.txt)
	$(SPLAT) $(CONFIG_DIR)/splat.ovltd.yaml
	$(PYTHON) $(TOOLS_DIR)/generate_undefined_syms.py $(CONFIG_DIR)/symbols.ovltd.txt $(CONFIG_DIR)/undefined_syms.ovltd.txt

# ovltl references main-segment .L labels in rodata; generate PROVIDE for linker
extract_ovltl:
	$(call concat_to,$(CONFIG_DIR)/symbols.txt,$(CONFIG_DIR)/symbols.ovltl.txt,$(CONFIG_DIR)/generated.symbols.ovltl.txt)
	$(SPLAT) $(CONFIG_DIR)/splat.ovltl.yaml
	$(PYTHON) $(TOOLS_DIR)/generate_undefined_syms.py $(CONFIG_DIR)/symbols.ovltl.txt $(CONFIG_DIR)/undefined_syms.ovltl.txt

# ovlzl references main-segment .L labels in rodata; generate PROVIDE for linker
extract_ovlzl:
	$(call concat_to,$(CONFIG_DIR)/symbols.txt,$(CONFIG_DIR)/symbols.ovlzl.txt,$(CONFIG_DIR)/generated.symbols.ovlzl.txt)
	$(SPLAT) $(CONFIG_DIR)/splat.ovlzl.yaml
	$(PYTHON) $(TOOLS_DIR)/generate_undefined_syms.py $(CONFIG_DIR)/symbols.ovlzl.txt $(CONFIG_DIR)/undefined_syms.ovlzl.txt


# Cleaning
clean:
	@git clean -fdx asm/
	@git clean -fdx config/
	@git clean -fdx build/


# Formatting
format:
	@$(PYTHON) $(TOOLS_DIR)/format.py -j $(NPROC)

# On Windows CMD, requires bash in PATH (e.g. Git for Windows)
checkformat:
	@bash $(TOOLS_DIR)/check_format.sh


# Phony
.PHONY: init, all, clean, format, checkformat, check, expected
.PHONY: list_src_files, list_o_files, link
.PHONY: main game ac ag cc ch cr credits dc ee eh gg gs gy1 gy2 hh hr ia la landmap pd pg ps sf sv td tl zl
.PHONY: %_dirs
.PHONY: extract, extract_%
