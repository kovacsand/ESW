#include <stdio.h>
#include <math.h>
void multiSwap(int* x, int* y, int* z) {
    int oldX = *x;
    int oldY = *y;
    int oldZ = *z;
    *x = oldY;
    *y = oldZ;
    *z = oldX;    
}


int power(int x, int y) {
    return pow(x, y);
}


int main(void) {
    printf("2^3 = %d\n", power(2, 3));

    int x = 2;
    int y = 3;
    int z = 4;

    printf("x=%d, y=%d, z=%d\n", x, y, z);
    multiSwap(&x, &y, &z);
    printf("x=%d, y=%d, z=%d", x, y, z);

    return 0;
}