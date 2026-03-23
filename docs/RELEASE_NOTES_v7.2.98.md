# CINA VirtualAgent v7.2.98 发布说明

## 发布信息

- **版本号**: v7.2.98
- **发布日期**: 2026-03-23
- **产品**: CINA VirtualAgent
- **厂商**: CINASEEK

## 主要变更

### 品牌更新
- 产品从 VirtualBox 重命名为 CINA VirtualAgent
- 品牌宏替换：VBOX_* → VRA_*
- 文件名更新：VirtualBox* → VirtualAgent*

### API 更新
- HGCM → IDC API 适配
- 保持与 VirtualBox API 兼容性

### 平台支持
- ✅ Linux x86_64 (已发布)
- 🔄 Windows x86_64 (准备中)

## 已知问题

1. **Windows 版本**: 交叉编译需要额外的 Windows 库依赖
2. **CAPI**: C API 绑定暂时禁用
3. **DTrace**: 探针功能暂时禁用

## 安装

### Linux
```bash
# 下载安装包
wget https://github.com/cinaseek/cinava/releases/download/v7.2.98/VirtualAgent-7.2.98-Linux_amd64.run

# 添加执行权限
chmod +x VirtualAgent-7.2.98-Linux_amd64.run

# 安装
sudo ./VirtualAgent-7.2.98-Linux_amd64.run
```

### Windows
请参考 [Windows 编译指南](docs/WINDOWS_BUILD_GUIDE.md) 自行编译。

## 从源代码编译

### Linux
```bash
git clone https://github.com/cinaseek/cinava.git
cd cinava
source env.sh
./configure.py
kmk
```

### Windows
请参考 [Windows 编译指南](docs/WINDOWS_BUILD_GUIDE.md)

## 升级说明

从 VirtualBox 迁移:
1. 导出虚拟机配置
2. 卸载 VirtualBox
3. 安装 CINA VirtualAgent
4. 导入虚拟机配置

## 技术支持

- GitHub: https://github.com/cinaseek/cinava
- Issues: https://github.com/cinaseek/cinava/issues
- 文档: https://docs.cinaseek.com/cinava

## 许可证

GPL-3.0-only

---

**CINASEEK** - 企业级虚拟化解决方案
