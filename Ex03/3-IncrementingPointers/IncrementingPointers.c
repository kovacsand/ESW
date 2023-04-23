#include <stdio.h>

int main() {

    int intarray[] ={1,2,3,4,5}; // integer array with 5 elements
    int * pint = intarray;

    char chararray [] ="1234"; // char array with 5 elements (4 chars and a \0)
    char * pchar = chararray;

    printf("chararray's first element is '%c', which is placed at address %p\n", pchar[0], pchar);
    printf("chararray's second element is '%c', which is placed at address %p\n", pchar[1], pchar+1);
    printf("So, when adding 1 to a char pointer, %d is simply added to the address. \n\n", (int)(pchar+1)-(int)pchar);

    printf("intarrays' first element is %d, which is placed at address %p\n", pint[0], pint);
    printf("intarrays' second element is %d, which is placed at address %p\n", pint[1], pint+1);
    printf("So, when adding 1 to an integer point, 1 is not simply added to the address. Apparently %d is added to the pointer \n\n", (int)(pint+1)-(int)pint);

    float floatarray[] = {1.618, 2.718, 3.14};
    float * pfloat = floatarray;
    printf("floatarray's first element is '%f', which is placed at address %p\n", pfloat[0], pfloat);
    printf("floatarray's second element is '%f', which is placed at address %p\n", pfloat[1], pfloat+1);
    printf("So, when adding 1 to a float pointer, %d is simply added to the address. \n\n", (int)(pfloat+1)-(int)pfloat);

    double doublearray[] = {3.9, 4.6, 12.9};
    double * pdouble = doublearray;
    printf("doublearray's first element is '%lf', which is placed at address %p\n", pdouble[0], pdouble);
    printf("doublearray's second element is '%lf', which is placed at address %p\n", pdouble[1], pdouble+1);
    printf("So, when adding 1 to a double pointer, %d is simply added to the address. \n\n", (int)(pdouble+1)-(int)pdouble);

    //So, a char is 1 byte, an int is 1, a float is 4 and double is 8
}