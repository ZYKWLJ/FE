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
