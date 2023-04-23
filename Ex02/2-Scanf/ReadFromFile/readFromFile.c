#include <stdio.h>

int main(void)
{
    // Reading from file
    char c;
    FILE *filepointer;
    filepointer = fopen("../WriteToFile/file.txt", "r");
    if (filepointer == NULL)
    { // check if the file exist.
        printf("Error opening file\n");
        return 1;
    }

    while (fscanf(filepointer, "%c", &c) != EOF)
    { // reads character until (EOF) end of file
        printf("%c", c);
    }

    return 0;
}