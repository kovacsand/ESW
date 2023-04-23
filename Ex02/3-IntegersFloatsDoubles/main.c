#include <stdint.h>
#include <stdio.h>

int main(void) {
    int intSeven = 7;
    int intThree = 3;
    float floatSeven = 7;
    float floatThree = 3;
    double doubleSeven = 7;
    double doubleThree = 3;

    printf("Divide 7 by 3 (int): %d/%d=%d\n", intSeven, intThree, intSeven/intThree);
    printf("Divide 7 by 3 (float): %f/%f=%f\n", floatSeven, floatThree, floatSeven/floatThree);
    printf("Divide 7 by 3 (double): %f/%f=%f\n", doubleSeven, doubleThree, doubleSeven/doubleThree);

    printf("Remainder (int): %d mod %d = %d\n", intSeven, intThree, intSeven%intThree);
    //The modulo operator cannot be applied to floating-point numbers!
    //printf("Remainder (float): %f mod %f = %f\n", floatSeven, floatThree, floatSeven%floatThree);

    printf("0.2-0.1-0.1=%f", 0.2-0.1-0.1);
    //It is 0.000000
    return 0;
}