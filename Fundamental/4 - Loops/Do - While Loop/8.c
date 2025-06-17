// 8.c  Print the Table of Squares and Cubes
#include <stdio.h>
int main()
{

    int n, i;
    printf("Enter Number");
    scanf("%d", &n);
    printf("square\t|cube\n");
    for (i = 1; i <= n; i++)
    {
        printf("%d\t|%d\n", i * i, i * i * i);
    }
    return 0;
}