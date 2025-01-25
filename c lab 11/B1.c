//Print the Fibonacci Serie 0,1,1,2,3,5,8,...
#include<stdio.h>
int main()
{
    int t1=0,t2=1,num,nt,labal;
    printf("enter the number:");
    scanf("%d",&num);
    if(num>2)
    {
    printf("%d,%d",t1,t2);
    }
    if(num==1){
        printf("0");
        goto labal;

    }
    if(num==2)
    {
        printf("0,1");
        goto labal;
    }
    for(int i=3; i<=num; i++)
    {
        nt=t1+t2;
        printf(",%d",nt);
        t1=t2;
        t2=nt;
    }
    labal:
    return 0;
}
