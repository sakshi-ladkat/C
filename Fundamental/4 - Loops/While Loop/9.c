// 9.c  Print Multiples of 3 up to N
#include <stdio.h>
int main()
{
    int n, i;
    printf("Enter Number");
    scanf("%d", &n);
    printf("Multiple of 3 up to %d\n", n);
    for (i = 1; i <= n; i++)
    {
        printf("%d\n", 3 * i);
    }
    return 0;
}