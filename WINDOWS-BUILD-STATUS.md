# Windows 编译状态

## 当前状态: 准备中

### 已完成
- [x] 创建 LocalConfig-win64.kmk 配置文件
- [x] 创建 env-win64.sh 交叉编译环境脚本
- [x] 修复 VBoxPeSetVersion.cpp 编译问题
- [x] 创建 Windows 编译指南 (docs/WINDOWS_BUILD_GUIDE.md)

### 进行中
- [ ] 完善交叉编译依赖库 (需要 Windows 版本的 zlib, openssl 等)
- [ ] 测试 Windows 原生编译

### 待完成
- [ ] 创建 Windows 安装包 (.exe)
- [ ] 发布 Windows 版本到 GitHub Releases

## 编译方法

### 方法 1: Windows 原生编译 (推荐)
请参考 [Windows 编译指南](docs/WINDOWS_BUILD_GUIDE.md)

### 方法 2: Linux 交叉编译
```bash
source env-win64.sh
kmk KBUILD_TARGET=win KBUILD_TARGET_ARCH=amd64 LOCALCFG=LocalConfig-win64.kmk
```

## 已知问题

### 1. 交叉编译依赖
交叉编译需要以下 Windows 库（MinGW-w64 版本）：
- libz (zlib)
- libssl (OpenSSL)
- libcrypto (OpenSSL)
- 其他第三方库

解决方案：
1. 使用 MSYS2/MinGW 编译这些库
2. 或使用 Windows 原生编译

### 2. SDK 路径
Windows SDK 和 DDK 路径需要正确配置：
```
PATH_SDK_WINSDK10
PATH_TOOL_VCC143
PATH_SDK_WINDDK71
```

### 3. 代码签名
Windows 版本需要代码签名才能正常工作。开发环境可禁用：
```kmk
VBOX_WITHOUT_HARDENING := 1
VRA_WITHOUT_HARDENING := 1
```

## 版本计划

| 版本 | 平台 | 状态 | 预计时间 |
|------|------|------|----------|
| v7.2.98 | Linux x86_64 | ✅ 已发布 | 2026-03-23 |
| v7.2.98 | Windows x86_64 | 🔄 准备中 | TBD |
| v7.3.0 | Windows x86_64 | 📋 计划中 | TBD |

## 联系方式

如有问题，请在 GitHub 提交 Issue:
https://github.com/cinaseek/cinava/issues
