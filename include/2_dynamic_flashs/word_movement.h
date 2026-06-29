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

#endif /* WORD_MOVEMENT_H_ */