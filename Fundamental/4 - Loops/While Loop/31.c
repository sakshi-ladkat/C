// 31.Convert a binary number to a decimal using while loop
#include <stdio.h>

int main()
{
    int bin, dec = 0, base = 1, rem;
    printf("Enter binary number: ");
    scanf("%d", &bin);

    while (bin > 0)
    {
        rem = bin % 10;
        dec += rem * base;
        base *= 2;
        bin /= 10;
    }

    printf("Decimal = %d\n", dec);
    return 0;
}
