#include <stdio.h>

typedef struct Rectangle *pRectangle_t;

typedef struct Rectangle
{
    int width;
    int height;
} rectangle_t;

void set_dimensions(rectangle_t rectangle, int width, int height)
{
    rectangle.width = width;
    rectangle.height = height;
}

int get_area(rectangle_t rectangle)
{
    return rectangle.width * rectangle.height;
}

int get_perimeter(rectangle_t rectangle)
{
    return 2 * (rectangle.width + rectangle.height);
}

void print_rectangle_info(rectangle_t rectangle)
{
    printf("Rectangle width: %d, height: %d, area: %d, perimeter: %d",
           rectangle.width, rectangle.height, get_area(rectangle), get_perimeter(rectangle));
}

int main()
{
    pRectangle_t pRectangle;
    pRectangle = (pRectangle_t)malloc(sizeof(rectangle_t));
    set_dimensions(*pRectangle, 10, 20);
    print_rectangle_info(*pRectangle);
    free(pRectangle);

    return 0;
}