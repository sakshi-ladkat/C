// 12.c Read five integers from the user into an integer array using for loop
#include <stdio.h>
int main()
{
    int i, n = 5, a[5];
    for (i = 1; i < 5; i++)
    {
        printf("Enter %d th integer", i);
        scanf("%d", &a[i]);
    }
    printf("Array is :");
    for (i = 1; i <= 5; i++)
        printf("%d\t", a[i]);
}