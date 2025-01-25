 /*Display the current Date & Time. [#include <time.h> for time and ctime function and
time_t datatype.]*/
#include<stdio.h>
#include<time.h>
int main()
{
    time_t t;
    time(&t);
    printf("\nCurrenr time : %s", ctime(&t));
    return 0;
}
