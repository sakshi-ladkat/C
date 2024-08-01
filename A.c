// Brute Force GCD Finding
#include<stdio.h>
int main()
{
   int x,y,i,r;
   printf("Enter Value of X and y\n");
   scanf("%d %d",&x,&y);
if(x>y)
{
    r=x%y;
  while(r>0)
    {
      x=y;
      y=r;
     r=x%y;
    }
}
  printf("GCD is %d",y);

  }
