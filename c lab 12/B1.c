/* Find the sum of 1 + (1+2) + (1+2+3) + (1+2+3+4) + …+ (1+2+3+4+…. +n).
 Estimate the value of the mathematical constant e. (Formula: e=1+1/1!+1/2!+1/3!+1/4!…)*/
#include<stdio.h>
int main()
{
    int n,m,sum=0;
    printf("enter the number:");
    scanf("%d",&n);
    for(int i=1; i<=n; i++)
    {
        m=1;
        for(int j=1; j<=i; j++)
        {
            sum+=m++;
        }
        
    }
    printf("sum is %d",sum);

    return 0;
}