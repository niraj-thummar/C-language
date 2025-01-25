 /*Convert number of days into year, week & days. [e.g. 375 days mean 1 year, 1 week and 3
 days]*/

#include<stdio.h>
int main()
{
   int days,year,weeks;
   printf("enter the days\n");
   scanf("%d",&days);
   year=(days/365);    //days = total days
   weeks=(days%365)/7;
   days=(days%365)%7;
   printf("%02d years %02d weeks %02d days",year,weeks,days);
   return 0;
}