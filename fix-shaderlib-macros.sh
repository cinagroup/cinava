#!/bin/bash

# 修复 shaderlib 中的宏名称不匹配问题
# VBOX_WITH_* → VRA_WITH_*

set -e

echo "修复 shaderlib 宏名称..."

cd /home/cina/.openclaw/workspace/cinava

# 需要替换的文件列表
FILES=(
    "src/VBox/Devices/Graphics/shaderlib/libWineStub/include/wine/wined3d.h"
    "src/VBox/Devices/Graphics/shaderlib/libWineStub/debug.c"
    "src/VBox/Devices/Graphics/shaderlib/wine/include/wine/wined3d.h"
    "src/VBox/Devices/Graphics/shaderlib/shader.c"
    "src/VBox/Devices/Graphics/shaderlib/vboxext.h"
    "src/VBox/Devices/Graphics/shaderlib/shaderapi.c"
    "src/VBox/Devices/Graphics/shaderlib/glsl_shader.c"
    "src/VBox/Devices/Graphics/shaderlib/wined3d_gl.h"
    "src/VBox/Devices/Graphics/shaderlib/shader_sm1.c"
    "src/VBox/Devices/Graphics/shaderlib/wined3d_private.h"
    "src/VBox/Devices/Graphics/shaderlib/directx.c"
)

# 替换规则
REPLACEMENTS=(
    "VBOX_WITH_VMSVGA:VRA_WITH_VMSVGA"
    "VBOX_WITH_WDDM:VRA_WITH_WDDM"
    "VBOX_WINE_WITH_SINGLE_CONTEXT:VRA_WINE_WITH_SINGLE_CONTEXT"
    "VBOX_WINE_WITH_SINGLE_SWAPCHAIN_CONTEXT:VRA_WINE_WITH_SINGLE_SWAPCHAIN_CONTEXT"
    "VBOX_WINE_WITHOUT_LIBWINE:VRA_WINE_WITHOUT_LIBWINE"
)

# 执行替换
for file in "${FILES[@]}"; do
    if [ -f "$file" ]; then
        echo "处理: $file"
        for replacement in "${REPLACEMENTS[@]}"; do
            old="${replacement%%:*}"
            new="${replacement##*:}"
            sed -i "s/\b${old}\b/${new}/g" "$file"
        done
    else
        echo "警告: 文件不存在 - $file"
    fi
done

echo "✅ 宏名称修复完成！"
echo ""
echo "替换统计:"
for replacement in "${REPLACEMENTS[@]}"; do
    old="${replacement%%:*}"
    new="${replacement##*:}"
    count=$(grep -r "\b${new}\b" src/VBox/Devices/Graphics/shaderlib/ --include="*.h" --include="*.c" 2>/dev/null | wc -l)
    echo "  ${old} → ${new}: ${count} 处"
done
