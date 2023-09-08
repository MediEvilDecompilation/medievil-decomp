#!/usr/bin/env python3

def add_custom_arguments(parser):
    parser.add_argument(
        "--overlay",
        default="cr",
        dest='overlay',
        help="Defines which overlay to use for the diff (cr, etc.)",
    )


def apply_base(config, name):
    config['baseimg'] = 'iso/' + (f'{name}.bin').upper()
    config['myimg'] = 'build/' + (f'{name}.bin').upper()
    config['mapfile'] = f'build/{name}.map'
    config['source_directories'] = [
        f'src/{name}', 'include', f'asm/{name}']
    config['objdump_executable'] = 'mipsel-linux-gnu-objdump'


def apply_bin(config, name):
    config["arch"] = "mipsel"
    config['baseimg'] = 'iso/' + (f'BIN/{name}.BIN').upper()
    config['myimg'] = 'build/' + (f'{name}.bin').upper()
    config['mapfile'] = f'build/{name}.map'
    config['source_directories'] = [
        f'src/{name}', 'include', f'asm/{name}']
    config['objdump_executable'] = 'mipsel-linux-gnu-objdump'


def apply_overlay(config, name):
    config["arch"] = "mipsel"
    config['baseimg'] = 'iso/' + (f'OVERLAYS/{name}.BIN').upper()
    config['myimg'] = 'build/' + (f'{name}.bin').upper()
    config['mapfile'] = f'build/ovl{name}.map'
    config['source_directories'] = [
        f'src/ovl/{name}', 'include', f'asm/ovl/{name}']
    config['objdump_executable'] = 'mipsel-linux-gnu-objdump'


def apply(config, args):
    name = args.overlay or 'main'
    if name.startswith("ovl/"):
        apply_overlay(config, name)
    elif name is "main":
        apply_base(config, name)
    else:
        apply_bin(config, name)

    config["arch"] = "mipsel"
    config['objdump_executable'] = 'mipsel-linux-gnu-objdump'
