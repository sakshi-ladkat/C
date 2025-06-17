// 5.c Compute quotient and the remainder of two numbers “a” and “b” if b is non-zero
#include <stdio.h>
int main()
{
    int a, b, rem, quo;
    printf("Enter Value of a & b :");
    scanf("%d %d", &a, &b);
    if (b != 0)
    {
        rem = a % b;
        quo = a / b;
        printf("Remainder =\t%d\n Quotient=\t%d\n", rem, quo);
    }
    else if (b == 0)
    {
        printf("Divide By Zero Error\n");
    }
    return 0;
}
