// Swap two numbers. (Using temporary variable and without using temporary variable)
#include<stdio.h>
int main()
{
    int a=4;
    int b=7;
    a=a+b;
    b=a-b;
    a=a-b;
    printf("a=%d and b=%d",a,b);
    return 0;
}