#include <stdio.h>

#include "rectangle.h"

int main()
{
    rectangle_t rectangle;

    rectangle_t small = rectangle_create();
    set_dimensions(small, 10, 5);
    print_rectangle_info(small);
    rectangle_destroy(small);

    return 0;
}