// 4.c find the largest number among the three numbers.
#include <stdio.h>
int main()
{
   int a, b, c;
   printf("Enter 3 Numbers");
   scanf("%d %d %d", &a, &b, &c);
   if (a > b && a > c)
   {
      printf("%d is Greatest among %d and %d\n", a, b, c);
   }
   else if (b > a && b > c)
   {
      printf("%d is Greatest among %d and %d\n", b, a, c);
   }
   else
   {
      printf("%d is Greatest among %d and %d\n", c, a, c);
   }
}
