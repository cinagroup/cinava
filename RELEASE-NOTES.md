# CINA VirtualAgent 7.2.97 发布说明

## 📅 发布日期
2026-03-22

## 🎉 重大变更

### 品牌重命名
本项目已从 **Oracle VirtualBox** 重命名为 **CINA VirtualAgent**：
- 产品名称：Oracle VirtualBox → CINA VirtualAgent
- 供应商名称：Oracle → CINASEEK
- 版本宏：VBOX_* → VRA_*
- 文档站点：docs.oracle.com → docs.cinaseek.com

### 核心模块编译成功
- ✅ VMMR0.r0 (2.9MB) - 环 0 虚拟机监控器模块
- ✅ RuntimeR0.a (1.1MB) - 环 0 Runtime 库
- ✅ RuntimeR3.a (31MB) - 环 3 Runtime 库

## 🔧 技术细节

### 构建环境
- 操作系统：Linux (Ubuntu 24.04)
- 架构：x86_64
- 编译器：GCC 13.3.0
- 构建系统：kBuild v0.1.9998
- Python: 3.12.3

### 修复内容
- 修复约 200+ 个文件的 VBOX_* → VRA_* 宏替换
- 修复 CPUM、PDM、HM、APIC、DBGF 等模块的编译问题
- 修复 NEM 模块多重定义问题
- 修复汇编文件的 PIC 重定位问题

### 已知问题
1. GUI 组件需要 Qt6 完整支持（当前已禁用）
2. COM/XPCOM 跨平台支持（当前已禁用）
3. 剩余编译警告（非致命）：
   - setjmp.o 缺少.note.GNU-stack
   - timesupref.o 重定位警告
   - DT_TEXTREL 创建

## 📦 安装包内容

```
CINA-VirtualAgent-7.2.97/
├── bin/
│   └── VMMR0.r0      # 环 0 虚拟机监控器模块 (2.9MB)
├── lib/
│   ├── RuntimeR0.a   # 环 0 Runtime 库 (1.1MB)
│   ├── RuntimeR3.a   # 环 3 Runtime 库 (31MB)
│   ├── DisasmR0.a    # 反汇编库 (456KB)
│   └── ServicesR0.a  # 服务库 (634KB)
├── include/          # 头文件（待添加）
└── docs/            # 文档
```

## 🚀 下一步计划

1. **短期** (1-2 周)
   - 完成 GUI 组件编译
   - 构建 Guest Additions
   - 完善测试套件

2. **中期** (1 个月)
   - 创建完整安装包
   - 发布预编译版本
   - 建立 CI/CD 流程

3. **长期** (3 个月)
   - 完整功能支持
   - 多平台构建 (Windows, macOS)
   - 官方文档站点

## 📞 联系方式

- 官网：https://www.cinaseek.com
- 技术支持：https://www.cinaseek.com/support
- 安全报告：https://www.cinaseek.com/security/reporting.html
- 论坛：https://forums.virtualbox.org/

## 📄 许可证

GPL-3.0-only OR CDDL-1.0

---

**CINASEEK and/or its affiliates.**
