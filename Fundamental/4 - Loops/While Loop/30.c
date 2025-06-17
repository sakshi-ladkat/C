// 30.Check if a number is Palindrome or not
#include <stdio.h>

int main()
{
    int n, original, rev = 0;
    printf("Enter a number: ");
    scanf("%d", &n);
    original = n;

    while (n != 0)
    {
        rev = rev * 10 + n % 10;
        n /= 10;
    }

    if (original == rev)
        printf("Palindrome\n");
    else
        printf("Not a Palindrome\n");

    return 0;
}
