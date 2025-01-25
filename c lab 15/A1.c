//Copy all elements of one array to another
#include<stdio.h>
int main()
{
    int n;
    printf("enter the number:");
    scanf("%d",&n);
    int a[n],b[n];
    for(int i=0; i<n; i++)
    {
    printf("enter the values:");
    scanf("%d",&a[i]);
    }
    for(int i=0; i<n; i++)
    {
        b[i]=a[i];
    }
    for(int i=0; i<n; i++)
    {
        printf("%d",b[i]);
    }
    return 0;
}