/* Get a decimal number from user and convert it into roman digits. (Symbol: I:1, IV:4, V:5,
IX:9, X:10, XL:40, L:50, XC:90, C:100, CD:400, D:500, CM:900, M:1000*/
#include<stdio.h>
int main()
{
    int num;
    printf("enter the number:");
    scanf("%d",&num);
    while(num>=1000)
    {
        printf("M");
        num-=1000;
    }
    if(num>=900)
    {
        printf("CM");
        num-=900;
    }
    if(num>=500)
    {
        printf("D");
        num-=500;
    }
    if(num>=400)
    {
        printf("CD");
        num-=400;
    }
    while(num>=100)
    {
        printf("C");
        num-=100;
    }
     if(num>=90)
    {
        printf("XC");
        num-=90;
    }
     if(num>=50)
    {
        printf("L");
        num-=50;
    }
     if(num>=40)
    {
        printf("XL");
        num-=40;
    }
    while(num>=10)
    {
        printf("X");
        num-=10;
    }
    if(num>=9)
    {
        printf("IX");
        num-=9;
    }
    if(num>=5)
    {
        printf("V");
        num-=5;
    }
    if(num>=4)
    {
        printf("IV");
        num-=4;
    }
    while(num>=1)
    {
        printf("I");
        num-=1;
    }
    return 0;

}