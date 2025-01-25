//Print digits of given number.
#include<stdio.h>
int main()
{
    int count=0,num,rem,sum=0;
    printf("enter the number:");
    scanf("%d",&num);
    while(num!=0)
    {
        rem=num%10;
        sum=sum*10+rem;
        num=num/10;
        count++;
    }
    printf("%d digits",count);
    return 0;
}