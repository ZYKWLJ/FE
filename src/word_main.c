#include "../include/_include.h"
int main()
{
    srand(time(NULL));
    hide_cursor();
    system("cls");
    while (1)
    {
        all_word_border_draw();
        struct word_with_border word_with_border_;
        init_random_word_with_border_xy(&word_with_border_);
        make_word_border(&word_with_border_);
        word_move(&word_with_border_);
    }
}