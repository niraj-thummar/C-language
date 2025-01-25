//(b)
// 12345
// 1234
// 123
// 12
// 1
// 
#include<stdio.h>
int main()
{
    int n,m=1;
    printf("enter the number:");
    scanf("%d",&n);
    for(int i=n; 1<=i; i--)
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