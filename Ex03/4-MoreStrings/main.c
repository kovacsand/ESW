#include <stdio.h>
#include "my_string_func.h"

#define MAX_LENGTH 1000

int main()
{

    char line[MAX_LENGTH];
    char upper[MAX_LENGTH] = "";
    int line_length;

    /*
        Use a while loop to read input lines as long as there are any.
        For each input line, print the length of the line as well as
        the upper case version of the line
        NOTE You are NOT allowed to use the standard toupper(...)
        function in string.h
    */

    // while (/* Something should go here */)
    // {
    //     /* And here do the my_to_upper(...)*/
    //     printf("Length: %d\t%s\n", line_length, upper);
    // }

    char text[] = "This is a sample text";
    char *tpointer = text;
    char *upperPointer = upper;

    printf("Length of the sample is: %d\n", my_length(tpointer));
    my_to_upper(tpointer, upperPointer);
    printf("This should be in uppercase: %s\n", upper);
    printf("the length of the input is: %d", read_line(line));
    return 0;
}