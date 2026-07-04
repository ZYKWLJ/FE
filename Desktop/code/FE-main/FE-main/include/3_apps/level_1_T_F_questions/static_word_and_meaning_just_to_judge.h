#ifndef STATIC_WORD_AND_MEANING_JUST_TO_JUDGE_H_
#define STATIC_WORD_AND_MEANING_JUST_TO_JUDGE_H_
void print_f();
void print_t();
Word *init_word_with_string_and_meaning_for_T_F_questions_with_constant_xy(String_and_meaning *string_and_meaning);
Word *init_meaning_with_string_and_meaning_for_T_F_questions_with_constant_xy(String_and_meaning *string_and_meaning);
void print_column_t_f_vertical();
void print_row_t_horizontal();
void print_row_f_horizontal();

void T_F_questions();
void Judge_meaning_with_random_another_word(Word *word, Word *meaning, String_and_meaning *string_and_meaning);
#endif /* STATIC_WORD_AND_MEANING_JUST_TO_JUDGE_H_ */