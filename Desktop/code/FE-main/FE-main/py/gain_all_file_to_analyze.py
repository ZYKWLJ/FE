import os

# 配置
scan_roots = [
    r"C:\Users\29001\Desktop\code\fun-eg-v1\include",
    r"C:\Users\29001\Desktop\code\fun-eg-v1\src"
]
output_md = r"C:\Users\29001\Desktop\code\fun-eg-v1\py\all_file.md"
# 你指定要完整跳过的两个目录绝对路径
skip_full_paths = {
    r"C:\Users\29001\Desktop\code\fun-eg-v1\include\4_vocaulary",
    r"C:\Users\29001\Desktop\code\fun-eg-v1\src\4_vocabulary"
}

def export_code():
    out_dir = os.path.dirname(output_md)
    if not os.path.exists(out_dir):
        os.makedirs(out_dir)

    with open(output_md, "w", encoding="utf-8") as f_out:
        f_out.write("# 源码汇总（include + src，精准跳过指定两个4_vocabulary目录）\n\n")

        for root in scan_roots:
            f_out.write(f"## 扫描根目录：`{root}`\n\n")
            for dirpath, dirnames, filenames in os.walk(root):
                # 标准化路径，统一分隔符对比
                abs_dir = os.path.abspath(dirpath)
                # 当前目录是需要跳过的文件夹，直接跳过所有文件和子目录
                if abs_dir in skip_full_paths:
                    dirnames[:] = []  # 清空子目录，不再递归深入
                    continue

                # 遍历当前目录下所有文件
                for fname in filenames:
                    full_path = os.path.join(dirpath, fname)
                    f_out.write(f"- 完整文件路径：`{full_path}`\n")
                    f_out.write("```c\n")
                    try:
                        # 兼容utf8/gbk两种编码
                        try:
                            with open(full_path, "r", encoding="utf-8") as f:
                                content = f.read()
                        except UnicodeDecodeError:
                            with open(full_path, "r", encoding="gbk") as f:
                                content = f.read()
                        f_out.write(content)
                    except Exception as err:
                        f_out.write(f"读取失败：{str(err)}\n")
                    f_out.write("```\n\n")
        f_out.write("---\n扫描完成，已完全跳过：\n1. include\\4_vocaulary\n2. src\\4_vocabulary")

if __name__ == "__main__":
    export_code()
    print(f"导出完成，输出文件：{output_md}")