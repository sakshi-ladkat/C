//
#include <stdio.h>

int main()
{
    char str[50];
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin); // This reads spaces too
    printf("You entered: %s", str);
    return 0;
}