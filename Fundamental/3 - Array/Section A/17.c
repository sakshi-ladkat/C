// 17. Read two 3x3 matrices perform their multiplication and print the answer
#include <stdio.h>

int main()
{
    int a[3][3], b[3][3], c[3][3], i, j, k;

    printf("Enter first 3x3 matrix:\n");
    for (i = 0; i < 3; i++)
        for (j = 0; j < 3; j++)
            scanf("%d", &a[i][j]);

    printf("Enter second 3x3 matrix:\n");
    for (i = 0; i < 3; i++)
        for (j = 0; j < 3; j++)
            scanf("%d", &b[i][j]);

    // Matrix multiplication
    for (i = 0; i < 3; i++)
        for (j = 0; j < 3; j++)
        {
            c[i][j] = 0;
            for (k = 0; k < 3; k++)
                c[i][j] += a[i][k] * b[k][j];
        }

    printf("\nProduct Matrix:\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
            printf("%d\t", c[i][j]);
        printf("\n");
    }

    return 0;
}
