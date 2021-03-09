#include "shape.h"

int main(int argc, char **argv) {
    struct Shape * shape = Shape_create(12, 12);
    struct Rectangle * rect = Rectangle_create(12, 12, 3, 4);

    Shape_show(shape);
    Shape_move(shape, -2, 1);
    printf("\nafter the shape move-----(-2, 1)----------\n");
    Shape_show(shape);
    Shape_move(shape, -2, 1);
    printf("\nafter the shape move-----(-2, 1)----------\n");
    Shape_show(shape);

    printf("\n================================\n");
    printf(
        "now the position of the shape is (%d, %d)\n", 
        Shape_getX(shape), 
        Shape_getY(shape)
    );

    printf("\n\n");
    // Shape_show(rect);
    Shape_show((struct Shape *)rect);
    Shape_move((struct Shape *)rect, -2, 1);
    printf("\nafter the shape move-----(-2, 1)----------\n");
    Shape_show((struct Shape *)rect);
    Shape_move((struct Shape *)rect, -2, 1);
    printf("\nafter the shape move-----(-2, 1)----------\n");
    Shape_show((struct Shape *)rect);

    printf("\n================================\n");
    printf(
        "now the position of the rectangle is (%d, %d)\nand the width is %d, height is %d", 
        Shape_getX((struct Shape *)rect), 
        Shape_getY((struct Shape *)rect),
        Rectangle_getWidth(rect),
        Rectangle_getHeight(rect)
    );

//----------------------------------------------------------------
    free(shape);
    free(rect);
    return 0;
}
