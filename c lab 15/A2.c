//Count total number of negative elements in array.
#include<stdio.h>
int main()
{
    int n,count=0;
    printf("enter the size of the array:");
    scanf("%d",&n);
    int a[n];
    for(int i=0; i<n; i++)
    {
        printf("enter the value:");
        scanf("%d",&a[i]);
    }
    for(int i=0; i<n; i++)
    {
        if(a[i]<0)
        {
            count++;
        }
    }
    printf("nagative count is:%d",count);
    return 0;
}