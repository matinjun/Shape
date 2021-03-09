#include "shape.h"

struct Shape {
    int x;
    int y;
};
struct Shape * Shape_create(int x, int y) {
    struct Shape * s = (struct Shape *)malloc(sizeof(struct Shape));
    s->x = x;
    s->y = y;
    return s;
}
void Shape_init(struct Shape * self, int x, int y) {
    self->x = x;
    self->y = y;
}
void Shape_move(struct Shape * self, int dx, int dy) {
    self->x += dx;
    self->y += dy;
}
void Shape_show(struct Shape * self) {
    printf("x = %d, y = %d", self->x, self->y);
}
int Shape_getX(struct Shape * self) {
    return self->x;
}
int Shape_getY(struct Shape * self) {
    return self->y;
}


struct Rectangle {
    struct Shape base;
    int width;
    int height;
};
struct Rectangle* Rectangle_create(int x, int y, int width, int height) {
    struct Rectangle * s = (struct Rectangle *)malloc(sizeof(struct Rectangle));
    s->base.x = x;
    s->base.y = y;
    s->width = width;
    s->height = height;
    return s;
}
int Rectangle_getWidth(struct Rectangle * self) {
    return self->width;
}
int Rectangle_getHeight(struct Rectangle * self) {
    return self->height;
}
