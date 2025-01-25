// Determine the roots of the equation ax2+bx+c=0
#include<stdio.h>
#include<math.h>
int main()
{
    float a,b,x1,x2,c,dis;
    printf("solve the equation ax2+bx+c\n");
    printf("enter the value a:");
    scanf("%f",&a);
    printf("enter the value b:");
    scanf("%f",&b);
    printf("enter the value c:");
    scanf("%f",&c);
    dis=(b*b)-(4*a*c);
    if(dis>0)
    {
    x1= (-b + sqrt(dis)) / (2*a);
    x2= (-b - sqrt(dis)) / (2*a);
    printf("roots are %f and %f",x1,x2);
    }
   
   else if(dis==0)
    {
        x1=-b/(2*a);
        printf("only one root possible is %f",x1);
    }
    else
    {printf("imaginary roots can be possible in this given equation\n");
    }
    return 0;
}