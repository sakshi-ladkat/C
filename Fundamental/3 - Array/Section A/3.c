
// 3. Read five floating-point numbers from the user and print them into a float array.
#include <stdio.h>
int main()
{
  float a[5];
  int i;

  for (i = 0; i < 5; i++)
  {
    printf("Enter element");
    scanf("%f", &a[i]);
  }
  printf("Array is\n");
  for (i = 0; i < 5; i++)
  {
    printf("%f\t", a[i]);
  }
  printf("\n");
  return 0;
}