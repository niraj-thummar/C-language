/*Read marks of ƒive subjects. Calculate percentage and print class accordingly. Fail below
35, Pass Class between 36 to 45, Second Class between 46 to 60, First Class between 61 to
70, Distinction if more than 70.*/
#include<stdio.h>
int main()
{
    float marks1,marks2,marks3,marks4,marks5,per;
    printf("enter the marks1\n");
    scanf("%f",&marks1);
    printf("enter the marks2\n");
    scanf("%f",&marks2);
    printf("enter the marks3\n");
    scanf("%f",&marks3);
    printf("enter the marks4\n");
    scanf("%f",&marks4);
    printf("enter the marks5\n");
    scanf("%f",&marks5);
    per=((float)(marks1+marks2+marks3+marks4+marks5)/500)*100;
    if(per>70)
    {
        printf("congratulation! you score %f percent\nyou got distinction\n",per);
    }
    if(per<=70 && per>=61)
    {
        printf("good! you score %f persent\nyou got first class\n",per);
    }
    if(per<61 && per>=46)
    {
        printf("not bad! you score %f persent\nyou got second class\n",per);
    }
    if(per<46 && per>=36)
    {
        printf("you score %f persent\nyou got pass class\n",per);
    }
    if(per<36)
    {
        printf("need improvement\n");
    }
    return 0;
}
