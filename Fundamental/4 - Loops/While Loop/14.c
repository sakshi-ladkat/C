// 14. Read 10 integers from the user and perform the addition of even numbers
#include <stdio.h>

int main()
{
    int i, n, sum = 0;
    printf("Enter 10 integers : ");
    for (i = 0; i < 10; i++)
    {
        scanf("%d", &n);
        if (n % 2 == 0)
        {
            sum += n;
        }
    }
    printf("Sum = %d", sum);
    return 0;
}