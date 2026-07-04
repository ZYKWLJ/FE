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


#define PRINT_H_