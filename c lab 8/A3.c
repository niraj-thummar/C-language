//. Print numbers between two given numbers which is divisible by 2.
#include<stdio.h>
int main()
{
    int a,b,i;
    printf("enter number a:");
    scanf("%d",&a);
    printf("enter number b:");
    scanf("%d",&b);
    i=a;
    while(i<=b)
    {
        if(i % 2 == 0)
        {
            printf("%d\n",i);
        }
        i++;
    }
    return 0;
}

