// 3.c check whether a year is a leap year.
#include <stdio.h>
int main()
{
    int n, r;
    printf("Enter any year");
    scanf("%d", &n);
    r = n % 100;
    if (r % 4 == 0)
    {
        printf("%d is Leap Year\n", n);
    }
    else
    {
        printf("%d is Not Leap Year\n", n);
    }
}