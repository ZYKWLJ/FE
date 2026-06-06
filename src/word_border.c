#include "../include/_include.h"

// #define WORD_BORDER_X 38
// #define WORD_BORDER_Y 6
// #define WORD_BORDER_WIDTH 66
// #define WORD_BORDER_HEIGHT 20

// 左上，左下，右上，右下
int bounce_direction[4][2] = {{-1, -1}, {-1, 1}, {1, -1}, {1, 1}};

void all_word_border_draw()
{
    init_border(WORD_BORDER_X, WORD_BORDER_Y, WORD_BORDER_WIDTH, WORD_BORDER_HEIGHT);
}

void init_random_word_with_border_xy(struct word_with_border *word_with_border_)
{
    // 随机画出这个单词，但是单词出现在边框内，所以要求出长度，防止越界
    int word_len_x = strlen(word_with_border_->word_.word) + 4; // 要加上边框和间隙的大小
    int word_len_y = 3;                                         // 要加上边框和间隙的大小
                                                                // int word_x = WORD_BORDER_X + rand() % (WORD_BORDER_WIDTH - word_len_x);
                                                                // int word_y = WORD_BORDER_Y + rand() % (WORD_BORDER_HEIGHT - word_len_y);
                                                                // word_with_border_->x = word_x - 2;
                                                                // word_with_border_->y = word_y - 1;
    word_with_border_->x = WORD_BORDER_X + rand() % (WORD_BORDER_WIDTH - word_len_x);
    word_with_border_->y = WORD_BORDER_Y + rand() % (WORD_BORDER_HEIGHT - word_len_y);
}
void draw_word_with_border(struct word_with_border *word_with_border_, char border_character)
{

    // 第一行
    gotoxy(word_with_border_->x, word_with_border_->y);
    printf("%c", border_character);
    for (int i = 0; i < strlen(word_with_border_->word_.word) + 4 - 2; i++)
    {
        printf("-");
    }
    printf("%c", border_character);

    // 第二行
    gotoxy(word_with_border_->x, word_with_border_->y + 1);
    printf("| ");
    for (int i = 0; i < 3 - 2; i++)
    {
        printf("%s", word_with_border_->word_.word);
    }
    printf(" |");
    // 第三行
    gotoxy(word_with_border_->x, word_with_border_->y + 2);
    printf("%c", border_character);

    for (int i = 0; i < strlen(word_with_border_->word_.word) + 4 - 2; i++)
    {
        printf("-");
    }
    printf("%c", border_character);
}

void word_bounce_direction(struct word_with_border *word_with_border_)
{

    int index = rand() % 4;
    word_with_border_->direction = index;
}
void make_word_border(struct word_with_border *word_with_border_)
{
    word_with_border_->word_ = *all_6_words[rand() % ALL_6_WORDS_NUM];
    draw_word_with_border(word_with_border_,WORD_BORDER);
    word_bounce_direction(word_with_border_);
}

// 避免单词跳出墙，及时补救，这个要和原来运动方向相反才行！
// 所以这里补充运动方向->左上，左下，右上，右下四种。对应结构体就是
// 左上0，如果撞到了左边，那就换成右上2,如果撞到了上面，那就换成左下1
// 左下1，如果撞到了左边，那就换成右下3,如果撞到了下面，那就换成左上0
// 右上2，如果撞到了右边，那就换成左上0,如果撞到了上面，那就换成右下3
// 右下3，如果撞到了右边，那就换成左下1,如果撞到了下面，那就换成右上2
// 只要我的起始不是在对角线上，就永远不会弹到边角！这里需要注意！
// 这就是整个弹跳逻辑！

// +------+
// | word |
// +------+

// 总长度是