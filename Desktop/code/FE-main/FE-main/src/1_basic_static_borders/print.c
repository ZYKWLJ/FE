#include "../../include/__include.h"

#include <stdio.h>
void print_rectangle(_Rectangle *rectangle)
{
    gotoxy(rectangle->coordinate.x, rectangle->coordinate.y);
    printf("%c", rectangle->pattern.corner);

    for (int i = 0; i < rectangle->width_and_height.width - 2; i++)
    {
        printf("%c", rectangle->pattern.horizontal);
    }

    printf("%c", rectangle->pattern.corner);

    for (int i = 0; i < rectangle->width_and_height.height - 2; i++)
    {
        gotoxy(rectangle->coordinate.x, rectangle->coordinate.y + i + 1);
        printf("%c", rectangle->pattern.vertical);
        gotoxy(rectangle->coordinate.x + rectangle->width_and_height.width - 1, rectangle->coordinate.y + i + 1);
        printf("%c", rectangle->pattern.vertical);
    }

    gotoxy(rectangle->coordinate.x, rectangle->coordinate.y + rectangle->width_and_height.height - 1);
    printf("%c", rectangle->pattern.corner);
    for (int i = 0; i < rectangle->width_and_height.width - 2; i++)
    {
        printf("%c", rectangle->pattern.horizontal);
    }
    printf("%c", rectangle->pattern.corner);
};

#define MISS_LEFT_BORDER DEFAULT_BORDER_VERTICAL
void print_rectangle_miss_left_border(_Rectangle *rectangle)
{
    gotoxy(rectangle->coordinate.x, rectangle->coordinate.y);
    printf("%c", rectangle->pattern.corner);

    for (int i = 0; i < rectangle->width_and_height.width - 2; i++)
    {
        printf("%c", rectangle->pattern.horizontal);
    }

    printf("%c", rectangle->pattern.corner);

    for (int i = 0; i < rectangle->width_and_height.height - 2; i++)
    {
        gotoxy(rectangle->coordinate.x, rectangle->coordinate.y + i + 1);
        printf("%s%c%s", RED, MISS_LEFT_BORDER, RESET);
        gotoxy(rectangle->coordinate.x + rectangle->width_and_height.width - 1, rectangle->coordinate.y + i + 1);
        printf("%c", rectangle->pattern.vertical);
    }

    gotoxy(rectangle->coordinate.x, rectangle->coordinate.y + rectangle->width_and_height.height - 1);
    printf("%c", rectangle->pattern.corner);
    for (int i = 0; i < rectangle->width_and_height.width - 2; i++)
    {
        printf("%c", rectangle->pattern.horizontal);
    }
    printf("%c", rectangle->pattern.corner);
};

void print_word(Word *word)
{
    print_rectangle(&word->rectangle);
    gotoxy(word->rectangle.coordinate.x + 2, word->rectangle.coordinate.y + 1);
    printf("%s", word->word);
    print_rectangle(&word->rectangle);
}

void print_word_3_columns_empty(Word *word)
{
    char str_empty[word->rectangle.width_and_height.width + 1];
    memset(str_empty, ' ', strlen(str_empty));
    str_empty[strlen(str_empty) - 1] = '\0';
    gotoxy(word->rectangle.coordinate.x, word->rectangle.coordinate.y);
    printf("%s", str_empty);
    gotoxy(word->rectangle.coordinate.x, word->rectangle.coordinate.y + 1);
    printf("%s", str_empty);
    gotoxy(word->rectangle.coordinate.x, word->rectangle.coordinate.y + 2);
    printf("%s", str_empty);
}

void print_word_item(Word *word, int sequence)
{
    print_rectangle(&word->rectangle);
    gotoxy(word->rectangle.coordinate.x - 2, word->rectangle.coordinate.y + 1);
    printf("%c.", 'A' + sequence);
    gotoxy(word->rectangle.coordinate.x + 2, word->rectangle.coordinate.y + 1);
    printf("%s", word->word);
    print_rectangle(&word->rectangle);
}

/// @brief
/// @param word
/// @param sequence
void print_word_item_green(Word *word, int sequence)
{
    printf("%s%s", BOLD, GREEN);
    print_word_item(word, sequence);
    printf("%s", RESET);
}

void print_word_item_red(Word *word, int sequence)
{
    printf("%s%s", BOLD, RED);
    print_word_item(word, sequence);
    printf("%s", RESET);
}

void print_word_item_empty_(Word *word)
{
    gotoxy(word->rectangle.coordinate.x - 2, word->rectangle.coordinate.y + 1);

    printf("  ");
    print_word_empty(init_word_empty(word));
}

void print_word_green(Word *word)
{
    printf("%s%s", GREEN, BOLD);
    print_rectangle(&word->rectangle);
    gotoxy(word->rectangle.coordinate.x + 2, word->rectangle.coordinate.y + 1);
    printf("%s", word->word);
    print_rectangle(&word->rectangle);
    printf("%s", RESET);
}

void print_word_red(Word *word)
{
    printf("%s%s", RED, BOLD);
    print_rectangle(&word->rectangle);
    gotoxy(word->rectangle.coordinate.x + 2, word->rectangle.coordinate.y + 1);
    printf("%s", word->word);
    print_rectangle(&word->rectangle);
    printf("%s", RESET);
}

void print_meaning(Word *word)
{
    // print_word(word);
    // print_rectangle(&word->rectangle);
    gotoxy(word->rectangle.coordinate.x + 2, word->rectangle.coordinate.y + 1);
    printf("%s", word->word);
    // WHY DO IT AGAIN? iN ORDER TO JITTER REDUCTION!
    print_rectangle(&word->rectangle);
}

void print_word_empty(Word *word)
{
    LOG("Word memory freed.\n");

    print_word(word);

    free(word->word);
    free(word);
    LOG("Word memory freed.\n");
}

void print_word_item_empty(Word *word)
{
    LOG("Word memory freed.\n");

    print_word_item_empty_(word);

    free(word->word);
    free(word);
    LOG("Word memory freed.\n");
}

// the following is the correct version!
// void print_word_empty(Word* word)
// {
//     _Rectangle* rect = &word->rectangle;

//     // 清除整个单词矩形区域（包括边框）
//     for (int y = rect->coordinate.y; y < rect->coordinate.y + rect->width_and_height.height; y++) {
//         gotoxy(rect->coordinate.x, y);
//         for (int x = 0; x < rect->width_and_height.width; x++) {
//             printf(" ");
//         }
//     }
// }

void error_print(char *chars)
{
    gotoxy(error_line_x, error_line_y);
    printf("%s", error_chars);
    printf("%s", chars);
    Sleep(500);
    // eliminate automatically
    gotoxy(error_line_x, error_line_y);
    for (size_t i = 0; i < strlen(error_chars) + strlen(chars); i++)
    {
        printf("%s", " ");
    }
}
void green_print(char *chars)
{
    gotoxy(error_line_x, error_line_y);
    printf("%s", green_chars);
    printf("%s", chars);
}
void empty_error_or_green_print(char *chars)
{
    gotoxy(error_line_x, error_line_y);
    for (size_t i = 0; i < strlen(green_chars) + strlen(chars); i++)
    {
        printf("%s", " ");
    }
}
void init_basic_layout()
{
    print_button_simulate_off(PREFIX_BUTTON);
    print_prefix_keys();
    print_rectangle(init_biggest_rectangle());
    // print_rectangle(init_setting_rectangle());
    print_rectangle(init_under_middle_rectangle());
    print_rectangle(init_outermost_rectangle());
}

void print_selected_mode_choose_mudule_to_red()
{
    printf("%s%s", RED, BOLD);
    print_rectangle(init_selected_mode_choose_mudule_to_red());
    printf("%s", RESET);
}

void print_outermost_rectangle_to_red()
{
    printf("%s%s", RED, BOLD);
    print_rectangle(init_outermost_rectangle());
    printf("%s", RESET);
}