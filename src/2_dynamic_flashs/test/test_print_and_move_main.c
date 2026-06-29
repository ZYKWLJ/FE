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


// gcc C:\Users\29001\Desktop\code\fun-eg-v1\src\2_dynamic_flashs\gotoxy.c  C:\Users\29001\Desktop\code\fun-eg-v1\src\1_basic_static_borders\outermost_rectangle.c C:\Users\29001\Desktop\code\fun-eg-v1\src\2_dynamic_flashs\word.c  C:\Users\29001\Desktop\code\fun-eg-v1\src\1_basic_static_borders\print.c C:\Users\29001\Desktop\code\fun-eg-v1\src\2_dynamic_flashs\word_movement.c C:\Users\29001\Desktop\code\fun-eg-v1\src\2_dynamic_flashs\test\test_print_and_move_main.c -o C:\Users\29001\Desktop\code\fun-eg-v1\src\2_dynamic_flashs\test\test_print_and_move_main.exe