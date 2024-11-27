8//Linear Search 
#include <stdio.h>
int main()
{  
int arr[10],n,key,i;
    printf("Enter no of elements in array");
    scanf("%d",&n);
    printf("Enter elements in array");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i])
    }
    printf("Enter element to search");
    scanf("%d",&key); 
    linsearch(arr,n,key);
}

int linsearch(int arr[],int size,int element)
{ int i;
   for(i=0;i<size;i++)
   {
       if(arr[i]==element)
       {
           printf("Elements is present at position %d",i)
       }
   }
           printf("Element is not present");
}




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


//Selection sort static
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
   
//Selection Sort Dynamic 
#include<stdio.h>
#include<stdlib.h>
int i,j,pos,temp,n;

int display(),selectionsort(),display();
int main()
{   
   printf("Enter Number of Elements in an array");
   scanf("%d",&n);
   int *array=(int*)malloc(n*sizeof(int));
   for(i=0;i<n;i++)
   {
      printf("Enter %d th Element of Array",i);
      scanf("%d",&array[i]);
   }
  printf("\n\nGiven Array is :");
  display(array,n);
  selectionsort(array,n);
  printf("\n\nSorted Array is : ");
  display(array,n);
}

int selectionsort(int *array,int n)
   {

         for(i=0;i<n-1;i++)
    {
       pos=i;
       for(j=i+1;j<n;j++)
       {
           if(array[j]<array[pos])
            pos=j;
       }
    temp = array[i];
    array[i] = array[pos];
    array[pos] = temp;
}
}

int display(int *array,int n)
{
for(i=0;i<n;i++)
    {
        printf("\t%d ",array[i]);
        
    }
    printf("\n")
}
