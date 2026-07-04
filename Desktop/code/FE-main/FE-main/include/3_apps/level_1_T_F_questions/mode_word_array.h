#include "../../__include.h"


/*store 10000 word by default*/

#define MAX_MODE_ARRAY_SIZE 10000

typedef struct mode_array_
{
    int mode_array_top;
    int mode_array_max_size;
    String_and_meaning *mode_array[MAX_MODE_ARRAY_SIZE];
} mode_word_array;

mode_word_array* init_mode_array();
void add_to_mode_array(mode_word_array *array, String_and_meaning *string_and_meaning);

void print_right_word_score_list_all(mode_word_array *array);

void print_wrong_word_score_list_all(mode_word_array *array);

void print_right_and_wrong_word_list_all(mode_word_array *array);

void print_right_word_score_list_single(mode_word_array *array);

void print_wrong_word_score_list_single(mode_word_array *array);

void print_hit_wall_word_score_list_single(mode_word_array *array);

void print_empty_right_and_wrong_word_list_all();