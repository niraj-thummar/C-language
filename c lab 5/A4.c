//Check whether the given number is odd or even.
#include<stdio.h>
int main()
{
    int num;
    printf("enter the number\n");
    scanf("%d",&num);
    if(num%2 == 0)
    {
        printf("given number is even\n");

    }
    else{
        printf("given number is odd\n");
    }
    return 0;
}