// 2.c read an integer from the user and check whether the number is even or odd.
#include <stdio.h>
int main()
{
    int n;
    printf("Enter any Number");
    scanf("%d", &n);
    if (n % 2 == 0)
    {
        printf("%d is Even\n", n);
    }
    else
    {
        printf("%d is Odd\n", n);
    }
}
