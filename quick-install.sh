#!/bin/bash
# 快速安装核心依赖

echo "🔧 安装核心依赖..."

# 使用 sudo -S 从标准输入读取密码
echo "请输入 sudo 密码："
read -s password

# 更新并安装
echo "$password" | sudo -S apt-get update
echo "$password" | sudo -S apt-get install -y pkg-config libxslt1-dev xsltproc

echo ""
echo "✅ 核心工具安装完成!"
echo ""
echo "现在运行配置:"
echo "  python3 configure.py"
