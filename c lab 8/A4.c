//. Print sum of 1 to n numbers
#include<stdio.h>
int main()
{
    int num,sum=0,i;
    printf("enter the number:");
    scanf("%d",&num);
    while(i<=num)
    {
        sum+=i;
        i++;
    }
    printf("%d",sum);
    return 0;
}