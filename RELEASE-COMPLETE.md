# CINA VirtualAgent v7.2.97 - Developer Preview

## 🎉 发布信息

**版本**: 7.2.97  
**类型**: Developer Preview  
**发布日期**: 2026-03-22  
**平台**: Linux x86_64  
**仓库**: https://github.com/cinagroup/cinava

---

## ✨ 主要特性

### 核心虚拟化功能
- ✅ **VMMR0.r0** (2.9MB) - 环 0 虚拟机监控器
  - 硬件虚拟化支持 (VT-x/AMD-V)
  - 内存管理 (EPT/RVI)
  - 中断处理 (APIC)
  - 设备模拟框架

- ✅ **Runtime 库系列** (66MB+)
  - RuntimeR0.a (1.1MB) - 环 0 Runtime
  - RuntimeR3.a (31MB) - 环 3 Runtime
  - RuntimeGuestR3.a (29MB) - 客户机 Runtime

- ✅ **SDK 开发包** (545 个头文件)
  - IPRT 接口 (317 个)
  - VBox 接口 (228 个)

### 品牌重命名
- Oracle VirtualBox → CINA VirtualAgent
- Oracle → CINASEEK
- VBOX_* → VRA_* (500+ 处宏替换)
- 文档链接更新为 docs.cinaseek.com

---

## 📦 安装包内容

```
CINA-VirtualAgent-7.2.97/
├── bin/
│   └── VMMR0.r0              # 核心虚拟化模块 (2.9MB)
├── lib/
│   ├── RuntimeR0.a           # 环 0 Runtime (1.1MB)
│   ├── RuntimeR3.a           # 环 3 Runtime (31MB)
│   ├── RuntimeGuestR3.a      # 客户机 Runtime (29MB)
│   ├── DisasmR0.a            # 反汇编库 (456KB)
│   └── ServicesR0.a          # 服务库 (634KB)
├── include/
│   ├── iprt/                 # IPRT 头文件 (317 个)
│   └── VBox/                 # VBox 头文件 (228 个)
└── docs/
    ├── README.md
    ├── RELEASE-NOTES.md
    └── BUILD-TEST-REPORT.md
```

**发布包大小**: 21MB (压缩)

---

## 🚀 快速开始

### 安装依赖
```bash
sudo apt-get update
sudo apt-get install -y \
    pkg-config libxslt1-dev xsltproc \
    nasm yasm \
    libssl-dev zlib1g-dev \
    python3-dev
```

### 构建核心模块
```bash
cd cinava
export PATH="$PWD/kBuild/kBuild/bin/linux.amd64:$PATH"
export KBUILD_PATH="$PWD/kBuild/kBuild"
python3 configure.py --disable-qt
source env.sh
kmk VMMR0 RuntimeR3
```

### 使用预编译包
```bash
tar -xzf CINA-VirtualAgent-7.2.97-Complete.tar.gz
cd CINA-VirtualAgent-7.2.97
cat docs/README.md
```

---

## ⚠️ 已知限制

### 开发者预览版说明

**当前版本包含**:
- ✅ 核心虚拟化模块 (VMMR0.r0)
- ✅ Runtime 库系列
- ✅ SDK 开发包
- ✅ 完整文档

**暂不包含** (计划 v7.2.98):
- ⏳ GUI 组件 (需要 Qt6，配置完成待编译)
- ⏳ Guest Additions 内核模块 (HGCM→IDC API 迁移待修复)
- ⏳ 完整测试套件

### 技术说明

1. **GUI 组件**: Qt6 配置已 100% 完成，但由于 HGCM 代码问题阻塞编译。预计 v7.2.98 修复。

2. **Guest Additions**: RuntimeGuestR3.a 已编译成功，但 VBoxGuest 内核模块需要手动修复 HGCM→IDC API 迁移。提供自动迁移脚本 `fix-hgcm-to-idc.sh`。

3. **构建警告**: 剩余少量非致命警告（setjmp.o 缺少.note.GNU-stack 等），不影响功能。

---

## 📊 项目统计

| 指标 | 数量 |
|------|------|
| 修改文件 | 200+ |
| 宏替换 | 500+ |
| 编译产物 | 6 个核心模块 |
| 文档 | 21 个 |
| 脚本 | 6+ 个 |
| 开发工时 | 约 4 小时 |

---

## 🛠️ 可用脚本

| 脚本 | 用途 |
|------|------|
| `install-deps.sh` | 自动安装系统依赖 |
| `fix-hgcm-to-idc.sh` | HGCM→IDC API 迁移 |
| `create-release-tag.sh` | 创建版本标签 |
| `package.sh` | 打包发布包 |

---

## 📝 变更日志

### v7.2.97 (2026-03-22)

**新增**:
- CINA VirtualAgent 品牌完整重命名
- 核心虚拟化模块编译成功
- Runtime 库系列编译成功
- SDK 开发包 (545 个头文件)
- 完整文档体系 (21 个文档)
- 自动化 CI/CD 配置

**修复**:
- 200+ 文件 VBOX_* → VRA_* 宏替换
- CPUM、PDM、HM、APIC 模块编译问题
- NEM 模块多重定义
- 汇编文件 PIC 重定位

---

## 🔧 技术细节

### 构建环境
- **操作系统**: Linux (Ubuntu 24.04)
- **架构**: x86_64
- **编译器**: GCC 13.3.0
- **构建系统**: kBuild v0.1.9998
- **Python**: 3.12.3

### 核心模块验证
```
VMMR0.r0:
  格式：ELF 64-bit LSB shared object
  架构：x86-64
  大小：2.9MB
  符号：正常导出
  状态：✅ 可正常加载
```

---

## 📞 支持与联系

- **官网**: https://www.cinaseek.com
- **技术支持**: https://www.cinaseek.com/support
- **安全报告**: https://www.cinaseek.com/security/reporting.html
- **论坛**: https://forums.virtualbox.org/
- **问题追踪**: https://github.com/cinagroup/cinava/issues

---

## 📄 许可证

GPL-3.0-only OR CDDL-1.0

---

## 🎯 路线图

### v7.2.98 (1-2 周)
- [ ] 修复 Guest Additions HGCM→IDC API
- [ ] 修复 GUI VBoxCOM 跨平台问题
- [ ] 完整 Guest Additions 编译

### v7.3.0 (1 个月)
- [ ] GUI 组件完整编译
- [ ] 创建 Guest Additions ISO
- [ ] Windows/macOS 多平台支持

---

## 🙏 致谢

感谢所有贡献者和测试人员！

---

**CINASEEK and/or its affiliates.**  
**2026-03-22**
