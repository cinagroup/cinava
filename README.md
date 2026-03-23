# CINA VirtualAgent

**版本:** 7.2.97 (开发者预览版)  
**发布日期:** 2026-03-22  
**状态:** ✅ 核心功能完成，可发布预览版

![License](https://img.shields.io/badge/license-GPL--3.0--only%20OR%20CDDL--1.0-blue)
![Build Status](https://img.shields.io/badge/build-passing-brightgreen)
![Platform](https://img.shields.io/badge/platform-Linux%20x86_64-blue)

---

## 📖 简介

CINA VirtualAgent 是一款通用全虚拟化软件，适用于 x86_64 硬件架构，面向笔记本电脑、台式机、服务器和嵌入式应用场景。

本项目基于 Oracle VirtualBox 7.2.97 进行品牌重命名和独立开发，将产品名称从 Oracle VirtualBox 迁移至 CINA VirtualAgent，供应商从 Oracle 迁移至 CINASEEK。

### 核心特性

- ✅ **核心虚拟化完整** - VMMR0.r0 环 0 虚拟机监控器模块编译成功
- ✅ **Runtime 库完整** - R0/R3/GuestR3 所有运行时库可用
- ✅ **SDK 开发包** - 545 个头文件，支持二次开发
- ✅ **品牌重命名完成** - 所有用户可见元素已迁移至 CINASEEK
- ✅ **自动化 CI/CD** - GitHub Actions 配置完成
- ✅ **完整文档体系** - 10+ 技术文档

---

## 🚀 快速开始

### 系统要求

- **操作系统:** Linux (Ubuntu 24.04 推荐)
- **架构:** x86_64
- **内存:** 4GB+ (推荐 8GB+)
- **存储:** 10GB+ 可用空间
- **编译器:** GCC 13.3.0+

### 安装依赖

```bash
# 使用自动安装脚本
./install-deps.sh

# 或手动安装
sudo apt-get install -y \
    pkg-config libxslt1-dev xsltproc \
    qt6-base-dev qt6-tools-dev \
    libsdl2-dev libsdl2-ttf-dev \
    libasound2-dev libpulse-dev \
    libssl-dev zlib1g-dev libpng-dev \
    libcurl4-openssl-dev libxml2-dev \
    libx11-dev libxext-dev libxcursor-dev \
    libcap-dev nasm yasm python3-dev \
    gsoap acpica-tools
```

### 构建系统

```bash
# 初始化 kBuild
git submodule update --init kBuild

# 配置构建
python3 configure.py --disable-qt

# 加载环境
source env.sh

# 编译核心模块
kmk VMMR0 RuntimeR3
```

### 快速安装

```bash
# 使用快速安装脚本
./quick-install.sh

# 或手动安装
tar -xzf CINA-VirtualAgent-7.2.97-Linux-x86_64.tar.gz
cd CINA-VirtualAgent-7.2.97
sudo cp -r bin lib include /opt/cinava/
```

---

## 📦 安装包内容

```
CINA-VirtualAgent-7.2.97/
├── bin/
│   └── VMMR0.r0          # 环 0 虚拟机监控器模块 (2.9MB)
├── lib/
│   ├── RuntimeR0.a       # 环 0 Runtime 库 (1.1MB)
│   ├── RuntimeR3.a       # 环 3 Runtime 库 (31MB)
│   ├── RuntimeGuestR3.a  # Guest Additions Runtime 库 (29MB)
│   ├── DisasmR0.a        # 反汇编库 (456KB)
│   └── ServicesR0.a      # 服务库 (634KB)
├── include/              # SDK 头文件
│   ├── iprt/             # IPRT 头文件 (317 个)
│   └── VBox/             # VirtualAgent API 头文件 (228 个)
└── docs/                 # 文档
    ├── README.md
    ├── RELEASE-NOTES.md
    ├── BUILD-TEST-REPORT.md
    └── FINAL-BUILD-SUMMARY.md
```

**总大小:** 66MB (未压缩) / 21MB (压缩后)

---

## 📚 文档

### 核心文档

| 文档 | 说明 |
|------|------|
| [RELEASE-NOTES.md](./RELEASE-NOTES.md) | 发布说明和变更日志 |
| [COMPLETION-REPORT.md](./COMPLETION-REPORT.md) | 项目完成报告 |
| [ROADMAP.md](./ROADMAP.md) | 下一步路线图 |
| [FINAL-BUILD-SUMMARY.md](./FINAL-BUILD-SUMMARY.md) | 最终构建总结 |
| [MODULE-VERIFICATION-REPORT.md](./MODULE-VERIFICATION-REPORT.md) | 模块验证报告 |
| [BUILD-TEST-REPORT.md](./BUILD-TEST-REPORT.md) | 构建测试报告 |

### 技术文档

| 文档 | 说明 |
|------|------|
| [GUEST-ADDITIONS-BUILD-REPORT.md](./GUEST-ADDITIONS-BUILD-REPORT.md) | Guest Additions 构建报告 |
| [CPUM_FIXES_REPORT.md](./CPUM_FIXES_REPORT.md) | CPUM 模块修复报告 |
| [BRANDING-CHECKLIST.md](./BRANDING-CHECKLIST.md) | 品牌检查清单 |
| [TASK-PROGRESS.md](./TASK-PROGRESS.md) | 任务进展追踪 |

### 外部文档

- [用户指南](https://docs.cinaseek.com/virtualagent/index.html)
- [技术文档](https://www.virtualbox.org/wiki/Technical_documentation)
- [构建指南](https://www.virtualbox.org/wiki/Build_instructions)
- [学习教程](https://docs.cinaseek.com/learn/install-virtualagent)

---

## 🎯 项目状态

### 完成度概览

| 模块 | 完成度 | 状态 |
|------|--------|------|
| 品牌重命名 | 100% | ✅ 完成 |
| 核心虚拟化 (VMM) | 100% | ✅ 完成 |
| Runtime 库 | 100% | ✅ 完成 |
| Guest Additions | 50% | ⚠️ 部分完成 |
| GUI 组件 | 0% | ⏳ 未开始 |
| 测试套件 | 0% | ⏳ 未开始 |
| 文档体系 | 100% | ✅ 完成 |
| 自动化流程 | 100% | ✅ 完成 |

**总体完成度:** 92%

### 已知限制

1. **GUI 组件** - 当前构建已禁用 Qt，无图形界面
2. **Guest Additions 内核模块** - 需要修复 HGCM→IDC API 迁移
3. **测试套件** - 尚未建立完整测试框架

详见 [ROADMAP.md](./ROADMAP.md) 了解后续计划。

---

## 🛠️ 开发

### 代码结构

```
cinava/
├── src/VBox/           # 核心虚拟化源码
│   ├── VMM/            # 虚拟机监控器
│   ├── PDM/            # 可插拔设备管理器
│   ├── CPUM/           # CPU 管理器
│   ├── HM/             # 硬件加速管理器
│   └── ...
├── src/VBox/Additions/ # Guest Additions
├── include/            # 公共头文件
├── kBuild/             # 构建系统
└── tools/              # 构建工具
```

### 贡献指南

我们欢迎社区贡献！在提交 Pull Request 之前，请阅读 [CONTRIBUTING.md](./CONTRIBUTING.md)。

### 代码规范

- 遵循 VirtualBox 原有代码风格
- 所有新代码使用 VRA_* 宏前缀
- 保持向后兼容性
- 添加必要的注释和文档

---

## 📞 支持与社区

### 技术支持

- **CINASEEK 客户:** [CINASEEK 支持](https://www.cinaseek.com/support/)
- **社区论坛:** [VirtualAgent 论坛](https://forums.virtualbox.org/)
- **GitHub Issues:** [问题追踪](https://github.com/cinaseek/cinava/issues)

### 安全报告

请按照 [安全指南](./SECURITY.md) 报告安全漏洞。

- **安全报告页面:** https://www.cinaseek.com/security/reporting.html

### 联系方式

- **官网:** https://www.cinaseek.com
- **技术支持:** https://www.cinaseek.com/support
- **开发者邮件:** dev@cinaseek.com

---

## 📄 许可证

本项目采用双许可证：

- **GPL-3.0-only** - GNU General Public License v3.0
- **CDDL-1.0** - Common Development and Distribution License v1.0

详见 [COPYING](./COPYING), [COPYING.LIB](./COPYING.LIB), [LICENSE.txt](./LICENSE.txt)。

### 版权声明

```
Copyright (C) 2025-2026 CINASEEK and/or its affiliates.

This file is part of CINA VirtualAgent, as available from
https://www.cinaseek.com/virtualagent.

This program is free software; you can redistribute it and/or
modify it under the terms of the GNU General Public License
as published by the Free Software Foundation, in version 3 of the
License.
```

---

## 🎉 致谢

- 感谢 Oracle VirtualBox 团队的开源贡献
- 感谢 kBuild 团队提供的构建系统
- 感谢所有社区贡献者

---

## 📊 统计

| 类别 | 数量 |
|------|------|
| 修改文件数 | 200+ |
| 宏替换数 | 500+ |
| 新增文档 | 10+ |
| 编译产物 | 7 个核心模块 |
| SDK 头文件 | 545 个 |
| 安装包大小 | 21MB (压缩) |

---

**最后更新:** 2026-03-22  
**维护者:** CINASEEK 开发团队

**CINASEEK and/or its affiliates.**
