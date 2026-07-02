#include "../../../include/__include.h"

int coordinate_of_item_xy[4][2] = {
    {COORDINATE_ITEM1_X, COORDINATE_ITEM1_Y},
    {COORDINATE_ITEM2_X, COORDINATE_ITEM2_Y},
    {COORDINATE_ITEM3_X, COORDINATE_ITEM3_Y},
    {COORDINATE_ITEM4_X, COORDINATE_ITEM4_Y},
};
char ABCD[] = {'A', 'B', 'C', 'D'};
Word *init_word_with_string_and_meaning_for_select_questions_with_constant_xy(String_and_meaning *string_and_meaning, int sequence)
{
    Word *word = (Word *)malloc(sizeof(Word));
    // if(!word) return NULL;
    // char *word_with_abcd = (char *)malloc(sizeof(char) * (strlen(string_and_meaning->string) + 3)); // 1 for letter, 1 for space, 1 for null terminator
    // sprintf(word_with_abcd, "%c.%s", ABCD[sequence % 4], string_and_meaning->string);
    // if (!word_with_abcd)
    // {
    //     free(word);
    //     return NULL;
    // }
    // word->word = word_with_abcd;
    word->word = string_and_meaning->string;

    word->rectangle.width_and_height.width = strlen(word->word) + MARGIN_WORD_BORDER_X; // 字符串长度 + 左右边框
    word->rectangle.width_and_height.height = MARGIN_WORD_BORDER_Y;                     // 上下边框 + 字
    word->rectangle.coordinate.x = OUTERMOST_BORDER_X + OUTERMOST_BORDER_WIDTH / 2 - word->rectangle.width_and_height.width / 2;
    word->rectangle.coordinate.y = coordinate_of_item_xy[sequence % 4][1];
    word->rectangle.pattern.corner = DEFAULT_BORDER_CORNER_DOT;
    word->rectangle.pattern.vertical = DEFAULT_BORDER_VERTICAL;
    word->rectangle.pattern.horizontal = DEFAULT_BORDER_HORIZONTAL;

    word->direction = rand() % 4; // here don't need to move
    return word;
}

// void print_items(int sequence)
// {
//     String_and_meaning *origin_string_and_meaning = get_random_string_and_meaning();
//     Word *origin_word = init_word_with_string_and_meaning_for_select_questions_with_constant_xy(origin_string_and_meaning, sequence);
//     // Word *meaning = init_word_with_string_and_meaning_for_screen_saver_with_random_xy(origin_string_and_meaning);
//     Word *origin_meaning = init_word_with_string_and_meaning_for_select_questions_with_constant_xy(origin_string_and_meaning, sequence);
//     // Judge_meaning_with_random_another_word(word1, meaning1, string_and_meaning);
//     print_word(origin_word);
// }

void print_4_items(Word *select_word_array[SELECTD_NUM])
{
    for (int i = 0; i < 4; i++)
    {
        print_word_item(select_word_array[i], i);
    }
}

void print_4_items_empty(Word *select_word_array[SELECTD_NUM])
{
    for (int i = 0; i < 4; i++)
    {
        print_word_item_empty_(select_word_array[i]);
    }
}

void shuffle_array_4_item(Word *select_word_array[SELECTD_NUM], int except_index)
{
    for (int i = 0; i < SELECTD_NUM; i++)
    {
        if (i == except_index)
        {
            continue;
        }
        int random_index;
    redo:
        random_index = rand() % SELECTD_NUM;
        if (random_index == except_index)
        {
            goto redo;
        }
        Word *temp = select_word_array[i];
        select_word_array[i] = select_word_array[random_index];
        select_word_array[random_index] = temp;
    }
}