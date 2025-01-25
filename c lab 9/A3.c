//Calculate without using power function
#include<stdio.h>
int main()
{
    int base,exp,mul=1,i=1;
    printf("enter the base:");
    scanf("%d",&base);
    printf("enter the exp:");
    scanf("%d",&exp);
    while(i<=exp)
    {
        mul*=base;
        i++;
    }
    printf("squer is : %d",mul);
    return 0;
}