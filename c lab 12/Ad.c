/*(d)
1
22
333
4444
55555*/
#include<stdio.h>
int main()
{
    int m=1,num;
    printf("enter the number:");
    scanf("%d",&num);
    for(int i=1; i<=num; i++)
    {
        for(int j=1; j<=i; j++)
        {
            printf("%d",m);
        }
        printf("\n");
        m++;
    }
}