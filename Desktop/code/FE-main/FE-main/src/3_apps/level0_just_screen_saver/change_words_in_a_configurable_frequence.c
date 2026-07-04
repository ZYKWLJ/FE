#include "../../../include/__include.h"
#include<stdlib.h>
#include<time.h>
//next ,we ll dev the a_ b_ c_ ...columns such that we can memorize them quite a lot.BUt now for simplicity,
//we will just use rand() to look for word in a whole array.
String_and_meaning* get_random_string_and_meaning(){
    // srand(time(NULL));
    return string_and_meaning_array[rand()%ARRAY_SIZE];
}

