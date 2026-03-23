#!/bin/bash
# 修复 Qt6 可访问性接口兼容性问题
# QAccessibleSelectionInterface 在 Qt6.4 及更早版本中不可用

FILES=(
    "src/VBox/Frontends/VirtualAgent/src/extensions/QITableView.cpp"
    "src/VBox/Frontends/VirtualAgent/src/extensions/QITreeWidget.cpp"
    "src/VBox/Frontends/VirtualAgent/src/widgets/UIFilmContainer.cpp"
)

for file in "${FILES[@]}"; do
    if [ -f "$file" ]; then
        echo "Processing $file..."
        
        # 备份原文件
        cp "$file" "$file.bak"
        
        # 注释掉 QAccessibleSelectionInterface 继承
        sed -i 's/, public QAccessibleSelectionInterface/\/\/, public QAccessibleSelectionInterface/' "$file"
        
        # 注释掉 SelectionInterface case
        sed -i 's/case QAccessible::SelectionInterface:/\/\/case QAccessible::SelectionInterface:/' "$file"
        sed -i 's/return static_cast<QAccessibleSelectionInterface\*>(this);/\/\/return static_cast<QAccessibleSelectionInterface*>(this);/' "$file"
        
        # 注释掉所有 SelectionInterface 相关方法
        sed -i '/virtual int selectedItemCount/,/^    }$/s/^/\/\//' "$file"
        sed -i '/virtual QList<QAccessibleInterface\*> selectedItems/,/^    }$/s/^/\/\//' "$file"
        sed -i '/virtual bool select(QAccessibleInterface/,/^    }$/s/^/\/\//' "$file"
        sed -i '/virtual bool unselect(QAccessibleInterface/,/^    }$/s/^/\/\//' "$file"
        sed -i '/virtual bool selectAll(),/^    }$/s/^/\/\//' "$file"
        sed -i '/virtual bool clear(),/^    }$/s/^/\/\//' "$file"
    fi
done

echo "Qt6 accessibility fixes applied."
