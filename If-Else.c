//1.c read an integer from the user and check whether the number is positive or negative.
#include<stdio.h>
int main()
{
    int n;
    printf("Enter any Number");
    scanf("%d",&n);
    if(n==0)
    {
        printf("%d is Neither Negative Nor Positive\n",n);
    }
    else if(n>0)
    {
        printf("%d is Positive\n",n);
    }
    else
    {
        printf("%d is Negative\n",n);
    }
}

//2.c read an integer from the user and check whether the number is even or odd.
#include<stdio.h>
int main()
{
    int n;
    printf("Enter any Number");
    scanf("%d",&n);
    if(n%2==0)
    {
        printf("%d is Even\n",n);
    }
    else
    {
        printf("%d is Odd\n",n);
    }
}

//3.c check whether a year is a leap year.
#include<stdio.h>
int main()
{
    int n,r;
    printf("Enter any year");
    scanf("%d",&n);
    r=n%100;
    if(r%4==0)
    {
        printf("%d is Leap Year\n",n);
    }
    else
    {
        printf("%d is Not Leap Year\n",n);
    }
}

//4.c find the largest number among the three numbers.
#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter 3 Numbers");
    scanf("%d %d %d",&a,&b,&c);
    if(a>b && a>c)
    {
       printf("%d is Greatest among %d and %d\n",a,b,c);
    }
    else if(b>a && b>c)
    {
       printf("%d is Greatest among %d and %d\n",b,a,c);
    }
    else
    {
       printf("%d is Greatest among %d and %d\n",c,a,c);
    }
}

//5.c Compute quotient and the remainder of two numbers “a” and “b” if b is non-zero
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
        printf("Remainder =\t%d\n Quotient=\t%d\n",rem,quo);
    }
    else if(b==0)
    {
        printf("Divide By Zero Error\n");
    }
    return 0;
}

//6.c read an integer from the user and print a small number if the number is less than 10, print a large number if the number is greater than 10.
#include <stdio.h>
int main()
{
    int a;
    printf("Enter an integer :");
    scanf("%d",&a);
    if(a<10)
    {
        printf("Small Number\n");
    }
    else if(a>10)
    {
        printf("Large Number\n");
    }
    else
    {
        printf("\n %d is equal to 10",a);
    }
    return 0;
}
//7.c read a number from the user and print a small number if the number is less than 100, print a large number if the number is greate
#include<stdio.h>
#include <stdio.h>
int main()
{
    int a;
    printf("Enter an integer :");
    scanf("%d",&a);
    if(a<100)
    {
        printf("Small Number\n");
    }
    else if(a>200 && a < 999)
    {
        printf("Large Number\n");
    }
    else if(a>1000)
    {
        printf("Very Large Number\n");
    }
    return 0;
}
//8.c read a number from the user and is the number if between 100 and 200 print
small number if between 201 and 300 print big number and if the number is
between 301 and 400 print large number and if the number is greater than
401 print very large number.
#include <stdio.h>
int main()
{
    int a;
    printf("Enter an integer :");
    scanf("%d",&a);
    if(a<100 && a<200)
    {
        printf("Small Number\n");
    }
    else if(a>200 && a<300)
    {
        printf("Big Number\n");
    }
    else if(a>300 && a<400)
    {
        printf("Large Number\n");
    }
    else
    {
        printf("Very Large Number\n");
    }
    return 0;
}
//9.c read, a number from the user if the number if a number of between 100 and
200 divide it by 3 if the result is less than 50 print small number if it is greater
than 50 print “not so big number”. If the input number is between 200 and 300
divide it by 2 if the result is less than 110 print the result else divide the result
by 5 and print it. If the input is greater than 300, print a very big number.
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
  
    return 0;
}
//10.c Read, a number if equal to 10 divide it by 2 if the number is equal to 20 divide
it by 3 if the number is equal to 30 divide it by 4 if the number is equal to 50
divide it by 5.
#include<stdio.h>
int main()
{
    int n;
    printf("Enter Any Number");
    scanf("%d",&n);
    if(n==10)
        printf("Given Number Divided by 2 = %d ",n/2);
    else if(n==20)
        printf("Given Number Divided by 3 = %d ",n/3);
     else if(n==30)
        printf("Given Number Divided by 4 = %d ",n/4);
     else if(n==50)
        printf("Given Number Divided by 5 = %d ",n/5);
    else
        printf("TRY AGAIN");
}

//11.c Read, a number if equal to 10 divide it by 2, if the number if equal to 20 divide
it by 3, if the number is equal to 30 divide it by 4if the number if equal to 40
divide it by 5. Make use of a switch.
  #include<stdio.h>
int main()
{
    int n;
    printf("Enter Any Number");
    scanf("%d",&n);
    switch(n)
    { case 10 :  
        printf("%d  Divided by 2 = %d ",n,n/2);
        break;
        case 20 : 
        printf("%d  Divided by 3 = %d ",n,n/3);
        break;
        case 30 : 
        printf("%d  Divided by 4 = %d ",n,n/4);
        break;
        case 40 :
        printf("%d Divided by 5 = %d ",n,n/5);
        break;
        default :
        printf("TRY AGAIN");
    }
}

//12.c Read a number if the number is equal to 10 or 20 or 30 divide it by 2, if the
number is equal to 40 or 50 divide it by 3, else divide it by 4. Make use of a
switch.
#include<stdio.h>
int main()
{
int n;
printf("Enter Any Number");
scanf("%d",&n);
switch(n)
{
case 10 :
case 20 :
case 30 :
printf("%d Divided by 2 = %d ",n,n/2);
break;
case 40 :
case 50 :
printf("%d Divided by 3 = %d ",n,n/3);
break;
default :
printf("%d Divided by 4 = %d ",n,n/4);
break;
}
}
