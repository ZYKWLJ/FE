#include "../../include/__include.h"
#include <stdio.h> 
#include <string.h> 
static String get_random_word(){
    String word=(String)malloc(6*sizeof(char));
    strcpy(word, "hello");
    return word;
}

/*
+-------+ 
| hello |
+-------+

the width of the reacangle is 4 cells longer than the word, and the height of the rectangle is 3 cells longer than the word. 
so we just use the MARGIN_WORD_BORDER_X and MARGIN_WORD_BORDER_Y to define the width and height of the rectangle.
*/


static Word* init_random_word_with_border_xy()
{

    Word* word = (Word*)malloc(sizeof(Word));
    word->word=get_random_word();
    srand(time(NULL));

    word->rectangle.width_and_height.width = strlen(word->word) + MARGIN_WORD_BORDER_X; // 字符串长度 + 左右边框
    word->rectangle.width_and_height.height = MARGIN_WORD_BORDER_Y; // 上下边框 + 字

    word->rectangle.coordinate.x = OUTERMOST_BORDER_X + rand() % (OUTERMOST_BORDER_WIDTH - strlen(word->word) - MARGIN_WORD_BORDER_X);
    word->rectangle.coordinate.y = OUTERMOST_BORDER_Y + rand() % (OUTERMOST_BORDER_HEIGHT - MARGIN_WORD_BORDER_Y);
    word->rectangle.pattern.corner = WORD_BORDER_CORNER;
    word->rectangle.pattern.vertical = WORD_BORDER_VERTICAL;
    word->rectangle.pattern.horizontal = WORD_BORDER_HORIZONTAL;

    word->direction = rand() % 4; // 随机选择一个方向
    return word;
}


Word* init_word(){
    return init_random_word_with_border_xy();
}


//just copy the word and the rectangle, but change the pattern to empty.
Word* init_word_empty(Word* word)
{
    // 判空，防止崩溃
    if (word == NULL || word->word == NULL)
    {
        LOG("input word is null!\n");
        return NULL;
    }

    Word* empty_word = (Word*)malloc(sizeof(Word));
    if (empty_word == NULL)
    {
        LOG("malloc Word failed!\n");
        return NULL;
    }

    size_t str_len = strlen(word->word);

    empty_word->word = (String)malloc(str_len + 1);
    if (empty_word->word == NULL)
    {
        LOG("malloc string failed!\n");
        free(empty_word); // 已分配的结构体要释放，避免内存泄漏
        return NULL;
    }

    LOG("init word empty.\n");

    memset(empty_word->word, ' ', str_len);
    empty_word->word[str_len] = '\0';

    empty_word->rectangle.pattern.corner = WORD_BORDER_ALL_EMPTY;
    empty_word->rectangle.pattern.vertical = WORD_BORDER_ALL_EMPTY;
    empty_word->rectangle.pattern.horizontal = WORD_BORDER_ALL_EMPTY;

    empty_word->rectangle.coordinate.x = word->rectangle.coordinate.x;
    empty_word->rectangle.coordinate.y = word->rectangle.coordinate.y;
    empty_word->rectangle.width_and_height.width = word->rectangle.width_and_height.width;
    empty_word->rectangle.width_and_height.height = word->rectangle.width_and_height.height;

    LOG("init word empty over.\n");
    return empty_word;
}

 
Word *init_word_with_string_and_constant_xy(String str,int corrdinate_x,int corrdinate_y)
{
    Word *word = (Word *)malloc(sizeof(Word));

    word->word = str;

    word->rectangle.width_and_height.width = strlen(word->word) + MARGIN_WORD_BORDER_X; // 字符串长度 + 左右边框
    word->rectangle.width_and_height.height = MARGIN_WORD_BORDER_Y;                     // 上下边框 + 字

    word->rectangle.coordinate.x = corrdinate_x;
    word->rectangle.coordinate.y = corrdinate_y;
    word->rectangle.pattern.corner = DEFAULT_BORDER_CORNER_DOT;
    word->rectangle.pattern.vertical = DEFAULT_BORDER_VERTICAL;
    word->rectangle.pattern.horizontal = DEFAULT_BORDER_HORIZONTAL;

    word->direction = rand() % 4; // 随机选择一个方向
    return word;
}