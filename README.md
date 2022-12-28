# AmiHello

Just because someone posts code to GitHub doesn't mean it's good, and that applies here. The work in this repository is me getting back into hobby Amiga development. If you see something and wonder if I did it wrong, the answer is probably, yes.

AmiHello is the classic "Hello, World!" program written in C using only "Amiga APIs." That is, no C runtime or externally supplied startup code. The produced program should work on any Amiga.

## CMake Toolchains
Included as a submodule is some toolchains, not all of them have been tested.  Be sure to clone this repo using `--recurse-submodules` or pull after the fact, `git submodule update --init --recursive`

## Compilers tested
* [m68k-amigaos-gcc](https://github.com/bebbo/amiga-gcc/) (GCC) 6.5.0b 221128234224
* SAS/C Amiga Compiler 6.58
* [vbcc](http://sun.hasenbraten.de/vbcc/) V0.9i pre

### m68k-amigaos-gcc
To build, you can use CMake and the supplied toolchain config. From this project's root directory just
```
mkdir cmake-build
cmake -B cmake-build -DCMAKE_TOOLCHAIN_FILE=AmigaCMakeCrossToolchains/m68k-amigaos.cmake -DM68K_CRT=none
cd cmake-build
make
```
AmiHello will be in the cmake-build directory

### SAS/C Amiga Compiler 6.58
Assuming SAS/C is in your Amiga path then, from this project's root directory
```
makedir build
smake
```
AmiHello-sc will be in the build directory.

### vbcc
VBCC environment variable must be set as a path to vbcc root and your aos68k config file must add in an include path to NDK includes.
``` 
mkdir cmake-build
cmake -B cmake-vbcc -DCMAKE_TOOLCHAIN_FILE=AmigaCMakeCrossToolchains/vbcc-aos68k.cmake -DM68K_CRT=none
cd cmake-build
make
```
AmiHello will be in the cmake-build directory

## Binary size comparison
|Compiler|Size (bytes)|
|-|-|
|gcc|320|
|SAS/C|172|
|vbcc|144|


