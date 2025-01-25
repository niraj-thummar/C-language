// Calculate without using power function
#include<stdio.h>
int main()
{
    int mul=1,base,exp;
    printf("enter the base:");
    scanf("%d",&base);
    printf("enter the exp:");
    scanf("%d",&exp);
    for(int i=1; i<=exp; i++)
    {
        mul*=base;
    }
    printf("%d",mul);
    return 0;

    
}