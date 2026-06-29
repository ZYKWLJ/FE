import pandas as pd
import re

# ==================== 配置（完全不动你的路径） ====================
EXCEL_PATH = r"C:\Users\29001\Desktop\code\fun-eg-v1\大学英语六级词汇完整带音标-可打印-可编辑-正序版1.xls"
H_OUTPUT_PATH = r"C:\Users\29001\Desktop\code\fun-eg-v1\include\4_vocaulary\stringss.h"
INCLUDE_HEADER = '#include "string_and_meaning.h"'
# =================================================================

def sanitize_var_name(word: str) -> str:
    var = re.sub(r"[^a-zA-Z0-9_]", "_", word.strip())
    if var and var[0].isdigit():
        var = "_" + var
    return var

def main():
    # 读取xls词汇表
    df = pd.read_excel(EXCEL_PATH, engine="xlrd")
    df.columns = ["word", "meaning"]
    df = df.dropna(subset=["word"], how="all")
    df["word"] = df["word"].astype(str).str.strip()
    df = df[df["word"] != ""]

    # 生成所有 extern 声明
    extern_code = ""
    for _, row in df.iterrows():
        w = row["word"]
        suffix = sanitize_var_name(w)
        var_name = f"String_and_meaning_{suffix}"
        extern_code += f"extern String_and_meaning {var_name};\n"

    # 组装标准头文件
    full_code = f"""#ifndef STRINGSS_H
#define STRINGSS_H

{INCLUDE_HEADER}

#ifdef __cplusplus
extern "C" {{
#endif

// 自动生成：所有词汇结构体外部声明
{extern_code}

#ifdef __cplusplus
}}
#endif

#endif
"""

    with open(H_OUTPUT_PATH, "w", encoding="utf-8") as f:
        f.write(full_code)

    print(f"✅ 成功生成 extern 声明，共 {len(df)} 个单词")
    print(f"📁 输出路径：{H_OUTPUT_PATH}")

if __name__ == "__main__":
    main()