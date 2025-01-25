//Check whether number is even number or odd number using conditional operator.
#include<stdio.h>
int main()
{
    int num;
    
    printf("enter the number:");
    scanf("%d",&num);
     num%2==0?printf("even"):printf("odd");
     return 0;
}
  