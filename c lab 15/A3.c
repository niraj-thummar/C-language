// Count number of elements divisible by 3 in array.
#include<stdio.h>
int main()
{
    int n,count=0;
    printf("enter the number:");
    scanf("%d",&n);
    int a[n];
    for(int i=0; i<n; i++)
    {
        printf("enter the value:");
        scanf("%d",&a[i]);
    }
    for(int i=0; i<n; i++)
    {
        if(a[i]%3==0)
        {
            count++;
        }

    }
    printf("%d",count);
    return 0;
}