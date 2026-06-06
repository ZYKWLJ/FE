#ifndef WORD_BORDER_H_
#define WORD_BORDER_H_
struct word_with_border
{
    struct word word_; // 单词
    int x;             // 坐标
    int y;
    int direction; // 运动方向索引即可！
};
#define WORD_BORDER '+'
#define WORD_BORDER_X 38
#define WORD_BORDER_Y 6
#define WORD_BORDER_WIDTH 66
#define WORD_BORDER_HEIGHT 20
extern int bounce_direction[4][2];
void make_word_border(struct word_with_border *word_with_border_);
void draw_word_with_border(struct word_with_border *word_with_border_, char border_character);
void init_random_word_with_border_xy(struct word_with_border *word_with_border_);
#endif /* WORD_BORDER_H_ */