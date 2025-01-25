// Swap two numbers. (Using temporary variable and without using temporary variable)
#include<stdio.h>
int main()
{
 int a=4,temp;
 int b=6;
 temp=a;
 a=b;
 b=temp;
 printf("a=%d and b=%d",a,b);
 return 0;
}