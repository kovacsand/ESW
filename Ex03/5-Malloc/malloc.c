#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Enter the size of the array: ");
    int size;
    scanf("%d", &size);

    int *array = (int *)malloc(size * sizeof(int));
    int i;
    int sum = 0;
    for (i = 0; i < size; i++)
    {
        printf("Enter the value for element %d: ", i);
        scanf("%d", &array[i]);
        sum += array[i];
    }

    printf("The sum of the elements is %d", sum);

    free(array);

    return 0;
}