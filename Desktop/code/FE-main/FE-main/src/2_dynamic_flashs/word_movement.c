#include "../../include/__include.h"
static Directions directions[4][2] = {
    {1, 1},   // bottom-right
    {1, -1},  // top-right
    {-1, -1}, // top-left
    {-1, 1}   // bottom-left
};
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
