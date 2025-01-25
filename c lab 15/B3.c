//. Swap ƒrst element with last, second to second last and so on.
#include<stdio.h>
int main()
{
    int n,temp;
    printf("enter the size of the array:");
    scanf("%d",&n);
    int a[n];
    for(int i=0; i<n; i++)
    {
        printf("enter the number:");
        scanf("%d",&a[i]);
    }
    for(int i=0; i<n/2; i++)
    {
        temp=a[i];
        a[i]=a[n-i-1];
        a[n-i-1]=temp;
    }
    for(int i=0; i<n; i++)
    {
        printf("%d",a[i]);
    }
    return 0;
}