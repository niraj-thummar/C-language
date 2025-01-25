//. Find factorial of the given numbe
#include<stdio.h>
int main()
{
    int num,ans=1;
    printf("enter the number:");
    scanf("%d",&num);
    for(int i=1; i<=num; i++)
    {
        ans*=i;
    }
    printf("%d",ans);
    return 0;
}