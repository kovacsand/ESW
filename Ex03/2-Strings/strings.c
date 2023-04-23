#include <stdio.h>

int main()
{
    char text[] = "The quick brown fox jumps over lazy dog";

    // Sets the pointer right after the text
    char *endS = text + 39;
    printf("The string now says: \"%s\n", text);

    // This is simply a null chracter, so now the pointer is pointing to a value 0
    *endS = '\0';
    // The full string is printed
    printf("The string now says: \"%s\n", text);

    // Repeat the following three lines in your own example, but experiment
    // with different values than just subtracting 1 from endS

    // We decrement the pointer, so the last character of text is going to be a 0
    // This means, when printing, the printer prints doi
    // We decrease the pointer and change the value as well
    *--endS = 'i';
    printf("The string now says: \"%s\n", text);
    // This prints everything but the last character

    endS += 1;
    *endS = 'e';
    printf("The string now says: \"%s\n", text);
    // It removes five more letters from the end

    ++endS;
    *endS = '\0';
    printf("The string now says: \"%s\n", text);
    // It tries to add values to it, but they have been removed, so it is the same as the one above

    return 0;
}