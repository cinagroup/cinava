#!/bin/bash
# CINA VirtualAgent 完整依赖安装脚本
# 请在终端中运行此脚本（需要 sudo 权限）

set -e

echo "🔧 CINA VirtualAgent 完整依赖安装"
echo "=================================="
echo ""
echo "⚠️  此脚本需要 sudo 权限"
echo ""

# 更新包索引
echo "📦 更新包索引..."
sudo apt-get update

# 核心构建工具
echo "📦 安装核心构建工具..."
sudo apt-get install -y \
    build-essential \
    pkg-config \
    libxslt1-dev \
    xsltproc \
    nasm \
    yasm \
    bison \
    flex \
    ccache

# Qt6 开发包
echo "📦 安装 Qt6 开发包..."
sudo apt-get install -y \
    qt6-base-dev \
    qt6-tools-dev \
    libqt6svg6-dev \
    libqt6opengl6-dev \
    qt6-l10n-tools || echo "Qt6 安装失败，尝试 Qt5..."

# 尝试安装 Qt5 作为备选
if ! dpkg -l | grep -q qt6-base-dev; then
    echo "📦 安装 Qt5 作为备选..."
    sudo apt-get install -y \
        qtbase5-dev \
        qttools5-dev \
        libqt5svg5-dev \
        libqt5opengl5-dev || echo "Qt5 也安装失败"
fi

# 系统库
echo "📦 安装系统库..."
sudo apt-get install -y \
    libssl-dev \
    zlib1g-dev \
    libpng-dev \
    libcurl4-openssl-dev \
    libxml2-dev \
    libxslt1-dev

# X11 库
echo "📦 安装 X11 库..."
sudo apt-get install -y \
    libx11-dev \
    libxext-dev \
    libxcursor-dev \
    libxrandr-dev \
    libxinerama-dev \
    libxmu-dev

# 音频库
echo "📦 安装音频库..."
sudo apt-get install -y \
    libasound2-dev \
    libpulse-dev

# SDL 库
echo "📦 安装 SDL 库..."
sudo apt-get install -y \
    libsdl2-dev \
    libsdl2-ttf-dev

# 其他依赖
echo "📦 安装其他依赖..."
sudo apt-get install -y \
    libcap-dev \
    libvpx-dev \
    libvorbis-dev \
    libogg-dev \
    liblzf-dev \
    liblzma-dev \
    python3-dev \
    gsoap \
    libgsoap-dev \
    acpica-tools \
    devscripts \
    debhelper

echo ""
echo "✅ 依赖安装完成！"
echo ""
echo "下一步操作："
echo "  1. cd /home/cina/.openclaw/workspace/cinava"
echo "  2. source env.sh"
echo "  3. python3 configure.py"
echo "  4. kmk"
echo ""
echo "祝构建顺利！ 🎉"
