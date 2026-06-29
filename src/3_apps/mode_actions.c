#include "../../include/__include.h"

void mode_1_action(Word *word, String_and_meaning *string_and_meaning)
{
    system("cls");
    init_basic_layout();
    init_print_all_mode_green_and_show_desc();
    while (1)
    {
        only_print_my_mode_green_and_show_desc();
        print_outermost_rectangle_to_red();
        /*this is black-white-tv action*/
        print_word(word);
        // Word *meaning = init_meaning_with_string_and_meaning_for_screen_saver_with_border_xy(string_and_meaning);
        // print_word(meaning);
        Sleep(200); // duration 1 s
        LOG("start print word empty.\n");
        print_word_empty(init_word_empty(word));
        if (is_word_hiting_the_wall(word))
            change_word_use_string_and_meaning(word, get_random_string_and_meaning());
        next_step_of_the_word(word);

        if (_kbhit())
        {
            int key = _getch();
            // 扩展键（方向键、功能键等）全部无效
            if (key == 0xE0 || key == 0)
            {
                (void)_getch(); // 吃掉扩展键第二个字节，清空缓冲区
                error_print("only press ESC key");
            }
            else if (key == 27) // ESC 键 ASCII=27
            {
                // 检测到ESC，这里添加你需要的处理逻辑
                // 示例：break跳出循环 / return 退出函数
                break;
            }
            else if (key == 0x0D) // 回车也不允许
            {
                error_print("only press ESC key to select mode");
            }
            else
            {
                error_print("only press ESC key to select mode");
            }
        }
    }
}
// void mode_2_action()
// {

//     system("cls");
//     init_basic_layout();
//     init_print_all_mode_green_and_show_desc();

//     /*

//         /
//     \  /
//      \/

//     \  /
//      \/
//      /\
//     /  \


//        /
//      \/

//     (x_t+1)
//      \/
//      /\
//     .___.

//     */
//     while (1)
//     {
//         // This feature is under development.
//         print_word(init_under_develop_tips(UNDER_DEVELOP_TIPS));
//         if (_kbhit())
//         {
//             int key = _getch();
//             // 扩展键（方向键、功能键等）全部无效
//             if (key == 0xE0 || key == 0)
//             {
//                 (void)_getch(); // 吃掉扩展键第二个字节，清空缓冲区
//                 error_print("only press ESC key");
//             }
//             else if (key == 27) // ESC 键 ASCII=27
//             {
//                 // 检测到ESC，这里添加你需要的处理逻辑
//                 // 示例：break跳出循环 / return 退出函数
//                 break;
//             }
//             else if (key == 0x0D) // 回车也不允许
//             {
//                 error_print("only press ESC key to select mode");
//             }
//             else
//             {
//                 error_print("only press ESC key to select mode");
//             }
//         }
//     }
// }

#define T_F_PERCENT 2 // 50%

bool equal(Word *wait_for_judge, Word *origin_meaning)
{
    return (strcmp(wait_for_judge->word, origin_meaning->word) == 0);
}

void print_ready_choose_t()
{
    // // white means Not be choosed
    // print_f();
    // green means be choosed
    print_column_t_f_vertical();
    print_row_t_horizontal();
}
void print_ready_choose_f()
{
    // // white means Not be choosed
    // print_f();
    // green means be choosed
    print_column_t_f_vertical();
    print_row_f_horizontal();
}

void print_ready_choose_t_or_f(char t_or_f)
{
    if (t_or_f == 'T')
    {
        print_ready_choose_t();
    }
    else if (t_or_f == 'F')
    {
        print_ready_choose_f();
    }
}
void print_choose_t_right_green()
{
    // // white means Not be choosed
    // print_f();
    // green means be choosed
    printf("%s%s", GREEN, BOLD);
    print_t();
    print_column_t_f_vertical();
    print_row_t_horizontal();
    printf("%s", RESET);
}

void print_choose_t_wrong_red()
{
    // // white means Not be choosed
    // print_f();
    // green means be choosed
    printf("%s%s", RED, BOLD);
    print_t();
    print_column_t_f_vertical();
    print_row_t_horizontal();
    printf("%s", RESET);
}

void print_choose_f_right_green()
{
    // // white means Not be choosed
    // print_f();
    // green means be choosed
    printf("%s%s", GREEN, BOLD);
    print_f();
    print_column_t_f_vertical();
    print_row_f_horizontal();
    printf("%s", RESET);
}

void print_choose_f_wrong_red()
{
    // // white means Not be choosed
    // print_f();
    // green means be choosed
    printf("%s%s", RED, BOLD);
    print_f();
    print_column_t_f_vertical();
    print_row_f_horizontal();
    printf("%s", RESET);
}

void print_hook_on_t_and_eliminate_f()
{
    print_hook(COORDINATE_T_X, COORDINATE_T_Y);
    print_hook_empty(COORDINATE_F_X, COORDINATE_F_Y);
}

void print_hook_on_f_and_eliminate_t()
{
    print_hook(COORDINATE_F_X, COORDINATE_F_Y);
    print_hook_empty(COORDINATE_T_X, COORDINATE_T_Y);
}

void print_hook_eliminate_t_and_f()
{
    print_hook_empty(COORDINATE_T_X, COORDINATE_T_Y);
    print_hook_empty(COORDINATE_F_X, COORDINATE_F_Y);
}
void show_the_right_answer_with_hook(bool T_OR_F_JUDGMENT)
{
    if (T_OR_F_JUDGMENT)
    {
        print_hook_on_t_and_eliminate_f();
    }
    else
    {
        print_hook_on_f_and_eliminate_t();
    }
}

void empty_the_right_answer_with_hook()
{
    print_hook_eliminate_t_and_f();
}
void T_F_question()
{
    while (1)
    {
        String_and_meaning *origin_string_and_meaning = get_random_string_and_meaning();
        // This feature is under development.
        Word *origin_word = init_word_with_string_and_meaning_for_T_F_questions_with_constant_xy(origin_string_and_meaning);
        // Word *meaning = init_word_with_string_and_meaning_for_screen_saver_with_random_xy(origin_string_and_meaning);
        Word *origin_meaning = init_meaning_with_string_and_meaning_for_T_F_questions_with_constant_xy(origin_string_and_meaning);
        // Judge_meaning_with_random_another_word(word1, meaning1, string_and_meaning);
        print_word(origin_word);
        // print_word(meaning1);
        Word *T_F_word_array[T_F_PERCENT];
        T_F_word_array[0] = origin_word;
        for (int i = 1; i < T_F_PERCENT; i++)
        {
            T_F_word_array[i] = init_meaning_with_string_and_meaning_for_T_F_questions_with_constant_xy(get_random_string_and_meaning());
        }

        Word *wait_for_judge = T_F_word_array[rand() % T_F_PERCENT];
        print_word(wait_for_judge);

        bool T_OR_F_JUDGMENT = equal(wait_for_judge, origin_meaning);
        // default key is 'T';
        char t_or_f_key = 'T';
        print_t();
        print_f();
        print_ready_choose_t_or_f(t_or_f_key);

        int key;
        while (1)
        {
            if (!_kbhit())
            {
                Sleep(10);
                continue;
            }
            key = _getch();

            // 处理扩展键：主键盘方向键0xE0 / 小键盘方向键0
            if (key == 0xE0 || key == 0)
            {
                int extCode = _getch(); // 读取第二字节扫描码
                if (extCode == 0x48 || extCode == 0x50 || extCode == 0x4B || extCode == 0x4D)
                {
                    // 上下左右箭头切换选项
                    t_or_f_key = (t_or_f_key == 'T') ? 'F' : 'T';
                    print_t();
                    print_f();
                    print_ready_choose_t_or_f(t_or_f_key);
                }
                // 其他扩展键不报错，直接跳过
                continue;
            }
            else if (key == 27) // ESC 键 ASCII=27
            {
                // 检测到ESC，这里添加你需要的处理逻辑
                // 示例：break跳出循环 / return 退出函数
                break;
            }
            else if (key == 'T' || key == 't')
            {
                // white means Not be choosed
                print_f();
                if (T_OR_F_JUDGMENT)
                {
                    // green means be choosed right
                    print_choose_t_right_green();
                }
                else
                {
                    // red means be choosed wrong
                    print_choose_t_wrong_red();
                }
                break;
            }
            else if (key == 'F' || key == 'f')
            {
                // white means Not be choosed
                print_t();
                if (!T_OR_F_JUDGMENT)
                {
                    // green means be choosed right
                    print_choose_f_right_green();
                }
                else
                { // red means be choosed wrong
                    print_choose_f_wrong_red();
                }
                break;
            }
            // T default key
            else if (key == 0x0D) // enter key
            {

                // error_print("only press ESC key to select mode");
                if (T_OR_F_JUDGMENT && t_or_f_key == 'T')
                {
                    // green means be choosed right
                    print_choose_t_right_green();
                }
                else if (!T_OR_F_JUDGMENT && t_or_f_key == 'F')
                {
                    // green means be choosed right
                    print_choose_f_right_green();
                }
                else if (t_or_f_key == 'T')
                {
                    // red means be choosed wrong
                    print_choose_t_wrong_red();
                }
                else if (t_or_f_key == 'F')
                {
                    // red means be choosed wrong
                    print_choose_f_wrong_red();
                }
                break;

            } // just two keys,let's do it simply.We do it above.
            // else if (key == 0x4B /*left arrow*/ || key == 0x48 /*up arrow*/ || key == 0x4D /*right arrow*/ || key == 0x50 /*down arrow*/) // 左箭头 扩展键码
            // {
            //     t_or_f_key = t_or_f_key == 'T' ? 'F' : 'T';
            //     // break;
            // }
            else
            {
                error_print("More info will be added.");
            }
            print_ready_choose_t_or_f(t_or_f_key);
        }
        show_the_right_answer_with_hook(T_OR_F_JUDGMENT);

        green_print("Press enter to next word.");
        // 第一步：清空缓冲区所有残留按键
        while (_kbhit())
        {
            key = _getch();
            // 如果是扩展键前缀，多读一次把第二字节也吃掉
            if (key == 0xE0 || key == 0)
            {
                (void)_getch();
            }
        }
        while (1)
        {

            int key;
            if (!_kbhit())
            {
                Sleep(10);
                continue;
            }
            key = _getch();

            // 扩展键（功能键等）全部无效
            if (key == 0)
            {
                (void)_getch(); // 吃掉扩展键第二个字节，清空缓冲区
                // error_print("More info will be added.");
            }
            else if (key == 0x0D)
            {
                empty_error_or_green_print("Press enter to next word.");
                empty_the_right_answer_with_hook();
                break;
            }
        }
    }
}
void mode_2_action()
{

    system("cls");
    init_basic_layout();
    init_print_all_mode_green_and_show_desc();

    /*

        /
    \  /
     \/


    \  /
     \/
     /\
    /  \



       /
     \/

    (x_t+1)
     \/
     /\
    .___.

    */
    // while (1)
    // {
    //     // This feature is under development.
    //     print_word(init_under_develop_tips(UNDER_DEVELOP_TIPS));
    //     if (_kbhit())
    //     {
    //         int key = _getch();
    //         // 扩展键（方向键、功能键等）全部无效
    //         if (key == 0xE0 || key == 0)
    //         {
    //             (void)_getch(); // 吃掉扩展键第二个字节，清空缓冲区
    //             error_print("only press ESC key");
    //         }
    //         else if (key == 27) // ESC 键 ASCII=27
    //         {
    //             // 检测到ESC，这里添加你需要的处理逻辑
    //             // 示例：break跳出循环 / return 退出函数
    //             break;
    //         }
    //         else if (key == 0x0D) // 回车也不允许
    //         {
    //             error_print("only press ESC key to select mode");
    //         }
    //         else
    //         {
    //             error_print("only press ESC key to select mode");
    //         }
    //     }
    // }
    T_F_question();
}
void mode_3_action()
{
    // This feature is under development.
    system("cls");
    init_basic_layout();
    init_print_all_mode_green_and_show_desc();
    while (1)
    {
        // This feature is under development.
        print_word(init_under_develop_tips(UNDER_DEVELOP_TIPS));
        if (_kbhit())
        {
            int key = _getch();
            // 扩展键（方向键、功能键等）全部无效
            if (key == 0xE0 || key == 0)
            {
                (void)_getch(); // 吃掉扩展键第二个字节，清空缓冲区
                error_print("only press ESC key");
            }
            else if (key == 27) // ESC 键 ASCII=27
            {
                // 检测到ESC，这里添加你需要的处理逻辑
                // 示例：break跳出循环 / return 退出函数
                break;
            }
            else if (key == 0x0D) // 回车也不允许
            {
                error_print("only press ESC key to select mode");
            }
            else
            {
                error_print("only press ESC key to select mode");
            }
        }
    }
}

void mode_4_action()
{
    // This feature is under development.
    system("cls");
    init_basic_layout();
    init_print_all_mode_green_and_show_desc();
    while (1)
    {
        // This feature is under development.
        print_word(init_under_develop_tips(UNDER_DEVELOP_TIPS));
        if (_kbhit())
        {
            int key = _getch();
            // 扩展键（方向键、功能键等）全部无效
            if (key == 0xE0 || key == 0)
            {
                (void)_getch(); // 吃掉扩展键第二个字节，清空缓冲区
                error_print("only press ESC key");
            }
            else if (key == 27) // ESC 键 ASCII=27
            {
                // 检测到ESC，这里添加你需要的处理逻辑
                // 示例：break跳出循环 / return 退出函数
                break;
            }
            else if (key == 0x0D) // 回车也不允许
            {
                error_print("only press ESC key to select mode");
            }
            else
            {
                error_print("only press ESC key to select mode");
            }
        }
    }
}