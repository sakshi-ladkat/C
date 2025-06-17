// 18.Dynamically create an integer array of size 10 and read 10 numbers in it.
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *arr = (int *)malloc(10 * sizeof(int));

    if (arr == NULL)
    {
        printf("Memory allocation failed.\n");
        return 1;
    }

    printf("Enter 10 integers:\n");
    for (int i = 0; i < 10; i++)
        scanf("%d", &arr[i]);

    printf("You entered:\n");
    for (int i = 0; i < 10; i++)
        printf("%d ", arr[i]);

    free(arr);
    return 0;
}
