// 22.Find the largest element of an integer array using for loop
#include <stdio.h>

int main()
{
    int arr[10];
    printf("Enter 10 integers:\n");
    for (int i = 0; i < 10; i++)
        scanf("%d", &arr[i]);

    int max = arr[0];
    for (int i = 1; i < 10; i++)
        if (arr[i] > max)
            max = arr[i];

    printf("Largest element = %d\n", max);
    return 0;
}
