/*9.c read, a number from the user if the number if a number of between 100 and
200 divide it by 3 if the result is less than 50 print small number if it is greater
than 50 print “not so big number”. If the input number is between 200 and 300
divide it by 2 if the result is less than 110 print the result else divide the result
by 5 and print it. If the input is greater than 300, print a very big number.*/
#include <stdio.h>
int main()
{
    int a, i;
    printf("Enter an integer :");
    scanf("%d", &a);
    if (a < 100 && a < 200)
    {
        i = a / 3;
        if (i < 50)
            printf("Small Number\n");
        else
            printf("Not so big number");
    }
    else if (a > 200 && a < 300)
    {
        i = a / 2;
        if (i < 110)
        {
            printf("%d\n", i);
        }
        else
        {
            i = i / 5;
            printf("%d\n", i);
        }
    }
    else if (a > 300)
    {
        printf("Very Big Number\n");
    }

    return 0;
}