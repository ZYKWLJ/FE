import os
import sys

# 配置路径
EXCEL_PATH = r"C:\Users\29001\Desktop\fun-eg\大学英语六级词汇完整带音标-可打印-可编辑-正序版1.xls"
TARGET_C_FILE = r"C:\Users\29001\Desktop\fun-eg\src\word_struct.c"
LEVEL = '6'

# 安装依赖
def install_dependency():
    try:
        import xlrd
        return True
    except ImportError:
        print("正在安装xlrd==1.2.0依赖...")
        result = os.system(f"{sys.executable} -m pip install xlrd==1.2.0")
        if result == 0:
            print("xlrd安装成功！")
            import xlrd
            return True
        else:
            print("xlrd安装失败，请手动执行：pip install xlrd==1.2.0")
            return False

# 读取Excel单词
def read_excel_words(excel_path):
    import xlrd
    try:
        workbook = xlrd.open_workbook(excel_path)
        sheet = workbook.sheet_by_index(0)
        words = []
        # 过滤空值和无效数据
        for row in range(1, sheet.nrows):
            cell_value = sheet.cell_value(row, 0)
            if isinstance(cell_value, str) and cell_value.strip():
                words.append(cell_value.strip())
            elif isinstance(cell_value, float) and cell_value.is_integer():
                words.append(str(int(cell_value)))
        return words
    except Exception as e:
        print(f"读取Excel失败：{e}")
        return []

# 生成word_struct.c（结构体变量 + 指针数组）
def generate_word_struct_c(words):
    c_content = [
        '#include "../include/_include.h"',
        ""
    ]
    
    # 第一步：生成所有独立的结构体变量
    var_names = []  # 保存变量名，用于指针数组
    for word in words:
        first_char = word[0].lower()
        var_name = f"{word}_{LEVEL}_{first_char}_"
        var_names.append(var_name)
        # 定义结构体变量
        c_content.append(f'struct word {var_name} = {{{LEVEL!r}, {first_char!r}, "{word}"}};')
    
    # 第二步：生成结构体指针数组（每个元素是变量地址）
    c_content.extend([
        "",
        "// 所有六级单词结构体指针数组",
        "struct word *all_6_words[] = {"
    ])
    # 逐个添加 &变量名
    for var_name in var_names:
        c_content.append(f"    &{var_name},")
    c_content.extend([
        "};",
        "",
        "// 指针数组长度",
        f"int all_6_words_len = sizeof(all_6_words) / sizeof(all_6_words[0]);"
    ])
    
    return "\n".join(c_content)

def main():
    # 安装依赖
    if not install_dependency():
        return
    # 读取单词
    words = read_excel_words(EXCEL_PATH)
    if not words:
        print("未读取到有效单词！")
        return
    print(f"成功读取到 {len(words)} 个单词")
    # 仅写入word_struct.c
    try:
        with open(TARGET_C_FILE, 'w', encoding='utf-8') as f:
            f.write(generate_word_struct_c(words))
        print(f"✅ 指针数组版word_struct.c生成完成：{TARGET_C_FILE}")
    except Exception as e:
        print(f"❌ 写入失败：{e}")

if __name__ == "__main__":
    main()