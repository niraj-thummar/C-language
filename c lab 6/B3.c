/*Three sides of a triangle are entered through the keyboard, WAP to check whether the
triangle is isosceles, equilateral, scalene or right angled triangle.*/

#include<stdio.h>
int main()
{
    float a,b,c;
    printf("enter the lenght of the side a:");
    scanf("%f",&a);
    printf("enter the lenght of the side b:");
    scanf("%f",&b);
    printf("enter the lenght of the side c:");
    scanf("%f",&c);
    
    if(a==b && b==c && a==c)
    {

        printf("tringle is equelateral\n");
    }
    else if(a==b || b==c || a==c)
    {
        printf("tringle is isoscalers\n");
    }
    else if(a*a + b*b == c*c||a*a + c*c == b*b||b*b + c*c == a*a){
    
    
        printf("right angled tringle\n");
    }
    
    else
    {
        printf("tringle is scalan\n");
        
    }
    
    
    return 0;
}