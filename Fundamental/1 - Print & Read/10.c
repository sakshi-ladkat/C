// 10. Read a character from a user, assign it to a variable, and print it
#include <stdio.h>

int main()
{
    char ch;
    printf("Enter a character: ");
    scanf(" %c", &ch);
    printf("You entered: %c\n", ch);
    return 0;
}