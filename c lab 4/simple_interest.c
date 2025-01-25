#include<stdio.h>
int main()
{
    float p,r,t;
    printf("enter value of p\n");
    scanf("%f",&p);
    printf("enter value of r\n");
    scanf("%f",&r);
    printf("enter value of t\n");
    scanf("%f",&t);
    printf("simple interest is %f",(p*r*t)/100);
    return 0;
}