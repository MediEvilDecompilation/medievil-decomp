.SECONDEXPANSION:
.SECONDARY:

# Binaries
OVL_CR          := cr

# Compilers
CC1PSX          := wine ./bin/CC1PSX.EXE#./bin/cc1-psx-26
CROSS           := mipsel-linux-gnu-
AS              := $(CROSS)as
CC              := $(CC1PSX)
LD              := $(CROSS)ld
CPP             := $(CROSS)cpp
OBJCOPY         := $(CROSS)objcopy
AS_FLAGS        += -Iinclude -march=r3000 -mtune=r3000 -no-pad-sections -O1 -G0
PSXCC_FLAGS		:= -quiet -mcpu=3000 -fgnu-linker -mgas -gcoff
CC_FLAGS        += -G0 -w -O2 -funsigned-char -fpeephole -ffunction-cse -fpcc-struct-return -fcommon -fverbose-asm -msoft-float -g
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

define list_src_files
	$(foreach dir,$(ASM_DIR)/$(1),$(wildcard $(dir)/**.s))
	$(foreach dir,$(ASM_DIR)/$(1)/data,$(wildcard $(dir)/**.s))

endef

define list_o_files
	$(foreach file,$(call list_src_files,$(1)),$(BUILD_DIR)/$(file).o)
endef

define link
	$(LD) $(LD_FLAGS) -o $(2) \
		-Map $(BUILD_DIR)/$(1).map \
		-T $(1).ld \
		-T $(CONFIG_DIR)/undefined_syms_auto.$(1).txt \
		-T $(CONFIG_DIR)/undefined_funcs_auto.$(1).txt
endef

clean:
	git clean -fdx asm/
	git clean -fdx config/
	git clean -fdx build/

all: build check
build: cr

cr: ovlcr_dirs $(BUILD_DIR)/CR.BIN
$(BUILD_DIR)/CR.BIN: $(BUILD_DIR)/ovlcr.elf
	$(OBJCOPY) -O binary $< $@

# Create a directory for each asm dir inside build.

ovl%_dirs:
	$(foreach dir,$(ASM_DIR)/ovl/$* $(ASM_DIR)/ovl/$*/data $(SRC_DIR)/ovl/$* $(ASSETS_DIR)/ovl/$*,$(shell mkdir -p $(BUILD_DIR)/$(dir)))
%_dirs:
	$(foreach dir,$(ASM_DIR)/$* $(ASM_DIR)/$*/data $(SRC_DIR)/$* $(ASSETS_DIR)/$*,$(shell mkdir -p $(BUILD_DIR)/$(dir)))
$(BUILD_DIR)/ovl%.elf: $$(call list_o_files,ovl/$$*)
	$(call link,ovl$*,$@)
	
$(BUILD_DIR)/%.s.o: %.s
	$(AS) $(AS_FLAGS) -o $@ $<
$(BUILD_DIR)/%.c.o: %.c $(CC1PSX)
#	$(CROSS)gcc -c -nostartfiles -nodefaultlibs -ggdb -gdwarf-4 $(CPP_FLAGS) $(CC_FLAGS) $(LD_FLAGS) $< -o $@
	$(CPP) $(CPP_FLAGS) -lang-c $< | $(CC) $(CC_FLAGS) $(PSXCC_FLAGS)  | $(AS) $(AS_FLAGS) -o $@

check:
	sha1sum --check config/medievil.check.sha

extract: extract_ovlcr
extract_ovl%:
	cat $(CONFIG_DIR)/medievil/symbols/symbols.txt $(CONFIG_DIR)/medievil/symbols/symbols.ovlcr.txt > $(CONFIG_DIR)/medievil/symbols/generated.symbols.ovlcr.txt
	$(SPLAT) $(CONFIG_DIR)/splat.ovl$*.yaml

.PHONY: all, clean, format, check, expected
.PHONY: cr
.PHONY: %_dirs
.PHONY: extract, extract_%

LIST_O_FILES:= $(call list_o_files,ovl/cr)
# Print target for debugging
print-% : ; $(info $* is a $(flavor $*) variable set to [$($*)]) @true

