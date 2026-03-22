#!/bin/bash
# CINA VirtualAgent 版本标签创建脚本

VERSION="7.2.97"
DATE=$(date +%Y-%m-%d)

echo "创建版本标签 v$VERSION..."

# 创建标签
git tag -a "v$VERSION" -m "CINA VirtualAgent $VERSION

Released on: $DATE

Major changes:
- Brand rename: Oracle VirtualBox → CINA VirtualAgent
- Core modules compiled successfully
- VMMR0.r0, RuntimeR0.a, RuntimeR3.a ready

Build details:
- Platform: Linux x86_64
- Compiler: GCC 13.3.0
- kBuild: 0.1.9998

For full release notes, see RELEASE-NOTES.md"

echo "标签已创建：v$VERSION"
echo ""
echo "推送到远程仓库:"
echo "  git push origin v$VERSION"
echo ""
echo "或者查看所有标签:"
echo "  git tag -l"
