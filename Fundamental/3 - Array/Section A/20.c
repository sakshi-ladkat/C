/*20.Dynamically create an integer array of size 10, read 10 integers and print the
 sum of all integers stored at even indices. Also, release memory before
 program termination*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *arr = (int *)malloc(10 * sizeof(int)), sum = 0;

    if (arr == NULL)
    {
        printf("Memory allocation failed.\n");
        return 1;
    }

    printf("Enter 10 integers:\n");
    for (int i = 0; i < 10; i++)
        scanf("%d", &arr[i]);

    for (int i = 0; i < 10; i += 2)
        sum += arr[i];

    printf("Sum of integers at even indices: %d\n", sum);

    free(arr);
    return 0;
}
