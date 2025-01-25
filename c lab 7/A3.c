//Perform Addition, Subtraction, Multiplication and Division of 2 numbers as per user’s
//choice using switch.
#include<stdio.h>
int main()
{
    int num;
    printf("enter the number:");
    scanf("%d",&num);
    switch(num)
    {
        case 1:
        {
            float a,b;
            printf("enter the value of a:");
            scanf("%f",&a);
             printf("enter the value of b:");
            scanf("%f",&b);
            printf("addition is %f",a+b);
            break;
        }
        case 2:
        {
            float a,b;
            printf("enter the value of a:");
            scanf("%f",&a);
             printf("enter the value of b:");
            scanf("%f",&b);
            printf("multiplcation is %f",a*b);
            break;
        }
        case 3:
        {
            float a,b;
            printf("enter the value of a:");
            scanf("%f",&a);
             printf("enter the value of b:");
            scanf("%f",&b);
            printf("subtraction is %f",a-b);
            break;
        }
        case 4:
        {
            float a,b;
            printf("enter the value of a:");
            scanf("%f",&a);
             printf("enter the value of b:");
            scanf("%f",&b);
            printf("division is %f",a/b);
            break;
        }
        

    }
    return 0;
}