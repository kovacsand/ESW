#include <stdio.h>

int main(void)
{
    printf("Please write a character!\n");
    char c;
    scanf("%c", &c);
    printf("You wrote this character: %c\n", c);

    printf("Please write a number!\n");
    int number;
    scanf("%d", &number);
    printf("You wrote this number: %d\n", number);

    printf("Please put in the length of the rectangle!\n");
    float length;
    scanf("%f", &length);
    printf("Please put in the length of the rectangle!\n");
    float width;
    scanf("%f", &width);
    printf("The are of a rectangle that's %f wide and %f long is %f\n", width, length, width * length);

    printf("Please write something nice\n");
    char text[20];
    scanf("%[^\n]s", text); // The ^\n means that it reads until that specific character
    printf("You wrote this: %s", text);

    return 0;
}
