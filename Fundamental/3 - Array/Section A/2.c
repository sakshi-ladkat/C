// 2. Read five integers from the user and print them using an integer array.
#include <stdio.h>
int main()
{
    int a[5], i;

    for (i = 0; i < 5; i++)
    {
        printf("Enter element");
        scanf("%d", &a[i]);
    }
    printf("Array is\n");
    for (i = 0; i < 5; i++)
    {
        printf("%d\t", a[i]);
    }
    printf("\n");
    return 0;
}