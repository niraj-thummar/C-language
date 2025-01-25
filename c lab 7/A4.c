/*4. Find out largest number from given 3 numbers using conditional operator*/
#include<stdio.h>
int main()
{
    int a,b,c,max;
    printf("enter the number a\n");
    scanf("%d",&a);
    printf("enter the number b\n");
    scanf("%d",&b);
    printf("enter the number c\n");
    scanf("%d",&c);
    max = a>b?(a>c?'a':'b'):(b>c?'b':'c');
    printf("%c is greater",max);
    return 0;
}