// 16. Read two 2x2 matrices perform their multiplication and print the answer
#include <stdio.h>

int main()
{
    int a[2][2], b[2][2], c[2][2], i, j, k;

    printf("Enter first 2x2 matrix:\n");
    for (i = 0; i < 2; i++)
        for (j = 0; j < 2; j++)
            scanf("%d", &a[i][j]);

    printf("Enter second 2x2 matrix:\n");
    for (i = 0; i < 2; i++)
        for (j = 0; j < 2; j++)
            scanf("%d", &b[i][j]);

    // Matrix multiplication
    for (i = 0; i < 2; i++)
        for (j = 0; j < 2; j++)
        {
            c[i][j] = 0;
            for (k = 0; k < 2; k++)
                c[i][j] += a[i][k] * b[k][j];
        }

    printf("\nProduct Matrix:\n");
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
            printf("%d\t", c[i][j]);
        printf("\n");
    }

    return 0;
}
