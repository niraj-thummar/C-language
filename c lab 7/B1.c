//Read 3 numbers, multiply largest number from ƒrst two numbers to third one using
//conditional.
#include<stdio.h>
int main()
{
    int a,b,c,mul;
    printf("enter the number a:");
    scanf("%d",&a);
    printf("enter the number b:");
    scanf("%d",&b);
    printf("enter the number c:");
    scanf("%d",&c);
     mul = a>=b?a*c:b*c;
     printf("multiplycation is %d",mul);
     return 0;
    
}