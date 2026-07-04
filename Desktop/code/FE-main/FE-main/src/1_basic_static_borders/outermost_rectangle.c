#include "../../include/__include.h"
_Rectangle outermost_rectangle = {
    .coordinate = {
        .x = OUTERMOST_BORDER_X,
        .y = OUTERMOST_BORDER_Y},
    .width_and_height = {.width = OUTERMOST_BORDER_WIDTH, .height = OUTERMOST_BORDER_HEIGHT},
    .pattern = {.corner = OUTERMOST_BORDER_CORNER, .vertical = OUTERMOST_BORDER_VERTICAL, .horizontal = OUTERMOST_BORDER_HORIZONTAL}
};



// void print_horizontal_line(int x1,int x2,int y){
//     for(int x=x1;x<=x2;x++){
//         gotoxy(x,y);
//         printf("%c",);
//     }
// }

// void print_vertical_line(int x,int y1,int y2){


// }

_Rectangle biggest_rectangle = {
    .coordinate = {
        .x = BIGGEST_RECTANGLE_COORDINATE_X,
        .y = BIGGEST_RECTANGLE_COORDINATE_Y},
    .width_and_height = {.width = BIGGEST_RECTANGLE_WIDTH, .height = BIGGEST_RECTANGLE_HEIGHT},
    .pattern = {.corner = DEFAULT_BORDER_CORNER, .vertical = DEFAULT_BORDER_VERTICAL, .horizontal = DEFAULT_BORDER_HORIZONTAL}
};

_Rectangle setting_rectangle = {
    .coordinate = {
        .x = SETTING_RECTANGLE_COORDINATE_X,
        .y = SETTING_RECTANGLE_COORDINATE_Y},
    .width_and_height = {.width = SETTING_RECTANGLE_WIDTH, .height = SETTING_RECTANGLE_HEIGHT},
    .pattern = {.corner = DEFAULT_BORDER_CORNER, .vertical = DEFAULT_BORDER_VERTICAL, .horizontal = DEFAULT_BORDER_HORIZONTAL}
};

_Rectangle under_middle_rectangle = {
    .coordinate = {
        .x = UNDER_MIDDLE_RECTANGLE_COORDINATE_X,
        .y = UNDER_MIDDLE_RECTANGLE_COORDINATE_Y},
    .width_and_height = {.width = UNDER_MIDDLE_RECTANGLE_WIDTH, .height = UNDER_MIDDLE_RECTANGLE_HEIGHT},
    .pattern = {.corner = DEFAULT_BORDER_CORNER, .vertical = DEFAULT_BORDER_VERTICAL, .horizontal = DEFAULT_BORDER_HORIZONTAL}
};

_Rectangle choose_module_rectangle = {
    .coordinate = {
        .x = CHOOSE_MODULE_RECTANGLE_COORDINATE_X,
        .y = CHOOSE_MODULE_RECTANGLE_COORDINATE_Y},
    .width_and_height = {.width = CHOOSE_MODULE_RECTANGLE_WIDTH, .height = CHOOSE_MODULE_RECTANGLE_HEIGHT},
    .pattern = {.corner = DEFAULT_BORDER_CORNER, .vertical = DEFAULT_BORDER_VERTICAL, .horizontal = DEFAULT_BORDER_HORIZONTAL}
};


_Rectangle * init_outermost_rectangle()
{
    return &outermost_rectangle;
}

_Rectangle * init_biggest_rectangle()
{
    return &biggest_rectangle;
}

_Rectangle * init_setting_rectangle()
{
    return &setting_rectangle;
}

_Rectangle * init_under_middle_rectangle()
{
    return &under_middle_rectangle;
}

_Rectangle * init_selected_mode_choose_mudule_to_red(){
    return &choose_module_rectangle;
}


