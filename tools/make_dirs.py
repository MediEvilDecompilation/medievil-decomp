#!/usr/bin/env python3
"""Create build directories for a given target (main, game, or ovl/xx). Cross-platform."""
import sys
from pathlib import Path

def main():
    if len(sys.argv) != 2:
        sys.exit("Usage: make_dirs.py <target> (e.g. main, game, ovl/ac)")
    target = sys.argv[1].replace("\\", "/")
    base = Path(__file__).resolve().parent.parent
    build = base / "build"
    # Same dirs as Makefile: asm/$target, asm/$target/data, src/$target, assets/$target
    dirs = [
        build / "asm" / target,
        build / "asm" / target / "data",
        build / "src" / target,
        build / "assets" / target,
    ]
    for d in dirs:
        d.mkdir(parents=True, exist_ok=True)

if __name__ == "__main__":
    main()
