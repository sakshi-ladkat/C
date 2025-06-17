// 1.Read five integers from the user and print them.
#include <stdio.h>
int main()
{
    int n = 5, i;

    for (i = 0; i < 5; i++)
    {
        printf("\nEnter element");
        scanf("%d", &n);
        printf("%d\t", n);
    }
    printf("\n");
    return 0;
}