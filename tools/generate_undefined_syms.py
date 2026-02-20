#!/usr/bin/env python3
"""Generate undefined_syms.ovlXX.txt with PROVIDE entries for .L symbols from symbols.ovlXX.txt.
Used for overlays (e.g. ovlag) that reference main-segment local labels in rodata/jumptables.
"""
import re
import sys
from pathlib import Path


def main():
    if len(sys.argv) != 3:
        sys.exit("Usage: generate_undefined_syms.py <symbols.ovlXX.txt> <undefined_syms.ovlXX.txt>")
    symbols_path = Path(sys.argv[1])
    output_path = Path(sys.argv[2])
    if not symbols_path.exists():
        sys.exit(f"generate_undefined_syms: missing {symbols_path}")

    # Match lines like .L80010A6C = 0x80010A6C;
    pattern = re.compile(r"^\.L([0-9A-Fa-f]+)\s*=\s*0x([0-9A-Fa-f]+)\s*;?\s*$")
    lines = []
    for line in symbols_path.read_text().splitlines():
        line = line.strip()
        if not line or line.startswith("#"):
            continue
        m = pattern.match(line)
        if m:
            name = ".L" + m.group(1)
            addr = "0x" + m.group(2)
            lines.append(f'PROVIDE("{name}" = {addr});')
    output_path.write_text("\n".join(lines) + "\n")


if __name__ == "__main__":
    main()
