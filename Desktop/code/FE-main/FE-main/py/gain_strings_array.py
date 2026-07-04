import pandas as pd
import re
from datetime import datetime

# ====================== 配置区（路径已修正完整文件名） ======================
EXCEL_PATH = r"C:\Users\29001\Desktop\code\fun-eg-v1\大学英语六级词汇完整带音标-可打印-可编辑-正序版1.xls"
H_OUTPUT_PATH = r"C:\Users\29001\Desktop\code\fun-eg-v1\include\4_vocaulary\strings_array.h"
INCLUDE_HEADER = '#include "string_and_meaning.h"'
MAX_ARR_LEN = 10000
# ===================================================

def escape_c_string(s: str) -> str:
    s = s.replace("\\", "\\\\")
    s = s.replace('"', '\\"')
    s = s.replace("\n", "\\n")
    s = s.replace("\r", "\\r")
    s = s.replace("\t", "\\t")
    return s

def sanitize_var_name(word: str) -> str:
    var = re.sub(r"[^a-zA-Z0-9_]", "_", word.strip())
    if var and var[0].isdigit():
        var = "_" + var
    return var

def main():
    # xls文件使用xlrd引擎
    df = pd.read_excel(EXCEL_PATH, engine="xlrd")
    df.columns = ["word", "meaning"]
    # 清洗空数据
    df = df.dropna(subset=["word", "meaning"], how="all")
    df["word"] = df["word"].astype(str).str.strip()
    df["meaning"] = df["meaning"].astype(str).str.strip()
    df = df[df["word"] != ""]
    total_cnt = len(df)

    var_list = []
    single_defs = ""
    for _, row in df.iterrows():
        w = row["word"]
        m = row["meaning"]
        suffix = sanitize_var_name(w)
        var = f"String_and_meaning_{suffix}"
        var_list.append(var)
        ew = escape_c_string(w)
        em = escape_c_string(m)
        single_defs += f"""String_and_meaning {var} = {{
    .string = "{ew}",
    .meaning = "{em}"
}};

"""
    items = ",\n    ".join(var_list)

    # 输出格式：单独全局变量 + String_and_meaning string_and_meaning[10000] = {xxx,xxx};
    code = f"""/*
自动生成文件，生成时间：{datetime.now().strftime("%Y-%m-%d %H:%M:%S")}
单词总数：{total_cnt}
数组固定长度{MAX_ARR_LEN}
*/
#ifndef STRINGS_ARRAY_H
#define STRINGS_ARRAY_H

{INCLUDE_HEADER}

#ifdef __cplusplus
extern "C" {{
#endif

{single_defs}

String_and_meaning string_and_meaning[{MAX_ARR_LEN}] = {{
    {items}
}};

#ifdef __cplusplus
}}
#endif

#endif // STRINGS_ARRAY_H
"""
    with open(H_OUTPUT_PATH, "w", encoding="utf-8") as f:
        f.write(code)
    print(f"生成完成，有效单词{total_cnt}，数组长度{MAX_ARR_LEN}")

if __name__ == "__main__":
    main()