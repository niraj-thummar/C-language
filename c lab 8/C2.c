//Print sum of series 1 + 4 + 9 + 16 + 25 + 36 + …n
#include<stdio.h>
int main()
{
    int num,i=1,sum=0;
    printf("enter the number:");
    scanf("%d",&num);
    while(i<=num)
    {
       
       sum+=i*i;
       i++;
    }
     printf("sum is %d",sum);
     return 0;
}