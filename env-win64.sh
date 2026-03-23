#!/bin/bash
# Windows x86_64 交叉编译环境
# CINA VirtualAgent v7.2.98

# 基本路径
export CINAVA_ROOT=/home/cina/.openclaw/workspace/cinava

# kBuild 配置
export KBUILD_PATH=${CINAVA_ROOT}/kBuild/kBuild
export KBUILD_HOST=linux
export KBUILD_HOST_ARCH=amd64

# Windows 目标
export KBUILD_TARGET=win
export KBUILD_TARGET_ARCH=amd64
export KBUILD_TYPE=release

# 配置文件
export AUTOCFG=${CINAVA_ROOT}/AutoConfig.kmk
export LOCALCFG=${CINAVA_ROOT}/LocalConfig-win64.kmk
export PATH_OUT_BASE=${CINAVA_ROOT}/out
export PATH_DEVTOOLS=${CINAVA_ROOT}/tools

# 路径设置
export PATH=${KBUILD_PATH}/bin/linux.amd64:${PATH}

# MinGW 工具链
export CC=x86_64-w64-mingw32-gcc
export CXX=x86_64-w64-mingw32-g++
export LD=x86_64-w64-mingw32-ld
export AR=x86_64-w64-mingw32-ar
export AS=x86_64-w64-mingw32-as
export STRIP=x86_64-w64-mingw32-strip
export WINDRES=x86_64-w64-mingw32-windres
export DLLTOOL=x86_64-w64-mingw32-dlltool

echo "CINA VirtualAgent Windows x86_64 交叉编译环境已配置"
echo "目标: ${KBUILD_TARGET}.${KBUILD_TARGET_ARCH}"
echo "工具链: MinGW-w64 (GCC 13)"
