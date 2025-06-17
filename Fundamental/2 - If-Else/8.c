
/*8.c read a number from the user and is the number if between 100 and 200 print
small number if between 201 and 300 print big number and if the number is
between 301 and 400 print large number and if the number is greater than
401 print very large number.*/
#include <stdio.h>
int main()
{
    int a;
    printf("Enter an integer :");
    scanf("%d", &a);
    if (a < 100 && a < 200)
    {
        printf("Small Number\n");
    }
    else if (a > 200 && a < 300)
    {
        printf("Big Number\n");
    }
    else if (a > 300 && a < 400)
    {
        printf("Large Number\n");
    }
    else
    {
        printf("Very Large Number\n");
    }
    return 0;
}