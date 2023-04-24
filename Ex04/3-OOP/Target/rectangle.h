#pragma once

typedef struct rectangle *rectangle_t;

rectangle_t rectangle_create();
void rectangle_destroy(rectangle_t self);
void rectangle_set(rectangle_t self, int width, int height);
int rectangle_get_area(rectangle_t self);
int rectangle_get_perimeter(rectangle_t self);
void rectangle_print(rectangle_t self);
