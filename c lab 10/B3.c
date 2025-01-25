//. Check whether the given number is palindrome or not.
#include<stdio.h>
int main()
{
    int num,rem,sum=0,original;
    printf("enter the number:");
    scanf("%d",&num);
    original=num;
    while(num!=0)
    {
        rem=num%10;
        sum=sum*10+rem;
        num=num/10;
    }
    if(original==sum)
    {
        printf("palindrome number\n");
    }
    else{
        printf("not palindrome number\n");
    }
    return 0;

    
}
