#ifndef MODE_CHOOSE_H_
#define MODE_CHOOSE_H_
#define MODE_CHOOSE_X COORDINATE_GAMELIST_TOP_LEFT_X+3
#define MODE_CHOOSE_Y COORDINATE_MIDDLE_TOP_LEFT_Y


#define MODE1_NAME "mode1"
#define MODE1_DESC "screen saver"
// #define MODE1_DESC "only one keytab, no pressure"

#define MODE2_NAME "mode2"
#define MODE2_DESC "T/F questions"
// #define MODE2_DESC "all keyboards, no pressure"

#define MODE3_NAME "mode3"
#define MODE3_DESC "Select questions"
// #define MODE3_DESC "all keyboards, time counter"

#define MODE4_NAME "mode4"
#define MODE4_DESC "Developping"
// #define MODE4_DESC "keyboards remove, time counter"


extern int cur_mode;
extern int last_mode;
extern int if_enter ;

int choose_mode(Word *word, Word *meaning, String_and_meaning *string_and_meaning);
void init_print_all_mode_green_and_show_desc();
void only_print_my_mode_green_and_show_desc();
Word *init_under_develop_tips(char* string);
Word *init_setting_develop_tips(char *setting_develop_tips);
Word *init_game_mode_tips(char *game_mode_tips);
Word *init_score_list_tips(char *score_list_tips);
#endif /* MODE_CHOOSE_H_ */