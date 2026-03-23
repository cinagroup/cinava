#!/bin/bash

# 修复 HGSMI 相关文件中的宏名称
# VBOX_WITH_WDDM → VRA_WITH_WDDM

set -e

echo "修复 HGSMI 宏名称..."

cd /home/cina/.openclaw/workspace/cinava

# 需要修复的文件
FILES=(
    "src/VBox/Devices/Graphics/HGSMI/HGSMIHost.cpp"
    "src/VBox/Devices/Graphics/HGSMI/HGSMIHost.h"
    "src/VBox/Devices/Graphics/HGSMI/SHGSMIHost.cpp"
    "src/VBox/Devices/Graphics/HGSMI/SHGSMIHost.h"
    "src/VBox/Devices/Graphics/DevVGA_VBVA.cpp"
)

# 替换 VBOX_WITH_WDDM → VRA_WITH_WDDM
for file in "${FILES[@]}"; do
    if [ -f "$file" ]; then
        echo "处理: $file"
        sed -i 's/\bVBOX_WITH_WDDM\b/VRA_WITH_WDDM/g' "$file"
        sed -i 's/\bVBOXHGSMI\b/VRAHGSMI/g' "$file"
    else
        echo "警告: 文件不存在 - $file"
    fi
done

echo "✅ HGSMI 宏名称修复完成！"
echo ""
echo "替换统计:"
count=$(grep -r "\bVRA_WITH_WDDM\b" src/VBox/Devices/Graphics/HGSMI/ --include="*.cpp" --include="*.h" 2>/dev/null | wc -l)
echo "  VBOX_WITH_WDDM → VRA_WITH_WDDM: ${count} 处"
