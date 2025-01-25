//Find out sum of ƒrst and last digit of a given number.
#include<stdio.h>
int main()
{
    int rem,num,sum=0,rum=0,a,b,count=0;
    printf("enter the number:");
    scanf("%d",&num);
    while(num!=0)
    {
    rem=num%10;
    sum=sum*10+rem;
    num=num/10;
    count++;
    }
    a=sum%10;
    while(count>0)
    {
        rem=sum%10;
        rum=rum*10+rem;
        sum=sum/10;
        count--;
    }
    b=rem%10;
    printf("%d",a+b);
    
    return 0;
    

}