#!/bin/bash

# 修复 SharedClipboard 宏名称不匹配
# VBOX_WITH_SHARED_CLIPBOARD_* → VRA_WITH_SHARED_CLIPBOARD_*

set -e

echo "修复 SharedClipboard 宏名称..."

cd /home/cina/.openclaw/workspace/cinava

# 需要替换的目录
DIRS=(
    "src/VBox/GuestHost/SharedClipboard"
    "src/VBox/HostServices/SharedClipboard"
    "include/VBox/GuestHost"
)

# 替换规则
REPLACEMENTS=(
    "VBOX_WITH_SHARED_CLIPBOARD:VRA_WITH_SHARED_CLIPBOARD"
    "VBOX_WITH_SHARED_CLIPBOARD_TRANSFERS:VRA_WITH_SHARED_CLIPBOARD_TRANSFERS"
    "VBOX_WITH_SHARED_CLIPBOARD_TRANSFERS_HTTP:VRA_WITH_SHARED_CLIPBOARD_TRANSFERS_HTTP"
)

# 执行替换
for dir in "${DIRS[@]}"; do
    if [ -d "$dir" ]; then
        echo "处理目录: $dir"
        find "$dir" -type f \( -name "*.cpp" -o -name "*.c" -o -name "*.h" \) | while read file; do
            for replacement in "${REPLACEMENTS[@]}"; do
                old="${replacement%%:*}"
                new="${replacement##*:}"
                sed -i "s/\b${old}\b/${new}/g" "$file"
            done
        done
    fi
done

echo "✅ SharedClipboard 宏名称修复完成！"
echo ""
echo "替换统计:"
for replacement in "${REPLACEMENTS[@]}"; do
    old="${replacement%%:*}"
    new="${replacement##*:}"
    count=0
    for dir in "${DIRS[@]}"; do
        if [ -d "$dir" ]; then
            count=$((count + $(grep -r "\b${new}\b" "$dir" --include="*.cpp" --include="*.h" 2>/dev/null | wc -l)))
        fi
    done
    echo "  ${old} → ${new}: ${count} 处"
done
