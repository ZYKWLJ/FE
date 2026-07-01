# 1.setting
we will draw the setting area in the screen just using the rectangle.
```c
/*this is setting develop tips*/
#define SETTING_DEVELOP_TIPS "Setting Area..."

 print_word(init_setting_develop_tips(SETTING_DEVELOP_TIPS));
```

and we must add the GameMode in the gamelist area.
```c
/*this is game mode tips*/
#define GAME_MODE_TIPS "Game Mode"

 print_word(init_game_mode_tips(GAME_MODE_TIPS));
```
and the same as the score area.
```c
/*this is score area tips*/
#define SCORE_LIST_TIPS "Score List"

 print_word(init_score_list_tips(SCORE_LIST_TIPS));
```

# 2.score list 
And now we commence to draw the score list area.
We will create two columns here: one for correct words and another for incorrect words. Entries will be added to this area whenever we evaluate answers in Mode 2 or collide with a boundary in Mode 1.

the following are the 2 columns coordinates.
```c
#define COORDINATE_SCORE_LIST_RIGHT_X Border_x+Border_width
#define COORDINATE_SCORE_LIST_RIGHT_Y Border_y

#define COORDINATE_SCORE_LIST_WRONG_X Border_x+Border_width+Score_Border_width/2
#define COORDINATE_SCORE_LIST_WRONG_Y Border_y
```

and in every mode,we will gain each word in a array. Overall, we'll maintain a big array to store all the words in all modes.

and we let the maximum mode_array_size to be 10000; 
```c
#define MAX_MODE_ARRAY_SIZE 10000
typedef struct mode_array_{
    int mode_array_top=0;
    int mode_array_max_size=MAX_MODE_ARRAY_SIZE;
    String_and_meaning* mode_array[MAX_MODE_ARRAY_SIZE];
}mode_array;
```

after print the word,we collect it in the mode_array.
```c

void collect_word_in_mode_array(String_and_meaning *string_and_meaning){
    if(mode_array_top<mode_array_max_size){
        mode_array[mode_array_top]=string_and_meaning;
        mode_array_top++;
    }else{
        error_print("sorry, mode_array is full");
    }
}
```
and we must show the score list in the screen.
```c
void print_right_word_score_list(){
    for(int i=0;i<mode_array_top;i++){
        gotoxy(COORDINATE_SCORE_LIST_RIGHT_X,COORDINATE_SCORE_LIST_RIGHT_Y+i);
        print_word(mode_array[i]->word);
    }
}

void print_wrong_word_score_list(){
    for(int i=0;i<mode_array_top;i++){
        gotoxy(COORDINATE_SCORE_LIST_WRONG_X,COORDINATE_SCORE_LIST_WRONG_Y+i);
        print_word(mode_array[i]->word);
    }
}

void print_right_and_wrong_word_list(){
    print_right_word_score_list();
    print_wrong_word_score_list();
}
```
and then this is the trigger conditions.
```c
if(hit_the_wall()||answer_the_t_f_question()){
    collect_word_in_mode_array();
    print_right_and_wrong_word_list();
}
```