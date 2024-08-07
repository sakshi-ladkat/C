
//Even or Odd Number
#include<stdio.h>
int main()
{
   int x;
printf("Enter any number");
scanf("%d",&x);
if(x%2==0)
{
printf("%d is Even");
}
else
{
printf("%d is odd");
}
}

//Positive or negative 
#include<stdio.h>
int main()
{
   int x;
printf("Enter any number");
scanf("%d",&x);
if(x>0)
{
printf("%d is Positive");
}
else
{
printf("%d is negative");
}
}

//Program To write For the quadratic equation 
#include<stdio.h>
#include<math.h>
int main()
{
   int a=6,b=-17,c=12,x,y;
   printf("Quadratic equation %dx^2%dx+%d\n\n",a,b,c);
   x=-b-(sqrt(b*b-4*a*c))/2*a;
   y=-b+(sqrt(b*b-4*a*c))/2*a;
printf("Roots Of Quadratic equations are \n\n%d \t %d",x,y);
return 0;
}
