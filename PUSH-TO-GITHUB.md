# 推送代码到 GitHub 指南

## 📋 当前状态

**本地提交**: 6 个未推送提交
**本地标签**: v7.2.97 (未推送)
**远程分支**: cinaseek/virtual-agent (落后 6 个提交)

## 🔐 推送方法

### 方法 1: 使用 Personal Access Token (推荐)

```bash
# 设置 Git 使用 token
git config --global credential.helper store

# 推送分支
git push origin cinaseek/virtual-agent
# 输入 GitHub username 和 Personal Access Token

# 推送标签
git push origin v7.2.97
```

### 方法 2: 使用 SSH

```bash
# 切换到 SSH (如果已配置 SSH key)
git remote set-url origin git@github.com:cinagroup/cinava.git
git push origin cinaseek/virtual-agent
git push origin v7.2.97
```

### 方法 3: 使用 GitHub CLI

```bash
# 如果已安装 gh 并已认证
gh repo push cinagroup/cinava cinaseek/virtual-agent
gh release create v7.2.97 --generate-notes
```

## 📦 创建 Personal Access Token

1. 访问 https://github.com/settings/tokens
2. 点击 "Generate new token (classic)"
3. 选择 scopes: `repo`, `workflow`
4. 生成并复制 token
5. 在 git push 时用作密码

## ✅ 推送后验证

访问：https://github.com/cinagroup/cinava/tree/cinaseek/virtual-agent

确认：
- [ ] 最新提交已显示
- [ ] 标签 v7.2.97 已创建
- [ ] 文件数量正确 (约 64,000+ 文件)

---

**CINASEEK and/or its affiliates.**
