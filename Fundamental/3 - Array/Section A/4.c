// 4. Read five characters from the user and print them using a character array.
#include <stdio.h>
int main()
{
    char a[5];
    int i;
    printf("Enter element");
    for (i = 0; i < 5; i++)
    {
        a[i] = getchar();
        getchar();
    }
    printf("Characters are \n");
    for (i = 0; i < 5; i++)
    {
        printf("%c\t", a[i]);
    }
    printf("\n");
    return 0;
}