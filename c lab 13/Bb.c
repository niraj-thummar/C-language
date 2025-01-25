/*1
0 1
0 1 0
1 0 1 0*/
#include<stdio.h>
int main()
{
    int num,m=1;
    printf("enter the number:");
    scanf("%d",&num);
    for(int i=1; i<=num; i++)
    {
        
        for(int j=1; j<=i; j++)
        {
            printf("%d",m);
            if(m==1)
            {
                m=0;
            }
            else{
                m=1;
            }
        }
        printf("\n");
    }
    return 0;
}