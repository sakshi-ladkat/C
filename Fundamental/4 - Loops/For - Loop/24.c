// 24.Calculate the standard deviation of 10 numbers using for loop
#include <stdio.h>
#include <math.h>

int main()
{
    int arr[10], sum = 0;
    float mean, sd = 0;

    printf("Enter 10 numbers:\n");
    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &arr[i]);
        sum += arr[i];
    }

    mean = sum / 10.0;

    for (int i = 0; i < 10; i++)
        sd += pow(arr[i] - mean, 2);

    sd = sqrt(sd / 10);
    printf("Standard Deviation = %.2f\n", sd);
    return 0;
}
