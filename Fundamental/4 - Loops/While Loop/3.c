// 3.c  Print Odd numbers from 1 to N
#include <stdio.h>
int main()
{

    int n, i;
    printf("\nEnter Number: ");
    scanf("%d", &n);
    i = 1;
    while (i <= n)
    {
        if (i % 2 != 0)
            printf("%d ", i);
        i++;
    }
    printf("\n");
    return 0;
}