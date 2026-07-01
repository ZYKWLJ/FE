#include "../../include/__include.h"
// 在上方显示出对应mode的样式！
void print_game_mode_and_setting_area_and_score_list()
{
    print_word_green(init_setting_develop_tips(SETTING_DEVELOP_TIPS));
    print_word_green(init_game_mode_tips(GAME_MODE_TIPS));
    print_word_green(init_score_list_tips(SCORE_LIST_TIPS));
}
static void show_mode_1_flash(Word *word, String_and_meaning *string_and_meaning)
{

    /*this is the collect array storing the word hit the wall*/
    mode_word_array *hit_wall_word_array = init_mode_array();
    hide_cursor();
    system("cls");
    init_basic_layout();
    print_selected_mode_choose_mudule_to_red();
    init_print_all_mode_green_and_show_desc();
    print_game_mode_and_setting_area_and_score_list();
    while (1)
    {

        print_rectangle_miss_left_border(init_outermost_rectangle());
        /*this is black-white-tv action*/
        print_word(word);
        // Word *meaning = init_meaning_with_string_and_meaning_for_screen_saver_with_border_xy(string_and_meaning);
        // print_word(meaning);
        Sleep(1); // duration 1 s
        LOG("start print word empty.\n");
        print_word_empty(init_word_empty(word));
        if (is_word_hiting_the_wall(word))
        {
            // print in the score list
            add_to_mode_array(hit_wall_word_array, string_and_meaning);
            print_hit_wall_word_score_list_single(hit_wall_word_array);
            string_and_meaning = get_random_string_and_meaning();
            change_word_use_string_and_meaning(word, string_and_meaning);
        }

        next_step_of_the_word(word);

        if (_kbhit())
        {
            int key = _getch();
            if (key == 0xE0 || key == 0)
            { // 表示这个是扩展键
                key = _getch();
                if (key == 0x48) // 上箭头
                {
                    last_mode = cur_mode;
                    cur_mode = cur_mode == 0 ? 3 : cur_mode - 1;
                    break;
                }
                else if (key == 0x50) // 下箭头
                {
                    last_mode = cur_mode;
                    cur_mode = cur_mode == 3 ? 0 : cur_mode + 1;
                    break;
                }
                else
                {
                    error_print("only up and down arrow key to choose mode");
                }
                // only_print_my_mode_green_and_show_desc();
            }
            else if (key == 0x0D)
            {
                if_enter = 1;
                return;
            }
            else
            {
                error_print("only up and down arrow key to choose mode");
            }
        }
    }
}

// 这是模式2的动画，就是在模式一个情况下，显示全部的键盘，按中为绿色，否则为白色
static void show_mode_2_flash(Word *word, Word *meaning, String_and_meaning *string_and_meaning)
{
    init_print_all_mode_green_and_show_desc();
    int i = 1;
    init_basic_layout();
    print_selected_mode_choose_mudule_to_red();

    // Word *word1 = init_word_with_string_and_meaning_for_T_F_questions_with_constant_xy(string_and_meaning);
    // // Word *meaning = init_word_with_string_and_meaning_for_screen_saver_with_random_xy(string_and_meaning);
    // Word *meaning1 = init_meaning_with_string_and_meaning_for_T_F_questions_with_constant_xy(string_and_meaning);

    print_t();
    print_f();

    // print_word_green(init_under_develop_tips(UNDER_DEVELOP_TIPS));
    print_game_mode_and_setting_area_and_score_list();

    while (1)
    {
        only_print_my_mode_green_and_show_desc();
        // This feature is under development.
        Word *word1 = init_word_with_string_and_meaning_for_T_F_questions_with_constant_xy(string_and_meaning);
        // Word *meaning = init_word_with_string_and_meaning_for_screen_saver_with_random_xy(string_and_meaning);
        Word *meaning1 = init_meaning_with_string_and_meaning_for_T_F_questions_with_constant_xy(string_and_meaning);
        // Judge_meaning_with_random_another_word(word1, meaning1, string_and_meaning);
        print_word(word1);
        print_word(meaning1);

        /*this is T*/
        if ((i++) % 2)
        {
            /*this is hook or fork flash*/
            print_hook(COORDINATE_T_X, COORDINATE_T_Y);
            print_hook_empty(COORDINATE_F_X, COORDINATE_F_Y);
            print_f();
            printf("%s%s", GREEN, BOLD);
            print_t();
            print_column_t_f_vertical();
            print_row_t_horizontal();
            printf("%s", RESET);
        }
        /*this is F*/
        else
        {

            print_hook(COORDINATE_F_X, COORDINATE_F_Y);
            print_hook_empty(COORDINATE_T_X, COORDINATE_T_Y);
            print_t();
            printf("%s%s", GREEN, BOLD);
            print_f();
            print_column_t_f_vertical();
            print_row_f_horizontal();
            printf("%s", RESET);
        }
        Sleep(1000);
        if (_kbhit())
        {
            int key = _getch();
            if (key == 0xE0 || key == 0)
            { // 表示这个是扩展键
                key = _getch();
                if (key == 0x48) // 上箭头
                {
                    last_mode = cur_mode;
                    cur_mode = cur_mode == 0 ? 3 : cur_mode - 1;
                    break;
                }
                else if (key == 0x50) // 下箭头
                {
                    last_mode = cur_mode;
                    cur_mode = cur_mode == 3 ? 0 : cur_mode + 1;
                    break;
                }
                else
                {
                    error_print("only up and down arrow key to choose mode");
                }
                only_print_my_mode_green_and_show_desc();
            }
            else if (key == 0x0D)
            {
                if_enter = 1;
                return;
            }
            else
            {
                error_print("only up and down arrow key to choose mode");
            }
        }
    }
}

static void show_mode_3_flash()
{
    init_basic_layout();
    print_selected_mode_choose_mudule_to_red();
    init_print_all_mode_green_and_show_desc();
    // This feature is under development.
    print_game_mode_and_setting_area_and_score_list();
    print_word_green(init_under_develop_tips(UNDER_DEVELOP_TIPS));

    while (1)
    {
        only_print_my_mode_green_and_show_desc();

        if (_kbhit())
        {
            int key = _getch();
            if (key == 0xE0 || key == 0)
            { // 表示这个是扩展键
                key = _getch();
                if (key == 0x48) // 上箭头
                {
                    last_mode = cur_mode;
                    cur_mode = cur_mode == 0 ? 3 : cur_mode - 1;
                    break;
                }
                else if (key == 0x50) // 下箭头
                {
                    last_mode = cur_mode;
                    cur_mode = cur_mode == 3 ? 0 : cur_mode + 1;
                    break;
                }
                else
                {
                    error_print("only up and down arrow key to choose mode");
                }
                only_print_my_mode_green_and_show_desc();
            }
            else if (key == 0x0D)
            {
                if_enter = 1;
                return;
            }
            else
            {
                error_print("only up and down arrow key to choose mode");
            }
        }
    }
}

// 消消乐！
static void show_mode_4_flash()
{
    init_print_all_mode_green_and_show_desc();
    init_basic_layout();
    print_selected_mode_choose_mudule_to_red();
    // This feature is under development.

    print_game_mode_and_setting_area_and_score_list();
    print_word_green(init_under_develop_tips(UNDER_DEVELOP_TIPS));

    while (1)
    {
        only_print_my_mode_green_and_show_desc();

        if (_kbhit())
        {
            int key = _getch();
            if (key == 0xE0 || key == 0)
            { // 表示这个是扩展键
                key = _getch();
                if (key == 0x48) // 上箭头
                {
                    last_mode = cur_mode;
                    cur_mode = cur_mode == 0 ? 3 : cur_mode - 1;
                    break;
                }
                else if (key == 0x50) // 下箭头
                {
                    last_mode = cur_mode;
                    cur_mode = cur_mode == 3 ? 0 : cur_mode + 1;
                    break;
                }
                else
                {
                    error_print("only up and down arrow key to choose mode");
                }
                only_print_my_mode_green_and_show_desc();
            }
            else if (key == 0x0D)
            {
                if_enter = 1;
                return;
            }
            else
            {
                error_print("only up and down arrow key to choose mode");
            }
        }
    }
}

void show_mode_flash(int mode, Word *word, Word *meaning, String_and_meaning *string_and_meaning)
{

    switch (mode)
    {
    case 0:
        show_mode_1_flash(word, string_and_meaning);
        break;
        system("cls");
    case 1:
        show_mode_2_flash(word, meaning, string_and_meaning);
        system("cls");
        break;
    case 2:
        show_mode_3_flash();
        system("cls");
        break;
    case 3:
        show_mode_4_flash();
        system("cls");
        break;
    default:
        error_print("mode error");
        system("cls");
        break;
    }
}