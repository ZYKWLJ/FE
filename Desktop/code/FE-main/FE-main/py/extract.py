import pandas as pd
import re

# -------------------------- 配置项（请确认路径正确） --------------------------
excel_file_path = r"C:\Users\29001\Desktop\code\fun-eg-v1\大学英语六级词汇完整带音标-可打印-可编辑-正序版1.xls"
c_output_file_path = r"C:\Users\29001\Desktop\code\fun-eg-v1\src\4_vocabulary\stringss.c"
# 结构体头文件路径（请确保你的结构体定义在该头文件中）
header_file_include = '#include "string_and_meaning.h"'
# -----------------------------------------------------------------------------

# 转义C语言字符串中的特殊字符，避免编译错误
def escape_c_string(s):
    s = s.replace('\\', '\\\\')  # 先转义反斜杠，避免二次转义
    s = s.replace('"', '\\"')    # 转义双引号，防止字符串提前闭合
    s = s.replace('\n', '\\n')   # 转义换行符
    s = s.replace('\r', '\\r')   # 转义回车符
    s = s.replace('\t', '\\t')   # 转义制表符
    return s

# 处理变量名，确保符合C语言规范
def sanitize_var_name(word):
    # 替换所有非字母数字下划线的字符为下划线
    var_name = re.sub(r'[^a-zA-Z0-9_]', '_', word)
    # 变量名不能以数字开头，开头是数字则加下划线前缀
    if var_name and var_name[0].isdigit():
        var_name = f'_{var_name}'
    return var_name

# 1. 读取Excel文件
try:
    # 读取Excel，支持xls格式
    df = pd.read_excel(excel_file_path, engine='xlrd')
    # 重命名列，确保和你的需求匹配（第一列=单词，第二列=释义）
    df.columns = ['单词', '释义']
    # 去除空行、首尾空格
    df = df.dropna(subset=['单词', '释义'], how='all')
    df['单词'] = df['单词'].astype(str).str.strip()
    df['释义'] = df['释义'].astype(str).str.strip()
    # 过滤掉空单词
    df = df[df['单词'] != '']
    print(f"成功读取Excel，共{len(df)}条有效单词数据")
except Exception as e:
    print(f"读取Excel失败：{e}")
    exit(1)

# 2. 生成C语言代码
c_code = f"""// 自动生成的六级词汇结构体全局变量
// 生成时间：{pd.Timestamp.now()}
{header_file_include}

"""

# 遍历每一行，生成结构体全局变量
for idx, row in df.iterrows():
    word = row['单词']
    meaning = row['释义']
    # 处理变量名
    var_name = sanitize_var_name(word)
    full_var_name = f"String_and_meaning_{var_name}"
    # 转义字符串
    escaped_word = escape_c_string(word)
    escaped_meaning = escape_c_string(meaning)
    # 拼接结构体定义
    struct_def = f"""String_and_meaning {full_var_name} = {{
    .string = "{escaped_word}",
    .meaning = "{escaped_meaning}"
}};

"""
    c_code += struct_def

# 3. 写入C文件
try:
    with open(c_output_file_path, 'w', encoding='utf-8') as f:
        f.write(c_code)
    print(f"成功生成C语言代码，共{len(df)}个全局变量，已写入：{c_output_file_path}")
except Exception as e:
    print(f"写入C文件失败：{e}")
    exit(1)