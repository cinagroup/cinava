#!/bin/bash
# CINA VirtualAgent 依赖安装脚本
# Ubuntu/Debian 系统

set -e

echo "🔧 CINA VirtualAgent 依赖安装"
echo "=============================="
echo ""

# 更新包索引
echo "📦 更新包索引..."
sudo apt-get update

# 安装必需工具
echo "📦 安装必需工具 (P0)..."
sudo apt-get install -y pkg-config libxslt1-dev

# 安装 Qt6 和相关库
echo "📦 安装 Qt6 开发包..."
sudo apt-get install -y \
    qt6-base-dev \
    qt6-tools-dev \
    libqt6svg6-dev \
    libqt6opengl6-dev \
    qt6-l10n-tools

# 安装 SDL 和音频库
echo "📦 安装 SDL 和音频库..."
sudo apt-get install -y \
    libsdl2-dev \
    libsdl2-ttf-dev \
    libasound2-dev \
    libpulse-dev

# 安装系统库
echo "📦 安装系统库..."
sudo apt-get install -y \
    libssl-dev \
    zlib1g-dev \
    libpng-dev \
    libcurl4-openssl-dev \
    libxml2-dev \
    libx11-dev \
    libxext-dev \
    libxcursor-dev \
    libxrandr-dev \
    libxinerama-dev

# 安装开发工具
echo "📦 安装开发工具..."
sudo apt-get install -y \
    nasm \
    yasm \
    acpica-tools \
    python3-dev \
    gsoap \
    libgsoap-dev \
    ccache \
    build-essential \
    devscripts \
    debhelper \
    bison \
    flex \
    libcap-dev \
    libvpx-dev \
    libvorbis-dev \
    libogg-dev \
    liblzf1-dev \
    liblzma-dev

echo ""
echo "✅ 依赖安装完成!"
echo ""
echo "下一步:"
echo "  1. 运行：python3 configure.py"
echo "  2. 运行：kmk (开始构建)"
echo ""
