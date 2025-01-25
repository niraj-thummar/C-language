/*
(c)
5
54
543
54*/
#include<stdio.h>
int main()
{
    int m,num;
    printf("enter the number:");
    scanf("%d",&num);
    for(int i=1; i<=num; i++)
    {
        m=5;
        for(int j=1; j<=i; j++)
        {
            printf("%d",m--);
        }
        printf("\n");
    }
    return 0;
}

