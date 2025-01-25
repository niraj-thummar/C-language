//Find the sum and average of different numbers which are accepted by user as many as
// user wants.
#include<stdio.h>
int main()
{
    int i=1,sum=0,num,n;
    float avg;
    printf("how many numbers you want to enter:");
    scanf("%d",&num);
    while(i<=num)
    {
        
        printf("enter the number:");
        scanf("%d",&n);
        sum+=n;
        i++;
    }
    avg=(float)sum/num;
    printf("sum is %d\naverege is %.2f\n",sum,avg);
    return 0;
}