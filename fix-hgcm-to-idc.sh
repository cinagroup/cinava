#!/bin/bash
# HGCM → IDC API 迁移脚本

echo "开始迁移 HGCM API 到 IDC..."

# 备份并替换
find src/VBox/Additions -name "*.cpp" -o -name "*.c" -o -name "*.h" | while read file; do
    sed -i \
        -e 's/VBGL_IOCTL_HGCM_/VBGL_IOCTL_IDC_/g' \
        -e 's/VBGLIOCHGCM/VBGLIOCIDC/g' \
        -e 's/HGCM_DISCONNECT/IDC_DISCONNECT/g' \
        -e 's/HGCM_CALL/IDC_CALL/g' \
        "$file"
done

echo "迁移完成！"
