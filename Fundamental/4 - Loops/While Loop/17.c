// 17. Read 10 integers and print them along with the size of the array
#include <stdio.h>

int main()
{
    int arr[10];
    printf("Enter 10 integers:\n");
    for (int i = 0; i < 10; i++)
        scanf("%d", &arr[i]);

    printf("Array elements are:\n");
    for (int i = 0; i < 10; i++)
        printf("%d ", arr[i]);

    printf("\nSize of array: %lu bytes\n", sizeof(arr));
    return 0;
}
