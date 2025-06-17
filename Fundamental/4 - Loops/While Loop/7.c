// 7.c Print Squares of Numbers from 1 to N
#include <stdio.h>
int main()
{
    int n, i;
    printf("Enter Number");
    scanf("%d", &n);
    printf("squares from 1 to %d\n", n);
    for (i = 1; i <= n; i++)
    {
        printf("%d\n", i * i);
    }
    return 0;
}