#include "calc.h"
#include "math.h"

// change the functions so the tests passes.
double calc_add(double a, double b)
{
    return a + b;
}

double calc_subtract(double a, double b)
{
    return a - b;
}

double calc_multiply(double a, double b)
{
    return a * b;
}

double calc_divide(double a, double b)
{
    return a / b;
}

double calc_square_root(double a)
{
    return sqrt(a);
}

double calc_power_of(double a, double b)
{
    return pow(a, b);
}

double calc_factorial(double a)
{
    if (a == 0)
        return 1;
    return calc_factorial(a - 1) * a;
}
