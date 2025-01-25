//. Sort elements of an array in an ascending(chadto kram) order.
#include<stdio.h>
int main()
{
    int n,temp;
    
    printf("how many numbers you want to enter:");
    scanf("%d",&n);
    int a[n];
    for(int i=0; i<n; i++)
    {
        printf("enter the number:");
        scanf("%d",&a[i]);

        
    }
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n-i-1; j++)
        {
           if(a[j]>a[j+1])
           {
            temp=a[j];
            a[j]=a[j+1];
            a[j+1]=temp;
           }
        }
    }
    for(int j=0; j<n; j++)
    {
    printf("%d ",a[j]);
    }
    return 0;
}

    

    
