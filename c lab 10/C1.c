//Check whether the given number is Armstrong or not.
//angstrome aetle koi pn number na digit na cube no sarvado te number jetloj thay
#include<stdio.h>
#include<math.h>
int main()
{
    int num,original,sum=0,rem,count=0;
    printf("enter the number:");
    scanf("%d",&num);
    original=num;
    while(num!=0)
    {
        rem=num%10;
        sum+=rem*rem*rem;
        num=num/10;
    }

    if(original==sum)
    {
        printf("given number is armstrong\n");
    }
    else{
        printf("given number is not armstrong\n");
    }
    return 0;
}
