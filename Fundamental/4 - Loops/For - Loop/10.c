// 10.c  Calculate the Sum of Squares of First N Natural Numbers
#include <stdio.h>
int main()
{
    int n, i, sum = 0;
    printf("Enter Number");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        sum += (i * i);
    }
    printf("Sum of Squares upto %d = %d", n, sum);
    return 0;
}