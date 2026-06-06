#include "../include/_include.h"
void remove_word_border(struct word_with_border *word_with_border_)
{
    for (int row = 0; row < 3; row++)
    {
        gotoxy(word_with_border_->x, word_with_border_->y + row);
        for (int i = 0; i <= strlen(word_with_border_->word_.word) + 4; i++)
        {

            printf(" ");
        }
    }
}