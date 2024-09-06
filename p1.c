
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


// Greater & Smaller
#include <stdio.h>
int main()
{
    int a,b;
    printf("Enter a & b :");
    scanf("%d %d",&a,&b);
    if(a>b)
    {
        printf("%d is Greater than %d",a,b);
    }
    else if(b>a)
    {
        printf("%d is Greater than %d",b,a);
    }
    else
    {
        printf("%d is equal to %d",a,b);
    }
    return 0;
}

//Division 
#include <stdio.h>
int main()
{
    int a,b,rem,quo;
    printf("Enter Value of a & b :");
    scanf("%d %d",&a,&b);
    if(b!=0)
    {
        rem=a%b;
        quo=a/b;
        printf("Remainder =\t%d\n Quotient=\t%d",rem,quo);
    }
    else if(b==0)
    {
        printf("Divide By Zero Error");
    }
    return 0;
}

// less than 10 print small number greater than 10 print large Number
#include <stdio.h>
int main()
{
    int a;
    printf("Enter an integer :");
    scanf("%d",&a);
    if(a<10)
    {
        printf("Small Number");
    }
    else if(a>10)
    {
        printf("Large Number");
    }
    else
    {
        printf("\n %d is equal to 10");
    }
    return 0;
}

//less than 100 print small number greater than 100 print large number and less than 1000 print Big Number , 
if it is greater than 1000 print large number
#include <stdio.h>
int main()
{
    int a;
    printf("Enter an integer :");
    scanf("%d",&a);
    if(a<100)
    {
        printf("Small Number");
    }
    else if(a>100 && a<1000)
    {
        printf("Big Number");
    }
    else
    {
        printf("Large Number");
    }
    return 0;
}

// Program To Display Table
#include<stdio.h>
int main()
{
   int i,n;
printf("Enter a Number to Display table");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
printf("\n %d*%d=%d",n,i,n*i);
}
return 0;
}


// 
#include <stdio.h>
int main()
{
    int a,i;
    printf("Enter an integer :");
    scanf("%d",&a);
    if(a<100 && a<200)
    {
        i=a/3;
        if(i<50)
        printf("Small Number\n");
        else
        printf("Not so big number");
    }
    else if(a>200 && a<300)
    {
        i=a/2;
        if(i<110)
        {
        printf("%d\n",i);
        }
        else
        {
        i=i/5;
        printf("%d\n",i);
        }
    }
    else if(a>300 )
    {
        printf("Very Big Number\n");
    }
  
   
}
