// 5.c  Calculate the Sum of Odd numbers up to N
#include <stdio.h>
int main()
{
    int n, i, sum = 0;
    printf("Enter Number");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        if (i % 2 != 0)
            sum += i;
    }
    printf("%d\n", sum);
    return 0;
}