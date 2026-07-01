#include "../../../../include/__include.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#if 0
int main(){
     // srand 只在main开头执行一次！
    srand((unsigned int)time(NULL));
    String_and_meaning* string_and_meaning = get_random_string_and_meaning();
    printf("%s\n", string_and_meaning->string);
    return 0;
}
#endif
/*

gcc `
C:\Users\29001\Desktop\code\fun-eg-v1\src\2_dynamic_flashs\gotoxy.c `
C:\Users\29001\Desktop\code\fun-eg-v1\src\1_basic_static_borders\outermost_rectangle.c `
C:\Users\29001\Desktop\code\fun-eg-v1\src\2_dynamic_flashs\word.c `
C:\Users\29001\Desktop\code\fun-eg-v1\src\1_basic_static_borders\print.c `
C:\Users\29001\Desktop\code\fun-eg-v1\src\2_dynamic_flashs\word_movement.c `
C:\Users\29001\Desktop\code\fun-eg-v1\src\4_vocabulary\strings.c `
C:\Users\29001\Desktop\code\fun-eg-v1\src\4_vocabulary\strings_array.c `
C:\Users\29001\Desktop\code\fun-eg-v1\src\3_apps\level0_just_screen_saver\change_words_in_a_configurable_frequence.c `
C:\Users\29001\Desktop\code\fun-eg-v1\src\3_apps\level0_just_screen_saver\screen_saver.c `
C:\Users\29001\Desktop\code\fun-eg-v1\src\3_apps\level0_just_screen_saver\test\test_word_can_be_load.c `

-o `
C:\Users\29001\Desktop\code\fun-eg-v1\src\3_apps\level0_just_screen_saver\test\test_word_can_be_load.exe

*/