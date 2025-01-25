// Print sum of 1 to n numbers.
#include<stdio.h>
int main()
{
    int sum=0,n;
    printf("enter the number:");
    scanf("%d",&n);
    for(int i=1; i<=n; i++)
    {
        sum+=i;
    }
    printf("sum is %d",sum);
    return 0;
}