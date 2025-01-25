/*(d) 1
A B 1 2
3
C D E F 1 2 3 4
5*/
#include<stdio.h>
int main()
{
    int num,m=1;
    char ch='A';
    printf("entre the number:");
    scanf("%d",&num);
    for(int i=1; i<=num; i++)
    {
        for(int j=1; j<=num-i; j++)
        {
            printf("  ");
        }
            for(int j=1; j<=2*i-1; j++)
            {
                if(i%2==0)
                {
                    printf("%2c",ch);
                    ch++;
                }
                else{
                printf("%2d",m);
                m++;
                }
            }
                
            printf("\n");
        
    }
    return 0;
}