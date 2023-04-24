#include "rectangle.h"

#include <stdio.h>

typedef struct rectangle
{
    int width;
    int height;
} rectangle;

// Constructor
rectangle_t rectangle_create()
{
    rectangle_t = calloc(sizeof(rectangle), 1);

    if (rectangle == NULL)
    {
        printf("Error: Could not allocate memory for rectangle");
        exit(1);
    }

    return rectangle;
}

// Destructor
void rectangle_destroy(rectangle_t self)
{
    if (self != NULL)
    {
        free(self);
    }
}

void set_dimensions(rectangle_t self, int width, int height)
{
    self->width = width;
    self->height = height;
}

int get_area(rectangle_t self)
{
    return self->width * self->height;
}

int get_perimeter(rectangle_t self)
{
    return 2 * (self->width + self->height);
}

void print_rectangle_info(rectangle_t self)
{
    printf("Rectangle: width = %d, height = %d, area = %d, perimeter = %d
           ", self->width, self->height, get_area(self), get_perimeter(self));
}
