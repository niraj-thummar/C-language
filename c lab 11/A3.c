// Print multiplication table of a given number.
#include<stdio.h>
int main()
{
    int num;
    printf("enter the number:");
    scanf("%d",&num);
    for(int i=1; i<=10; i++)
    {
        printf("%d X %d = %d\n",num,i,num*i);
    }
    return 0;
}