// Hello World
#include<stdio.h>
int main()
{
  printf("Hello world\n");
return 0;
}

//Go To Hell
#include<stdio.h>
int main()
{
  printf("Go To Hell\n");
return 0;
}

//Declaring Variable 
#include<stdio.h>
int main()
{
  int i=10;
  float j=10.1;
  printf("value of i=\t%d \n value of j=\t%f",i,j);
  return 0;
}

//Swap two numbers using third variable
#include<stdio.h>
int main()
{
int a=5;
int b=10;
int c;
c=b;
b=a;
a=c;
printf("a=%d\tb=%d\tc=%d\n",a,b,c);
return 0;
}

//Simple Mathematical equation
#include<stdio.h>
int main()
{
  int x=3;
int y=(x*x*x)+(x*x)+x;
printf("x=%d and y=%d",x,y);
return 0;
}

#include <stdio.h>
// Largest Factorial Can be 65 with 19 digits factorial value 
int main()
{
   unsigned long int fact=1,n,i;
    printf("Enter Number to find Factorial");
    scanf("%lu",&n);
    for(i=n;i>=2;i--)
    {
        fact=fact*i;
    }
    printf("Factorial of %lu = %lu",n,fact);
    return 0;
}


//Fibonnacci Series (ITERATIVE)
#include<stdio.h>
int main()
{
    int i,n,tmp1=0,tmp2=1,tmp3=0;
    printf("Enter Value To print series");
    scanf("%d",&n);
    if(n==0)
    printf("0");
    else if(n==1)
    printf("0\t 1");
    else if(n==2)
    printf("0\t1\t1");
    else
    {
    printf("0\t1\t");
    for(i=0;i<n-1;i++)
    {
        tmp3=tmp1+tmp2;
        printf("%d\t",tmp3);
        tmp1=tmp2;
        tmp2=tmp3;
    }
    }
    return 0;
}



// Count digits in Number 
#include <stdio.h>

int main()
{
   int i,n,count=0;
   printf("Enter Number");
   scanf("%d",&n);
   i=n;
   while(n!=0)
   {
       n=n/10;
       count++;
   }
   printf("Digits in %d = %d",i,count);
  return 0;
}


//Reversed A Number
#include <stdio.h>
int main()
{
   int i,n,ans=0;
   printf("Enter Number");
   scanf("%d",&n);
   i=n;
   while(n!=0)
   {
      ans=(ans*10)+(n%10);
      n=n/10;
   }
   printf("\nOriginal Number = %d\n",i);
   
  printf("\nresversed Number = %d",ans);
  return 0;
}

// Palindrome or Not
#include <stdio.h>

int main()
{
   int i,n,ans=0;
   printf("Enter Number");
   scanf("%d",&n);
   i=n;
   while(n!=0)
   {
      ans=(ans*10)+(n%10);
      n=n/10;
   }
   if(i==n)
   {
       printf("%d is palindrome",i);
   }
   else
   {
     printf("%d is Not palindrome",i);  
   }
  return 0;
}
