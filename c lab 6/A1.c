/*Perform Addition, Subtraction, Multiplication and Division of 2 numbers as per user’s
choice.*/
#include<stdio.h>
int main()
{
    int num;
    printf("for,addition enter 1\nsubtraction enter 2\nmultiplcation enter 3\ndivision enter 4\n");
    scanf("%d",&num);
    switch(num)
    {
        case 1:
        {
            float a,b;
            printf("enter the number a\n");
            scanf("%f",&a);
             printf("enter the number b\n");
            scanf("%f",&b);
            printf("addition is %f",a+b);
            break;
        }
        case 2:
        {
            float a,b;
             printf("enter the number a\n");
            scanf("%f",&a);
             printf("enter the number b\n");
            scanf("%f",&b);
            printf("subtraction is %f",a-b);
            break;
        }
        case 3:
        {
            float a,b;
             printf("enter the number a\n");
            scanf("%f",&a);
             printf("enter the number b\n");
            scanf("%f",&b);
            printf("multiplycation is %f",a*b);
            break;
        }
        case 4:
        {
              float a,b;
             printf("enter the number a\n");
            scanf("%f",&a);
             printf("enter the number b\n");
            scanf("%f",&b);
            printf("division is %f",a/b);
            break;
        }

    }
    return 0;
}