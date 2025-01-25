// Find the second largest number among three user input numbers.
#include<stdio.h>
int main()
{
    int a,b,c;
    printf("enter the number a:");
    scanf("%d",&a);
    printf("enter the number b:");
    scanf("%d",&b);
    printf("enter the number c:");
    scanf("%d",&c);
    if((a>b && a>c) || (a==b && a>c) || (a==c && a>b))
    {
        if(b>c)
        {
            printf("b is second largest\n");
        }
        else if(b<c)
        {
            printf("c is second largest\n");
        }
        else if(b==c)
        {
            printf("b and c are e   queal and both are second largest");
        }
    }
    else if((b>c && b>a) || (b==a && b>c) || (b==c && b>a))
    {
        if(a>c)
        {
            printf("a is second largest\n");
        }
        else if(a<c)
        {
            printf("c is second largest\n");
        }
        else if(a==c)
        {
            printf("a and c both are eqeal and both are second largest\n");
        }

    }
    else if((c>a && c>b) || (c==a && c>b) || (c==b && c>a))
    {
        if(a>b)
        {
            printf("a is second largest\n");
        }
        else if(a<b)
        {
            printf("b is second largest\n");
        }
        else if(a==b)
        {
            printf("a and b both are equel and both are second largest\n");
        }
    }
    else{
        printf("a,c and b are equel\n");
    }
    return 0;
}        

        
    
   