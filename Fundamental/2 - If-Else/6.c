// 6.c read an integer from the user and print a small number if the number is less than 10, print a large number if the number is greater than 10.
#include <stdio.h>
int main()
{
    int a;
    printf("Enter an integer :");
    scanf("%d", &a);
    if (a < 10)
    {
        printf("Small Number\n");
    }
    else if (a > 10)
    {
        printf("Large Number\n");
    }
    else
    {
        printf("\n %d is equal to 10", a);
    }
    return 0;
}