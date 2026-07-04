#include "../../../include/__include.h"
char judge_key_pressed(Word *word, Word *meaning, String_and_meaning *string_and_meaning)
{
    while (1)
    {

        if (_kbhit())
        {
            int key = _getch();
            // 过滤扩展键（方向键、F1-F12等0xE0/00开头扩展码）
            if (key == 0xE0 || key == 0)
            {
                // 吃掉第二个扩展码字符，避免缓冲区残留
                (void)_getch();
                error_print("only press T or F to select");
            }
            else if (key == 'T' || key == 't')
            {
                print_f();
                printf("%s%s", GREEN, BOLD);
                print_t();
                print_column_t_f_vertical();
                print_row_t_horizontal();
                printf("%s", RESET);
            }
            else if (key == 'F' || key == 'f')
            {
                print_t();
                printf("%s%s", GREEN, BOLD);
                print_f();
                print_column_t_f_vertical();
                print_row_f_horizontal();
                printf("%s", RESET);
            }
            else if (key == 27)
            {
                // cls();
                break;
                // system("cls");
                // choose_mode(word,string_and_meaning);
                // print_rectangle(init_biggest_rectangle());
                // // print_rectangle(init_setting_rectangle());
                // print_rectangle(init_under_middle_rectangle());
                // print_rectangle(init_outermost_rectangle());

                // print_word(word);
                // print_word(meaning);

                // print_t();
                // print_f();
            }
            else
            {
                // 其余所有字符报错
                error_print("only press T or F to select");
            }
        }
    }
}