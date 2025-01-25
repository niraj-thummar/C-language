//. Check whether the given number is perfect or not
#include<stdio.h>
int main()
{
    int i=1,sum=0,n;
    printf("enter the number:");
    scanf("%d",&n);
    while(i<n)
    {
        if(n%i==0)
        {
            sum+=i;
        }
        i++;
    }
    if(sum==n)
    {
        printf("perfect number\n");
    }
    else{
        printf("not perfect number\n");
    }
    return 0;
}