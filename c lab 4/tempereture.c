#include<stdio.h>
int main()
{
    float f,c;
    printf("enter the temp in ferenheit\n");
    scanf("%f",&f);
    c=(((f-32)*5))/9;
    printf("tempereture in celsius is %f",c);
    return 0;
}