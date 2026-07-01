#include "../../../include/__include.h"

mode_word_array *init_mode_array()
{
    mode_word_array *array = (mode_word_array *)malloc(sizeof(mode_word_array));
    array->mode_array_top = 0;
    array->mode_array_max_size = MAX_MODE_ARRAY_SIZE;
    for (int i = 0; i < MAX_MODE_ARRAY_SIZE; i++)
    {
        array->mode_array[i] = NULL;
    }
    return array;
}

void add_to_mode_array(mode_word_array *array, String_and_meaning *string_and_meaning)
{
    if (array->mode_array_top < array->mode_array_max_size)
    {
        array->mode_array[array->mode_array_top++] = string_and_meaning;
    }
    else
    {
        error_print("Mode array is full. Cannot add more elements.");
    }
}

void print_right_word_score_list_all(mode_word_array *array)
{
    for (int i = 0; i < array->mode_array_top; i++)
    {
        gotoxy(COORDINATE_SCORE_LIST_RIGHT_X, COORDINATE_SCORE_LIST_RIGHT_Y + i);
        printf("%s", array->mode_array[i]->string);
    }
}

void print_empty_right_word_score_list_all(mode_word_array *array)
{
    for (int i = 0; i < array->mode_array_top; i++)
    {
        gotoxy(COORDINATE_SCORE_LIST_RIGHT_X, COORDINATE_SCORE_LIST_RIGHT_Y + i);
        char blank_empty[SCORELIST_WIDTH / 2 + 1];
        memset(blank_empty, ' ', SCORELIST_WIDTH / 2 + 1);
        printf("%s", blank_empty);
    }
}

void print_wrong_word_score_list_all(mode_word_array *array)
{
    for (int i = 0; i < array->mode_array_top; i++)
    {
        gotoxy(COORDINATE_SCORE_LIST_WRONG_X, COORDINATE_SCORE_LIST_WRONG_Y + i);
        printf("%s", array->mode_array[i]->string);
    }
}

void print_empty_wrong_word_score_list_all(mode_word_array *array)
{
    for (int i = 0; i < array->mode_array_top; i++)
    {
        gotoxy(COORDINATE_SCORE_LIST_WRONG_X, COORDINATE_SCORE_LIST_WRONG_Y + i);
        char blank_empty[SCORELIST_WIDTH / 2 + 1];
        memset(blank_empty, ' ', SCORELIST_WIDTH / 2 + 1);
        printf("%s", blank_empty);
    }
}

void print_right_and_wrong_word_list_all(mode_word_array *array)
{
    print_right_word_score_list_all(array);
    print_wrong_word_score_list_all(array);
}
void print_right_word_score_list_single(mode_word_array *array)
{
    if (array->mode_array_top <= 0)
    {
        return;
    }

    int mudulo_size = 2 * SETTING_BOTTOM_MARGIN;
    int index_y = (array->mode_array_top - 1) % (mudulo_size);
    if (index_y < SETTING_BOTTOM_MARGIN)
    {
        gotoxy(COORDINATE_SCORE_LIST_RIGHT_X, COORDINATE_SCORE_LIST_RIGHT_Y + index_y);
    }
    else
    {
        gotoxy(COORDINATE_SCORE_LIST_WRONG_X, COORDINATE_SCORE_LIST_WRONG_Y + index_y - SETTING_BOTTOM_MARGIN);
    }
    printf("%s", array->mode_array[array->mode_array_top - 1]->string);
    if (index_y == mudulo_size - 1)
    {
        Sleep(100);
        print_empty_right_and_wrong_word_list_all(array);
    }
}

void print_wrong_word_score_list_single(mode_word_array *array)
{
    if (array->mode_array_top <= 0)
    {
        return;
    }
    gotoxy(COORDINATE_SCORE_LIST_WRONG_X, COORDINATE_SCORE_LIST_WRONG_Y + array->mode_array_top - 1);
    printf("%s", array->mode_array[array->mode_array_top - 1]->string);
}

void print_hit_wall_word_score_list_single(mode_word_array *array)
{
    print_right_word_score_list_single(array);
}
void print_empty_right_and_wrong_word_list_all()
{
    for (int i = 0; i < SETTING_BOTTOM_MARGIN; i++)
    {
        gotoxy(COORDINATE_SCORE_LIST_RIGHT_X, COORDINATE_SCORE_LIST_RIGHT_Y + i);
        char blank_empty[SCORELIST_WIDTH];
        memset(blank_empty, ' ', SCORELIST_WIDTH);
        printf("%s", blank_empty);
    }
}

/*

*/