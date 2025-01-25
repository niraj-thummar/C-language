//(d)
// 1
// 1 2
// 1 2 3
// 1 2 3 4
// 1 2 3 4 5
#include<stdio.h>
int main()
{
    int num,m=1;
    printf("enter the number:");
    scanf("%d",&num);
    for(int i=1; i<=num; i++)
    {
        m=1;
        for(int j=1; j<=i; j++)
        {
            printf("%d",m);
            m++;
        }
        printf("\n");
    }
    return 0;
}