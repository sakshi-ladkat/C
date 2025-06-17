/*
 7. read a number from the user and print a small number if the number is less
 than 100, print a large number if the number is greater than 200, and print a
 very large number if the number is greater than 1000.
*/
#include <stdio.h>
#include <stdio.h>
int main()
{
    int a;
    printf("Enter an integer :");
    scanf("%d", &a);
    if (a < 100)
    {
        printf("Small Number\n");
    }
    else if (a > 200 && a < 999)
    {
        printf("Large Number\n");
    }
    else if (a > 1000)
    {
        printf("Very Large Number\n");
    }
    return 0;
}