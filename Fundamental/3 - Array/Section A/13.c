// 13. Read a 2x2 matrix from the user and print the addition of each row
#include <stdio.h>
int main()
{
    int a[2][2], i, j, r[2];
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    printf("\nMatrix is :\n");
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            printf("%d\t", a[i][j]);
        }
        printf("\n");
    }
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            r[i] += a[i][j];
        }
    }
    for (i = 0; i < 2; i++)
    {
        printf("Addition of row %d = %d\n", i, r[i]);
    }
}