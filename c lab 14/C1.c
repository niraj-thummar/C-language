//. Count total duplicate elements in an array.
#include<stdio.h>
int main()
{
    int n,dup=1,count=0;
    
    printf("enter the size of the array:");
    scanf("%d",&n);
    int a[n];
    
    for(int i=0; i<n; i++)
    {
        printf("enter the value:");
        scanf("%d",&a[i]);
    }
    int b[dup];
    for(int i=0; i<n; i++)
    {
        for(int j=i+1; j<=n-1; j++)
        {
            if(b[dup]!=a[i])
            {
            if(a[i]==a[j])
            {
                count++;
                b[dup]=a[i];
            }
            }

        }
        
    }
    printf("%d duplicats",count);
    return 0;
}