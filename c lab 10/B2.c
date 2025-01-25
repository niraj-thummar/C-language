//Find whether the given number is prime or not using flag.
#include<stdio.h>
int main()
{
    int num,i=2,flag=0;
    printf("enter the number:");
    scanf("%d",&num);
    if(num<2)
    {
        printf("no primenumber\n");
    }
    while(i<=num/2)
    {
        if(num%i==0)
        {
            flag=1;
            
            break;
        }
        i++;
    }
        if(flag==1)
        {
            printf("no prime number\n");
        }
        else{
            printf("prime number\n");
        }

    
    return 0;
}