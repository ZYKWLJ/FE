# 源码汇总（include + src，精准跳过指定两个4_vocabulary目录）

## 扫描根目录：`C:\Users\29001\Desktop\code\fun-eg-v1\include`

- 完整文件路径：`C:\Users\29001\Desktop\code\fun-eg-v1\include\__include.h`
```c
#ifndef __INCLUDE_H_
#define __INCLUDE_H_
#include "0_log/log.h"

#include "2_dynamic_flashs/gotoxy.h"

#include "1_basic_static_borders/rectangle.h"

#include "1_basic_static_borders/outermost_rectangle.h"

#include "1_basic_static_borders/word_rectangle.h"

#include "2_dynamic_flashs/word.h"

#include "2_dynamic_flashs/word_movement.h"

#include "4_vocaulary/strings.h"

#include "4_vocaulary/strings_array.h"

#include "3_apps/level_0_just_screen_saver/change_words_in_a_configurable_frequence.h"

#include "3_apps/level_0_just_screen_saver/screen_saver.h"

#include "3_apps/level_0_just_screen_saver/change_string_and_meaning_if_it_is_hiting_the_wall.h"



#endif /* __INCLUDE_H_ */```

- 完整文件路径：`C:\Users\29001\Desktop\code\fun-eg-v1\include\0_log\log.h`
```c
#ifndef LOG_H_
#define LOG_H_

#define LOG(x) printf("")

#endif /* LOG_H_ */```

- 完整文件路径：`C:\Users\29001\Desktop\code\fun-eg-v1\include\1_basic_static_borders\outermost_rectangle.h`
```c
#ifndef OUTERMOST_RECTANGLE_H_
#define OUTERMOST_RECTANGLE_H_


// #define OUTERMOST_BORDER_CORNER '+'
// #define OUTERMOST_BORDER_VERTICAL '|'
// #define OUTERMOST_BORDER_HORIZONTAL '-'

#define OUTERMOST_BORDER_ALL_IN_ONE '#'

#define OUTERMOST_BORDER_CORNER  OUTERMOST_BORDER_ALL_IN_ONE
#define OUTERMOST_BORDER_VERTICAL  OUTERMOST_BORDER_ALL_IN_ONE
#define OUTERMOST_BORDER_HORIZONTAL  OUTERMOST_BORDER_ALL_IN_ONE


#define OUTERMOST_BORDER_X 38
#define OUTERMOST_BORDER_Y 6
#define OUTERMOST_BORDER_WIDTH 66
#define OUTERMOST_BORDER_HEIGHT 20

#include "../__include.h"

_Rectangle * init_outermost_rectangle();

#endif /* OUTERMOST_RECTANGLE_H_ */```

- 完整文件路径：`C:\Users\29001\Desktop\code\fun-eg-v1\include\1_basic_static_borders\rectangle.h`
```c
#ifndef RECTANGLE_H_
#define RECTANGLE_H_
typedef struct coordinate {
    int x;
    int y;
}Coordinate;

typedef struct width_and_height {
    int width;
    int height;
}Width_And_Height;

typedef char Corner;
typedef char Vertical;
typedef char Horizontal;

typedef struct pattern{
    Corner corner;
    Vertical vertical;
    Horizontal horizontal;
}Pattern;

typedef struct rectangle {
    Coordinate coordinate;
    Width_And_Height width_and_height;
    Pattern pattern;
}_Rectangle;

_Rectangle * init_rectangle(_Rectangle * rectangle);

void print_rectangle(_Rectangle* rectangle);



#endif /* RECTANGLE_H_ */```

- 完整文件路径：`C:\Users\29001\Desktop\code\fun-eg-v1\include\1_basic_static_borders\word_rectangle.h`
```c
#ifndef WORD_RECTANGLE_H_
#define WORD_RECTANGLE_H_

// #define WORD_BORDER_CORNER '+'
// #define WORD_BORDER_VERTICAL '|'
// #define WORD_BORDER_HORIZONTAL '-'

#define WORD_BORDER_ALL_EMPTY ' '
#define WORD_BORDER_CORNER WORD_BORDER_ALL_EMPTY
#define WORD_BORDER_VERTICAL WORD_BORDER_ALL_EMPTY
#define WORD_BORDER_HORIZONTAL WORD_BORDER_ALL_EMPTY

#endif /* WORD_RECTANGLE_H_ */```

- 完整文件路径：`C:\Users\29001\Desktop\code\fun-eg-v1\include\2_dynamic_flashs\gotoxy.h`
```c
 
#ifndef GOTOXY_H_
#define GOTOXY_H_

#include<windows.h>
#include <conio.h>
// 移动光标到指定位置
void gotoxy(int x, int y);
// 隐藏光标
void hide_cursor();

#endif /* GOTOXY_H_ */```

- 完整文件路径：`C:\Users\29001\Desktop\code\fun-eg-v1\include\2_dynamic_flashs\word.h`
```c
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
void print_word_empty(Word* word);  

// String get_random_word();
Word* init_word();
Word* init_word_empty(Word* word);

#endif /* WORD_H_ */```

- 完整文件路径：`C:\Users\29001\Desktop\code\fun-eg-v1\include\2_dynamic_flashs\word_movement.h`
```c
#ifndef WORD_MOVEMENT_H_
#define WORD_MOVEMENT_H_
#include<stdbool.h>

typedef int Directions;
static Directions directions[4][2] = {
    {1, 1},   // bottom-right
    {1, -1},  // top-right
    {-1, -1}, // top-left
    {-1, 1}   // bottom-left
};

// bool check_rectangle_is_inner_outermost_rectangle(_Rectangle* rectangle);
void next_step_of_the_word(Word* word);

#endif /* WORD_MOVEMENT_H_ */```

- 完整文件路径：`C:\Users\29001\Desktop\code\fun-eg-v1\include\3_apps\level_0_just_screen_saver\change_string_and_meaning_if_it_is_hiting_the_wall.h`
```c
#include "../../__include.h"

#include "../../../include/__include.h"

bool is_word_hiting_the_wall(Word *word);
bool not_in_the_outermost_if_we_change_the_word(String_and_meaning *string_and_meaning, Word *word);

void change_word_and_meaning_use_string_and_meaning(Word *word, Word *meaning, String_and_meaning *string_and_meaning2);
void change_word_use_string_and_meaning(Word *word, String_and_meaning *string_and_meaning);
bool change_word_use_string_and_meaning_if_word_is_hiting_the_wall(Word *word, String_and_meaning *string_and_meaning);

bool change_word_and_meaning_use_string_and_meaning_if_word_is_hiting_the_wall(Word *word, Word *meaning, String_and_meaning *string_and_meaning);```

- 完整文件路径：`C:\Users\29001\Desktop\code\fun-eg-v1\include\3_apps\level_0_just_screen_saver\change_words_in_a_configurable_frequence.h`
```c
#include "../../__include.h"

String_and_meaning* get_random_string_and_meaning();```

- 完整文件路径：`C:\Users\29001\Desktop\code\fun-eg-v1\include\3_apps\level_0_just_screen_saver\screen_saver.h`
```c
#include "../../__include.h"

void screen_saver_word_no_meaning();
void screen_saver_word_and_meaning();```

## 扫描根目录：`C:\Users\29001\Desktop\code\fun-eg-v1\src`

- 完整文件路径：`C:\Users\29001\Desktop\code\fun-eg-v1\src\0_log\log`
```c
```

- 完整文件路径：`C:\Users\29001\Desktop\code\fun-eg-v1\src\1_basic_static_borders\outermost_rectangle.c`
```c
#include "../../include/__include.h"
_Rectangle outermost_rectangle = {
    .coordinate = {
        .x = OUTERMOST_BORDER_X,
        .y = OUTERMOST_BORDER_Y},
    .width_and_height = {.width = OUTERMOST_BORDER_WIDTH, .height = OUTERMOST_BORDER_HEIGHT},
    .pattern = {.corner = OUTERMOST_BORDER_CORNER, .vertical = OUTERMOST_BORDER_VERTICAL, .horizontal = OUTERMOST_BORDER_HORIZONTAL}
};

_Rectangle * init_outermost_rectangle()
{
    return &outermost_rectangle;
}```

- 完整文件路径：`C:\Users\29001\Desktop\code\fun-eg-v1\src\1_basic_static_borders\print.c`
```c
#include "../../include/__include.h"

#include<stdio.h>
void print_rectangle(_Rectangle* rectangle)
{
    gotoxy(rectangle->coordinate.x, rectangle->coordinate.y);
    printf("%c", rectangle->pattern.corner);

    for (int i = 0; i < rectangle->width_and_height.width-2; i++)
    {
        printf("%c", rectangle->pattern.horizontal);
    }

    printf("%c", rectangle->pattern.corner);




    for (int i = 0; i < rectangle->width_and_height.height-2; i++)
    {
        gotoxy(rectangle->coordinate.x, rectangle->coordinate.y+i+1);
        printf("%c", rectangle->pattern.vertical);
        gotoxy(rectangle->coordinate.x+rectangle->width_and_height.width-1, rectangle->coordinate.y+i+1);
        printf("%c", rectangle->pattern.vertical);
    }



    gotoxy(rectangle->coordinate.x, rectangle->coordinate.y+rectangle->width_and_height.height-1);
    printf("%c", rectangle->pattern.corner);
    for (int i = 0; i < rectangle->width_and_height.width-2; i++)
    {
        printf("%c", rectangle->pattern.horizontal);
    }
    printf("%c", rectangle->pattern.corner);
};


void print_word(Word* word)
{
    print_rectangle(&word->rectangle);
    gotoxy(word->rectangle.coordinate.x+2, word->rectangle.coordinate.y+1);
    printf("%s", word->word);
}

void print_meaning(Word* word)
{
    print_word(word);
}

void print_word_empty(Word* word)
{
    LOG("Word memory freed.\n");

    print_word(word);
    
    // free(word->word);
    // free(word);
    LOG("Word memory freed.\n");
}
```

- 完整文件路径：`C:\Users\29001\Desktop\code\fun-eg-v1\src\1_basic_static_borders\rectangle.c`
```c
#include "../../include/__include.h"

_Rectangle * init_rectangle(_Rectangle *rectangle){
    return rectangle;
}```

- 完整文件路径：`C:\Users\29001\Desktop\code\fun-eg-v1\src\1_basic_static_borders\test\test_print_and_aliminate_main.c`
```c
#include "../../../include/__include.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    hide_cursor();
    system("cls");
    while (1)
    {   

        print_rectangle(init_outermost_rectangle());
        Word *word = init_word();
        LOG("start print word.\n");
        print_word(word);
        Sleep(1000); // duration 1 s
        LOG("start print word empty.\n");
        print_word_empty(init_word_empty(word));
        // Sleep(1000); // duration 1 s
        LOG("start print word over.\n");
        free(word->word);
        free(word);
        
    }
    return 0;
}

// gcc C:\Users\29001\Desktop\code\fun-eg-v1\src\2_dynamic_flashs\gotoxy.c  C:\Users\29001\Desktop\code\fun-eg-v1\src\1_basic_static_borders\outermost_rectangle.c C:\Users\29001\Desktop\code\fun-eg-v1\src\2_dynamic_flashs\word.c  C:\Users\29001\Desktop\code\fun-eg-v1\src\1_basic_static_borders\print.c C:\Users\29001\Desktop\code\fun-eg-v1\src\1_basic_static_borders\test\test_print_main.c -o C:\Users\29001\Desktop\code\fun-eg-v1\src\1_basic_static_borders\test\print_main.exe```

- 完整文件路径：`C:\Users\29001\Desktop\code\fun-eg-v1\src\1_basic_static_borders\test\test_print_and_aliminate_main.exe`
```c
读取失败：'gbk' codec can't decode byte 0x90 in position 2: illegal multibyte sequence
```

- 完整文件路径：`C:\Users\29001\Desktop\code\fun-eg-v1\src\1_basic_static_borders\test\test_print_and_move_main.c`
```c
#include "../../../include/__include.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    hide_cursor();
    system("cls");
    Word *word = init_word();
    while (1)
    {   

        print_rectangle(init_outermost_rectangle());
        LOG("start print word.\n");
        print_word(word);
        Sleep(1000); // duration 1 s
        LOG("start print word empty.\n");
        print_word_empty(init_word_empty(word));
        next_step_of_the_word(word);
        // Sleep(1000); // duration 1 s
        LOG("start print word over.\n");
        // free(word->word);
        // free(word);
        
    }
    return 0;
}

// gcc C:\Users\29001\Desktop\code\fun-eg-v1\src\2_dynamic_flashs\gotoxy.c  C:\Users\29001\Desktop\code\fun-eg-v1\src\1_basic_static_borders\outermost_rectangle.c C:\Users\29001\Desktop\code\fun-eg-v1\src\2_dynamic_flashs\word.c  C:\Users\29001\Desktop\code\fun-eg-v1\src\1_basic_static_borders\print.c C:\Users\29001\Desktop\code\fun-eg-v1\src\1_basic_static_borders\test\test_print_main.c -o C:\Users\29001\Desktop\code\fun-eg-v1\src\1_basic_static_borders\test\print_main.exe

// gcc C:\Users\29001\Desktop\code\fun-eg-v1\src\2_dynamic_flashs\gotoxy.c  C:\Users\29001\Desktop\code\fun-eg-v1\src\1_basic_static_borders\outermost_rectangle.c C:\Users\29001\Desktop\code\fun-eg-v1\src\2_dynamic_flashs\word.c  C:\Users\29001\Desktop\code\fun-eg-v1\src\1_basic_static_borders\print.c C:\Users\29001\Desktop\code\fun-eg-v1\src\1_basic_static_borders\test\test_print_and_move_main.c -o C:\Users\29001\Desktop\code\fun-eg-v1\src\1_basic_static_borders\test\test_print_and_move_main.exe```

- 完整文件路径：`C:\Users\29001\Desktop\code\fun-eg-v1\src\2_dynamic_flashs\gotoxy.c`
```c
 
#include "../../include/__include.h"

// 移动光标到指定位置
void gotoxy(int x, int y)
{
    COORD coord;
    coord.X = x;
    coord.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}

// 隐藏光标
void hide_cursor()
{
    CONSOLE_CURSOR_INFO cursorInfo;
    GetConsoleCursorInfo(GetStdHandle(STD_OUTPUT_HANDLE), &cursorInfo);
    cursorInfo.bVisible = FALSE;
    SetConsoleCursorInfo(GetStdHandle(STD_OUTPUT_HANDLE), &cursorInfo);
}```

- 完整文件路径：`C:\Users\29001\Desktop\code\fun-eg-v1\src\2_dynamic_flashs\word.c`
```c
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
}```

- 完整文件路径：`C:\Users\29001\Desktop\code\fun-eg-v1\src\2_dynamic_flashs\word_movement.c`
```c
#include "../../include/__include.h"
static bool check_rectangle_is_inner_outermost_rectangle(_Rectangle *rectangle)
{
    bool left = rectangle->coordinate.x <= OUTERMOST_BORDER_X;
    bool top = rectangle->coordinate.y <= OUTERMOST_BORDER_Y;

    bool right = rectangle->coordinate.x + rectangle->width_and_height.width >= OUTERMOST_BORDER_X + OUTERMOST_BORDER_WIDTH;
    bool bottom = rectangle->coordinate.y + rectangle->width_and_height.height >= OUTERMOST_BORDER_Y + OUTERMOST_BORDER_HEIGHT;

    if (left || top || right || bottom)
    {
        return false;
    }
    return true;
}

void next_step_of_the_word(Word *word)
{
    // what do you wanna do if the block is actually fit the outermost rectangle?
    // we're gonna set a default direction to this specific case.
    if (!check_rectangle_is_inner_outermost_rectangle(&word->rectangle))
    {
        bool left = word->rectangle.coordinate.x <= OUTERMOST_BORDER_X;
        bool top = word->rectangle.coordinate.y <= OUTERMOST_BORDER_Y;

        bool right = word->rectangle.coordinate.x + word->rectangle.width_and_height.width >= OUTERMOST_BORDER_X + OUTERMOST_BORDER_WIDTH;
        bool bottom = word->rectangle.coordinate.y + word->rectangle.width_and_height.height >= OUTERMOST_BORDER_Y + OUTERMOST_BORDER_HEIGHT;

        switch (word->direction)
        {
            //
        case BOTTOM_RIGHT:
        {
            if (right && bottom)
            {
                word->direction = TOP_LEFT;
            }
            else if (right)
            {
                word->direction = BOTTOM_LEFT;
            }
            else
            {
                word->direction = TOP_RIGHT;
            }
        }
        break;
        case TOP_RIGHT:
        {
            if (right && top)
            {
                word->direction = BOTTOM_LEFT;
            }
            else if (right)
            {
                word->direction = TOP_LEFT;
            }
            else
            {
                word->direction = BOTTOM_RIGHT;
            }
        }
        break;
        // error
        case BOTTOM_LEFT:
        {
            if (left && bottom)
            {
                word->direction = TOP_RIGHT;
            }
            else if (left)
            {
                word->direction = BOTTOM_RIGHT;
            }
            else
            {
                word->direction = TOP_LEFT;
            }
        }
        break;
        // error
        case TOP_LEFT:
        {
            if (left && top)
            {
                word->direction = BOTTOM_RIGHT;
            }
            else if (left)
            {
                word->direction = TOP_RIGHT;
            }
            else
            {
                word->direction = BOTTOM_LEFT;
            }
        }
        break;
        }
    }

    word->rectangle.coordinate.x += directions[word->direction][0];
    word->rectangle.coordinate.y += directions[word->direction][1];
}
```

- 完整文件路径：`C:\Users\29001\Desktop\code\fun-eg-v1\src\2_dynamic_flashs\test\error.md`
```c
# 源码汇总（include + src，精准跳过指定两个4_vocabulary目录）

## 扫描根目录：`C:\Users\29001\Desktop\code\fun-eg-v1\include`

- 完整文件路径：`C:\Users\29001\Desktop\code\fun-eg-v1\include\__include.h`
```c
#ifndef __INCLUDE_H_
#define __INCLUDE_H_
#include "0_log/log.h"

#include "2_dynamic_flashs/gotoxy.h"

#include "1_basic_static_borders/rectangle.h"

#include "1_basic_static_borders/outermost_rectangle.h"

#include "1_basic_static_borders/word_rectangle.h"

#include "2_dynamic_flashs/word.h"

#include "2_dynamic_flashs/word_movement.h"

#include "4_vocaulary/strings.h"

#include "4_vocaulary/strings_array.h"

#include "3_apps/level_0_just_screen_saver/change_words_in_a_configurable_frequence.h"

#include "3_apps/level_0_just_screen_saver/screen_saver.h"

#include "3_apps/level_0_just_screen_saver/change_string_and_meaning_if_it_is_hiting_the_wall.h"



#endif /* __INCLUDE_H_ */```

- 完整文件路径：`C:\Users\29001\Desktop\code\fun-eg-v1\include\0_log\log.h`
```c
#ifndef LOG_H_
#define LOG_H_

#define LOG(x) printf("")

#endif /* LOG_H_ */```

- 完整文件路径：`C:\Users\29001\Desktop\code\fun-eg-v1\include\1_basic_static_borders\outermost_rectangle.h`
```c
#ifndef OUTERMOST_RECTANGLE_H_
#define OUTERMOST_RECTANGLE_H_


// #define OUTERMOST_BORDER_CORNER '+'
// #define OUTERMOST_BORDER_VERTICAL '|'
// #define OUTERMOST_BORDER_HORIZONTAL '-'

#define OUTERMOST_BORDER_ALL_IN_ONE '#'

#define OUTERMOST_BORDER_CORNER  OUTERMOST_BORDER_ALL_IN_ONE
#define OUTERMOST_BORDER_VERTICAL  OUTERMOST_BORDER_ALL_IN_ONE
#define OUTERMOST_BORDER_HORIZONTAL  OUTERMOST_BORDER_ALL_IN_ONE


#define OUTERMOST_BORDER_X 38
#define OUTERMOST_BORDER_Y 6
#define OUTERMOST_BORDER_WIDTH 66
#define OUTERMOST_BORDER_HEIGHT 20

#include "../__include.h"

_Rectangle * init_outermost_rectangle();

#endif /* OUTERMOST_RECTANGLE_H_ */```

- 完整文件路径：`C:\Users\29001\Desktop\code\fun-eg-v1\include\1_basic_static_borders\rectangle.h`
```c
#ifndef RECTANGLE_H_
#define RECTANGLE_H_
typedef struct coordinate {
    int x;
    int y;
}Coordinate;

typedef struct width_and_height {
    int width;
    int height;
}Width_And_Height;

typedef char Corner;
typedef char Vertical;
typedef char Horizontal;

typedef struct pattern{
    Corner corner;
    Vertical vertical;
    Horizontal horizontal;
}Pattern;

typedef struct rectangle {
    Coordinate coordinate;
    Width_And_Height width_and_height;
    Pattern pattern;
}_Rectangle;

_Rectangle * init_rectangle(_Rectangle * rectangle);

void print_rectangle(_Rectangle* rectangle);



#endif /* RECTANGLE_H_ */```

- 完整文件路径：`C:\Users\29001\Desktop\code\fun-eg-v1\include\1_basic_static_borders\word_rectangle.h`
```c
#ifndef WORD_RECTANGLE_H_
#define WORD_RECTANGLE_H_

// #define WORD_BORDER_CORNER '+'
// #define WORD_BORDER_VERTICAL '|'
// #define WORD_BORDER_HORIZONTAL '-'

#define WORD_BORDER_ALL_EMPTY ' '
#define WORD_BORDER_CORNER WORD_BORDER_ALL_EMPTY
#define WORD_BORDER_VERTICAL WORD_BORDER_ALL_EMPTY
#define WORD_BORDER_HORIZONTAL WORD_BORDER_ALL_EMPTY

#endif /* WORD_RECTANGLE_H_ */```

- 完整文件路径：`C:\Users\29001\Desktop\code\fun-eg-v1\include\2_dynamic_flashs\gotoxy.h`
```c
 
#ifndef GOTOXY_H_
#define GOTOXY_H_

#include<windows.h>
#include <conio.h>
// 移动光标到指定位置
void gotoxy(int x, int y);
// 隐藏光标
void hide_cursor();

#endif /* GOTOXY_H_ */```

- 完整文件路径：`C:\Users\29001\Desktop\code\fun-eg-v1\include\2_dynamic_flashs\word.h`
```c
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
void print_word_empty(Word* word);  

// String get_random_word();
Word* init_word();
Word* init_word_empty(Word* word);

#endif /* WORD_H_ */```

- 完整文件路径：`C:\Users\29001\Desktop\code\fun-eg-v1\include\2_dynamic_flashs\word_movement.h`
```c
#ifndef WORD_MOVEMENT_H_
#define WORD_MOVEMENT_H_
#include<stdbool.h>

typedef int Directions;
static Directions directions[4][2] = {
    {1, 1},   // bottom-right
    {1, -1},  // top-right
    {-1, -1}, // top-left
    {-1, 1}   // bottom-left
};

// bool check_rectangle_is_inner_outermost_rectangle(_Rectangle* rectangle);
void next_step_of_the_word(Word* word);

#endif /* WORD_MOVEMENT_H_ */```

- 完整文件路径：`C:\Users\29001\Desktop\code\fun-eg-v1\include\3_apps\level_0_just_screen_saver\change_string_and_meaning_if_it_is_hiting_the_wall.h`
```c
#include "../../__include.h"

#include "../../../include/__include.h"

bool is_word_hiting_the_wall(Word *word);
bool not_in_the_outermost_if_we_change_the_word(String_and_meaning *string_and_meaning, Word *word);

void change_word_and_meaning_use_string_and_meaning(Word *word, Word *meaning, String_and_meaning *string_and_meaning2);
void change_word_use_string_and_meaning(Word *word, String_and_meaning *string_and_meaning);
bool change_word_use_string_and_meaning_if_word_is_hiting_the_wall(Word *word, String_and_meaning *string_and_meaning);

bool change_word_and_meaning_use_string_and_meaning_if_word_is_hiting_the_wall(Word *word, Word *meaning, String_and_meaning *string_and_meaning);```

- 完整文件路径：`C:\Users\29001\Desktop\code\fun-eg-v1\include\3_apps\level_0_just_screen_saver\change_words_in_a_configurable_frequence.h`
```c
#include "../../__include.h"

String_and_meaning* get_random_string_and_meaning();```

- 完整文件路径：`C:\Users\29001\Desktop\code\fun-eg-v1\include\3_apps\level_0_just_screen_saver\screen_saver.h`
```c
#include "../../__include.h"

void screen_saver_word_no_meaning();
void screen_saver_word_and_meaning();```

## 扫描根目录：`C:\Users\29001\Desktop\code\fun-eg-v1\src`

- 完整文件路径：`C:\Users\29001\Desktop\code\fun-eg-v1\src\0_log\log`
```c
```

- 完整文件路径：`C:\Users\29001\Desktop\code\fun-eg-v1\src\1_basic_static_borders\outermost_rectangle.c`
```c
#include "../../include/__include.h"
_Rectangle outermost_rectangle = {
    .coordinate = {
        .x = OUTERMOST_BORDER_X,
        .y = OUTERMOST_BORDER_Y},
    .width_and_height = {.width = OUTERMOST_BORDER_WIDTH, .height = OUTERMOST_BORDER_HEIGHT},
    .pattern = {.corner = OUTERMOST_BORDER_CORNER, .vertical = OUTERMOST_BORDER_VERTICAL, .horizontal = OUTERMOST_BORDER_HORIZONTAL}
};

_Rectangle * init_outermost_rectangle()
{
    return &outermost_rectangle;
}```

- 完整文件路径：`C:\Users\29001\Desktop\code\fun-eg-v1\src\1_basic_static_borders\print.c`
```c
```

- 完整文件路径：`C:\Users\29001\Desktop\code\fun-eg-v1\src\2_dynamic_flashs\test\error.png`
```c
读取失败：'gbk' codec can't decode byte 0x9f in position 29: illegal multibyte sequence
```

- 完整文件路径：`C:\Users\29001\Desktop\code\fun-eg-v1\src\2_dynamic_flashs\test\fe.exe`
```c
读取失败：'gbk' codec can't decode byte 0x90 in position 2: illegal multibyte sequence
```

- 完整文件路径：`C:\Users\29001\Desktop\code\fun-eg-v1\src\2_dynamic_flashs\test\test_print_and_move_main.c`
```c
#include "../../../include/__include.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    hide_cursor();
    system("cls");
    Word *word = init_word();
    while (1)
    {   

        print_rectangle(init_outermost_rectangle());
        LOG("start print word.\n");
        print_word(word);
        Sleep(5); // duration 1 s
        LOG("start print word empty.\n");
        print_word_empty(init_word_empty(word));
        next_step_of_the_word(word);
        // Sleep(1000); // duration 1 s
        LOG("start print word over.\n");
        // free(word->word);
        // free(word);
        
    }
    return 0;
}


// gcc C:\Users\29001\Desktop\code\fun-eg-v1\src\2_dynamic_flashs\gotoxy.c  C:\Users\29001\Desktop\code\fun-eg-v1\src\1_basic_static_borders\outermost_rectangle.c C:\Users\29001\Desktop\code\fun-eg-v1\src\2_dynamic_flashs\word.c  C:\Users\29001\Desktop\code\fun-eg-v1\src\1_basic_static_borders\print.c C:\Users\29001\Desktop\code\fun-eg-v1\src\2_dynamic_flashs\word_movement.c C:\Users\29001\Desktop\code\fun-eg-v1\src\2_dynamic_flashs\test\test_print_and_move_main.c -o C:\Users\29001\Desktop\code\fun-eg-v1\src\2_dynamic_flashs\test\test_print_and_move_main.exe```

- 完整文件路径：`C:\Users\29001\Desktop\code\fun-eg-v1\src\2_dynamic_flashs\test\test_print_and_move_main.exe`
```c
读取失败：'gbk' codec can't decode byte 0x90 in position 2: illegal multibyte sequence
```

- 完整文件路径：`C:\Users\29001\Desktop\code\fun-eg-v1\src\3_apps\level0_just_screen_saver\change_string_and_meaning_if_it_is_hiting_the_wall.c`
```c
#include "../../../include/__include.h"

bool is_word_hiting_the_wall(Word *word)
{
    bool left = word->rectangle.coordinate.x == OUTERMOST_BORDER_X;
    bool top = word->rectangle.coordinate.y == OUTERMOST_BORDER_Y;
    bool right = word->rectangle.coordinate.x + word->rectangle.width_and_height.width == OUTERMOST_BORDER_X + OUTERMOST_BORDER_WIDTH;
    bool bottom = word->rectangle.coordinate.y + word->rectangle.width_and_height.height == OUTERMOST_BORDER_Y + OUTERMOST_BORDER_HEIGHT;
    return left || top || right || bottom;
}

bool not_in_the_outermost_if_we_change_the_word(String_and_meaning *string_and_meaning, Word *word)
{

    bool right = word->rectangle.coordinate.x + strlen(string_and_meaning->string) > OUTERMOST_BORDER_X + OUTERMOST_BORDER_WIDTH;
    return right;
}

void change_word_and_meaning_use_string_and_meaning(Word *word, Word *meaning, String_and_meaning *string_and_meaning)
{
    word->word = string_and_meaning->string;
    meaning->word = string_and_meaning->meaning;

    word->rectangle.width_and_height.width = strlen(string_and_meaning->string) + MARGIN_WORD_BORDER_X;
    meaning->rectangle.width_and_height.width = strlen(string_and_meaning->meaning) + MARGIN_WORD_BORDER_X;
}

void change_word_use_string_and_meaning(Word *word, String_and_meaning *string_and_meaning)
{
    word->word = string_and_meaning->string;
    word->rectangle.width_and_height.width = strlen(string_and_meaning->string) + MARGIN_WORD_BORDER_X;
}
bool change_word_use_string_and_meaning_if_word_is_hiting_the_wall(Word *word, String_and_meaning *string_and_meaning)
{

    if (is_word_hiting_the_wall(word))
    {
        String_and_meaning *string_and_meaning1 = get_random_string_and_meaning();
        while (not_in_the_outermost_if_we_change_the_word(string_and_meaning1, word))
        {
            continue;
        }
        change_word_use_string_and_meaning(word, string_and_meaning1);
        return true;
    }
    return false;
}

bool change_word_and_meaning_use_string_and_meaning_if_word_is_hiting_the_wall(Word *word, Word *meaning, String_and_meaning *string_and_meaning)
{
    if (is_word_hiting_the_wall(word))
    {
        String_and_meaning *string_and_meaning1 = get_random_string_and_meaning();
        while (not_in_the_outermost_if_we_change_the_word(string_and_meaning1, word))
        {
            continue;
        }
        change_word_and_meaning_use_string_and_meaning(word, meaning, string_and_meaning1);
        return true;
    }
    return false;
}
```

- 完整文件路径：`C:\Users\29001\Desktop\code\fun-eg-v1\src\3_apps\level0_just_screen_saver\change_words_in_a_configurable_frequence.c`
```c
#include "../../../include/__include.h"
#include<stdlib.h>
#include<time.h>
//next ,we ll dev the a_ b_ c_ ...columns such that we can memorize them quite a lot.BUt now for simplicity,
//we will just use rand() to look for word in a whole array.
String_and_meaning* get_random_string_and_meaning(){
    // srand(time(NULL));
    return string_and_meaning_array[rand()%ARRAY_SIZE];
}

```

- 完整文件路径：`C:\Users\29001\Desktop\code\fun-eg-v1\src\3_apps\level0_just_screen_saver\screen_saver.c`
```c
#include "../../../include/__include.h"
#include <stdio.h>

/*
+-------+
| hello |
+-------+

the width of the reacangle is 4 cells longer than the word, and the height of the rectangle is 3 cells longer than the word.
so we just use the MARGIN_WORD_BORDER_X and MARGIN_WORD_BORDER_Y to define the width and height of the rectangle.
*/

static Word *init_word_with_string_and_meaning_for_screen_saver_with_random_xy(String_and_meaning *string_and_meaning)
{
    Word *word = (Word *)malloc(sizeof(Word));

    word->word = string_and_meaning->string;
    
    word->rectangle.width_and_height.width = strlen(word->word) + MARGIN_WORD_BORDER_X; // 字符串长度 + 左右边框
    word->rectangle.width_and_height.height = MARGIN_WORD_BORDER_Y;                     // 上下边框 + 字

    word->rectangle.coordinate.x = OUTERMOST_BORDER_X + rand() % (OUTERMOST_BORDER_WIDTH - strlen(word->word) - MARGIN_WORD_BORDER_X);
    word->rectangle.coordinate.y = OUTERMOST_BORDER_Y + rand() % (OUTERMOST_BORDER_HEIGHT - MARGIN_WORD_BORDER_Y);
    word->rectangle.pattern.corner = WORD_BORDER_CORNER;
    word->rectangle.pattern.vertical = WORD_BORDER_VERTICAL;
    word->rectangle.pattern.horizontal = WORD_BORDER_HORIZONTAL;

    word->direction = rand() % 4; // 随机选择一个方向
    return word;
}

static Word *init_meaning_with_string_and_meaning_for_screen_saver_with_random_xy(String_and_meaning *string_and_meaning)
{
    Word *meaning = (Word *)malloc(sizeof(Word));

    meaning->word = string_and_meaning->meaning;

    meaning->rectangle.width_and_height.width = strlen(meaning->word) + MARGIN_WORD_BORDER_X; // 字符串长度 + 左右边框
    meaning->rectangle.width_and_height.height = MARGIN_WORD_BORDER_Y;                        // 上下边框 + 字

    meaning->rectangle.coordinate.x = OUTERMOST_BORDER_X;
    meaning->rectangle.coordinate.y = OUTERMOST_BORDER_Y + OUTERMOST_BORDER_HEIGHT + MEANING_Y_OFFSET_OUTERMOST_RECTANGLE;
    meaning->rectangle.pattern.corner = WORD_BORDER_CORNER;
    meaning->rectangle.pattern.vertical = WORD_BORDER_VERTICAL;
    meaning->rectangle.pattern.horizontal = WORD_BORDER_HORIZONTAL;

    meaning->direction = rand() % 4; // 随机选择一个方向
    return meaning;
}

static void single_move_word_action_only_word(Word *word, String_and_meaning *string_and_meaning)
{
    // for (int i = 0; i < OUTERMOST_BORDER_WIDTH; i++)
    for (;;)
    {
        print_rectangle(init_outermost_rectangle());
        print_word(word);
        // Word *meaning = init_meaning_with_string_and_meaning_for_screen_saver_with_border_xy(string_and_meaning);
        // print_word(meaning);
        Sleep(10); // duration 1 s
        LOG("start print word empty.\n");
        print_word_empty(init_word_empty(word));
        next_step_of_the_word(word);
        if (change_word_use_string_and_meaning_if_word_is_hiting_the_wall(word, string_and_meaning))
        {
            // print_word_empty(init_word_empty(meaning));
        }
    }
    // print_word_empty(init_word_empty(word));
}

static Word *init_meaning_with_string_and_meaning_for_screen_saver_with_border_xy(String_and_meaning *string_and_meaning)
{

    return extract_meaning_from_string_and_meaning(string_and_meaning);
}

static void single_move_word_action_with_meaning(Word *word, Word *meaning, String_and_meaning *string_and_meaning)
{
    // for (int i = 0; i < OUTERMOST_BORDER_WIDTH; i++)
    for (;;)
    {
        print_rectangle(init_outermost_rectangle());
        print_word(word);
        print_word(meaning);
        Sleep(30); // duration 1 s
        LOG("start print word empty.\n");
        print_word_empty(init_word_empty(word));

        next_step_of_the_word(word);

        if (change_word_and_meaning_use_string_and_meaning_if_word_is_hiting_the_wall(word, meaning, string_and_meaning))
        {
            print_word_empty(init_word_empty(meaning));
        }
    }
    // print_word_empty(init_word_empty(word));
}

void screen_saver_word_no_meaning()
{

    hide_cursor();
    system("cls");

    while (1)
    {
        String_and_meaning *string_and_meaning = get_random_string_and_meaning();
        Word *word = init_word_with_string_and_meaning_for_screen_saver_with_random_xy(string_and_meaning);
        // Word *meaning = init_meaning_with_string_and_meaning_for_screen_saver_with_random_xy(string_and_meaning);
        // single_move_word_action_with_meaning(word, meaning, string_and_meaning);
        single_move_word_action_only_word(word, string_and_meaning);
    }
}

void screen_saver_word_and_meaning()
{

    hide_cursor();
    system("cls");

    while (1)
    {
        String_and_meaning *string_and_meaning = get_random_string_and_meaning();
        Word *word = init_word_with_string_and_meaning_for_screen_saver_with_random_xy(string_and_meaning);
        Word *meaning = init_meaning_with_string_and_meaning_for_screen_saver_with_random_xy(string_and_meaning);
        single_move_word_action_with_meaning(word, meaning, string_and_meaning);
        // single_move_word_action_only_word(word, string_and_meaning);
    }
}
```

- 完整文件路径：`C:\Users\29001\Desktop\code\fun-eg-v1\src\3_apps\level0_just_screen_saver\img\error.png`
```c
读取失败：'gbk' codec can't decode byte 0x9f in position 23: illegal multibyte sequence
```

- 完整文件路径：`C:\Users\29001\Desktop\code\fun-eg-v1\src\3_apps\level0_just_screen_saver\img\prompt.txt`
```c
现在C的调用的调用链是如下，现在为啥打印单词时，前面老是有一个`？`，显然是出错了，请你纠正。
int main(){
    // screen_saver_word_no_meaning();
    screen_saver_word_and_meaning();
    return 0;
}

--

void screen_saver_word_and_meaning()
{

    hide_cursor();
    system("cls");

    while (1)
    {
        String_and_meaning *string_and_meaning = get_random_string_and_meaning();
        Word *word = init_word_with_string_and_meaning_for_screen_saver_with_random_xy(string_and_meaning);
        Word *meaning = init_meaning_with_string_and_meaning_for_screen_saver_with_random_xy(string_and_meaning);
        single_move_word_action_with_meaning(word, meaning, string_and_meaning);
        // single_move_word_action_only_word(word, string_and_meaning);
    }
}
---

static void single_move_word_action_with_meaning(Word *word, Word *meaning, String_and_meaning *string_and_meaning)
{
    // for (int i = 0; i < OUTERMOST_BORDER_WIDTH; i++)
    for (;;)
    {
        print_rectangle(init_outermost_rectangle());
        print_word(word);
        print_word(meaning);
        Sleep(30); // duration 1 s
        LOG("start print word empty.\n");
        print_word_empty(init_word_empty(word));
        
        next_step_of_the_word(word);

        if (change_word_and_meaning_use_string_and_meaning_if_word_is_hiting_the_wall(word, meaning, string_and_meaning))
        {
            print_word_empty(init_word_empty(meaning));
        }
    }
    // print_word_empty(init_word_empty(word));
}
----
bool change_word_and_meaning_use_string_and_meaning_if_word_is_hiting_the_wall(Word *word, Word *meaning, String_and_meaning *string_and_meaning)
{
    if (is_word_hiting_the_wall(word))
    {
        String_and_meaning *string_and_meaning1 = get_random_string_and_meaning();
        while (not_in_the_outermost_if_we_change_the_word(string_and_meaning1, word))
        {
            continue;
        }
        change_word_and_meaning_use_string_and_meaning(word, meaning, string_and_meaning1);
        return true;
    }
    return false;
}
----
void change_word_and_meaning_use_string_and_meaning(Word *word, Word *meaning, String_and_meaning *string_and_meaning)
{
    word->word = string_and_meaning->string;
    meaning->word = string_and_meaning->meaning;
    word->rectangle.width_and_height.width = strlen(string_and_meaning->string) + MARGIN_WORD_BORDER_X;
    meaning->rectangle.width_and_height.width = strlen(string_and_meaning->meaning) + MARGIN_WORD_BORDER_X;
}
```

- 完整文件路径：`C:\Users\29001\Desktop\code\fun-eg-v1\src\3_apps\level0_just_screen_saver\test\screen_saver_main.c`
```c
#include "../../../../include/__include.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    // screen_saver_word_no_meaning();
    screen_saver_word_and_meaning();
    return 0;
}

/*

gcc `
C:\Users\29001\Desktop\code\fun-eg-v1\src\2_dynamic_flashs\gotoxy.c `
C:\Users\29001\Desktop\code\fun-eg-v1\src\1_basic_static_borders\outermost_rectangle.c `
C:\Users\29001\Desktop\code\fun-eg-v1\src\2_dynamic_flashs\word.c `
C:\Users\29001\Desktop\code\fun-eg-v1\src\1_basic_static_borders\print.c `
C:\Users\29001\Desktop\code\fun-eg-v1\src\2_dynamic_flashs\word_movement.c `
C:\Users\29001\Desktop\code\fun-eg-v1\src\4_vocabulary\strings.c `
C:\Users\29001\Desktop\code\fun-eg-v1\src\4_vocabulary\strings_array.c `
C:\Users\29001\Desktop\code\fun-eg-v1\src\3_apps\level0_just_screen_saver\change_words_in_a_configurable_frequence.c `
C:\Users\29001\Desktop\code\fun-eg-v1\src\3_apps\level0_just_screen_saver\screen_saver.c `
C:\Users\29001\Desktop\code\fun-eg-v1\src\3_apps\level0_just_screen_saver\change_string_and_meaning_if_it_is_hiting_the_wall.c `
C:\Users\29001\Desktop\code\fun-eg-v1\src\3_apps\level0_just_screen_saver\test\screen_saver_main.c `

-o `    
C:\Users\29001\Desktop\code\fun-eg-v1\src\3_apps\level0_just_screen_saver\test\screen_saver_main.exe

*/```

- 完整文件路径：`C:\Users\29001\Desktop\code\fun-eg-v1\src\3_apps\level0_just_screen_saver\test\screen_saver_main1.exe`
```c
读取失败：'gbk' codec can't decode byte 0x90 in position 2: illegal multibyte sequence
```

- 完整文件路径：`C:\Users\29001\Desktop\code\fun-eg-v1\src\3_apps\level0_just_screen_saver\test\screen_saver_main2.exe`
```c
读取失败：'gbk' codec can't decode byte 0x90 in position 2: illegal multibyte sequence
```

- 完整文件路径：`C:\Users\29001\Desktop\code\fun-eg-v1\src\3_apps\level0_just_screen_saver\test\test_word_can_be_load.c`
```c
#include "../../../../include/__include.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
     // srand 只在main开头执行一次！
    srand((unsigned int)time(NULL));
    String_and_meaning* string_and_meaning = get_random_string_and_meaning();
    printf("%s\n", string_and_meaning->string);
    return 0;
}
/*

gcc `
C:\Users\29001\Desktop\code\fun-eg-v1\src\2_dynamic_flashs\gotoxy.c `
C:\Users\29001\Desktop\code\fun-eg-v1\src\1_basic_static_borders\outermost_rectangle.c `
C:\Users\29001\Desktop\code\fun-eg-v1\src\2_dynamic_flashs\word.c `
C:\Users\29001\Desktop\code\fun-eg-v1\src\1_basic_static_borders\print.c `
C:\Users\29001\Desktop\code\fun-eg-v1\src\2_dynamic_flashs\word_movement.c `
C:\Users\29001\Desktop\code\fun-eg-v1\src\4_vocabulary\strings.c `
C:\Users\29001\Desktop\code\fun-eg-v1\src\4_vocabulary\strings_array.c `
C:\Users\29001\Desktop\code\fun-eg-v1\src\3_apps\level0_just_screen_saver\change_words_in_a_configurable_frequence.c `
C:\Users\29001\Desktop\code\fun-eg-v1\src\3_apps\level0_just_screen_saver\screen_saver.c `
C:\Users\29001\Desktop\code\fun-eg-v1\src\3_apps\level0_just_screen_saver\test\test_word_can_be_load.c `

-o `    
C:\Users\29001\Desktop\code\fun-eg-v1\src\3_apps\level0_just_screen_saver\test\test_word_can_be_load.exe

*/```

- 完整文件路径：`C:\Users\29001\Desktop\code\fun-eg-v1\src\3_apps\level0_just_screen_saver\test\test_word_can_be_load.exe`
```c
读取失败：'gbk' codec can't decode byte 0x90 in position 2: illegal multibyte sequence
```

---
扫描完成，已完全跳过：
1. include\4_vocaulary
2. src\4_vocabulary