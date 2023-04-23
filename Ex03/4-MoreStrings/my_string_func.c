#include <stdio.h>
#include <stdlib.h>
#include "my_string_func.h"

/* read_line: read a line into s, return length */

int my_length(char *text)
{
    /* Implement this function so it returns the number of characters it is.*/

    char *pointer = text;
    int size = 0;

    while (*pointer != '\0')
    {
        size++;
        pointer++;
    }

    return size;
}

void my_to_upper(char *str_in, char *str_out)
{
    /*
        You must implement your own version of toupper using the two strings str_in and str_out.
        Loop over the str_in (as long as it "contains" something).
        Look at the "current" character and check if its a lowercase letter.
        If it is, convert it to the upper case version and add that to the str_out character array
    */

    char *pIn = str_in;
    char *pOut = str_out;

    while (*pIn != '\0')
    {
        if (*pIn >= 'a' && *pIn <= 'z')
        {
            *pOut++ = *pIn - 32;
        }
        else
        {
            *pOut++ = *pIn;
        }
        pIn++;
    }

    *pOut = '\0';
}

int read_line(char s[])
{
    int c = 0;
    int i = 0;
    int done = 0;

    do
    {
        c = getchar();

        if (c == EOF || c == '\n')
        {
            done = 1;
        }
        else
        {
            s[i++] = c;
        }
    } while (!done);

    s[i] = '\0';
    return i;
}