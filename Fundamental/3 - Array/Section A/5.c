
// 5. Read five integers from the user add them and print the addition.
#include <stdio.h>
int main()
{
    int a[5], i, sum = 0;

    for (i = 0; i < 5; i++)
    {
        printf("Enter element");
        scanf("%d", &a[i]);
        sum += a[i];
    }
    printf("Sum of 5 integers=%d\n", sum);

    return 0;
}