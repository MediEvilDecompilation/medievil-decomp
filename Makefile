.SECONDEXPANSION:
.SECONDARY:

# Binaries
MAIN			:= main
GAME			:= game
OVL_CH 			:= ch
OVL_CR          := cr

# Compiler
CC1PSX          := ./bin/cc1-2.8.1
CROSS           := mipsel-linux-gnu-
AS              := $(CROSS)as
CC              := $(CC1PSX)
LD              := $(CROSS)ld
CPP             := $(CROSS)cpp
OBJCOPY         := $(CROSS)objcopy
AS_FLAGS        += -Iinclude -march=r3000 -mtune=r3000 -no-pad-sections -O1 -G0
PSXCC_FLAGS		:= -quiet -mcpu=3000 -fgnu-linker -mgas -gcoff
CC_FLAGS        += -msplit-addresses -O2 -G0 -funsigned-char -w -fpeephole -ffunction-cse -fpcc-struct-return -fcommon -fverbose-asm -msoft-float -g
CPP_FLAGS       += -Iinclude -undef -Wall -fno-builtin
CPP_FLAGS       += -Dmips -D__GNUC__=2 -D__OPTIMIZE__ -D__mips__ -D__mips -Dpsx -D__psx__ -D__psx -D_PSYQ -D__EXTENSIONS__ -D_MIPSEL -D_LANGUAGE_C -DLANGUAGE_C -DHACKS -DUSE_INCLUDE_ASM
LD_FLAGS		:= -nostdlib --no-check-sections

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
SPLAT           := $(PYTHON) $(SPLAT_APP)
ASMDIFFER_DIR   := $(TOOLS_DIR)/asm-differ
ASMDIFFER_APP   := $(ASMDIFFER_DIR)/diff.py
M2C_DIR         := $(TOOLS_DIR)/m2c
M2C_APP         := $(M2C_DIR)/m2c.py
M2C             := $(PYTHON) $(M2C_APP)
M2C_ARGS        := -P 4
MASPSX_DIR      := $(TOOLS_DIR)/maspsx
MASPSX_APP      := $(MASPSX_DIR)/maspsx.py
MASPSX          := $(PYTHON) $(MASPSX_APP) --no-macro-inc --expand-div


# List source files
define list_src_files
	$(foreach dir,$(ASM_DIR)/$(1),$(wildcard $(dir)/**.s))
	$(foreach dir,$(ASM_DIR)/$(1)/data,$(wildcard $(dir)/**.s))
	$(foreach dir,$(SRC_DIR)/$(1),$(wildcard $(dir)/**.c))
endef

# List object files
define list_o_files
	$(foreach file,$(call list_src_files,$(1)),$(BUILD_DIR)/$(file).o)
endef

# Linking
define link
	$(LD) $(LD_FLAGS) -o $(2) \
		-Map $(BUILD_DIR)/$(1).map \
		-T $(CONFIG_DIR)/ld/$(1).ld \
		-T $(CONFIG_DIR)/symbols.txt \
		-T $(CONFIG_DIR)/symbols.game.txt \
		-T $(CONFIG_DIR)/undefined_syms.txt \
		-T $(CONFIG_DIR)/undefined_syms_auto.$(1).txt \
		-T $(CONFIG_DIR)/undefined_funcs_auto.$(1).txt
endef


# Build
all: build check
build: main game overlays

init:
	$(MAKE) clean
	$(MAKE) extract -j
	$(MAKE) all

### Game Executables ###

### This is SCUS_942.27
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

%_dirs:
	$(foreach dir,$(ASM_DIR)/$* $(ASM_DIR)/$*/data $(SRC_DIR)/$* $(ASSETS_DIR)/$*,$(shell mkdir -p $(BUILD_DIR)/$(dir)))

### Overlays ###
overlays: ch cr 

ch: ovlch_dirs $(BUILD_DIR)/CH.BIN
$(BUILD_DIR)/CH.BIN: $(BUILD_DIR)/ovlch.elf
	$(OBJCOPY) -O binary $< $@

cr: ovlcr_dirs $(BUILD_DIR)/CR.BIN
$(BUILD_DIR)/CR.BIN: $(BUILD_DIR)/ovlcr.elf
	$(OBJCOPY) -O binary $< $@

ovl%_dirs:
	$(foreach dir,$(ASM_DIR)/ovl/$* $(ASM_DIR)/ovl/$*/data $(SRC_DIR)/ovl/$* $(ASSETS_DIR)/ovl/$*,$(shell mkdir -p $(BUILD_DIR)/$(dir)))

$(BUILD_DIR)/ovl%.elf: $$(call list_o_files,ovl/$$*)
	$(call link,ovl$*,$@)


# Assembly
$(BUILD_DIR)/%.s.o: %.s
	$(AS) $(AS_FLAGS) -o $@ $<
$(BUILD_DIR)/%.c.o: %.c $(MASPSX_APP) $(CC1PSX)
	$(CPP) $(CPP_FLAGS) -lang-c $< | $(CC) $(CC_FLAGS) $(PSXCC_FLAGS)  | $(MASPSX) | $(AS) $(AS_FLAGS) -o $@


# Checksum
check:
	@sha1sum --check config/medievil.check.sha


# asm-differ expected object files
expected: check
	mkdir -p expected/build
	rm -rf expected/build/
	cp -r build/ expected/build/


# Assembly extraction
extract: extract_main extract_game extract_ovlcr extract_ovlch 

## Main
extract_main:
	cat $(CONFIG_DIR)/symbols.txt $(CONFIG_DIR)/symbols.main.txt > $(CONFIG_DIR)/generated.symbols.main.txt
	$(SPLAT) $(CONFIG_DIR)/splat.main.yaml

## Game
extract_game:
	cat $(CONFIG_DIR)/symbols.txt $(CONFIG_DIR)/symbols.game.txt > $(CONFIG_DIR)/generated.symbols.game.txt
	$(SPLAT) $(CONFIG_DIR)/splat.game.yaml

## Overlays
extract_ovl%:
	cat $(CONFIG_DIR)/symbols.txt $(CONFIG_DIR)/symbols.ovl$*.txt > $(CONFIG_DIR)/generated.symbols.ovl$*.txt
	$(SPLAT) $(CONFIG_DIR)/splat.ovl$*.yaml


# Cleaning
clean:
	@git clean -fdx asm/
	@git clean -fdx config/
	@git clean -fdx build/


# Formatting
format:
	@./tools/format.py

checkformat:
	@./tools/check_format.sh


# Phony
.PHONY: init, all, clean, format, checkformat, check, expected
.PHONY: list_src_files, list_o_files, link
.PHONY: cr
.PHONY: %_dirs
.PHONY: extract, extract_%
