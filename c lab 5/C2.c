// Check whether the given number is odd or even without using % operator.
#include<stdio.h>
int main()
{
    int num,a,b;
    printf("enter the number\n");
    scanf("%d",&num);
    a=num/2;
    b=a*2;
    if(num==b)
    {
        printf("number is even\n");

    }
    else{
        printf("number is odd\n");
    }
    return 0;
}