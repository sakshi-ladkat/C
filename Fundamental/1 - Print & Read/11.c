// 11. Read an int, float, double, long double, char from the user and print
#include <stdio.h>

int main()
{
    int i;
    float f;
    double d;
    long double ld;
    char c;

    printf("Enter an integer: ");
    scanf("%d", &i);
    printf("Enter a float: ");
    scanf("%f", &f);
    printf("Enter a double: ");
    scanf("%lf", &d);
    printf("Enter a long double: ");
    scanf("%Lf", &ld);
    printf("Enter a character: ");
    scanf(" %c", &c);

    printf("Integer: %d\n", i);
    printf("Float: %f\n", f);
    printf("Double: %lf\n", d);
    printf("Long Double: %Lf\n", ld);
    printf("Character: %c\n", c);

    return 0;
}