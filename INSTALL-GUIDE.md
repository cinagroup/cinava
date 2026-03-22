# CINA VirtualAgent 安装指南

## 🚨 重要提示

**依赖安装需要 sudo 权限** - 请手动运行安装脚本

---

## 📦 步骤 1: 安装系统依赖

### 方法 A: 使用安装脚本 (推荐)

```bash
cd /home/cina/.openclaw/workspace/cinava
bash install-deps.sh
```

脚本会提示输入 sudo 密码。

### 方法 B: 手动安装

```bash
# 更新包索引
sudo apt-get update

# 安装必需工具 (P0 - 必须)
sudo apt-get install -y pkg-config libxslt1-dev

# 安装 Qt6 开发包 (P1 - GUI 必需)
sudo apt-get install -y \
    qt6-base-dev \
    qt6-tools-dev \
    libqt6svg6-dev \
    libqt6opengl6-dev \
    qt6-l10n-tools

# 安装 SDL 和音频库
sudo apt-get install -y \
    libsdl2-dev \
    libsdl2-ttf-dev \
    libasound2-dev \
    libpulse-dev

# 安装系统库
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
sudo apt-get install -y \
    nasm \
    yasm \
    acpica-tools \
    python3-dev \
    gsoap \
    libgsoap-dev \
    ccache \
    build-essential \
    libcap-dev \
    libvpx-dev \
    libvorbis-dev \
    libogg-dev
```

---

## ⚙️ 步骤 2: 配置构建环境

安装依赖后，运行配置脚本：

```bash
cd /home/cina/.openclaw/workspace/cinava
python3 configure.py
```

配置成功后会生成 `AutoConfig.kmk` 文件。

---

## 🔨 步骤 3: 开始构建

### 完整构建 (Release 模式)

```bash
export PATH="$PWD/kBuild/kBuild/bin/linux.amd64:$PATH"
kmk
```

### 调试构建 (Debug 模式)

```bash
export PATH="$PWD/kBuild/kBuild/bin/linux.amd64:$PATH"
BUILD_TYPE=debug kmk
```

### 构建特定组件

```bash
# 仅构建 Runtime
kmk VMMR0

# 仅构建 GUI
kmk VBox

# 仅构建文档
kmk docs
```

---

## 📊 构建输出

构建产物位于：
```
out/linux.amd64/release/     # Release 构建
out/linux.amd64/debug/       # Debug 构建
```

主要可执行文件：
- `VBoxManage` - 命令行管理工具
- `VirtualBox` - GUI 主程序
- `VBoxHeadless` - 无头模式运行时

---

## 🔧 常见问题

### Q: 配置失败，提示缺少 xxx
A: 根据错误信息安装对应的开发包，然后重新运行 `python3 configure.py`

### Q: 构建速度慢
A: 安装并使用 ccache:
```bash
sudo apt-get install ccache
export PATH="/usr/lib/ccache:$PATH"
```

### Q: 磁盘空间不足
A: 完整构建需要约 10-15GB 空间。可以：
- 清理其他文件
- 使用 `kmk <target>` 构建特定组件
- 配置共享 FETCHDIR (见 doc/kBuild-tricks.txt)

### Q: Qt6 找不到
A: 确保安装了 `qt6-base-dev` 和相关包。某些系统可能需要设置 `QT6_PATH` 环境变量。

---

## 📝 本地配置 (可选)

编辑 `LocalConfig.kmk` 进行自定义配置：

```makefile
# 禁用硬编码加固 (开发环境)
VBOX_WITHOUT_HARDENING = 1

# 自定义输出目录
PATH_OUT_BASE = $(PATH_ROOT)/out-custom

# 共享工具下载目录
FETCHDIR = $(HOME)/Downloads/FetchDir

# 启用 ccache
TOOL_GCC3_USE_CCACHE = 1
```

---

## 🎯 验证构建

构建完成后测试：

```bash
# 检查版本
./out/linux.amd64/release/bin/VBoxManage --version

# 列出虚拟机
./out/linux.amd64/release/bin/VBoxManage list vms

# 运行 GUI (需要 X11)
./out/linux.amd64/release/bin/VirtualBox
```

---

*最后更新：2026-03-22*
