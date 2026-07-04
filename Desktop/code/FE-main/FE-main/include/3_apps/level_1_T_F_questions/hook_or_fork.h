#ifndef HOOK_OR_FORK_H_
#define HOOK_OR_FORK_H_
#define HOOK_COMPONENT_NUM 3
#define HOOK_COMPONENT_EMPTY ' '
// char hook_components[3];
// int offset_coordinate_of_hook[][2];
void print_hook(int x_t_of_f,int y_t_of_f);
void print_hook_empty(int x_t_of_f,int y_t_of_f);
#define FORK_COMPONENT_NUM 4
#define FORK_COMPONENT_EMPTY ' '
// char fork_components[4];
// int offset_coordinate_of_fork[][2];
void print_fork(int x_t_of_f,int y_t_of_f);
void print_fork_empty(int x_t_of_f,int y_t_of_f);


#endif /* HOOK_OR_FORK_H_ */