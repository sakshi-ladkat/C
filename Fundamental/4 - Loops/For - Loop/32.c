// 32.Find the length of a string
#include <stdio.h>

int main()
{
    char str[100];
    int len = 0;

    printf("Enter a string: ");
    scanf("%s", str);

    while (str[len] != '\0')
        len++;

    printf("Length = %d\n", len);
    return 0;
}
