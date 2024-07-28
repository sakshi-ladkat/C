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

   
