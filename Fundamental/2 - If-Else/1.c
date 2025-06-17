// 1.c read an integer from the user and check whether the number is positive or negative.
#include <stdio.h>
int main()
{
    int n;
    printf("Enter any Number");
    scanf("%d", &n);
    if (n == 0)
    {
        printf("%d is Neither Negative Nor Positive\n", n);
    }
    else if (n > 0)
    {
        printf("%d is Positive\n", n);
    }
    else
    {
        printf("%d is Negative\n", n);
    }
}