// Find Max, Min, Sum, Avg. of given numbers from an array.
#include<stdio.h>
int main()
{
    int size,max,min,sum=0;
    float avg;
    printf("enter the size of the array:");
    scanf("%d",&size);
    int a[size];
    
    for(int i=0; i<size; i++)
    {
        printf("enter the values:");
        scanf("%d",&a[i]);
        
    }
    max=a[0];
    for(int i=0; i<size; i++)
    {
       if(max<a[i])
       {
        max=a[i];
       }
      
    }
     printf("maximum value is: %d\n",max);
    
     for(int i=0; i<size; i++)
    {
       if(min>a[i])
       {
        min=a[i];
       }
       
    }
    printf("minimum value is: %d\n",min);
    for(int i=0; i<size; i++)
    {
       sum+=a[i];
    }
    printf("sum is: %d\n",sum);
    avg=(float)sum/size;
    printf("average is: %.2f\n",avg);
   
   
    return 0;

}