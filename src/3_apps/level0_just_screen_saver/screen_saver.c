#include "../../../include/__include.h"
#include <stdio.h>

/*
+-------+
| hello |
+-------+

the width of the reacangle is 4 cells longer than the word, and the height of the rectangle is 3 cells longer than the word.
so we just use the MARGIN_WORD_BORDER_X and MARGIN_WORD_BORDER_Y to define the width and height of the rectangle.
*/

Word *init_word_with_string_and_meaning_for_screen_saver_with_random_xy(String_and_meaning *string_and_meaning)
{
    Word *word = (Word *)malloc(sizeof(Word));

    word->word = string_and_meaning->string;

    word->rectangle.width_and_height.width = strlen(word->word) + MARGIN_WORD_BORDER_X; // 字符串长度 + 左右边框
    word->rectangle.width_and_height.height = MARGIN_WORD_BORDER_Y;                     // 上下边框 + 字

    word->rectangle.coordinate.x = OUTERMOST_BORDER_X + rand() % (OUTERMOST_BORDER_WIDTH - strlen(word->word) - MARGIN_WORD_BORDER_X);
    word->rectangle.coordinate.y = OUTERMOST_BORDER_Y + rand() % (OUTERMOST_BORDER_HEIGHT - MARGIN_WORD_BORDER_Y);
    word->rectangle.pattern.corner = WORD_BORDER_CORNER;
    word->rectangle.pattern.vertical = WORD_BORDER_VERTICAL;
    word->rectangle.pattern.horizontal = WORD_BORDER_HORIZONTAL;

    word->direction = rand() % 4; // 随机选择一个方向
    return word;
}

Word *init_meaning_with_string_and_meaning_for_screen_saver_with_random_xy(String_and_meaning *string_and_meaning)
{
    Word *meaning = (Word *)malloc(sizeof(Word));

    meaning->word = string_and_meaning->meaning;
    // meaning->word = string_and_meaning->string;

    meaning->rectangle.width_and_height.width = strlen(meaning->word) + MARGIN_WORD_BORDER_X; // 字符串长度 + 左右边框
    meaning->rectangle.width_and_height.height = MARGIN_WORD_BORDER_Y;                        // 上下边框 + 字

    meaning->rectangle.coordinate.x = OUTERMOST_BORDER_X;
    meaning->rectangle.coordinate.y = OUTERMOST_BORDER_Y + OUTERMOST_BORDER_HEIGHT + MEANING_MIDDLE_MARGIN ;
    meaning->rectangle.pattern.corner = WORD_BORDER_CORNER;
    meaning->rectangle.pattern.vertical = WORD_BORDER_VERTICAL;
    meaning->rectangle.pattern.horizontal = WORD_BORDER_HORIZONTAL;

    return meaning;
}

void single_move_word_action_only_word(Word *word, String_and_meaning *string_and_meaning)
{
    // for (int i = 0; i < OUTERMOST_BORDER_WIDTH; i++)
    for (;;)
    {
        print_rectangle(init_outermost_rectangle());
        print_word(word);
        // Word *meaning = init_meaning_with_string_and_meaning_for_screen_saver_with_border_xy(string_and_meaning);
        // print_word(meaning);
        Sleep(200); // duration 1 s
        LOG("start print word empty.\n");
        print_word_empty(init_word_empty(word));
        if (is_word_hiting_the_wall(word))
            change_word_use_string_and_meaning(word, get_random_string_and_meaning());
        next_step_of_the_word(word);

    }
    // print_word_empty(init_word_empty(word));
}

Word *init_meaning_with_string_and_meaning_for_screen_saver_with_border_xy(String_and_meaning *string_and_meaning)
{

    return extract_meaning_from_string_and_meaning(string_and_meaning);
}

void single_move_word_action_with_meaning(Word *word, Word *meaning, String_and_meaning *string_and_meaning)
{
    int flag=0;
    // for (int i = 0; i < OUTERMOST_BORDER_WIDTH; i++)
    for (;;)
    {
        print_rectangle(init_outermost_rectangle());

        print_word(word);

        print_word(meaning);//This is a fix,We only need to print once if the meaning is same as before!
        
        Sleep(300); // duration 1 s
        LOG("start print word empty.\n");

        print_word_empty(init_word_empty(word));

        if (is_word_hiting_the_wall(word))
        {
            flag=1;
            //The Bug was found out if we print word and meaning together,the `?` will be printed.But why?
            print_word_empty(init_word_empty(meaning));
            change_word_and_meaning_use_string_and_meaning(word, meaning, get_random_string_and_meaning());
        }
        next_step_of_the_word(word);
    }
    // print_word_empty(init_word_empty(word));
}

void screen_saver_word_no_meaning()
{

    hide_cursor();
    system("cls");
    String_and_meaning *string_and_meaning = get_random_string_and_meaning();
    Word *word = init_word_with_string_and_meaning_for_screen_saver_with_random_xy(string_and_meaning);

    // Word *meaning = init_meaning_with_string_and_meaning_for_screen_saver_with_random_xy(string_and_meaning);
    // single_move_word_action_with_meaning(word, meaning, string_and_meaning);
    single_move_word_action_only_word(word, string_and_meaning);
}

void screen_saver_word_and_meaning()
{

    hide_cursor();
    system("cls");
    SetConsoleOutputCP(936);
    String_and_meaning *string_and_meaning = get_random_string_and_meaning();
    Word *word = init_word_with_string_and_meaning_for_screen_saver_with_random_xy(string_and_meaning);
    // Word *meaning = init_word_with_string_and_meaning_for_screen_saver_with_random_xy(string_and_meaning);
    Word *meaning = init_meaning_with_string_and_meaning_for_screen_saver_with_random_xy(string_and_meaning);
    single_move_word_action_with_meaning(word, meaning, string_and_meaning);
    // single_move_word_action_only_word(word, string_and_meaning);
}
