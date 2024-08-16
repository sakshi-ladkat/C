//Bubble sort
#include <stdio.h>

int main()
{
int n,i,j,a[100],temp;
printf("Enter Number of elements in the array");
scanf("%d",&n);
for(i=0;i<n;i++)
{
  printf("Enter array element");
  scanf("%d",&a[i]);
}
for(i=0;i<n-1;i++)
{
for(j=0;j<n-i-1;j++)
{
   if(a[j]>a[j+1])
{
temp=a[j];
a[j]=a[j+1];
a[j+1]=temp;
}
}
}
  printf("Sorted array is\n ");
for(j=0;j<n;j++)
{

  printf("%d\t",a[j]);
 
}
}


//Selection sort
#include <stdio.h>
int main()
{
    int i,a[100],n,j,pos,temp;
    printf("Enter No of Elements want to Enter");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("Enter %d th Element of Array",i);
        scanf("%d",&a[i]);
        
    }
    printf("Given Array is : ");
     for(i=0;i<n;i++)
    {
        printf("%d \t",a[i]);
        
    }
    for(i=0;i<n-1;i++)
    {
       pos=i;
       for(j=i+1;j<n;j++)
       {
           if(a[j]<a[pos])
            pos=j;
       }
    temp = a[i];
    a[i] = a[pos];
    a[pos] = temp;
}
     printf("\nSorted Array is : ");
     for(i=0;i<n;i++)
    {
        printf("%d \t",a[i]);
        
    }
    
    return 0;
}
   
