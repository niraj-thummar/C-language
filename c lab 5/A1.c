// Print given feet into inches. (inches = feet*12)

#include<stdio.h>
int main()
{
    float feet,inches;
    printf("enter the value in feet\n");
    scanf("%f",&feet);
    inches=feet*12;
    printf("%.2f feet is %.2f inches",feet,inches);
    return 0;
}

