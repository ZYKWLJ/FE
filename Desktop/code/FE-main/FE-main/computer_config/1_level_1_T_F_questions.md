# 1.basic layout of static picture





# 3.the logic of level_1_T_F_questions
if we judge the right answer of the question,we can get the right score.
and this is the basic layout
```
the coordinate of four corners of ✅️,using the T button as benchmark:
coordinate(x_t+3,y_t-3)
coordinate(x_t+1,y_t-2)
coordinate(x_t+2,y_t-2)

   /
 \/     

the coordinate of four corners of ❌️,using the T button as benchmark:
coordinate(x_t+1,y_t-3)
coordinate(x_t+2,y_t-3)
coordinate(x_t+1,y_t-2)
coordinate(x_t+2,y_t-2)

 \/
 /\

.___.
| T |
.___.
```
we will **display the hook whatever answer we choose**. and if we do it correctly,the corresponding word of the definition will be displayed above the definition and we will get the right score or we will get the wrong score.
 
And the code the buttons of the hook and fork are as follows.
```c
#define HOOK_COMPONENT_NUM 3
char hook_components[3]=['/','\\','/'];
int offset_coordinate_of_hook[][2]={{3,-3},{1,-2},{2,-2}};

void print_hook(int x_t_of_f,int y_t_of_f){
    for(int i=0;i<HOOK_COMPONENT_NUM;i++){
        gotoxy(x_t_of_f+offset_coordinate_of_hook[i][0],y_t_of_f+offset_coordinate_of_hook[i][1]);
        printf(hook_components[i]);
    }
}

#define FORK_COMPONENT_NUM 4
char fork_components[]=['\\','/','/','\\'];
int offset_coordinate_of_fork[][2]={{1,-3},{2,-3},{1,-2},{2,-2}};
void print_fork(int x_t_of_f,int y_t_of_f){
    for(int i=0;i<FORK_COMPONENT_NUM;i++){
        gotoxy(x_t_of_f+offset_coordinate_of_fork[i][0],y_t_of_f+offset_coordinate_of_fork[i][1]);
        printf(fork_components[i]);
    }
}
```
and if we choose the right answer, what we select will apply green,and if we choose the wrong answer, what we select will apply red and in the same time,we will show the right word of the definition above the definition and the right definition below the word provided by the question.
```c
// we just need to adjust the y-coordinate of the word block.

void print_right_word(int x_meaning,int y_meaning,String s_right_word){
    gotoxy(x_meaning,y_meaning-4);
    //construct the right word block.
    print_word();
}


void print_right_definition(int x_word,int y_word,String s_right_definition){
    gotoxy(x_word,y_word);
    //construct the right word block.
    print_word();
}
```


we will enter left or right button to select,and press the 'enter' to verify the answer.
```c
if(definition_of_word_provided == the_definition_provided){
    // we choose the right answer.
    print_hook(x_t_of_f,y_t_of_f);
    print_green_t_or_f();
    right_word[right_word_count++]=word_provided;
}
else{
    // we choose the wrong answer.
    print_fork(x_t_of_f,y_t_of_f);
    print_red_t_or_f();
    wrong_word[wrong_count++]=word_provided;
    print_right_word(x_meaning,y_meaning,s_right_word);
    print_right_definition(x_word,y_word,s_right_definition);
}
```
the score area will record the score in time and show you the word you've challenged.
```c
//list the wrong and right score separately.

printf("right:%d\n",right_count);
show_word(right_word);
printf("wrong:%d\n",wrong_count);
show_word(wrong_word);

void show_right_or_wrong_word(int right_or_wrong){
    if(right_or_wrong == 1){
        char title_right_word_word[10];
        sprintf(title_right_word.word,"right:%d",right_count);
        print_word(title_right_word);
        for(int i=0;i<right_word_count;i++){
            gotoxy(x_border,y_border+i);
            print_word(right_word[i]);
        }
    }
    else{
        char title_wrong_word_word[10];
        sprintf(title_wrong_word.word,"wrong:%d",wrong_count);
        print_word(title_wrong_word);
        for(int i=1;i<wrong_count;i++){
            gotoxy(x_border,y_border+i);
            print_word(wrong_word[i]);
        }
    }
}
```
# 4.50% right or wrong!

 For T/F questions,we just set 50% of the questions to be right and 50% to be wrong.
 we just use a 2-size-array and one of the element is the origin word,and the other is getting randomly from the dictionary.
 
 we let the meaning block to display one word of the arry ,and the system will judge whether the answers are right or wrong.

```c

String_and_meaning *origin_string_and_meaning = get_random_string_and_meaning();
String_and_meaning *string_and_meaning2 = get_random_string_and_meaning();

//then the percents of the answer is 50%,that's fine.
int percents_of_right_answer = 2;
String_and_meaning *word_array[percents_of_right_answer]={
    origin_string_and_meaning,
    string_and_meaning2,
}

String_and_meaning wait_judge_word = word_array[rand()%percents_of_right_answer];
print_meaning(wait_judge_word);



char ans; //t or f
bool ans_t_f=ans == T;
bool word_t_f=wait_judge_word.word == origin_string_and_meaning.word;

// the following code is judge the answer.
if(we_press==t&&word_t_f){
    // the choice will become green.
    // we choose the right answer.
    print_green_t_or_f(t);
    right_word[right_word_count++]=wait_judge_word.word;
}else if(we_press_f==f&&!word_t_f){
    print_green_t_or_f(f);
    right_word[right_word_count++]=wait_judge_word.word;
}else{
    // we choose the wrong answer.
    print_red_t_or_f(we_press);
    wrong_word[wrong_count++]=wait_judge_word.word;
}

// the following code is the right answer anyway!
// we will show the hook anyway and it's standard right answer.
if(word_t_f){
    print_hook(x_t_,y_f);
    right_word[right_word_count++]=wait_judge_word.word;
}
else{
    print_hook(x_f,y_f);
    wrong_word[wrong_count++]=wait_judge_word.word;
    print_right_word(x_meaning,y_meaning,origin_string_and_meaning.word);
    print_right_definition(x_word,y_word,origin_string_and_meaning.meaning);
}
```