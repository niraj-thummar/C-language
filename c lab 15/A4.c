//. Search element in array.
#include<stdio.h>
int main()
{
    int n,m,value;
    printf("enter the size of the array:");
    scanf("%d",&n);
    int a[n];
    for(int i=0; i<n; i++)
    {
        printf("enter the value:");
        scanf("%d",&a[i]);
    }
    printf("which element you want to search:");
    scanf("%d",&m);
    value=a[m-1];
    printf("element is %d",value);
    return 0;
}