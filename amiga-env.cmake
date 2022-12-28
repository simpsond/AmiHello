INCLUDE(CMakeForceCompiler)

SET(CMAKE_SYSTEM_NAME Generic)
SET(CMAKE_SYSTEM_VERSION 1)

# specify the cross compiler
CMAKE_FORCE_C_COMPILER(m68k-amigaos-gcc GNU)
CMAKE_FORCE_CXX_COMPILER(m68k-amigaos-g++ GNU)

SET(COMMON_FLAGS "")
