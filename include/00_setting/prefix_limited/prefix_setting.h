#include "../../../include/__include.h"
#define OFF 0
#define ON 1

#define OFF_CHAR "||||  "
#define ON_CHAR "  ||||"

#define PREFIX_BUTTON_X OUTERMOST_BORDER_X + 2
#define PREFIX_BUTTON_Y SETTING_RECTANGLE_COORDINATE_Y + 2

typedef enum Button
{
    PREFIX_BUTTON,
} Button;

void print_button_simulate_off(Button button);
void print_button_simulate_on(Button button);

void show_specific_prefix_word();
void print_word_3_columns_empty(Word *word);