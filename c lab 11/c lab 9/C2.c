// Convert decimal number to binary. (i.e. n=11  output: 1101
#include<stdio.h>
int main()
{
    int bin,num,sum=0;
    
    printf("enter the number:");
    scanf("%d",&num);
    while(num!=0)
    {
        bin=num%2;
        sum=sum*10+bin;
        num=num/2;
        
    }
    printf("%d",sum);
    return 0;
}