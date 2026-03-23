# CINA VirtualAgent Windows 编译指南

## 概述

本文档介绍如何在 Windows 平台上编译 CINA VirtualAgent。

## 系统要求

### 硬件要求
- 64位 Intel/AMD 处理器
- 至少 8GB RAM（推荐 16GB）
- 至少 50GB 可用磁盘空间

### 软件要求

#### 必需软件
1. **Visual Studio 2022** (17.8 或更高版本)
   - 工作负载: "使用 C++ 的桌面开发"
   - 组件: Windows 10/11 SDK

2. **Windows 10/11 SDK**
   - 版本 10.0.22621.0 或更高

3. **Git for Windows**
   - https://git-scm.com/download/win

4. **Python 3.8+**
   - https://www.python.org/downloads/

5. **NASM** (汇编器)
   - https://www.nasm.us/
   - 添加到 PATH 环境变量

#### 可选软件
- **WiX Toolset** (创建安装包)
  - https://wixtoolset.org/

## 编译步骤

### 1. 克隆源代码

```cmd
git clone https://github.com/cinaseek/cinava.git
cd cinava
```

### 2. 配置环境变量

创建 `env.cmd` 文件：

```cmd
@echo off
set CINAVA_ROOT=%~dp0
set KBUILD_PATH=%CINAVA_ROOT%kBuild\kBuild
set KBUILD_HOST=win
set KBUILD_HOST_ARCH=amd64
set KBUILD_TARGET=win
set KBUILD_TARGET_ARCH=amd64

:: Visual Studio 环境
call "C:\Program Files\Microsoft Visual Studio\2022\Community\VC\Auxiliary\Build\vcvars64.bat"

:: Python
set PYTHON=%ProgramFiles%\Python312\python.exe

:: 添加工具到 PATH
set PATH=%KBUILD_PATH%\bin\win.amd64;%PATH%

echo CINA VirtualAgent 编译环境已配置
```

### 3. 配置项目

创建 `LocalConfig.kmk` 文件：

```kmk
# Windows 本地构建配置
VBOX_WITHOUT_HARDENING := 1
VRA_WITHOUT_HARDENING := 1

# 产品信息
VBOX_PRODUCT := CINA VirtualAgent
VBOX_VENDOR := CINASEEK
VBOX_VERSION_STRING := 7.2.98
VRA_PRODUCT := CINA VirtualAgent
VRA_VENDOR := CINASEEK
VRA_VERSION_STRING := 7.2.98

# 禁用 GUI (可选，减少依赖)
VRA_WITH_QTGUI :=
VBOX_WITH_QTGUI :=
VRA_WITH_QT :=
VBOX_WITH_QT :=
VBOX_WITH_QT6 :=

# 启用 COM
VBOX_WITH_COM := 1
VRA_WITH_COM := 1

# 禁用测试
VRA_WITH_TESTCASES :=
VBOX_WITH_TESTCASES :=

# 版本控制
IPRT_BLDCFG_SCM_REV := 0
VBOX_SVN_REV := 0
VRA_SVN_REV := 0
```

### 4. 运行配置脚本

```cmd
python configure.py
```

### 5. 编译

```cmd
env.cmd
kmk
```

### 6. 编译输出

编译完成后，输出位于：
```
out\win.amd64\release\bin\
```

## 创建安装包

### 使用 WiX

```cmd
kmk packing
```

安装包将生成在：
```
out\win.amd64\release\dist\
```

## 常见问题

### Q: 编译时提示找不到 Windows SDK
A: 确保安装了 Windows 10/11 SDK，并在 Visual Studio Installer 中选择了对应组件。

### Q: NASM 相关错误
A: 下载并安装 NASM，确保 `nasm.exe` 在 PATH 中。

### Q: 链接错误
A: 检查 Visual Studio 版本和 Windows SDK 版本是否匹配。

## 交叉编译 (从 Linux)

如果需要从 Linux 交叉编译 Windows 版本，请参考 `LocalConfig-win64.kmk`。

注意：交叉编译需要安装 MinGW-w64 和 Windows 版本的依赖库。

## 技术支持

- GitHub Issues: https://github.com/cinaseek/cinava/issues
- 文档: https://docs.cinaseek.com/cinava
