*Note: This is WIP but it produces working builds now. Use at your own risk!*

# About
The Synthstrom Audible Deluge Firmware runs on the Deluge portable sequencer, synthesizer and sampler, produced by Synthstrom Audible Limited.

The Deluge Firmware’s codebase is written mostly in C++, with some low-level functions in C, and even the occasional line of assembly. The program is “bare-metal” - it runs without any higher level operating system.

The firmware runs on the Synthstrom Audible Deluge’s Renesas RZ/A1L processor, an Arm® Cortex®-A9 core running at 400MHz with 3MB of on-chip SRAM. The Deluge also includes a 64MB SDRAM chip.

The firmware is built using a GNU ARM Embedded GCC toolchain.

# Building the codebase
## Software installation

Download the arm compiler toolchain. I am running Linux and used [version
9-2019-q4](https://developer.arm.com/-/media/Files/downloads/gnu-rm/9-2019q4/gcc-arm-none-eabi-9-2019-q4-major-x86_64-linux.tar.bz2?revision=108bd959-44bd-4619-9c19-26187abf5225&rev=108bd95944bd46199c1926187abf5225&hash=3587BB8F9E458752D7057C56DCF3171DEC0463B4)
unpacked directly into the source directory.

If you chose to save the toolchain somewhere else, just change
`ARM_TOOLCHAIN_BASE` in `CmakeToolchainDeluge.txt`.

## Building the firmware
*(These instructions apply to the DelugeFirmwareCommunity repository, which features many helpful configuration additions.)*

There are currently four build configurations to choose from: `oled-debug`,
`oled-release`, `7seg-debug` and `7seg-release`. Building should be as easy as
preparing the build directory and running make on it:

```
$ cmake -Boled-release -DCMAKE_BUILD_TYPE=oled-release
$ make -j4 -Coled-release
```

After the build finishes the files `DelugeFirmware` (the elf binary),
`DelugeFirmware.bin` and `DelugeFirmware.hex` should have been created in
`oled-release`.


# Direct firmware uploading and debugging
See: https://docs.google.com/document/d/1PkECgg0sxoVPng5CTdvRIZcY1CBBPHS8oVVhZIzTVn8/edit?usp=sharing
