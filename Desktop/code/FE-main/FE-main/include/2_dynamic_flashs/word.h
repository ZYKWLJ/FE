#ifndef WORD_H_
#define WORD_H_
#include "../__include.h"
#include<stdlib.h>
#include<time.h>

#define MARGIN_WORD_BORDER_X 4
#define MARGIN_WORD_BORDER_Y 3

typedef char* String;

typedef enum direction
{
    BOTTOM_RIGHT,
    TOP_RIGHT,
    TOP_LEFT,
    BOTTOM_LEFT
}Direction; // then we can use directions[Direction] to get the coordinate of the next cell.

typedef struct word {
    _Rectangle rectangle;
    String word;
    Direction direction;
}Word;

void print_word(Word* word);    
void print_word_green(Word* word);   
void print_word_red(Word *word); 
void print_word_empty(Word* word);  

// String get_random_word();
Word* init_word();
Word* init_word_empty(Word* word);
Word *init_word_with_string_and_constant_xy(String str,int corrdinate_x,int corrdinate_y);

#endif /* WORD_H_ */