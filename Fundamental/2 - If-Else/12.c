/*12.c Read a number if the number is equal to 10 or 20 or 30 divide it by 2, if the
number is equal to 40 or 50 divide it by 3, else divide it by 4. Make use of a
switch.*/
#include <stdio.h>
int main()
{
    int n;
    printf("Enter Any Number");
    scanf("%d", &n);
    switch (n)
    {
    case 10:
    case 20:
    case 30:
        printf("%d Divided by 2 = %d ", n, n / 2);
        break;
    case 40:
    case 50:
        printf("%d Divided by 3 = %d ", n, n / 3);
        break;
    default:
        printf("%d Divided by 4 = %d ", n, n / 4);
        break;
    }
}
