// Take two numbers input from user and perform a multiplication without using a *
//operator.
#include<stdio.h>
int main()
{
    int a,b,mul=0,i=1;
    printf("enter the number a:");
    scanf("%d",&a);
    printf("enter the number b:");
    scanf("%d",&b);
    while(i<=b)
    {
        mul+=a;
        i++;
    }
    printf("%d",mul);
  return 0;
}