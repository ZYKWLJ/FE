import os
import sys

# 配置文件路径
EXCEL_PATH = r"C:\Users\29001\Desktop\fun-eg\大学英语六级词汇完整带音标-可打印-可编辑-正序版1.xls"
C_FILE_PATH = r"C:\Users\29001\Desktop\fun-eg\src\word.c"
H_FILE_PATH = r"C:\Users\29001\Desktop\fun-eg\include\word.h"
LEVEL = '6'  # 六级词汇，对应结构体中的level字段

# 先安装xlrd依赖
def install_dependency():
    try:
        import xlrd
        return True
    except ImportError:
        print("正在安装xlrd==1.2.0依赖...")
        # 执行安装命令
        result = os.system(f"{sys.executable} -m pip install xlrd==1.2.0")
        if result == 0:
            print("xlrd安装成功！")
            import xlrd
            return True
        else:
            print("xlrd安装失败，请手动执行：pip install xlrd==1.2.0")
            return False

# 读取Excel中A列单词
def read_excel_words(excel_path):
    import xlrd  # 安装完成后再导入
    try:
        workbook = xlrd.open_workbook(excel_path)
        sheet = workbook.sheet_by_index(0)  # 读取第一个工作表
        words = []
        # 从第2行开始读取A列（A列索引0），跳过空行和无效数据
        for row in range(1, sheet.nrows):
            cell_value = sheet.cell_value(row, 0)
            # 过滤非字符串、空值、纯数字等无效单词
            if isinstance(cell_value, str) and cell_value.strip():
                word = cell_value.strip()
                words.append(word)
            elif isinstance(cell_value, float) and cell_value.is_integer():
                # 处理Excel中误识别为数字的情况（如纯数字单词）
                word = str(int(cell_value))
                words.append(word)
        return words
    except Exception as e:
        print(f"读取Excel失败：{e}")
        return []

# 生成.c文件内容
def generate_c_code(words):
    c_lines = ['#include "../include/_include.h"\n']  # 保留原有头文件
    for word in words:
        first_char = word[0].lower()  # 首字母转小写
        var_name = f"{word}_{LEVEL}_{first_char}_"
        # 生成结构体初始化语句，兼容C语言语法
        c_lines.append(f'struct word {var_name} = {{{LEVEL!r}, {first_char!r}, "{word}"}};')
    return '\n\n'.join(c_lines)

# 生成.h文件内容
def generate_h_code(words):
    h_lines = [
        '#ifndef WORD_H_',
        '#define WORD_H_',
        '',
        'struct word',
        '{',
        '    char level;           // 代表是六级？四级？还是其他的？',
        '    char first_character; // 代表是哪一个字母开头的单词',
        '    char word[20];        // 单词全貌',
        '};',
        ''
    ]
    # 添加所有单词的extern声明
    for word in words:
        first_char = word[0].lower()
        var_name = f"{word}_{LEVEL}_{first_char}_"
        h_lines.append(f'extern struct word {var_name};')
    h_lines.extend(['', '#endif /* WORD_H_ */'])
    return '\n'.join(h_lines)

# 主逻辑
def main():
    # 第一步：安装依赖
    if not install_dependency():
        return
    # 第二步：读取Excel单词
    words = read_excel_words(EXCEL_PATH)
    if not words:
        print("未读取到有效单词，请检查Excel文件路径和内容！")
        return
    print(f"成功读取到 {len(words)} 个单词")
    # 第三步：写入.c文件
    try:
        with open(C_FILE_PATH, 'w', encoding='utf-8') as f:
            f.write(generate_c_code(words))
        print(f".c文件已生成：{C_FILE_PATH}")
    except Exception as e:
        print(f"写入.c文件失败：{e}")
    # 第四步：写入.h文件
    try:
        with open(H_FILE_PATH, 'w', encoding='utf-8') as f:
            f.write(generate_h_code(words))
        print(f".h文件已生成：{H_FILE_PATH}")
    except Exception as e:
        print(f"写入.h文件失败：{e}")

if __name__ == "__main__":
    main()