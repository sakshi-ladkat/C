//1.Read five integers from the user and print them.
#include<stdio.h>
int main()
{
    int n=5,i
    
    for(i=0;i<5;i++)
    {
    printf("\nEnter element")
    scanf("%d",&n);
    printf("%d\t",n);
    }
    printf("\n");
    return 0;

}
  
//2. Read five integers from the user and print them using an integer array.
#include<stdio.h>
int main()
{
    int a[5],i;
    
    for(i=0;i<5;i++)
    {
    printf("Enter element");
    scanf("%d",&a[i]);
    }
    printf("Array is\n");
    for(i=0;i<5;i++)
    {
    printf("%d\t",a[i]);
    }
    printf("\n");
    return 0;

}
//3. Read five floating-point numbers from the user and print them into a float array.
  #include<stdio.h>
int main()
{
    float a[5];
    int i
    
    for(i=0;i<5;i++)
    {
    printf("Enter element");
    scanf("%f",&a[i]);
    }
    printf("Array is\n");
    for(i=0;i<5;i++)
    {
    printf("%f\t",a[i]);
    }
    printf("\n");
    return 0;

}
//4. Read five characters from the user and print them using a character array.
#include<stdio.h>
int main()
{
    char a[5];
    int i;
    printf("Enter element");
    for(i=0;i<5;i++)
    {
    a[i]=getchar();
    getchar();
    }
    printf("Characters are \n");
    for(i=0;i<5;i++)
    {
    printf("%c\t",a[i]);
    }
    printf("\n");
    return 0;

}
//5. Read five integers from the user add them and print the addition.
#include<stdio.h>
int main()
{
    int a[5],i,sum=0;
    
    for(i=0;i<5;i++)
    {
    printf("Enter element");
    scanf("%d",&a[i]);
    sum+=a[i];
    }
    printf("Sum of 5 integers=%d\n",sum);
    
    return 0;
}
//6. Read five integers from the user and add them if the addition is greater than 10 divide the addition by 2 else divide the addition by 3 and print the answer.
#include<stdio.h>
int main()
{
    int a[5],i,sum=0;
    
    for(i=0;i<5;i++)
    {
    printf("Enter element");
    scanf("%d",&a[i]);
    sum+=a[i];
    }
    if(sum>10)
    {
        printf("Sum of integers = %d\n",sum/2);
    }
    else
    {
        printf("Sum of integers = %d\n",sum/3);
    }
    
    return 0;
}
//7. Create an integer array of size 5 read 10 integers into this array and print the integers. (Make a comment on the output.)
#include<stdio.h>
int main()
{
    int a[5],i;
    
    for(i=0;i<10;i++)
    {
    printf("Enter element");
    scanf("%d",&a[i]);
    }
    printf("Array is\n");
    for(i=0;i<10;i++)
    {
    printf("%d\t",a[i]);
    }
    printf("\n");
    return 0;
}
//8. Read a character from the user and print it.
#include<stdio.h>
int main()
{
char s;
    printf("Enter any character");
    s=getchar();
    printf("%c\n",s);
}
//9. Read a string from the user and print it.
#include<stdio.h>
int main()
{
char s[10];
    printf("Enter any string");
    scanf("%s",s);
    printf("%s\n",s);
}
//10. Read a string with spaces from the user and print it (e.g. “Hello World”).
#include<stdio.h>
int main()
{
char s[11];
    printf("Enter any string");
    scanf("%s",s);
    printf("%s\n",s);
}
//11. Read a 2x2 matrix from the user and print it
#include<stdio.h>
int main()
{  int a[2][2],i,j;
    for(i=0;i<2;i++)
    {
    for(j=0;j<2;j++)
   { 
    scanf("%d",&a[i][j]);
   }
    }
    printf("\nMatrix is :\n");
    for(i=0;i<2;i++)
    {
    for(j=0;j<2;j++)
    {
    printf("%d\t",a[i][j]); 
    }
    printf("\n");
    }
}
//12. Read a 3x3 matrix from the user and print it
#include<stdio.h>
int main()
{  int a[3][3],i,j;
    for(i=0;i<3;i++)
    {
    for(j=0;j<3;j++)
   { 
    scanf("%d",&a[i][j]);
   }
    }
    printf("\nMatrix is :\n");
    for(i=0;i<3;i++)
    {
    for(j=0;j<3;j++)
    {
    printf("%d\t",a[i][j]); 
    }
    printf("\n");
    }
}
//13. Read a 2x2 matrix from the user and print the addition of each row
#include<stdio.h>
int main()
{  int a[2][2],i,j,r[2];
    for(i=0;i<2;i++)
    {
    for(j=0;j<2;j++)
   { 
    scanf("%d",&a[i][j]);
   }
    }
    printf("\nMatrix is :\n");
    for(i=0;i<2;i++)
    {
    for(j=0;j<2;j++)
    {
    printf("%d\t",a[i][j]); 
    }
    printf("\n");
    }
    for(i=0;i<2;i++)
{
    for(j=0;j<2;j++)
{
    r[i]+=a[i][j];

}
}
for(i=0;i<2;i++)
{
  printf("Addition of row %d = %d\n",i,r[i]);
}
}
//14. Read a 3x3 matrix from the user and print the addition of each row and each column
#include<stdio.h>
int main()
{  int a[3][3],i,j,r[3],c[3];
    for(i=0;i<3;i++)
    {
    for(j=0;j<3;j++)
   { 
    scanf("%d",&a[i][j]);
   }
    }
    printf("\nMatrix is :\n");
    for(i=0;i<3;i++)
    {
    for(j=0;j<3;j++)
    {
    printf("%d\t",a[i][j]); 
    }
    printf("\n");
    }
    for(i=0;i<3;i++)
{
    for(j=0;j<3;j++)
{
    r[i]+=a[i][j];
    c[i]+=a[j][i];

}
}
for(i=0;i<3;i++)
{
  printf("Addition of row %d = %d\n",i,r[i]);
  printf("Addition of Column %d = %d\n",i,r[i]);
}
  
}
