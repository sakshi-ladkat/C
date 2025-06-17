// 23.Calculate the average of 10 numbers using array and for loop
#include <stdio.h>

int main()
{
    int arr[10], sum = 0;
    printf("Enter 10 numbers:\n");
    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &arr[i]);
        sum += arr[i];
    }
    float avg = sum / 10.0;
    printf("Average = %.2f\n", avg);
    return 0;
}
