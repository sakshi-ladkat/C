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
