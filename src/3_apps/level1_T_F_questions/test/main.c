
#include "../../../../include/__include.h"

int main(void)
{
    // Sleep(20000);
    // 必须只执行一次！
    srand((unsigned int)time(NULL));
    // process();
    String_and_meaning *string_and_meaning = get_random_string_and_meaning();
    Word *word = init_word_with_string_and_meaning_for_screen_saver_with_random_xy(string_and_meaning);
    Word *meaning = init_meaning_with_string_and_meaning_for_screen_saver_with_random_xy(string_and_meaning);
    
    while (1)
    {
        switch (choose_mode(word,meaning,string_and_meaning))
        {
            // 这里不会执行？注意这个特点！直接跳转到对应标签处去了！
            // arrow_menu_remove();
            // arrow_action();

        case 0:
        {
            mode_1_action(word,string_and_meaning);
            system("cls");
        }
        /* code */
        break;
        case 1:
        {
            mode_2_action();
            system("cls");
        }
        break;
        case 2:
        {
            mode_3_action();
            system("cls");
        }
        /* code */
        break;
        case 3:
        {
            mode_4_action();
            system("cls");
        }
        /* code */
        break;
        default:
            break;
        }
        if_enter = 0;
        // 循环读取缓冲区剩余所有字符，直到为空
        while (_kbhit())
        {
            _getch(); // 读取并丢弃缓冲区剩余字符
        }
    }

    return 0;
}
/*
 gcc `
C:\Users\29001\Desktop\code\fun-eg-v1\src\2_dynamic_flashs\gotoxy.c `
C:\Users\29001\Desktop\code\fun-eg-v1\src\1_basic_static_borders\outermost_rectangle.c `
C:\Users\29001\Desktop\code\fun-eg-v1\src\2_dynamic_flashs\word.c `
C:\Users\29001\Desktop\code\fun-eg-v1\src\1_basic_static_borders\print.c `
C:\Users\29001\Desktop\code\fun-eg-v1\src\2_dynamic_flashs\word_movement.c `
C:\Users\29001\Desktop\code\fun-eg-v1\src\4_vocabulary\strings.c `
C:\Users\29001\Desktop\code\fun-eg-v1\src\4_vocabulary\strings_array.c `
C:\Users\29001\Desktop\code\fun-eg-v1\src\3_apps\level0_just_screen_saver\change_words_in_a_configurable_frequence.c `
C:\Users\29001\Desktop\code\fun-eg-v1\src\3_apps\level0_just_screen_saver\screen_saver.c `
C:\Users\29001\Desktop\code\fun-eg-v1\src\3_apps\level0_just_screen_saver\change_string_and_meaning_if_it_is_hiting_the_wall.c `
C:\Users\29001\Desktop\code\fun-eg-v1\src\3_apps\level1_T_F_questions\static_word_and_meaning_just_to_judge.c `
C:\Users\29001\Desktop\code\fun-eg-v1\src\3_apps\level1_T_F_questions\press_key_to_change.c `
C:\Users\29001\Desktop\code\fun-eg-v1\src\3_apps\mode_choose.c `
C:\Users\29001\Desktop\code\fun-eg-v1\src\3_apps\mode_flash.c `
C:\Users\29001\Desktop\code\fun-eg-v1\src\3_apps\mode_actions.c `
C:\Users\29001\Desktop\code\fun-eg-v1\src\3_apps\level1_T_F_questions\hook_or_fork.c `
C:\Users\29001\Desktop\code\fun-eg-v1\src\3_apps\level1_T_F_questions\test\main.c `
-o  `
C:\Users\29001\Desktop\code\fun-eg-v1\src\3_apps\level1_T_F_questions\test\main.exe

 */