/*Convert seconds into hours, minutes & seconds and print in HH:MM:SS. [e.g. 10000
seconds = 02:46:40)]*/
#include<stdio.h>
int main()
{
    int sec,hour,min;
     
    printf("enter the seconds\n");
    scanf("%d",&sec);
    hour=(sec/3600);  //total sec/3600
    min=(sec%3600)/60;  //total sec %(modulo) 3600 / 60
    sec=(sec%3600)%60;    //total sec %(modulo) 60
    printf("%02d:%02d:%02d",hour,min,sec);
    return 0;
}
