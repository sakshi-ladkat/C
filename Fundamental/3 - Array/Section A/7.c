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