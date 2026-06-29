#include "../../../include/__include.h"

// #define HOOK_COMPONENT_NUM 3
char hook_components[3]={'/','\\','/'};
int offset_coordinate_of_hook[][2]={{3,-3},{1,-2},{2,-2}};

void print_hook(int x_t_of_f,int y_t_of_f){
    for(int i=0;i<HOOK_COMPONENT_NUM;i++){
        gotoxy(x_t_of_f+offset_coordinate_of_hook[i][0],y_t_of_f+offset_coordinate_of_hook[i][1]);
        printf("%s%s", GREEN, BOLD);
        printf("%c",hook_components[i]);
        printf("%s",RESET);
    }
}


void print_hook_empty(int x_t_of_f,int y_t_of_f){
    for(int i=0;i<HOOK_COMPONENT_NUM;i++){
        gotoxy(x_t_of_f+offset_coordinate_of_hook[i][0],y_t_of_f+offset_coordinate_of_hook[i][1]);
        printf("%c",HOOK_COMPONENT_EMPTY);
    }
}
// #define FORK_COMPONENT_NUM 4
char fork_components[4]={'\\','/','/','\\'};
int offset_coordinate_of_fork[][2]={{1,-3},{2,-3},{1,-2},{2,-2}};
void print_fork(int x_t_of_f,int y_t_of_f){
    for(int i=0;i<FORK_COMPONENT_NUM;i++){
        gotoxy(x_t_of_f+offset_coordinate_of_fork[i][0],y_t_of_f+offset_coordinate_of_fork[i][1]);
        printf("%c",fork_components[i]);
    }
}
void print_fork_empty(int x_t_of_f,int y_t_of_f){
    for(int i=0;i<FORK_COMPONENT_NUM;i++){
        gotoxy(x_t_of_f+offset_coordinate_of_fork[i][0],y_t_of_f+offset_coordinate_of_fork[i][1]);
        printf("%c",FORK_COMPONENT_EMPTY);
    }
}