.SECONDEXPANSION:
.SECONDARY:

# Compilers

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
M2CTX_APP       := $(TOOLS_DIR)/m2ctx.py
M2CTX           := $(PYTHON) $(M2CTX_APP)
M2C_DIR         := $(TOOLS_DIR)/m2c
M2C_APP         := $(M2C_DIR)/m2c.py
M2C             := $(PYTHON) $(M2C_APP)
M2C_ARGS        := -P 4

clean:
	git clean -fdx asm/
	git clean -fdx config/

extract: extract_ovl_cr
extract_ovl_cr:
	cat $(CONFIG_DIR)/medievil/symbols/symbols.txt $(CONFIG_DIR)/medievil/symbols/symbols.ovl_cr.txt > $(CONFIG_DIR)/medievil/symbols/generated.symbols.ovl_cr.txt
	$(SPLAT) $(CONFIG_DIR)/medievil/overlays/cr.yaml

