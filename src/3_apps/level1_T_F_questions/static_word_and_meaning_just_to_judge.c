#include "../../../include/__include.h"
#include <stdio.h>
static void get_word_coordinate_of_static_word_and_meaning_just_to_judge(Word *word)
{
    word->rectangle.coordinate.x = OUTERMOST_BORDER_X + OUTERMOST_BORDER_WIDTH / 2 - word->rectangle.width_and_height.width / 2;
    word->rectangle.coordinate.y = OUTERMOST_BORDER_Y + OUTERMOST_BORDER_HEIGHT / 2;
}

Word *init_word_with_string_and_meaning_for_T_F_questions_with_constant_xy(String_and_meaning *string_and_meaning)
{
    Word *word = (Word *)malloc(sizeof(Word));

    word->word = string_and_meaning->string;

    word->rectangle.width_and_height.width = strlen(word->word) + MARGIN_WORD_BORDER_X; // 字符串长度 + 左右边框
    word->rectangle.width_and_height.height = MARGIN_WORD_BORDER_Y;                     // 上下边框 + 字
    get_word_coordinate_of_static_word_and_meaning_just_to_judge(word);
    word->rectangle.pattern.corner = WORD_BORDER_CORNER;
    word->rectangle.pattern.vertical = WORD_BORDER_VERTICAL;
    word->rectangle.pattern.horizontal = WORD_BORDER_HORIZONTAL;

    word->direction = rand() % 4; // here don't need to move
    return word;
}

static void get_meaning_coordinate_of_static_word_and_meaning_just_to_judge(Word *word)
{
    word->rectangle.coordinate.x = OUTERMOST_BORDER_X + OUTERMOST_BORDER_WIDTH / 2 - word->rectangle.width_and_height.width / 2;
    word->rectangle.coordinate.y = OUTERMOST_BORDER_Y + OUTERMOST_BORDER_HEIGHT + MEANING_MIDDLE_MARGIN;
}

Word *init_meaning_with_string_and_meaning_for_T_F_questions_with_constant_xy(String_and_meaning *string_and_meaning)
{
    Word *meaning = (Word *)malloc(sizeof(Word));

    // meaning->word = string_and_meaning->meaning;
    meaning->word = string_and_meaning->string;
    meaning->rectangle.width_and_height.width = strlen(meaning->word) + MARGIN_WORD_BORDER_X; // 字符串长度 + 左右边框
    meaning->rectangle.width_and_height.height = MARGIN_WORD_BORDER_Y;                        // 上下边框 + 字

    get_meaning_coordinate_of_static_word_and_meaning_just_to_judge(meaning);

    meaning->rectangle.pattern.corner = WORD_BORDER_CORNER;
    meaning->rectangle.pattern.vertical = WORD_BORDER_VERTICAL;
    meaning->rectangle.pattern.horizontal = WORD_BORDER_HORIZONTAL;

    return meaning;
}

// #define COORDINATE_T_X OUTERMOST_BORDER_X + OUTERMOST_BORDER_WIDTH / 4 - word->rectangle.width_and_height.width / 2
// #define COORDINATE_T_Y OUTERMOST_BORDER_Y + OUTERMOST_BORDER_HEIGHT + T_F_MEANING_MARGIN + MEANING_MIDDLE_MARGIN + MARGIN_WORD_BORDER_Y
// #define COORDINATE_F_X OUTERMOST_BORDER_X + OUTERMOST_BORDER_WIDTH / 4 - word->rectangle.width_and_height.width / 2 + OUTERMOST_BORDER_WIDTH / 2
// #define COORDINATE_F_Y COORDINATE_T_Y
void print_T_or_F(char *t_or_f)
{
    Word *word = (Word *)malloc(sizeof(Word));
    word->word = (String)malloc(sizeof(char) * 2);
    strcpy(word->word, t_or_f);
    word->word[1] = '\0';
    word->rectangle.width_and_height.width = strlen(word->word) + MARGIN_WORD_BORDER_X; // 字符串长度 + 左右边框
    word->rectangle.width_and_height.height = MARGIN_WORD_BORDER_Y;                     // 上下边框 + 字

    word->rectangle.coordinate.x = (*t_or_f == 'T' ? COORDINATE_T_X : COORDINATE_F_X);
    word->rectangle.coordinate.y = (*t_or_f == 'T' ? COORDINATE_T_Y : COORDINATE_F_Y);

    word->rectangle.pattern.corner = T_F_BORDER_CORNER;
    word->rectangle.pattern.vertical = T_F_BORDER_VERTICAL;
    word->rectangle.pattern.horizontal = T_F_BORDER_HORIZONTAL;
    print_word(word);
    free(word->word);
    free(word);
}

// meaning->rectangle.coordinate.y = OUTERMOST_BORDER_Y + OUTERMOST_BORDER_HEIGHT + MEANING_MIDDLE_MARGIN;

void print_t()
{
    char t = 'T';
    print_T_or_F(&t);
}

void print_f()
{
    char f = 'F';
    print_T_or_F(&f);
}
void print_f_white()
{
    char f = 'F';
    print_T_or_F(&f);
}
void print_column_t_f_vertical()
{
    int x = OUTERMOST_BORDER_X + OUTERMOST_BORDER_WIDTH / 2;
    int y1 = OUTERMOST_BORDER_Y + OUTERMOST_BORDER_HEIGHT + MEANING_MIDDLE_MARGIN + MARGIN_WORD_BORDER_Y;
    int y2 = OUTERMOST_BORDER_Y + OUTERMOST_BORDER_HEIGHT + MEANING_MIDDLE_MARGIN * 2 + MARGIN_WORD_BORDER_Y + MARGIN_WORD_BORDER_Y / 2;
    for (int i = y1; i <= y2; i++)
    {
        gotoxy(x, i);
        printf("%c", T_F_BORDER_DOT);
    }
}

void print_row_f_empty_horizontal()
{
    int y = OUTERMOST_BORDER_Y + OUTERMOST_BORDER_HEIGHT + MEANING_MIDDLE_MARGIN * 2 + MARGIN_WORD_BORDER_Y + MARGIN_WORD_BORDER_Y / 2;
    int x1_middle_outermost = OUTERMOST_BORDER_X + OUTERMOST_BORDER_WIDTH / 2;
    int x_f = OUTERMOST_BORDER_X + OUTERMOST_BORDER_WIDTH / 4 - (1 + MARGIN_WORD_BORDER_X) / 2 + (OUTERMOST_BORDER_WIDTH / 2);

    for (int i = x1_middle_outermost + 1; i < x_f - 1; i++)
    {
        gotoxy(i, y);
        printf("%c", T_F_BORDER_DOT_EMPTY);
    }
    printf("%c", T_F_BORDER_DOT_EMPTY);
}

void print_row_t_empty_horizontal()
{
    int y = OUTERMOST_BORDER_Y + OUTERMOST_BORDER_HEIGHT + MEANING_MIDDLE_MARGIN * 2 + MARGIN_WORD_BORDER_Y + MARGIN_WORD_BORDER_Y / 2;
    int x1_middle_outermost = OUTERMOST_BORDER_X + OUTERMOST_BORDER_WIDTH / 2;
    int x_t = OUTERMOST_BORDER_X + OUTERMOST_BORDER_WIDTH / 4 - (1 + MARGIN_WORD_BORDER_X) / 2;
    int x2_left_row = x_t + 1 + MARGIN_WORD_BORDER_X;

    gotoxy(x2_left_row, y);
    printf("%c", T_F_BORDER_DOT_EMPTY);
    for (int i = x2_left_row + 1; i < x1_middle_outermost; i++)
    {
        gotoxy(i, y);
        printf("%c", T_F_BORDER_DOT_EMPTY);
    }
}

void print_row_t_horizontal()
{
    print_row_f_empty_horizontal(); // eliminate the right branch
    int y = OUTERMOST_BORDER_Y + OUTERMOST_BORDER_HEIGHT + MEANING_MIDDLE_MARGIN * 2 + MARGIN_WORD_BORDER_Y + MARGIN_WORD_BORDER_Y / 2;
    int x1_middle_outermost = OUTERMOST_BORDER_X + OUTERMOST_BORDER_WIDTH / 2;
    int x_t = OUTERMOST_BORDER_X + OUTERMOST_BORDER_WIDTH / 4 - (1 + MARGIN_WORD_BORDER_X) / 2;
    int x2_left_row = x_t + 1 + MARGIN_WORD_BORDER_X;

    gotoxy(x2_left_row, y);
    printf("<");
    for (int i = x2_left_row + 1; i < x1_middle_outermost; i++)
    {
        gotoxy(i, y);
        printf("%c", T_F_BORDER_DOT);
    }
}

void print_row_f_horizontal()
{
    print_row_t_empty_horizontal(); // eliminate the left branch
    int y = OUTERMOST_BORDER_Y + OUTERMOST_BORDER_HEIGHT + MEANING_MIDDLE_MARGIN * 2 + MARGIN_WORD_BORDER_Y + MARGIN_WORD_BORDER_Y / 2;
    int x1_middle_outermost = OUTERMOST_BORDER_X + OUTERMOST_BORDER_WIDTH / 2;
    int x_f = OUTERMOST_BORDER_X + OUTERMOST_BORDER_WIDTH / 4 - (1 + MARGIN_WORD_BORDER_X) / 2 + (OUTERMOST_BORDER_WIDTH / 2);

    for (int i = x1_middle_outermost + 1; i < x_f - 1; i++)
    {
        gotoxy(i, y);
        printf("%c", T_F_BORDER_DOT);
    }
    printf(">");
}

void Judge_meaning_with_random_another_word(Word *word, Word *meaning, String_and_meaning *string_and_meaning)
{

    print_rectangle(init_biggest_rectangle());
    // print_rectangle(init_setting_rectangle());
    print_rectangle(init_under_middle_rectangle());
    print_rectangle(init_outermost_rectangle());

    print_word(word);
    print_word(meaning);

    print_t();
    print_f();
    // error_print("Plesae press T or F to select");;
    judge_key_pressed(word, meaning, string_and_meaning);
}

void T_F_questions()
{

    hide_cursor();
    system("cls");
    SetConsoleOutputCP(936);
    String_and_meaning *string_and_meaning = get_random_string_and_meaning();
    Word *word = init_word_with_string_and_meaning_for_T_F_questions_with_constant_xy(string_and_meaning);
    // Word *meaning = init_word_with_string_and_meaning_for_screen_saver_with_random_xy(string_and_meaning);
    Word *meaning = init_meaning_with_string_and_meaning_for_T_F_questions_with_constant_xy(string_and_meaning);
    Judge_meaning_with_random_another_word(word, meaning, string_and_meaning);
    // single_move_word_action_only_word(word, string_and_meaning);
}