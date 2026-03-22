# CINA VirtualAgent 7.2.97 Release

## 🎉 发布信息

**版本**: 7.2.97  
**发布日期**: 2026-03-22  
**平台**: Linux x86_64  
**类型**: 开发预览版

## 📦 下载

- **完整安装包**: [CINA-VirtualAgent-7.2.97-Linux-x86_64.tar.gz](链接) (10MB)
- **核心模块**: VMMR0.r0, RuntimeR0.a, RuntimeR3.a

## ✨ 主要特性

### 品牌重命名
- Oracle VirtualBox → CINA VirtualAgent
- Oracle → CINASEEK
- 所有文档和 UI 已更新

### 核心功能
- ✅ 硬件虚拟化支持 (VT-x/AMD-V)
- ✅ 内存管理 (EPT/RVI)
- ✅ 中断处理 (APIC)
- ✅ 设备模拟框架

## 🔧 技术规格

| 组件 | 大小 | 说明 |
|------|------|------|
| VMMR0.r0 | 2.9MB | 环 0 虚拟机监控器 |
| RuntimeR0.a | 1.1MB | 环 0 Runtime 库 |
| RuntimeR3.a | 31MB | 环 3 Runtime 库 |

## 📋 安装说明

### 系统要求
- Linux x86_64
- GCC 13+
- kBuild 0.1.9998

### 快速开始
```bash
# 解压
tar -xzf CINA-VirtualAgent-7.2.97-Linux-x86_64.tar.gz
cd CINA-VirtualAgent-7.2.97

# 查看文档
cat README.md
```

## ⚠️ 已知问题

1. GUI 组件暂未编译（需要 Qt6）
2. COM/XPCOM 支持已禁用
3. 剩余编译警告（非致命）

## 📝 变更日志

### 新增
- CINA 品牌完整重命名
- 核心虚拟化模块编译成功
- 自动化构建配置

### 修复
- 200+ 文件 VBOX_* → VRA_* 宏替换
- CPUM、PDM、HM、APIC 模块编译问题
- NEM 模块多重定义
- 汇编文件 PIC 重定位

## 📞 支持

- **官网**: https://www.cinaseek.com
- **技术支持**: https://www.cinaseek.com/support
- **安全报告**: https://www.cinaseek.com/security/reporting.html
- **论坛**: https://forums.virtualbox.org/

## 📄 许可证

GPL-3.0-only OR CDDL-1.0

---

**CINASEEK and/or its affiliates.**
