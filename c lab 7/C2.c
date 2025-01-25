/*Print number of days in a month considering leap year using switch.*/
#include<stdio.h>
int main()
{
    int month,year;
    printf("enter the month:");
    scanf("%d",&month);
    printf("enter the year:");
    scanf("%d",&year);
    switch(month)
    {
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:
        printf("31 days in this month\n");
        break;

        case 4:
        case 6:
        case 9:
        case 11:
        printf("30 days in this month\n");
        break;

        case 2:{
        if(year%4==0 && year%100!=0 || year%400==0)
        {
           printf("29 days in this month\n"); 
        }
        else{
            printf("28 days in this month\n");
        }
        }
        break;
        
        default :
        printf("you enter invalide month\n");
    }
    return 0;
}