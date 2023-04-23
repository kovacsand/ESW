#include <stdio.h>
#include <stdlib.h>
#include "mystr.h"

int main(void)
{
    printf("Comparing \"Hello World\" and \"Hello World\": %d\n", my_strcmp("Hello World", "Hello World"));
    printf("Comparing \"Hello World\" and \"\": %d\n", my_strcmp("Hello World", ""));
    printf("Comparing \"\" and \"\": %d\n", my_strcmp("", ""));
    printf("Comparing \"Hello World\" and \"Hello, World\": %d\n", my_strcmp("Hello World", "Hello, World"));

    // Test my_strlen
    printf("Length of \"Hello World\": %d\n", my_strlen("Hello World"));
    printf("Length of \"\": %d\n", my_strlen(""));

    // Test my_strcpy
    char *dest = malloc(100);
    printf("Copying \"Hello World\" to dest: %s\n", my_strcpy(dest, "Hello World"));
    printf("Copying \"\" to dest: %s\n", my_strcpy(dest, ""));
    free(dest);

    // Test my_strdup
    printf("Duplicating \"Hello World\": %s\n", my_strdup("Hello World"));
    printf("Duplicating \"\": %s\n", my_strdup(""));

    return 0;
}