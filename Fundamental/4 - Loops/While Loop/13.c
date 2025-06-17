// 13.c Read five integers from the user and perform their addition, and multiplication user for loop
#include <stdio.h>
int main()
{
    int n = 5, i, sum = 0, mult = 1;
    for (i = 0; i < 5; i++)
    {
        printf("Enter Element");
        scanf("%d", &n);
        sum += n;
        mult = mult * n;
    }
    printf("sum=%d\tmult=%d", sum, mult);
}