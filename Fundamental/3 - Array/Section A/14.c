// 14. Read a 3x3 matrix from the user and print the addition of each row and each column
#include <stdio.h>
int main()
{
    int a[3][3], i, j, r[3], c[3];
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    printf("\nMatrix is :\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%d\t", a[i][j]);
        }
        printf("\n");
    }
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            r[i] += a[i][j];
            c[i] += a[j][i];
        }
    }
    for (i = 0; i < 3; i++)
    {
        printf("Addition of row %d = %d\n", i, r[i]);
        printf("Addition of Column %d = %d\n", i, r[i]);
    }
}
