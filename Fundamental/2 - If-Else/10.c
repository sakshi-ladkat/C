

/*10.c Read, a number if equal to 10 divide it by 2 if the number is equal to 20 divide
it by 3 if the number is equal to 30 divide it by 4 if the number is equal to 50
divide it by 5.*/
#include <stdio.h>
int main()
{
    int n;
    printf("Enter Any Number");
    scanf("%d", &n);
    if (n == 10)
        printf("Given Number Divided by 2 = %d ", n / 2);
    else if (n == 20)
        printf("Given Number Divided by 3 = %d ", n / 3);
    else if (n == 30)
        printf("Given Number Divided by 4 = %d ", n / 4);
    else if (n == 50)
        printf("Given Number Divided by 5 = %d ", n / 5);
    else
        printf("TRY AGAIN");
}
