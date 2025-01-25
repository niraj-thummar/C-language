//. Insert new value in the sorted array.
#include<stdio.h>
int main()
{
    int n;
    int i,temp,labal;
    printf("enter the size of the array:");
    scanf("%d",&n);
    int a[n];
    printf("enter the value in assending order:");
    scanf("%d",&a[0]);
    for( i=1; i<n; i++)
    {
      printf("enter the value in assending order:");
      scanf("%d",&a[i]);
      if(a[i]<a[i-1])
      {
        goto labal;
      }
    }
    
    
    printf("enter the new element:");
    scanf("%d",&a[n]);
    n=n+1;
    for(int i=0; i<n; i++)
    {
        if(a[n-1]<=a[i])
        {
            temp=a[n-1];
            a[n-1]=a[i];
            a[i]=temp;
        }
        
    }
   for(int i=0; i<n; i++)
   {
    printf("%d,",a[i]);
   }
   

   labal:
   return 0;
}