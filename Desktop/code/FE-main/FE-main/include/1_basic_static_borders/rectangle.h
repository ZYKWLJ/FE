#ifndef RECTANGLE_H_
#define RECTANGLE_H_
typedef struct coordinate {
    int x;
    int y;
}Coordinate;

typedef struct width_and_height {
    int width;
    int height;
}Width_And_Height;

typedef char Corner;
typedef char Vertical;
typedef char Horizontal;

typedef struct pattern{
    Corner corner;
    Vertical vertical;
    Horizontal horizontal;
}Pattern;

typedef struct rectangle {
    Coordinate coordinate;
    Width_And_Height width_and_height;
    Pattern pattern;
}_Rectangle;

_Rectangle * init_rectangle(_Rectangle * rectangle);

void print_rectangle(_Rectangle* rectangle);

void print_rectangle_miss_left_border(_Rectangle *rectangle);

#endif /* RECTANGLE_H_ */