// 1.c Count Down from N to 1
#include <stdio.h>

int main()
{
    int i, n, a, b, temp, sum, r;
    printf("1. Countdown:\nEnter Number: ");
    scanf("%d", &n);
    i = n;
    while (i >= 1)
    {
        printf("%d\n", i);
        i--;
    }

    return 0;
}
