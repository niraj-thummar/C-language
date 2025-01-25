// Find factorial of the given number
#include<stdio.h>
int main()
{
    int n,mul=1,i=1;
    printf("enter the number:");
    scanf("%d",&n);
    while(i<=n)
    {
        mul*=i;
        i++;
    }
    printf("factorial is:%d",mul);
    return 0;
}
