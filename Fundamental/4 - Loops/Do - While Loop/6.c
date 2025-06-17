// 6.c  Sum of Digits in a Number
#include <stdio.h>
int main()
{
    int n, sum = 0, r, i;
    printf("Enter a Number");
    scanf("%d", &n);
    i = n;
    while (n != 0)
    {
        r = n % 10;
        sum += r;
        n = n / 10;
    }
    printf("Sum of Digits in %d = %d", i, sum);
    return 0;
}