// 6. Read five integers from the user and add them if the addition is greater than 10 divide the addition by 2 else divide the addition by 3 and print the answer.
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
    if (sum > 10)
    {
        printf("Sum of integers = %d\n", sum / 2);
    }
    else
    {
        printf("Sum of integers = %d\n", sum / 3);
    }

    return 0;
}