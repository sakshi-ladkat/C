// 25.Check if a number is prime or composite
#include <stdio.h>

int main()
{
    int n, isPrime = 1;
    printf("Enter a number: ");
    scanf("%d", &n);

    if (n <= 1)
        isPrime = 0;
    for (int i = 2; i <= n / 2; i++)
        if (n % i == 0)
            isPrime = 0;

    if (isPrime)
        printf("Prime\n");
    else
        printf("Composite\n");

    return 0;
}
