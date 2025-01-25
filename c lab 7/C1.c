/*Check for equality of two numbers without using arithmetic or comparison operator.*/
#include<stdio.h>
int main()
{
    int a,b;
    printf("enter number a:");
    scanf("%d",&a);
    printf("enter number b:");
    scanf("%d",&b);
    !(a^b)?printf("equel number\n"):printf("not equel number\n");
    return 0;
}