// 15. Read 10 integers from the user and perform multiplication of odd numbers
#include <stdio.h>

int main()
{
    int i, n, mul = 1;
    printf("Enter 10 integers : ");
    for (i = 0; i < 10; i++)
    {
        scanf("%d", &n);
        if (n % 2 != 0)
        {
            mul *= n;
        }
    }
    printf("Sum = %d", mul);
    return 0;
}
