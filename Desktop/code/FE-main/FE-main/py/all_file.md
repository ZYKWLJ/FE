# 源码汇总（include + src，精准跳过指定两个4_vocabulary目录）

## 扫描根目录：`C:\Users\29001\Desktop\code\fun-eg-v1\include`

- 完整文件路径：`C:\Users\29001\Desktop\code\fun-eg-v1\include\__include.h`
```c
#ifndef __INCLUDE_H_
#define __INCLUDE_H_
#include<stdio.h>

#include "0_log/log.h"

#include "2_dynamic_flashs/gotoxy.h"

#include "1_basic_static_borders/rectangle.h"

#include "1_basic_static_borders/print.h"

#include "1_basic_static_borders/outermost_rectangle.h"

#include "1_basic_static_borders/word_rectangle.h"

#include "2_dynamic_flashs/word.h"

#include "2_dynamic_flashs/word_movement.h"

#include "4_vocaulary/strings.h"

#include "4_vocaulary/strings_array.h"

#include "3_apps/level_0_just_screen_saver/change_words_in_a_configurable_frequence.h"

#include "3_apps/level_0_just_screen_saver/screen_saver.h"

#include "3_apps/level_0_just_screen_saver/change_string_and_meaning_if_it_is_hiting_the_wall.h"

#include "3_apps/level_1_T_F_questions/static_word_and_meaning_just_to_judge.h"

#include "3_apps/level_1_T_F_questions/press_key_to_change.h"

#include "3_apps/mode_choose.h"

#include "3_apps/mode_flash.h"
#include "3_apps/mode_actions.h"

#include "3_apps/level_1_T_F_questions/hook_or_fork.h"


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
#include "../__include.h"

#define DEFAULT_BORDER_CORNER '+'
#define DEFAULT_BORDER_CORNER_DOT '.'
#define DEFAULT_BORDER_VERTICAL '|'
#define DEFAULT_BORDER_HORIZONTAL '-'

// #define OUTERMOST_BORDER_CORNER '+'
// #define OUTERMOST_BORDER_VERTICAL '|'
// #define OUTERMOST_BORDER_HORIZONTAL '-'

#define OUTERMOST_BORDER_ALL_IN_ONE '#'

#define OUTERMOST_BORDER_CORNER  OUTERMOST_BORDER_ALL_IN_ONE
#define OUTERMOST_BORDER_VERTICAL  OUTERMOST_BORDER_ALL_IN_ONE
#define OUTERMOST_BORDER_HORIZONTAL  OUTERMOST_BORDER_ALL_IN_ONE



/*this is outermost top left coordinate*/
#define OUTERMOST_BORDER_X 38
#define OUTERMOST_BORDER_Y 16



/*this is outermost width and height*/
#define OUTERMOST_BORDER_WIDTH 66
#define OUTERMOST_BORDER_HEIGHT 20

/*this is meaning border margin*/
#define MEANING_MIDDLE_MARGIN 5

/*this is T_F meaning margin*/
#define T_F_MEANING_MARGIN 5

/*this is T_F bottom margin*/
#define T_F_BOTTOM_MARGIN 5

/*this is the gap between the middle area and the side function area*/
#define LEFT_MIDDLE_MARGIN 4 
#define RIGHT_MIDDLE_MARGIN LEFT_MIDDLE_MARGIN 
#define TOP_MIDDLE_MARGIN LEFT_MIDDLE_MARGIN 
#define BOTTOM_MIDDLE_MARGIN MEANING_MIDDLE_MARGIN +T_F_BOTTOM_MARGIN+ MARGIN_WORD_BORDER_Y+MARGIN_WORD_BORDER_Y

/*this is _something about left gamelist_are*/
#define GAMELIST_WIDTH 30
#define GAMELIST_HEIGHT TOP_MIDDLE_MARGIN + BOTTOM_MIDDLE_MARGIN + OUTERMOST_BORDER_HEIGHT+TOP_MIDDLE_MARGIN+RIGHT_MIDDLE_MARGIN


/*this is coordinate of all key points*/

/*this is the outermost border's topleft as well as our benchmark*/
#define COORDINATE_MIDDLE_TOP_LEFT_X OUTERMOST_BORDER_X
#define COORDINATE_MIDDLE_TOP_LEFT_Y OUTERMOST_BORDER_Y

/*this is gamelist */

/*this is gamelist topleft*/
#define COORDINATE_GAMELIST_TOP_LEFT_X COORDINATE_MIDDLE_TOP_LEFT_X-LEFT_MIDDLE_MARGIN-GAMELIST_WIDTH
#define COORDINATE_GAMELIST_TOP_LEFT_Y COORDINATE_MIDDLE_TOP_LEFT_Y-RIGHT_MIDDLE_MARGIN-TOP_MIDDLE_MARGIN
/*this is gamelist topright*/
#define COORDINATE_GAMELIST_TOP_RIGHT_X COORDINATE_GAMELIST_TOP_LEFT_X+GAMELIST_WIDTH
#define COORDINATE_GAMELIST_TOP_RIGHT_Y COORDINATE_GAMELIST_TOP_LEFT_Y
/*this is gamelist bottomleft*/
#define COORDINATE_GAMELIST_BOTTOM_LEFT_X COORDINATE_GAMELIST_TOP_LEFT_X
#define COORDINATE_GAMELIST_BOTTOM_LEFT_Y COORDINATE_GAMELIST_TOP_LEFT_Y+GAMELIST_HEIGHT
/*this is gamelist bottomright*/
#define COORDINATE_GAMELIST_BOTTOM_RIGHT_X COORDINATE_GAMELIST_TOP_LEFT_X+GAMELIST_WIDTH
#define COORDINATE_GAMELIST_BOTTOM_RIGHT_Y COORDINATE_GAMELIST_TOP_LEFT_Y+GAMELIST_HEIGHT


/*we need't calculate the setting area,cuz it's overlap with the side two area*/
/*this is setting area*/

/*this is setting_area size*/
#define SETTING_AREA_WIDTH LEFT_MIDDLE_MARGIN*2+OUTERMOST_BORDER_WIDTH
#define SETTING_AREA_HEIGHT TOP_MIDDLE_MARGIN
/*this is setting_area left*/

/*this is setting_area bottomleft*/
#define COORDINATE_SETTING_AREA_BOTTOM_LEFT_X COORDINATE_GAMELIST_TOP_RIGHT_X
#define COORDINATE_SETTING_AREA_BOTTOM_LEFT_Y COORDINATE_GAMELIST_TOP_RIGHT_Y+TOP_MIDDLE_MARGIN
/*this is setting_area bottomright*/
#define COORDINATE_SETTING_AREA_BOTTOM_RIGHT_X COORDINATE_SETTING_AREA_BOTTOM_LEFT_X+SETTING_AREA_WIDTH
#define COORDINATE_SETTING_AREA_BOTTOM_RIGHT_Y COORDINATE_SETTING_AREA_BOTTOM_LEFT_Y

/*this is the right scorelist area*/
#define SCORELIST_WIDTH GAMELIST_WIDTH
#define SCORELIST_HEIGHT GAMELIST_HEIGHT

/*this is right scorelist topleft*/
#define COORDINATE_SCORELIST_TOP_LEFT_X COORDINATE_GAMELIST_TOP_LEFT_X+GAMELIST_WIDTH+SETTING_AREA_WIDTH
#define COORDINATE_SCORELIST_TOP_LEFT_Y COORDINATE_GAMELIST_TOP_LEFT_Y
/*this is right scorelist topright*/
#define COORDINATE_SCORELIST_TOP_RIGHT_X COORDINATE_SCORELIST_TOP_LEFT_X+SCORELIST_WIDTH
#define COORDINATE_SCORELIST_TOP_RIGHT_Y COORDINATE_SCORELIST_TOP_LEFT_Y
/*this is right scorelist bottomleft*/
#define COORDINATE_SCORELIST_BOTTOM_LEFT_X COORDINATE_SCORELIST_TOP_LEFT_X
#define COORDINATE_SCORELIST_BOTTOM_LEFT_Y COORDINATE_SCORELIST_TOP_LEFT_Y+SCORELIST_HEIGHT
/*this is right scorelist bottomright*/
#define COORDINATE_SCORELIST_BOTTOM_RIGHT_X COORDINATE_SCORELIST_TOP_LEFT_X+SCORELIST_WIDTH
#define COORDINATE_SCORELIST_BOTTOM_RIGHT_Y COORDINATE_SCORELIST_TOP_LEFT_Y+SCORELIST_HEIGHT

// void print_horizontal_line(int x1,int x2,int y);
// void print_vertical_line(int x,int y1,int y2);

/*all the scope is various rectangle, that's all*/
/*biggest one*/
#define BIGGEST_RECTANGLE_COORDINATE_X COORDINATE_GAMELIST_TOP_LEFT_X
#define BIGGEST_RECTANGLE_COORDINATE_Y COORDINATE_GAMELIST_TOP_LEFT_Y
#define BIGGEST_RECTANGLE_WIDTH GAMELIST_WIDTH*2+SETTING_AREA_WIDTH
#define BIGGEST_RECTANGLE_HEIGHT GAMELIST_HEIGHT

/*setting one*/
#define SETTING_RECTANGLE_COORDINATE_X COORDINATE_MIDDLE_TOP_LEFT_X
#define SETTING_RECTANGLE_COORDINATE_Y COORDINATE_GAMELIST_TOP_RIGHT_Y
#define SETTING_RECTANGLE_WIDTH SETTING_AREA_WIDTH
#define SETTING_RECTANGLE_HEIGHT SETTING_AREA_HEIGHT

/*last UNDER_MIDDLE under the outermost*/
#define UNDER_MIDDLE_RECTANGLE_COORDINATE_X COORDINATE_MIDDLE_TOP_LEFT_X
#define UNDER_MIDDLE_RECTANGLE_COORDINATE_Y COORDINATE_GAMELIST_TOP_LEFT_Y
#define UNDER_MIDDLE_RECTANGLE_WIDTH OUTERMOST_BORDER_WIDTH
#define UNDER_MIDDLE_RECTANGLE_HEIGHT GAMELIST_HEIGHT

/*this is gamelist mode choose module*/


#define CHOOSE_MODULE_RECTANGLE_COORDINATE_X COORDINATE_GAMELIST_TOP_LEFT_X
#define CHOOSE_MODULE_RECTANGLE_COORDINATE_Y COORDINATE_GAMELIST_TOP_LEFT_Y
#define CHOOSE_MODULE_RECTANGLE_WIDTH GAMELIST_WIDTH+LEFT_MIDDLE_MARGIN+1
#define CHOOSE_MODULE_RECTANGLE_HEIGHT GAMELIST_HEIGHT

/*this is t or f block*/
#define COORDINATE_T_X OUTERMOST_BORDER_X + OUTERMOST_BORDER_WIDTH / 4 - (4+1)/ 2
#define COORDINATE_T_Y OUTERMOST_BORDER_Y + OUTERMOST_BORDER_HEIGHT + T_F_MEANING_MARGIN + MEANING_MIDDLE_MARGIN + MARGIN_WORD_BORDER_Y
#define COORDINATE_F_X OUTERMOST_BORDER_X + OUTERMOST_BORDER_WIDTH / 4 - (4+1)/2 + OUTERMOST_BORDER_WIDTH / 2
#define COORDINATE_F_Y COORDINATE_T_Y


/*this is under develop tips*/
#define UNDER_DEVELOP_TIPS "This feature is under development."

/*this is setting develop tips*/
#define SETTING_DEVELOP_TIPS "Setting Area..."

/*this is game mode tips*/
#define GAME_MODE_TIPS "Game Mode"

/*this is score list tips*/
#define SCORE_LIST_TIPS "Score List"


_Rectangle * init_outermost_rectangle();
_Rectangle * init_biggest_rectangle();
_Rectangle * init_setting_rectangle();
_Rectangle * init_under_middle_rectangle();
_Rectangle * init_selected_mode_choose_mudule_to_red();


#endif /* OUTERMOST_RECTANGLE_H_ */```

- 完整文件路径：`C:\Users\29001\Desktop\code\fun-eg-v1\include\1_basic_static_borders\print.h`
```c
#include "../__include.h"
#ifndef PRINT_H_

#endif /* PRINT_H_ */
#define GREEN "\033[32m"  // 绿色专用于请输入指令提示信息
#define RED "\033[31m"    // 红色专用于错误提示信息
#define BLUE "\033[34m"   // 蓝色专用于章节名
#define PURPLE "\033[35m" // 紫色专用于指引信息
#define YELLOW "\033[33m" // 黄色专用于各个指令执行前缀！
#define RESET "\033[0m"
#define BOLD "\033[1m" // 加粗

#define error_line_x  OUTERMOST_BORDER_X + OUTERMOST_BORDER_WIDTH / 4 - 5 / 2
#define error_line_y OUTERMOST_BORDER_Y + OUTERMOST_BORDER_HEIGHT + MEANING_MIDDLE_MARGIN+T_F_MEANING_MARGIN + MARGIN_WORD_BORDER_Y + 7

#define error_chars BOLD RED "ERROR:" RESET
#define  green_chars BOLD GREEN "Tips:" RESET
#define  empty_chars BOLD GREEN "     " RESET
void error_print(char *chars);
void green_print(char *chars);
void empty_error_or_green_print(char *chars);

void init_basic_layout();
void print_selected_mode_choose_mudule_to_red();

void print_outermost_rectangle_to_red();
#define PRINT_H_```

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

void print_rectangle_miss_left_border(_Rectangle *rectangle);

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


#define T_F_BORDER_DOT '.'
#define T_F_BORDER_DOT_EMPTY ' '
#define T_F_BORDER_CORNER T_F_BORDER_DOT
#define T_F_BORDER_VERTICAL '|'
#define T_F_BORDER_HORIZONTAL '-'

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
void print_word_green(Word* word);    
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

- 完整文件路径：`C:\Users\29001\Desktop\code\fun-eg-v1\include\3_apps\mode_actions.h`
```c
#ifndef MODE_ACTIONS_H_
#define MODE_ACTIONS_H_

void mode_1_action(Word*word,String_and_meaning*string_and_meaning);
void mode_2_action();
void mode_3_action();
void mode_4_action();

#endif /* MODE_ACTIONS_H_ */```

- 完整文件路径：`C:\Users\29001\Desktop\code\fun-eg-v1\include\3_apps\mode_choose.h`
```c
#ifndef MODE_CHOOSE_H_
#define MODE_CHOOSE_H_
#define MODE_CHOOSE_X COORDINATE_GAMELIST_TOP_LEFT_X+3
#define MODE_CHOOSE_Y COORDINATE_MIDDLE_TOP_LEFT_Y
extern int cur_mode;
extern int last_mode;
extern int if_enter ;

int choose_mode(Word *word, Word *meaning, String_and_meaning *string_and_meaning);
void init_print_all_mode_green_and_show_desc();
void only_print_my_mode_green_and_show_desc();
Word *init_under_develop_tips(char* string);
Word *init_setting_develop_tips(char *setting_develop_tips);
Word *init_game_mode_tips(char *game_mode_tips);
Word *init_score_list_tips(char *score_list_tips);
#endif /* MODE_CHOOSE_H_ */```

- 完整文件路径：`C:\Users\29001\Desktop\code\fun-eg-v1\include\3_apps\mode_flash.h`
```c
#ifndef MODE_SHOW_H_
#define MODE_SHOW_H_


void show_mode_flash(int mode,Word*word,Word*meaning,String_and_meaning*string_and_meaning);
#endif /* MODE_SHOW_H_ */```

- 完整文件路径：`C:\Users\29001\Desktop\code\fun-eg-v1\include\3_apps\level_0_just_screen_saver\change_string_and_meaning_if_it_is_hiting_the_wall.h`
```c
#include "../../__include.h"

#include "../../../include/__include.h"

bool is_word_hiting_the_wall(Word *word);
// bool not_in_the_outermost_if_we_change_the_word(String_and_meaning *string_and_meaning, Word *word);

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
void screen_saver_word_and_meaning();
Word* init_word_with_string_and_meaning_for_screen_saver_with_random_xy(String_and_meaning* string_and_meaning);
Word *init_meaning_with_string_and_meaning_for_screen_saver_with_random_xy(String_and_meaning *string_and_meaning);```

- 完整文件路径：`C:\Users\29001\Desktop\code\fun-eg-v1\include\3_apps\level_1_T_F_questions\hook_or_fork.h`
```c
#ifndef HOOK_OR_FORK_H_
#define HOOK_OR_FORK_H_
#define HOOK_COMPONENT_NUM 3
#define HOOK_COMPONENT_EMPTY ' '
// char hook_components[3];
// int offset_coordinate_of_hook[][2];
void print_hook(int x_t_of_f,int y_t_of_f);
void print_hook_empty(int x_t_of_f,int y_t_of_f);
#define FORK_COMPONENT_NUM 4
#define FORK_COMPONENT_EMPTY ' '
// char fork_components[4];
// int offset_coordinate_of_fork[][2];
void print_fork(int x_t_of_f,int y_t_of_f);
void print_fork_empty(int x_t_of_f,int y_t_of_f);


#endif /* HOOK_OR_FORK_H_ */```

- 完整文件路径：`C:\Users\29001\Desktop\code\fun-eg-v1\include\3_apps\level_1_T_F_questions\press_key_to_change.h`
```c
#ifndef PRESS_KEY_TO_CHANGE_H_
#define PRESS_KEY_TO_CHANGE_H_

char judge_key_pressed(Word *word, Word *meaning, String_and_meaning *string_and_meaning);

#endif /* PRESS_KEY_TO_CHANGE_H_ */```

- 完整文件路径：`C:\Users\29001\Desktop\code\fun-eg-v1\include\3_apps\level_1_T_F_questions\static_word_and_meaning_just_to_judge.h`
```c
#ifndef STATIC_WORD_AND_MEANING_JUST_TO_JUDGE_H_
#define STATIC_WORD_AND_MEANING_JUST_TO_JUDGE_H_
void print_f();
void print_t();
Word *init_word_with_string_and_meaning_for_T_F_questions_with_constant_xy(String_and_meaning *string_and_meaning);
Word *init_meaning_with_string_and_meaning_for_T_F_questions_with_constant_xy(String_and_meaning *string_and_meaning);
void print_column_t_f_vertical();
void print_row_t_horizontal();
void print_row_f_horizontal();

void T_F_questions();
void Judge_meaning_with_random_another_word(Word *word, Word *meaning, String_and_meaning *string_and_meaning);
#endif /* STATIC_WORD_AND_MEANING_JUST_TO_JUDGE_H_ */```

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



// void print_horizontal_line(int x1,int x2,int y){
//     for(int x=x1;x<=x2;x++){
//         gotoxy(x,y);
//         printf("%c",);
//     }
// }

// void print_vertical_line(int x,int y1,int y2){


// }

_Rectangle biggest_rectangle = {
    .coordinate = {
        .x = BIGGEST_RECTANGLE_COORDINATE_X,
        .y = BIGGEST_RECTANGLE_COORDINATE_Y},
    .width_and_height = {.width = BIGGEST_RECTANGLE_WIDTH, .height = BIGGEST_RECTANGLE_HEIGHT},
    .pattern = {.corner = DEFAULT_BORDER_CORNER, .vertical = DEFAULT_BORDER_VERTICAL, .horizontal = DEFAULT_BORDER_HORIZONTAL}
};

_Rectangle setting_rectangle = {
    .coordinate = {
        .x = SETTING_RECTANGLE_COORDINATE_X,
        .y = SETTING_RECTANGLE_COORDINATE_Y},
    .width_and_height = {.width = SETTING_RECTANGLE_WIDTH, .height = SETTING_RECTANGLE_HEIGHT},
    .pattern = {.corner = DEFAULT_BORDER_CORNER, .vertical = DEFAULT_BORDER_VERTICAL, .horizontal = DEFAULT_BORDER_HORIZONTAL}
};

_Rectangle under_middle_rectangle = {
    .coordinate = {
        .x = UNDER_MIDDLE_RECTANGLE_COORDINATE_X,
        .y = UNDER_MIDDLE_RECTANGLE_COORDINATE_Y},
    .width_and_height = {.width = UNDER_MIDDLE_RECTANGLE_WIDTH, .height = UNDER_MIDDLE_RECTANGLE_HEIGHT},
    .pattern = {.corner = DEFAULT_BORDER_CORNER, .vertical = DEFAULT_BORDER_VERTICAL, .horizontal = DEFAULT_BORDER_HORIZONTAL}
};

_Rectangle choose_module_rectangle = {
    .coordinate = {
        .x = CHOOSE_MODULE_RECTANGLE_COORDINATE_X,
        .y = CHOOSE_MODULE_RECTANGLE_COORDINATE_Y},
    .width_and_height = {.width = CHOOSE_MODULE_RECTANGLE_WIDTH, .height = CHOOSE_MODULE_RECTANGLE_HEIGHT},
    .pattern = {.corner = DEFAULT_BORDER_CORNER, .vertical = DEFAULT_BORDER_VERTICAL, .horizontal = DEFAULT_BORDER_HORIZONTAL}
};


_Rectangle * init_outermost_rectangle()
{
    return &outermost_rectangle;
}

_Rectangle * init_biggest_rectangle()
{
    return &biggest_rectangle;
}

_Rectangle * init_setting_rectangle()
{
    return &setting_rectangle;
}

_Rectangle * init_under_middle_rectangle()
{
    return &under_middle_rectangle;
}

_Rectangle * init_selected_mode_choose_mudule_to_red(){
    return &choose_module_rectangle;
}


```

- 完整文件路径：`C:\Users\29001\Desktop\code\fun-eg-v1\src\1_basic_static_borders\print.c`
```c
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

void print_word_green(Word *word)
{
    printf("%s%s", GREEN, BOLD);
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
}```

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
#if 0
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
#endif
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
#if 0
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

#endif
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
}

```

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
}

 ```

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
2. src\4_vocabulary```

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
#if 0
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

#endif
// gcc C:\Users\29001\Desktop\code\fun-eg-v1\src\2_dynamic_flashs\gotoxy.c  C:\Users\29001\Desktop\code\fun-eg-v1\src\1_basic_static_borders\outermost_rectangle.c C:\Users\29001\Desktop\code\fun-eg-v1\src\2_dynamic_flashs\word.c  C:\Users\29001\Desktop\code\fun-eg-v1\src\1_basic_static_borders\print.c C:\Users\29001\Desktop\code\fun-eg-v1\src\2_dynamic_flashs\word_movement.c C:\Users\29001\Desktop\code\fun-eg-v1\src\2_dynamic_flashs\test\test_print_and_move_main.c -o C:\Users\29001\Desktop\code\fun-eg-v1\src\2_dynamic_flashs\test\test_print_and_move_main.exe```

- 完整文件路径：`C:\Users\29001\Desktop\code\fun-eg-v1\src\2_dynamic_flashs\test\test_print_and_move_main.exe`
```c
读取失败：'gbk' codec can't decode byte 0x90 in position 2: illegal multibyte sequence
```

- 完整文件路径：`C:\Users\29001\Desktop\code\fun-eg-v1\src\3_apps\mode_actions.c`
```c
#include "../../include/__include.h"

void mode_1_action(Word *word, String_and_meaning *string_and_meaning)
{
    system("cls");
    init_basic_layout();
    init_print_all_mode_green_and_show_desc();
    while (1)
    {
        only_print_my_mode_green_and_show_desc();
        print_outermost_rectangle_to_red();
        /*this is black-white-tv action*/
        print_word(word);
        // Word *meaning = init_meaning_with_string_and_meaning_for_screen_saver_with_border_xy(string_and_meaning);
        // print_word(meaning);
        Sleep(200); // duration 1 s
        LOG("start print word empty.\n");
        print_word_empty(init_word_empty(word));
        if (is_word_hiting_the_wall(word))
            change_word_use_string_and_meaning(word, get_random_string_and_meaning());
        next_step_of_the_word(word);

        if (_kbhit())
        {
            int key = _getch();
            // 扩展键（方向键、功能键等）全部无效
            if (key == 0xE0 || key == 0)
            {
                (void)_getch(); // 吃掉扩展键第二个字节，清空缓冲区
                error_print("only press ESC key");
            }
            else if (key == 27) // ESC 键 ASCII=27
            {
                // 检测到ESC，这里添加你需要的处理逻辑
                // 示例：break跳出循环 / return 退出函数
                break;
            }
            else if (key == 0x0D) // 回车也不允许
            {
                error_print("only press ESC key to select mode");
            }
            else
            {
                error_print("only press ESC key to select mode");
            }
        }
    }
}
// void mode_2_action()
// {

//     system("cls");
//     init_basic_layout();
//     init_print_all_mode_green_and_show_desc();

//     /*

//         /
//     \  /
//      \/

//     \  /
//      \/
//      /\
//     /  \


//        /
//      \/

//     (x_t+1)
//      \/
//      /\
//     .___.

//     */
//     while (1)
//     {
//         // This feature is under development.
//         print_word(init_under_develop_tips(UNDER_DEVELOP_TIPS));
//         if (_kbhit())
//         {
//             int key = _getch();
//             // 扩展键（方向键、功能键等）全部无效
//             if (key == 0xE0 || key == 0)
//             {
//                 (void)_getch(); // 吃掉扩展键第二个字节，清空缓冲区
//                 error_print("only press ESC key");
//             }
//             else if (key == 27) // ESC 键 ASCII=27
//             {
//                 // 检测到ESC，这里添加你需要的处理逻辑
//                 // 示例：break跳出循环 / return 退出函数
//                 break;
//             }
//             else if (key == 0x0D) // 回车也不允许
//             {
//                 error_print("only press ESC key to select mode");
//             }
//             else
//             {
//                 error_print("only press ESC key to select mode");
//             }
//         }
//     }
// }

#define T_F_PERCENT 2 // 50%

bool equal(Word *wait_for_judge, Word *origin_meaning)
{
    return strcmp(wait_for_judge->word, origin_meaning->word) == 0;
}

void print_ready_choose_t()
{
    // // white means Not be choosed
    // print_f();
    // green means be choosed
    print_column_t_f_vertical();
    print_row_t_horizontal();
}
void print_ready_choose_f()
{
    // // white means Not be choosed
    // print_f();
    // green means be choosed
    print_column_t_f_vertical();
    print_row_f_horizontal();
}

void print_ready_choose_t_or_f(char t_or_f)
{
    if (t_or_f == 'T')
    {
        print_ready_choose_t();
    }
    else if (t_or_f == 'F')
    {
        print_ready_choose_f();
    }
}
void print_choose_t_right_green()
{
    // // white means Not be choosed
    // print_f();
    // green means be choosed
    printf("%s%s", GREEN, BOLD);
    print_t();
    print_column_t_f_vertical();
    print_row_t_horizontal();
    printf("%s", RESET);
}

void print_choose_t_wrong_red()
{
    // // white means Not be choosed
    // print_f();
    // green means be choosed
    printf("%s%s", RED, BOLD);
    print_t();
    print_column_t_f_vertical();
    print_row_t_horizontal();
    printf("%s", RESET);
}

void print_choose_f_right_green()
{
    // // white means Not be choosed
    // print_f();
    // green means be choosed
    printf("%s%s", GREEN, BOLD);
    print_f();
    print_column_t_f_vertical();
    print_row_f_horizontal();
    printf("%s", RESET);
}

void print_choose_f_wrong_red()
{
    // // white means Not be choosed
    // print_f();
    // green means be choosed
    printf("%s%s", RED, BOLD);
    print_f();
    print_column_t_f_vertical();
    print_row_f_horizontal();
    printf("%s", RESET);
}

void print_hook_on_t_and_eliminate_f()
{
    print_hook(COORDINATE_T_X, COORDINATE_T_Y);
    print_hook_empty(COORDINATE_F_X, COORDINATE_F_Y);
}

void print_hook_on_f_and_eliminate_t()
{
    print_hook(COORDINATE_F_X, COORDINATE_F_Y);
    print_hook_empty(COORDINATE_T_X, COORDINATE_T_Y);
}

void print_hook_eliminate_t_and_f()
{
    print_hook_empty(COORDINATE_T_X, COORDINATE_T_Y);
    print_hook_empty(COORDINATE_F_X, COORDINATE_F_Y);
}
void show_the_right_answer_with_hook(bool T_OR_F_JUDGMENT)
{
    if (T_OR_F_JUDGMENT)
    {
        print_hook_on_t_and_eliminate_f();
    }
    else
    {
        print_hook_on_f_and_eliminate_t();
    }
}

void empty_the_right_answer_with_hook()
{
    print_hook_eliminate_t_and_f();
}
void T_F_question()
{
    while (1)
    {
        String_and_meaning *origin_string_and_meaning = get_random_string_and_meaning();
        // This feature is under development.
        Word *origin_word = init_word_with_string_and_meaning_for_T_F_questions_with_constant_xy(origin_string_and_meaning);
        // Word *meaning = init_word_with_string_and_meaning_for_screen_saver_with_random_xy(origin_string_and_meaning);
        Word *origin_meaning = init_meaning_with_string_and_meaning_for_T_F_questions_with_constant_xy(origin_string_and_meaning);
        // Judge_meaning_with_random_another_word(word1, meaning1, string_and_meaning);
        print_word(origin_word);
        // print_word(meaning1);
        Word *T_F_word_array[T_F_PERCENT];
        T_F_word_array[0] = origin_word;
        for (int i = 1; i < T_F_PERCENT; i++)
        {
            T_F_word_array[i] = init_meaning_with_string_and_meaning_for_T_F_questions_with_constant_xy(get_random_string_and_meaning());
        }

        Word *wait_for_judge = T_F_word_array[rand() % T_F_PERCENT];

        //this Is the below word waiting for judge!
        print_word(wait_for_judge);

        bool T_OR_F_JUDGMENT = equal(wait_for_judge, origin_meaning);
        // default key is 'T';
        char t_or_f_key = 'T';
        print_t();
        print_f();
        print_ready_choose_t_or_f(t_or_f_key);

        int key;
        while (1)
        {
            if (!_kbhit())
            {
                Sleep(10);
                continue;
            }
            key = _getch();

            // 处理扩展键：主键盘方向键0xE0 / 小键盘方向键0
            if (key == 0xE0 || key == 0)
            {
                int extCode = _getch(); // 读取第二字节扫描码
                if (extCode == 0x48 || extCode == 0x50 || extCode == 0x4B || extCode == 0x4D)
                {
                    // 上下左右箭头切换选项
                    t_or_f_key = (t_or_f_key == 'T') ? 'F' : 'T';
                    print_ready_choose_t_or_f(t_or_f_key);
                }
                // 其他扩展键不报错，直接跳过
                continue;
            }
            else if (key == 27) // ESC 键 ASCII=27
            {
                // 检测到ESC，这里添加你需要的处理逻辑
                // 示例：break跳出循环 / return 退出函数
                break;
            }
            else if (key == 'T' || key == 't')
            {
                // white means Not be choosed
                print_f();
                if (T_OR_F_JUDGMENT)
                {
                    // green means be choosed right
                    print_choose_t_right_green();
                }
                else
                {
                    // red means be choosed wrong
                    print_choose_t_wrong_red();
                }
                break;
            }
            else if (key == 'F' || key == 'f')
            {
                // white means Not be choosed
                print_t();
                if (!T_OR_F_JUDGMENT)
                {
                    // green means be choosed right
                    print_choose_f_right_green();
                }
                else
                { // red means be choosed wrong
                    print_choose_f_wrong_red();
                }
                break;
            }
            // T default key
            else if (key == 0x0D) // enter key
            {

                // error_print("only press ESC key to select mode");
                if (T_OR_F_JUDGMENT && t_or_f_key == 'T')
                {
                    // green means be choosed right
                    print_choose_t_right_green();
                }
                else if (!T_OR_F_JUDGMENT && t_or_f_key == 'F')
                {
                    // green means be choosed right
                    print_choose_f_right_green();
                }
                else if (t_or_f_key == 'T')
                {
                    // red means be choosed wrong
                    print_choose_t_wrong_red();
                }
                else if (t_or_f_key == 'F')
                {
                    // red means be choosed wrong
                    print_choose_f_wrong_red();
                }
                break;

            } // just two keys,let's do it simply.We do it above.
            // else if (key == 0x4B /*left arrow*/ || key == 0x48 /*up arrow*/ || key == 0x4D /*right arrow*/ || key == 0x50 /*down arrow*/) // 左箭头 扩展键码
            // {
            //     t_or_f_key = t_or_f_key == 'T' ? 'F' : 'T';
            //     // break;
            // }
            else
            {
                error_print("More info will be added.");
            }
            print_ready_choose_t_or_f(t_or_f_key);
        }
        show_the_right_answer_with_hook(T_OR_F_JUDGMENT);

        green_print("Press enter to next word.");
        // 第一步：清空缓冲区所有残留按键
        while (_kbhit())
        {
            key = _getch();
            // 如果是扩展键前缀，多读一次把第二字节也吃掉
            if (key == 0xE0 || key == 0)
            {
                (void)_getch();
            }
        }
        while (1)
        {

            int key;
            if (!_kbhit())
            {
                Sleep(10);
                continue;
            }
            key = _getch();

            // 扩展键（功能键等）全部无效
            if (key == 0)
            {
                (void)_getch(); // 吃掉扩展键第二个字节，清空缓冲区
                // error_print("More info will be added.");
            }
            else if (key == 0x0D)
            {
                empty_error_or_green_print("Press enter to next word.");
                empty_the_right_answer_with_hook();
                break;
            }
        }
        print_word_empty(init_word_empty(origin_word));
        print_word_empty(init_word_empty(wait_for_judge));
    }
}
void mode_2_action()
{

    system("cls");
    init_basic_layout();
    init_print_all_mode_green_and_show_desc();


    T_F_question();
}
void mode_3_action()
{
    // This feature is under development.
    system("cls");
    init_basic_layout();
    init_print_all_mode_green_and_show_desc();
    while (1)
    {
        // This feature is under development.
        print_word(init_under_develop_tips(UNDER_DEVELOP_TIPS));
        if (_kbhit())
        {
            int key = _getch();
            // 扩展键（方向键、功能键等）全部无效
            if (key == 0xE0 || key == 0)
            {
                (void)_getch(); // 吃掉扩展键第二个字节，清空缓冲区
                error_print("only press ESC key");
            }
            else if (key == 27) // ESC 键 ASCII=27
            {
                // 检测到ESC，这里添加你需要的处理逻辑
                // 示例：break跳出循环 / return 退出函数
                break;
            }
            else if (key == 0x0D) // 回车也不允许
            {
                error_print("only press ESC key to select mode");
            }
            else
            {
                error_print("only press ESC key to select mode");
            }
        }
    }
}

void mode_4_action()
{
    // This feature is under development.
    system("cls");
    init_basic_layout();
    init_print_all_mode_green_and_show_desc();
    while (1)
    {
        // This feature is under development.
        print_word(init_under_develop_tips(UNDER_DEVELOP_TIPS));
        if (_kbhit())
        {
            int key = _getch();
            // 扩展键（方向键、功能键等）全部无效
            if (key == 0xE0 || key == 0)
            {
                (void)_getch(); // 吃掉扩展键第二个字节，清空缓冲区
                error_print("only press ESC key");
            }
            else if (key == 27) // ESC 键 ASCII=27
            {
                // 检测到ESC，这里添加你需要的处理逻辑
                // 示例：break跳出循环 / return 退出函数
                break;
            }
            else if (key == 0x0D) // 回车也不允许
            {
                error_print("only press ESC key to select mode");
            }
            else
            {
                error_print("only press ESC key to select mode");
            }
        }
    }
}```

- 完整文件路径：`C:\Users\29001\Desktop\code\fun-eg-v1\src\3_apps\mode_choose.c`
```c
#include "../../include/__include.h"

#define MODE1_NAME "mode1"
#define MODE1_DESC "screen saver"
// #define MODE1_DESC "only one keytab, no pressure"

#define MODE2_NAME "mode2"
#define MODE2_DESC "T/F questions"
// #define MODE2_DESC "all keyboards, no pressure"

#define MODE3_NAME "mode3"
#define MODE3_DESC "Developping"
// #define MODE3_DESC "all keyboards, time counter"

#define MODE4_NAME "mode4"
#define MODE4_DESC "Developping"
// #define MODE4_DESC "keyboards remove, time counter"

struct mode
{
    char mode_name[30];
    char mode_desc[64];
    int x;
    int y;
} modes[4] = {
    {MODE1_NAME, MODE1_DESC, MODE_CHOOSE_X, MODE_CHOOSE_Y},
    {MODE2_NAME, MODE2_DESC, MODE_CHOOSE_X, MODE_CHOOSE_Y + 1},
    {MODE3_NAME, MODE3_DESC, MODE_CHOOSE_X, MODE_CHOOSE_Y + 2},
    {MODE4_NAME, MODE4_DESC, MODE_CHOOSE_X, MODE_CHOOSE_Y + 3}};

int cur_mode = 0;
int last_mode = -1;
int if_enter = 0;

// 这是当前mode的打印操作
static void print_cur_mode_and_show_desc()
{
    // 跳转到指定mode文字处
    gotoxy(modes[cur_mode].x, modes[cur_mode].y);
    // 将前面的文字变绿,并变出来后面的说明
    printf("%s%s%s->%s%s", GREEN, BOLD, modes[cur_mode].mode_name, modes[cur_mode].mode_desc, RESET);
    // 将后面的文字清除
}
// 这是上一个mode的删除操作
static void clear_last_mode_and_show_desc()
{
    // 跳转到指定mode文字处
    gotoxy(modes[last_mode].x, modes[last_mode].y);
    // 将前面的文字变白
    printf("%s", modes[last_mode].mode_name);
    // 将后面的文字清除
    for (size_t i = 0; i <= strlen(modes[last_mode].mode_desc) + 1; i++)
    {
        printf(" ");
    }
}

void only_print_my_mode_green_and_show_desc()
{
    clear_last_mode_and_show_desc(last_mode);
    print_cur_mode_and_show_desc(cur_mode);
}

void init_print_all_mode_green_and_show_desc()
{
    print_cur_mode_and_show_desc(cur_mode);
    for (int i = 0; i < 4; i++)
    {
        if (i == cur_mode)
        {
            continue;
        }
        gotoxy(modes[i].x, modes[i].y);
        printf("%s", modes[i].mode_name);
    }
}
Word *init_under_develop_tips(char *under_develop_tips)
{
    Word *under_develop_tips_word = (Word *)malloc(sizeof(Word));

    // meaning->word = string_and_meaning->meaning;
    under_develop_tips_word->word = under_develop_tips;
    under_develop_tips_word->rectangle.width_and_height.width = strlen(under_develop_tips_word->word) + MARGIN_WORD_BORDER_X; // 字符串长度 + 左右边框
    under_develop_tips_word->rectangle.width_and_height.height = MARGIN_WORD_BORDER_Y;                        // 上下边框 + 字

    under_develop_tips_word->rectangle.coordinate.x = OUTERMOST_BORDER_X + OUTERMOST_BORDER_WIDTH / 2 - under_develop_tips_word->rectangle.width_and_height.width / 2;
    under_develop_tips_word->rectangle.coordinate.y = OUTERMOST_BORDER_Y + OUTERMOST_BORDER_HEIGHT / 2;

    under_develop_tips_word->rectangle.pattern.corner = DEFAULT_BORDER_CORNER_DOT;
    under_develop_tips_word->rectangle.pattern.vertical = DEFAULT_BORDER_VERTICAL;
    under_develop_tips_word->rectangle.pattern.horizontal = DEFAULT_BORDER_HORIZONTAL;

    return under_develop_tips_word;
}

Word *init_setting_develop_tips(char *setting_develop_tips)
{
    Word *setting_develop_tips_word = (Word *)malloc(sizeof(Word));

    // meaning->word = string_and_meaning->meaning;
    setting_develop_tips_word->word = setting_develop_tips;
    setting_develop_tips_word->rectangle.width_and_height.width = strlen(setting_develop_tips_word->word) + MARGIN_WORD_BORDER_X; // 字符串长度 + 左右边框
    setting_develop_tips_word->rectangle.width_and_height.height = MARGIN_WORD_BORDER_Y;                        // 上下边框 + 字

    setting_develop_tips_word->rectangle.coordinate.x = OUTERMOST_BORDER_X + OUTERMOST_BORDER_WIDTH / 2 - setting_develop_tips_word->rectangle.width_and_height.width / 2;
    setting_develop_tips_word->rectangle.coordinate.y = SETTING_RECTANGLE_COORDINATE_Y + 2;

    setting_develop_tips_word->rectangle.pattern.corner = DEFAULT_BORDER_CORNER_DOT;
    setting_develop_tips_word->rectangle.pattern.vertical = DEFAULT_BORDER_VERTICAL;
    setting_develop_tips_word->rectangle.pattern.horizontal = DEFAULT_BORDER_HORIZONTAL;

    return setting_develop_tips_word;
}

Word *init_game_mode_tips(char *game_mode_tips)
{
    Word *game_mode_tips_word = (Word *)malloc(sizeof(Word));

    // meaning->word = string_and_meaning->meaning;
    game_mode_tips_word->word = game_mode_tips;
    game_mode_tips_word->rectangle.width_and_height.width = strlen(game_mode_tips_word->word) + MARGIN_WORD_BORDER_X; // 字符串长度 + 左右边框
    game_mode_tips_word->rectangle.width_and_height.height = MARGIN_WORD_BORDER_Y;                        // 上下边框 + 字

    game_mode_tips_word->rectangle.coordinate.x = COORDINATE_GAMELIST_TOP_LEFT_X + GAMELIST_WIDTH / 2 - game_mode_tips_word->rectangle.width_and_height.width / 2;
    game_mode_tips_word->rectangle.coordinate.y = COORDINATE_GAMELIST_TOP_LEFT_Y + 2;

    game_mode_tips_word->rectangle.pattern.corner = DEFAULT_BORDER_CORNER_DOT;
    game_mode_tips_word->rectangle.pattern.vertical = DEFAULT_BORDER_VERTICAL;
    game_mode_tips_word->rectangle.pattern.horizontal = DEFAULT_BORDER_HORIZONTAL;

    return game_mode_tips_word;
}

Word *init_score_list_tips(char *score_list_tips)
{
    Word *score_list_tips_word = (Word *)malloc(sizeof(Word));

    // meaning->word = string_and_meaning->meaning;
    score_list_tips_word->word = score_list_tips;
    score_list_tips_word->rectangle.width_and_height.width = strlen(score_list_tips_word->word) + MARGIN_WORD_BORDER_X; // 字符串长度 + 左右边框
    score_list_tips_word->rectangle.width_and_height.height = MARGIN_WORD_BORDER_Y;                        // 上下边框 + 字

    score_list_tips_word->rectangle.coordinate.x = COORDINATE_SCORELIST_TOP_LEFT_X + SCORELIST_WIDTH / 2 - score_list_tips_word->rectangle.width_and_height.width / 2;
    score_list_tips_word->rectangle.coordinate.y = COORDINATE_SCORELIST_TOP_LEFT_Y + 2;

    score_list_tips_word->rectangle.pattern.corner = DEFAULT_BORDER_CORNER_DOT;
    score_list_tips_word->rectangle.pattern.vertical = DEFAULT_BORDER_VERTICAL;
    score_list_tips_word->rectangle.pattern.horizontal = DEFAULT_BORDER_HORIZONTAL;

    return score_list_tips_word;
}

int choose_mode(Word *word, Word *meaning, String_and_meaning *string_and_meaning)
{

    while (1)
    {
        only_print_my_mode_green_and_show_desc();
        // 显示动画的入口
        show_mode_flash(cur_mode, word, meaning, string_and_meaning);
        if (if_enter)
        {
            return cur_mode;
        }
        if (_kbhit())
        {
            int key = _getch();
            if (key == 0xE0 || key == 0)
            { // 表示这个是扩展键
                key = _getch();
                if (key == 0x48) // 上箭头
                {
                    last_mode = cur_mode;
                    cur_mode = cur_mode == 0 ? 3 : cur_mode - 1;
                    // system("cls");
                }
                else if (key == 0x50) // 下箭头
                {
                    last_mode = cur_mode;
                    cur_mode = cur_mode == 3 ? 0 : cur_mode + 1;
                    // system("cls");
                }
                else
                {
                    error_print("only up and down arrow key to choose mode");
                }
            }
            else if (key == 0x0D)
            {
                return cur_mode;
            }
            else
            {
                error_print("only up and down arrow key to choose mode");
            }
        }
    }
}```

- 完整文件路径：`C:\Users\29001\Desktop\code\fun-eg-v1\src\3_apps\mode_flash.c`
```c
#include "../../include/__include.h"
// 在上方显示出对应mode的样式！

static void show_mode_1_flash(Word *word, String_and_meaning *string_and_meaning)
{

    hide_cursor();
    system("cls");
    init_basic_layout();
    print_selected_mode_choose_mudule_to_red();
    init_print_all_mode_green_and_show_desc();
    print_word_green(init_setting_develop_tips(SETTING_DEVELOP_TIPS));
    print_word_green(init_game_mode_tips(GAME_MODE_TIPS));
    print_word_green(init_score_list_tips(SCORE_LIST_TIPS));
    while (1)
    {

        print_rectangle_miss_left_border(init_outermost_rectangle());
        /*this is black-white-tv action*/
        print_word(word);
        // Word *meaning = init_meaning_with_string_and_meaning_for_screen_saver_with_border_xy(string_and_meaning);
        // print_word(meaning);
        Sleep(200); // duration 1 s
        LOG("start print word empty.\n");
        print_word_empty(init_word_empty(word));
        if (is_word_hiting_the_wall(word))
            change_word_use_string_and_meaning(word, get_random_string_and_meaning());
        next_step_of_the_word(word);

        if (_kbhit())
        {
            int key = _getch();
            if (key == 0xE0 || key == 0)
            { // 表示这个是扩展键
                key = _getch();
                if (key == 0x48) // 上箭头
                {
                    last_mode = cur_mode;
                    cur_mode = cur_mode == 0 ? 3 : cur_mode - 1;
                    break;
                }
                else if (key == 0x50) // 下箭头
                {
                    last_mode = cur_mode;
                    cur_mode = cur_mode == 3 ? 0 : cur_mode + 1;
                    break;
                }
                else
                {
                    error_print("only up and down arrow key to choose mode");
                }
                // only_print_my_mode_green_and_show_desc();
            }
            else if (key == 0x0D)
            {
                if_enter = 1;
                return;
            }
            else
            {
                error_print("only up and down arrow key to choose mode");
            }
        }
    }
}

// 这是模式2的动画，就是在模式一个情况下，显示全部的键盘，按中为绿色，否则为白色
static void show_mode_2_flash(Word *word, Word *meaning, String_and_meaning *string_and_meaning)
{
    init_print_all_mode_green_and_show_desc();
    int i = 1;
    init_basic_layout();
    print_selected_mode_choose_mudule_to_red();

    // Word *word1 = init_word_with_string_and_meaning_for_T_F_questions_with_constant_xy(string_and_meaning);
    // // Word *meaning = init_word_with_string_and_meaning_for_screen_saver_with_random_xy(string_and_meaning);
    // Word *meaning1 = init_meaning_with_string_and_meaning_for_T_F_questions_with_constant_xy(string_and_meaning);

    print_t();
    print_f();

    // print_word_green(init_under_develop_tips(UNDER_DEVELOP_TIPS));
    print_word_green(init_setting_develop_tips(SETTING_DEVELOP_TIPS));
    print_word_green(init_game_mode_tips(GAME_MODE_TIPS));
    print_word_green(init_score_list_tips(SCORE_LIST_TIPS));

    while (1)
    {
        only_print_my_mode_green_and_show_desc();
        // This feature is under development.
        Word *word1 = init_word_with_string_and_meaning_for_T_F_questions_with_constant_xy(string_and_meaning);
        // Word *meaning = init_word_with_string_and_meaning_for_screen_saver_with_random_xy(string_and_meaning);
        Word *meaning1 = init_meaning_with_string_and_meaning_for_T_F_questions_with_constant_xy(string_and_meaning);
        // Judge_meaning_with_random_another_word(word1, meaning1, string_and_meaning);
        print_word(word1);
        print_word(meaning1);

        /*this is T*/
        if ((i++) % 2)
        {
            /*this is hook or fork flash*/
            print_hook(COORDINATE_T_X, COORDINATE_T_Y);
            print_hook_empty(COORDINATE_F_X, COORDINATE_F_Y);
            print_f();
            printf("%s%s", GREEN, BOLD);
            print_t();
            print_column_t_f_vertical();
            print_row_t_horizontal();
            printf("%s", RESET);
        }
        /*this is F*/
        else
        {

            print_hook(COORDINATE_F_X, COORDINATE_F_Y);
            print_hook_empty(COORDINATE_T_X, COORDINATE_T_Y);
            print_t();
            printf("%s%s", GREEN, BOLD);
            print_f();
            print_column_t_f_vertical();
            print_row_f_horizontal();
            printf("%s", RESET);
        }
        Sleep(1000);
        if (_kbhit())
        {
            int key = _getch();
            if (key == 0xE0 || key == 0)
            { // 表示这个是扩展键
                key = _getch();
                if (key == 0x48) // 上箭头
                {
                    last_mode = cur_mode;
                    cur_mode = cur_mode == 0 ? 3 : cur_mode - 1;
                    break;
                }
                else if (key == 0x50) // 下箭头
                {
                    last_mode = cur_mode;
                    cur_mode = cur_mode == 3 ? 0 : cur_mode + 1;
                    break;
                }
                else
                {
                    error_print("only up and down arrow key to choose mode");
                }
                only_print_my_mode_green_and_show_desc();
            }
            else if (key == 0x0D)
            {
                if_enter = 1;
                return;
            }
            else
            {
                error_print("only up and down arrow key to choose mode");
            }
        }
    }
}

static void show_mode_3_flash()
{
    init_basic_layout();
    print_selected_mode_choose_mudule_to_red();
    init_print_all_mode_green_and_show_desc();
    // This feature is under development.
    print_word_green(init_game_mode_tips(GAME_MODE_TIPS));
    print_word_green(init_score_list_tips(SCORE_LIST_TIPS));
    print_word_green(init_under_develop_tips(UNDER_DEVELOP_TIPS));
    print_word_green(init_setting_develop_tips(SETTING_DEVELOP_TIPS));

    while (1)
    {
        only_print_my_mode_green_and_show_desc();

        if (_kbhit())
        {
            int key = _getch();
            if (key == 0xE0 || key == 0)
            { // 表示这个是扩展键
                key = _getch();
                if (key == 0x48) // 上箭头
                {
                    last_mode = cur_mode;
                    cur_mode = cur_mode == 0 ? 3 : cur_mode - 1;
                    break;
                }
                else if (key == 0x50) // 下箭头
                {
                    last_mode = cur_mode;
                    cur_mode = cur_mode == 3 ? 0 : cur_mode + 1;
                    break;
                }
                else
                {
                    error_print("only up and down arrow key to choose mode");
                }
                only_print_my_mode_green_and_show_desc();
            }
            else if (key == 0x0D)
            {
                if_enter = 1;
                return;
            }
            else
            {
                error_print("only up and down arrow key to choose mode");
            }
        }
    }
}

// 消消乐！
static void show_mode_4_flash()
{
    init_print_all_mode_green_and_show_desc();
    init_basic_layout();
    print_selected_mode_choose_mudule_to_red();
    // This feature is under development.

    print_word_green(init_game_mode_tips(GAME_MODE_TIPS));
    print_word_green(init_under_develop_tips(UNDER_DEVELOP_TIPS));
    print_word_green(init_setting_develop_tips(SETTING_DEVELOP_TIPS));
    print_word_green(init_score_list_tips(SCORE_LIST_TIPS));

    while (1)
    {
        only_print_my_mode_green_and_show_desc();

        if (_kbhit())
        {
            int key = _getch();
            if (key == 0xE0 || key == 0)
            { // 表示这个是扩展键
                key = _getch();
                if (key == 0x48) // 上箭头
                {
                    last_mode = cur_mode;
                    cur_mode = cur_mode == 0 ? 3 : cur_mode - 1;
                    break;
                }
                else if (key == 0x50) // 下箭头
                {
                    last_mode = cur_mode;
                    cur_mode = cur_mode == 3 ? 0 : cur_mode + 1;
                    break;
                }
                else
                {
                    error_print("only up and down arrow key to choose mode");
                }
                only_print_my_mode_green_and_show_desc();
            }
            else if (key == 0x0D)
            {
                if_enter = 1;
                return;
            }
            else
            {
                error_print("only up and down arrow key to choose mode");
            }
        }
    }
}

void show_mode_flash(int mode, Word *word, Word *meaning, String_and_meaning *string_and_meaning)
{

    switch (mode)
    {
    case 0:
        show_mode_1_flash(word, string_and_meaning);
        break;
        system("cls");
    case 1:
        show_mode_2_flash(word, meaning, string_and_meaning);
        system("cls");
        break;
    case 2:
        show_mode_3_flash();
        system("cls");
        break;
    case 3:
        show_mode_4_flash();
        system("cls");
        break;
    default:
        error_print("mode error");
        system("cls");
        break;
    }
}```

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

// bool not_in_the_outermost_if_we_change_the_word(String_and_meaning *string_and_meaning, Word *word)
// {

//     bool right = word->rectangle.coordinate.x + strlen(string_and_meaning->string) > OUTERMOST_BORDER_X + OUTERMOST_BORDER_WIDTH;
//     return right;
// }

void change_word_and_meaning_use_string_and_meaning(Word *word, Word *meaning, String_and_meaning *string_and_meaning)
{
    bool right = word->rectangle.width_and_height.width+word->rectangle.coordinate.x == OUTERMOST_BORDER_WIDTH+OUTERMOST_BORDER_X;
    word->word = string_and_meaning->string;
    
    meaning->word = string_and_meaning->meaning;

    word->rectangle.width_and_height.width = strlen(string_and_meaning->string) + MARGIN_WORD_BORDER_X;
    
    if(right)
    word->rectangle.coordinate.x = OUTERMOST_BORDER_X + OUTERMOST_BORDER_WIDTH - word->rectangle.width_and_height.width;
    
    meaning->rectangle.width_and_height.width = strlen(string_and_meaning->meaning) + MARGIN_WORD_BORDER_X;
}

void change_word_use_string_and_meaning(Word *word, String_and_meaning *string_and_meaning)
{
    bool right = word->rectangle.width_and_height.width+word->rectangle.coordinate.x == OUTERMOST_BORDER_WIDTH+OUTERMOST_BORDER_X;

    word->word = string_and_meaning->string;
    word->rectangle.width_and_height.width = strlen(string_and_meaning->string) + MARGIN_WORD_BORDER_X;
    if(right)
    word->rectangle.coordinate.x = OUTERMOST_BORDER_X + OUTERMOST_BORDER_WIDTH - word->rectangle.width_and_height.width;
}
bool change_word_use_string_and_meaning_if_word_is_hiting_the_wall(Word *word, String_and_meaning *string_and_meaning)
{

    if (is_word_hiting_the_wall(word))
    {
        String_and_meaning *string_and_meaning1 = NULL;
        string_and_meaning1 = get_random_string_and_meaning();
        // if (!not_in_the_outermost_if_we_change_the_word(string_and_meaning1, word))
        // {
        
        change_word_use_string_and_meaning(word, string_and_meaning1);
        // }
        return true;
    }
    return false;
}

bool change_word_and_meaning_use_string_and_meaning_if_word_is_hiting_the_wall(Word *word, Word *meaning, String_and_meaning *string_and_meaning)
{
    if (is_word_hiting_the_wall(word))
    {
        String_and_meaning *string_and_meaning1 = NULL;
        string_and_meaning1 = get_random_string_and_meaning();
        // if (!not_in_the_outermost_if_we_change_the_word(string_and_meaning1, word))
        // {
        change_word_and_meaning_use_string_and_meaning(word, meaning, string_and_meaning1);
        // }
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

Word *init_word_with_string_and_meaning_for_screen_saver_with_random_xy(String_and_meaning *string_and_meaning)
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

Word *init_meaning_with_string_and_meaning_for_screen_saver_with_random_xy(String_and_meaning *string_and_meaning)
{
    Word *meaning = (Word *)malloc(sizeof(Word));

    meaning->word = string_and_meaning->meaning;
    // meaning->word = string_and_meaning->string;

    meaning->rectangle.width_and_height.width = strlen(meaning->word) + MARGIN_WORD_BORDER_X; // 字符串长度 + 左右边框
    meaning->rectangle.width_and_height.height = MARGIN_WORD_BORDER_Y;                        // 上下边框 + 字

    meaning->rectangle.coordinate.x = OUTERMOST_BORDER_X;
    meaning->rectangle.coordinate.y = OUTERMOST_BORDER_Y + OUTERMOST_BORDER_HEIGHT + MEANING_MIDDLE_MARGIN ;
    meaning->rectangle.pattern.corner = WORD_BORDER_CORNER;
    meaning->rectangle.pattern.vertical = WORD_BORDER_VERTICAL;
    meaning->rectangle.pattern.horizontal = WORD_BORDER_HORIZONTAL;

    return meaning;
}

void single_move_word_action_only_word(Word *word, String_and_meaning *string_and_meaning)
{
    // for (int i = 0; i < OUTERMOST_BORDER_WIDTH; i++)
    for (;;)
    {
        print_rectangle(init_outermost_rectangle());
        print_word(word);
        // Word *meaning = init_meaning_with_string_and_meaning_for_screen_saver_with_border_xy(string_and_meaning);
        // print_word(meaning);
        Sleep(200); // duration 1 s
        LOG("start print word empty.\n");
        print_word_empty(init_word_empty(word));
        if (is_word_hiting_the_wall(word))
            change_word_use_string_and_meaning(word, get_random_string_and_meaning());
        next_step_of_the_word(word);

    }
    // print_word_empty(init_word_empty(word));
}

Word *init_meaning_with_string_and_meaning_for_screen_saver_with_border_xy(String_and_meaning *string_and_meaning)
{

    return extract_meaning_from_string_and_meaning(string_and_meaning);
}

void single_move_word_action_with_meaning(Word *word, Word *meaning, String_and_meaning *string_and_meaning)
{
    int flag=0;
    // for (int i = 0; i < OUTERMOST_BORDER_WIDTH; i++)
    for (;;)
    {
        print_rectangle(init_outermost_rectangle());

        print_word(word);

        print_word(meaning);//This is a fix,We only need to print once if the meaning is same as before!
        
        Sleep(300); // duration 1 s
        LOG("start print word empty.\n");

        print_word_empty(init_word_empty(word));

        if (is_word_hiting_the_wall(word))
        {
            flag=1;
            //The Bug was found out if we print word and meaning together,the `?` will be printed.But why?
            print_word_empty(init_word_empty(meaning));
            change_word_and_meaning_use_string_and_meaning(word, meaning, get_random_string_and_meaning());
        }
        next_step_of_the_word(word);
    }
    // print_word_empty(init_word_empty(word));
}

void screen_saver_word_no_meaning()
{

    hide_cursor();
    system("cls");
    String_and_meaning *string_and_meaning = get_random_string_and_meaning();
    Word *word = init_word_with_string_and_meaning_for_screen_saver_with_random_xy(string_and_meaning);

    // Word *meaning = init_meaning_with_string_and_meaning_for_screen_saver_with_random_xy(string_and_meaning);
    // single_move_word_action_with_meaning(word, meaning, string_and_meaning);
    single_move_word_action_only_word(word, string_and_meaning);
}

void screen_saver_word_and_meaning()
{

    hide_cursor();
    system("cls");
    SetConsoleOutputCP(936);
    String_and_meaning *string_and_meaning = get_random_string_and_meaning();
    Word *word = init_word_with_string_and_meaning_for_screen_saver_with_random_xy(string_and_meaning);
    // Word *meaning = init_word_with_string_and_meaning_for_screen_saver_with_random_xy(string_and_meaning);
    Word *meaning = init_meaning_with_string_and_meaning_for_screen_saver_with_random_xy(string_and_meaning);
    single_move_word_action_with_meaning(word, meaning, string_and_meaning);
    // single_move_word_action_only_word(word, string_and_meaning);
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

- 完整文件路径：`C:\Users\29001\Desktop\code\fun-eg-v1\src\3_apps\level0_just_screen_saver\test\screen_saver_word_meaning_main.c`
```c
#include "../../../../include/__include.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#if 0

int main(){
    // screen_saver_word_no_meaning();
    screen_saver_word_and_meaning();
    return 0;
}
#endif

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
C:\Users\29001\Desktop\code\fun-eg-v1\src\3_apps\level0_just_screen_saver\test\screen_saver_word_meaning_main.c `
-o  `    
C:\Users\29001\Desktop\code\fun-eg-v1\src\3_apps\level0_just_screen_saver\test\screen_saver_word_meaning_main.exe

*/```

- 完整文件路径：`C:\Users\29001\Desktop\code\fun-eg-v1\src\3_apps\level0_just_screen_saver\test\screen_saver_word_meaning_main.exe`
```c
读取失败：'gbk' codec can't decode byte 0x90 in position 2: illegal multibyte sequence
```

- 完整文件路径：`C:\Users\29001\Desktop\code\fun-eg-v1\src\3_apps\level0_just_screen_saver\test\screen_saver_word_only_main.c`
```c
#include "../../../../include/__include.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#if 0
int main(){
    screen_saver_word_no_meaning();
    // screen_saver_word_and_meaning();
    return 0;
}

#endif
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
C:\Users\29001\Desktop\code\fun-eg-v1\src\3_apps\level0_just_screen_saver\test\screen_saver_word_only_main.c `

-o `    
C:\Users\29001\Desktop\code\fun-eg-v1\src\3_apps\level0_just_screen_saver\test\screen_saver_word_only_main.exe

*/```

- 完整文件路径：`C:\Users\29001\Desktop\code\fun-eg-v1\src\3_apps\level0_just_screen_saver\test\screen_saver_word_only_main.exe`
```c
读取失败：'gbk' codec can't decode byte 0x90 in position 2: illegal multibyte sequence
```

- 完整文件路径：`C:\Users\29001\Desktop\code\fun-eg-v1\src\3_apps\level0_just_screen_saver\test\test_word_can_be_load.c`
```c
#include "../../../../include/__include.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#if 0
int main(){
     // srand 只在main开头执行一次！
    srand((unsigned int)time(NULL));
    String_and_meaning* string_and_meaning = get_random_string_and_meaning();
    printf("%s\n", string_and_meaning->string);
    return 0;
}
#endif
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

- 完整文件路径：`C:\Users\29001\Desktop\code\fun-eg-v1\src\3_apps\level1_T_F_questions\hook_or_fork.c`
```c
#include "../../../include/__include.h"

// #define HOOK_COMPONENT_NUM 3
char hook_components[3]={'/','\\','/'};
int offset_coordinate_of_hook[][2]={{3,-3},{1,-2},{2,-2}};

void print_hook(int x_t_of_f,int y_t_of_f){
    for(int i=0;i<HOOK_COMPONENT_NUM;i++){
        gotoxy(x_t_of_f+offset_coordinate_of_hook[i][0],y_t_of_f+offset_coordinate_of_hook[i][1]);
        printf("%s%s", GREEN, BOLD);
        printf("%c",hook_components[i]);
        printf("%s",RESET);
    }
}


void print_hook_empty(int x_t_of_f,int y_t_of_f){
    for(int i=0;i<HOOK_COMPONENT_NUM;i++){
        gotoxy(x_t_of_f+offset_coordinate_of_hook[i][0],y_t_of_f+offset_coordinate_of_hook[i][1]);
        printf("%c",HOOK_COMPONENT_EMPTY);
    }
}
// #define FORK_COMPONENT_NUM 4
char fork_components[4]={'\\','/','/','\\'};
int offset_coordinate_of_fork[][2]={{1,-3},{2,-3},{1,-2},{2,-2}};
void print_fork(int x_t_of_f,int y_t_of_f){
    for(int i=0;i<FORK_COMPONENT_NUM;i++){
        gotoxy(x_t_of_f+offset_coordinate_of_fork[i][0],y_t_of_f+offset_coordinate_of_fork[i][1]);
        printf("%c",fork_components[i]);
    }
}
void print_fork_empty(int x_t_of_f,int y_t_of_f){
    for(int i=0;i<FORK_COMPONENT_NUM;i++){
        gotoxy(x_t_of_f+offset_coordinate_of_fork[i][0],y_t_of_f+offset_coordinate_of_fork[i][1]);
        printf("%c",FORK_COMPONENT_EMPTY);
    }
}```

- 完整文件路径：`C:\Users\29001\Desktop\code\fun-eg-v1\src\3_apps\level1_T_F_questions\press_key_to_change.c`
```c
#include "../../../include/__include.h"
char judge_key_pressed(Word *word, Word *meaning, String_and_meaning *string_and_meaning)
{
    while (1)
    {

        if (_kbhit())
        {
            int key = _getch();
            // 过滤扩展键（方向键、F1-F12等0xE0/00开头扩展码）
            if (key == 0xE0 || key == 0)
            {
                // 吃掉第二个扩展码字符，避免缓冲区残留
                (void)_getch();
                error_print("only press T or F to select");
            }
            else if (key == 'T' || key == 't')
            {
                print_f();
                printf("%s%s", GREEN, BOLD);
                print_t();
                print_column_t_f_vertical();
                print_row_t_horizontal();
                printf("%s", RESET);
            }
            else if (key == 'F' || key == 'f')
            {
                print_t();
                printf("%s%s", GREEN, BOLD);
                print_f();
                print_column_t_f_vertical();
                print_row_f_horizontal();
                printf("%s", RESET);
            }
            else if (key == 27)
            {
                // cls();
                break;
                // system("cls");
                // choose_mode(word,string_and_meaning);
                // print_rectangle(init_biggest_rectangle());
                // // print_rectangle(init_setting_rectangle());
                // print_rectangle(init_under_middle_rectangle());
                // print_rectangle(init_outermost_rectangle());

                // print_word(word);
                // print_word(meaning);

                // print_t();
                // print_f();
            }
            else
            {
                // 其余所有字符报错
                error_print("only press T or F to select");
            }
        }
    }
}```

- 完整文件路径：`C:\Users\29001\Desktop\code\fun-eg-v1\src\3_apps\level1_T_F_questions\static_word_and_meaning_just_to_judge.c`
```c
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
}```

- 完整文件路径：`C:\Users\29001\Desktop\code\fun-eg-v1\src\3_apps\level1_T_F_questions\img\basic_layout.png`
```c
读取失败：'gbk' codec can't decode byte 0xaa in position 29: illegal multibyte sequence
```

- 完整文件路径：`C:\Users\29001\Desktop\code\fun-eg-v1\src\3_apps\level1_T_F_questions\img\error_of_biggest.png`
```c
读取失败：'gbk' codec can't decode byte 0x9e in position 23: illegal multibyte sequence
```

- 完整文件路径：`C:\Users\29001\Desktop\code\fun-eg-v1\src\3_apps\level1_T_F_questions\img\error_of_setting_draw.png`
```c
读取失败：'gbk' codec can't decode byte 0xe9 in position 23: illegal multibyte sequence
```

- 完整文件路径：`C:\Users\29001\Desktop\code\fun-eg-v1\src\3_apps\level1_T_F_questions\img\error_of_under_middle.png`
```c
读取失败：'gbk' codec can't decode byte 0xec in position 19: illegal multibyte sequence
```

- 完整文件路径：`C:\Users\29001\Desktop\code\fun-eg-v1\src\3_apps\level1_T_F_questions\test\main.c`
```c

#include "../../../../include/__include.h"

int main(void)
{
    // Sleep(20000);
    // 必须只执行一次！
    srand((unsigned int)time(NULL));
    // process();
    String_and_meaning *string_and_meaning = get_random_string_and_meaning();
    Word *word = init_word_with_string_and_meaning_for_screen_saver_with_random_xy(string_and_meaning);
    Word *meaning = init_meaning_with_string_and_meaning_for_screen_saver_with_random_xy(string_and_meaning);
    
    while (1)
    {
        switch (choose_mode(word,meaning,string_and_meaning))
        {
            // 这里不会执行？注意这个特点！直接跳转到对应标签处去了！
            // arrow_menu_remove();
            // arrow_action();

        case 0:
        {
            mode_1_action(word,string_and_meaning);
            system("cls");
        }
        /* code */
        break;
        case 1:
        {
            mode_2_action();
            system("cls");
        }
        break;
        case 2:
        {
            mode_3_action();
            system("cls");
        }
        /* code */
        break;
        case 3:
        {
            mode_4_action();
            system("cls");
        }
        /* code */
        break;
        default:
            break;
        }
        if_enter = 0;
        // 循环读取缓冲区剩余所有字符，直到为空
        while (_kbhit())
        {
            _getch(); // 读取并丢弃缓冲区剩余字符
        }
    }

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
C:\Users\29001\Desktop\code\fun-eg-v1\src\3_apps\level1_T_F_questions\static_word_and_meaning_just_to_judge.c `
C:\Users\29001\Desktop\code\fun-eg-v1\src\3_apps\level1_T_F_questions\press_key_to_change.c `
C:\Users\29001\Desktop\code\fun-eg-v1\src\3_apps\mode_choose.c `
C:\Users\29001\Desktop\code\fun-eg-v1\src\3_apps\mode_flash.c `
C:\Users\29001\Desktop\code\fun-eg-v1\src\3_apps\mode_actions.c `
C:\Users\29001\Desktop\code\fun-eg-v1\src\3_apps\level1_T_F_questions\hook_or_fork.c `
C:\Users\29001\Desktop\code\fun-eg-v1\src\3_apps\level1_T_F_questions\test\main.c `
-o  `
C:\Users\29001\Desktop\code\fun-eg-v1\src\3_apps\level1_T_F_questions\test\main.exe

 */```

- 完整文件路径：`C:\Users\29001\Desktop\code\fun-eg-v1\src\3_apps\level1_T_F_questions\test\main.exe`
```c
读取失败：'gbk' codec can't decode byte 0x90 in position 2: illegal multibyte sequence
```

- 完整文件路径：`C:\Users\29001\Desktop\code\fun-eg-v1\src\3_apps\level1_T_F_questions\test\t_f_main.c`
```c
#include "../../../../include/__include.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#if 0
int main()
{
    // screen_saver_word_no_meaning();
    T_F_questions();
    return 0;
}
#endif
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
C:\Users\29001\Desktop\code\fun-eg-v1\src\3_apps\level1_T_F_questions\static_word_and_meaning_just_to_judge.c `
C:\Users\29001\Desktop\code\fun-eg-v1\src\3_apps\level1_T_F_questions\press_key_to_change.c `
C:\Users\29001\Desktop\code\fun-eg-v1\src\3_apps\level1_T_F_questions\test\t_f_main.c `
-o  `
C:\Users\29001\Desktop\code\fun-eg-v1\src\3_apps\level1_T_F_questions\test\t_f_main.exe

*/```

---
扫描完成，已完全跳过：
1. include\4_vocaulary
2. src\4_vocabulary