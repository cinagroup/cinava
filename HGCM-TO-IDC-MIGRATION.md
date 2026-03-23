# HGCM→IDC API 迁移计划

## 问题分析

### 旧 API (HGCM)
```cpp
VBGLIOCHGCMCALL
- 使用 HGCM 服务
- 直接调用 VMMDev
```

### 新 API (IDC)
```cpp
VBGLIOCIDCCALL
- 使用 IDC (Inter-Component Communication)
- 新的通信机制
```

## 迁移步骤

1. 分析 IDC API 结构
2. 映射 HGCM 调用到 IDC 调用
3. 重写连接/断开函数
4. 重写调用函数
5. 测试编译

## 关键文件

- `src/VBox/Additions/common/VBoxGuest/lib/VBoxGuestR3LibHGCM.cpp`
- `include/VBox/VBoxGuestLib.h`
- `include/VBox/VMMDev.h`

## 预计时间

4-8 小时
