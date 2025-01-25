//. Reverse elements of an array without using second array.
#include<stdio.h>
int main()
{
    int n;
    printf("enter the size of the array:");
    scanf("%d",&n);
    int a[n];
    for(int i=0; i<n; i++)
    {
        printf("enter value:");
        scanf("%d",&a[i]);
    }
    for(int i=n-1; i>=0; i--)
    {
        printf("%d ",a[i]);
    }
    return 0;

    
}
