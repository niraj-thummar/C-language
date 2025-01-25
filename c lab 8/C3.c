/*Take two numbers input from user and perform a division operation and ƒnd out quotient
and reminder (without using / and % operator) also note that a smaller number should
divide a bigger number. */
#include<stdio.h>
int main()
{
    int a,b,i=0,labal;
    labal:
    printf("enter the number a:");
    scanf("%d",&a);
    printf("enter the number b:");
    scanf("%d",&b);
    if(b==0)
    {
        printf("error\n");
        goto labal;
        
    }
    while(a>=b)
    {
        a-=b;
        i++;
    }
    printf("qutiant part is %d\n",i);
    printf("remainder part is %d\n",a);
    
    return 0;
}