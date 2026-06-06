#include "../include/_include.h"

#define WORD_BORDER_LEFT 0
#define WORD_BORDER_RIGHT 1
#define WORD_BORDER_TOP 2
#define WORD_BORDER_BOTTOM 3

// +------+
// | word |
// +------+

// 不同的边界有不同的处理方法
void word_re_bounce(struct word_with_border *word_with_border_, int which_border)
{
    // 判断运动方向和边界
    switch (which_border)
    {
    case WORD_BORDER_LEFT:
    {
        word_with_border_->direction = word_with_border_->direction == 0 ? 2 : 3;
        break;
    }
    case WORD_BORDER_RIGHT:
    {
        word_with_border_->direction = word_with_border_->direction == 2 ? 0 : 1;
        break;
    }
    case WORD_BORDER_TOP:
    {
        word_with_border_->direction = word_with_border_->direction == 0 ? 1 : 3;
        break;
    }
    case WORD_BORDER_BOTTOM:
    {
        word_with_border_->direction = word_with_border_->direction == 1 ? 0 : 2;
        break;
    }
    }
}

int check_if_touch_corner(struct word_with_border *word_with_border_)
{
    // 如果是刚好碰到了角落里面，那么直接左上角落往右下，即往反方向走，其他的都是如此！
    if (word_with_border_->x == WORD_BORDER_X && word_with_border_->y == WORD_BORDER_Y)
    {
        word_with_border_->direction = 3;
        return 1;
    }
    else if (word_with_border_->x == WORD_BORDER_X && word_with_border_->y == WORD_BORDER_Y + WORD_BORDER_HEIGHT - 3)
    {
        word_with_border_->direction = 2;
        return 1;
    }
    else if (word_with_border_->x == WORD_BORDER_X + WORD_BORDER_WIDTH - 4 && word_with_border_->y == WORD_BORDER_Y + WORD_BORDER_HEIGHT - 3)
    {
        word_with_border_->direction = 0;
        return 1;
    }
    else if (word_with_border_->x == WORD_BORDER_X + WORD_BORDER_WIDTH - 4 && word_with_border_->y == WORD_BORDER_Y)
    {
        word_with_border_->direction = 1;
        return 1;
    }
    return 0;
}
int check_if_touch_border(struct word_with_border *word_with_border_)
{
    if (check_if_touch_corner(word_with_border_))
    {
        return;
    }
    if (word_with_border_->x == WORD_BORDER_X)
    {
        word_re_bounce(word_with_border_, WORD_BORDER_LEFT);
        return 1;
    }
    else if (word_with_border_->x + strlen(word_with_border_->word_.word) + 4 == WORD_BORDER_X + WORD_BORDER_WIDTH)
    {
        word_re_bounce(word_with_border_, WORD_BORDER_RIGHT);
        return 1;
    }
    else if (word_with_border_->y == WORD_BORDER_Y)
    {
        word_re_bounce(word_with_border_, WORD_BORDER_TOP);
        return 1;
    }
    else if (word_with_border_->y + 3 == WORD_BORDER_Y + WORD_BORDER_HEIGHT)
    {
        word_re_bounce(word_with_border_, WORD_BORDER_BOTTOM);
        return 1;
    }
    else
    {
        return 0;
    }
}

// 单词运用起来！
void word_move(struct word_with_border *word_with_border_)
{
    while (1)
    {
        remove_word_border(word_with_border_); // 清除
        all_word_border_draw();
        if (_kbhit())
        {
            int key = _getch();
            if (key == 0x0D) // 只有按下回车才会返回
            {
                // if_enter = 1;
                // 清除原来的单词
                remove_word_border(word_with_border_);
                break;
            }
            else
            {
                error_print("only up and down arrow key to choose mode");
            }
        }
        // 检查是否撞到了边界，撞到了就改变方向
        check_if_touch_border(word_with_border_);
        // 装没撞墙都要加上运动方向，保证运动！
        word_with_border_->x += bounce_direction[word_with_border_->direction][0];
        word_with_border_->y += bounce_direction[word_with_border_->direction][1];
        // Sleep(100);
        draw_word_with_border(word_with_border_,WORD_BORDER); // 再画新的位移变化了的单词
        Sleep(500);
    }
}