#include <stdio.h>

#include "calc.h"

int main(void)
{
    int a = 5;
    int b = 10;
    int result = calc_add(a, b);
    printf("%d + %d = %d\n", a, b, result);

    result = calc_sub(a, b);
    printf("%d - %d = %d\n", a, b, result);

    result = calc_mul(a, b);
    printf("%d * %d = %d\n", a, b, result);

    return 0;
}