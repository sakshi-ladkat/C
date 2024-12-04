//1.c Count Down from N to 1
#include<stdio.h>
int main()
{ 
    int n,i
    printf("Enter Number")
    scanf("%d",&n);
    for(i=n;i>=1;i--)
    {
        printf("%d\n",i);
    }
    return 0
}

//2.c Print Even numbers from 1 to N
#include<stdio.h>
int main()
{
    int n,i;
    printf("Enter Number");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        if(i%2==0)
        printf("%d\n",i);
    }
    return 0;
}

//3.c  Print Odd numbers from 1 to N
#include<stdio.h>
int main()
{
    int n,i;
    printf("Enter Number");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        if(i%2!=0)
        printf("%d\n",i);
    }
    return 0;
}

//4.c Calculate the Sum of Even numbers up to N
#include<stdio.h>
int main()
{
    int n,i,sum=0;
    printf("Enter Number");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        if(i%2==0)
        sum +=i;
    }
    printf("%d\n",sum);
    return 0;
}


//5.c  Calculate the Sum of Odd numbers up to N
#include<stdio.h>
int main()
{
    int n,i,sum=0;
    printf("Enter Number");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        if(i%2!=0)
        sum +=i;
    }
    printf("%d\n",sum);
    return 0;
}

//6.c  Sum of Digits in a Number
#include<stdio.h>
int main()
{
    int n,sum=0,r,i;
    printf("Enter a Number");
    scanf("%d",&n);
    i=n;
    while(n!=0)
    {
        r=n%10;
        sum += r;
        n=n/10;
    }
    printf("Sum of Digits in %d = %d",i,sum);
    return 0;
}

//7.c Print Squares of Numbers from 1 to N
#include<stdio.h>
int main()
{ 
    int n,i;
    printf("Enter Number");
    scanf("%d",&n);
    printf("squares from 1 to %d\n",n);
    for(i=1;i<=n;i++)
    {
        printf("%d\n",i*i);
    }
    return 0;
}
//8.c  Print the Table of Squares and Cubes
#include<stdio.h>
int main()
{ 

    int n,i;
    printf("Enter Number");
    scanf("%d",&n);
    printf("square\t|cube\n");
    for(i=1;i<=n;i++)
    {
        printf("%d\t|%d\n",i*i,i*i*i);
    }
    return 0;
}
//9.c  Print Multiples of 3 up to N
#include<stdio.h>
int main()
{ 
    int n,i;
    printf("Enter Number");
    scanf("%d",&n);
    printf("Multiple of 3 up to %d\n",n);
    for(i=1;i<=n;i++)
    {
        printf("%d\n",3*i);
    }
    return 0;
}
//10.c  Calculate the Sum of Squares of First N Natural Numbers
#include<stdio.h>
int main()
{ 
    int n,i,sum=0;
    printf("Enter Number");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        sum += (i*i);
    }
    printf("Sum of Squares upto %d = %d",n,sum);
    return 0;
}

//11.c  Find the Sum of Odd Digits in a Number
#include<stdio.h>
int main()
{
    int n,sum=0,r,i;
    printf("Enter a Number");
    scanf("%d",&n);
    i=n;
    while(n!=0)
    {
        r=n%10;
        if(r%2!=0)
        {
        sum += r;
        }
        n=n/10;
    }
    printf("Sum of Digits in %d = %d",i,sum);
    return 0;
}

//12.c Read five integers from the user into an integer array using for loop
#include<stdio.h>
int main()
{
    int i,n=5,a[5];
    for(i=1;i<=5;i++)
    {
        printf("Enter %d th integer",i);
        scanf("%d",&a[i]);
    }
printf("Array is :");
for(i=1;i<=5;i++)
  printf("%d\t",a[i]); 
}

//13.c Read five integers from the user and perform their addition, and multiplication user for loop
#include<stdio.h>
int main()
{
    int n=5,i,sum=0,mult=1;
    for(i=0;i<5;i++)
    {
        printf("Enter Element");
        scanf("%d",&n);
        sum +=n;
        mult=mult*n;
        
    }
    printf("sum=%d\tmult=%d",sum,mult);
}
