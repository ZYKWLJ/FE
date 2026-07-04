#include "../../../include/__include.h"
/*
button simulate.
+------+
||||   |
+------+
OFF   ON

+------+
|   ||||
+------+
Enter prefix:____

*/

typedef int Buttons;

/*this is button corrdinate list*/
Buttons buttons[][2] = {
    {PREFIX_BUTTON_X, PREFIX_BUTTON_Y},
};
void print_button_simulate_off(Button button)
{
    gotoxy(buttons[button][0] - 1, buttons[button][1] - 1);
    print_prefix_tips();
    gotoxy(buttons[button][0] - 1, buttons[button][1] + 3);
    print_prefix_tips_on_off();

    Word *word = init_word_with_string_and_constant_xy(OFF_CHAR, buttons[button][0], buttons[button][1]);
    print_word_3_columns_empty(word);
    // Sleep(3000);

    print_word(word);
    // re-color the details.
    gotoxy(buttons[button][0], buttons[button][1] + 1);
    printf("%s|%s%s", RED, OFF_CHAR, RESET);
}

void print_button_simulate_on(Button button)
{
    gotoxy(buttons[button][0] - 1, buttons[button][1] - 1);
    print_prefix_tips();
    gotoxy(buttons[button][0] - 1, buttons[button][1] + 3);
    print_prefix_tips_on_off();
    Word *word = init_word_with_string_and_constant_xy(ON_CHAR, buttons[button][0], buttons[button][1]);
    print_word_3_columns_empty(word);
    // Sleep(3000);
    print_word(word);
    // re-color the details.
    gotoxy(buttons[button][0] + 3, buttons[button][1] + 1);
    printf("%s%s|%s", GREEN, ON_CHAR, RESET);
}
void show_specific_prefix_word()
{
    // we just limit the random value and to find the specific words.
}

void print_prefix_tips()
{
    printf("Turn on prefix:");
}

void print_prefix_tips_on_off()
{
    printf("OFF       ON");
}