#include <stdio.h>

int main(void)
{
    char name[100];
    printf("What's your name?");
    scanf("%s", name);
    printf("How old are you?");
    int age;
    scanf("%d", &age);
    printf("Hi %s, you are %d years old", name, age);

    return 0;
}