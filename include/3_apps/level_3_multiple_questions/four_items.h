#include "../../../include/__include.h"

/*in reality,we haven't used the coordinate of x*/
#define COORDINATE_ITEM1_X COORDINATE_MIDDLE_TOP_LEFT_X + 1
#define COORDINATE_ITEM1_Y COORDINATE_MIDDLE_TOP_LEFT_Y + OUTERMOST_BORDER_HEIGHT + 1+2

#define COORDINATE_ITEM2_X COORDINATE_ITEM1_X
#define COORDINATE_ITEM2_Y COORDINATE_ITEM1_Y + MARGIN_WORD_BORDER_Y + 1

#define COORDINATE_ITEM3_X COORDINATE_ITEM1_X
#define COORDINATE_ITEM3_Y COORDINATE_ITEM1_Y + 2 * (MARGIN_WORD_BORDER_Y + 1)

#define COORDINATE_ITEM4_X COORDINATE_ITEM1_X
#define COORDINATE_ITEM4_Y COORDINATE_ITEM1_Y + 3 * (MARGIN_WORD_BORDER_Y + 1)


#define SELECTD_NUM 4

void shuffle_array_4_item(Word *T_F_word_array[SELECTD_NUM],int except_index);
void print_4_items(Word *select_word_array[SELECTD_NUM]);
Word *init_word_with_string_and_meaning_for_select_questions_with_constant_xy(String_and_meaning *string_and_meaning, int sequence);
void print_4_items_empty(Word *select_word_array[SELECTD_NUM]);

void print_word_item(Word *word, int sequence);
void print_word_item_empty_(Word *word);
void print_word_item_green(Word *word, int sequence);
