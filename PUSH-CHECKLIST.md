# GitHub 推送检查清单

## ✅ 推送前检查

- [ ] 本地提交已准备 (6 个新提交)
- [ ] 标签 v7.2.97 已创建
- [ ] 发布包已生成 (21MB)
- [ ] Release 说明已准备 (RELEASE-COMPLETE.md)

## 🔐 认证方式选择

### 方式 1: Personal Access Token (推荐)

1. 访问 https://github.com/settings/tokens
2. 点击 "Generate new token (classic)"
3. 选择 scopes: `repo`, `workflow`, `read:org`
4. 生成并复制 token
5. 执行推送命令

```bash
git push origin cinaseek/virtual-agent
# 输入 GitHub 用户名
# 粘贴 Personal Access Token 作为密码
```

### 方式 2: SSH Key

如果已配置 SSH key:

```bash
git remote set-url origin git@github.com:cinagroup/cinava.git
git push origin cinaseek/virtual-agent
git push origin v7.2.97
```

### 方式 3: GitHub CLI

如果已安装并认证 gh:

```bash
gh release create v7.2.97 \
  --title "CINA VirtualAgent v7.2.97 - Developer Preview" \
  --notes-file RELEASE-COMPLETE.md \
  out/linux.amd64/release/dist/CINA-VirtualAgent-7.2.97-Complete.tar.gz
```

## 📝 推送命令

### 推送分支
```bash
git push origin cinaseek/virtual-agent
```

### 推送标签
```bash
git push origin v7.2.97
```

### 创建 GitHub Release
```bash
# 使用 GitHub CLI
gh release create v7.2.97 \
  --title "CINA VirtualAgent v7.2.97 - Developer Preview" \
  --notes-file RELEASE-COMPLETE.md \
  out/linux.amd64/release/dist/CINA-VirtualAgent-7.2.97-Complete.tar.gz

# 或手动在 GitHub 网页创建
# 访问：https://github.com/cinagroup/cinava/releases/new
# 选择标签 v7.2.97
# 粘贴 RELEASE-COMPLETE.md 内容
# 上传发布包
```

## ✅ 推送后验证

- [ ] 访问 https://github.com/cinagroup/cinava/tree/cinaseek/virtual-agent
- [ ] 确认最新提交已显示
- [ ] 确认标签 v7.2.97 已创建
- [ ] 访问 https://github.com/cinagroup/cinava/releases
- [ ] 确认 Release 已发布
- [ ] 确认发布包已上传

## 🎉 发布完成！

发布后通知团队成员，并更新项目状态。
