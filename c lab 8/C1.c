/*Calculate sum and average of the square of ƒrst 10 integers whose square has last digit
9.*/ 
#include<stdio.h>
int main()
{
    int i=1,sqr,sum=0,count=0,rem;
    float avg;
    while(i<=10)
    {
        sqr=i*i;
        rem=sqr%10;
        if(rem==9)
        {
            count+=1;
            sum+=i;
        }
        i++;
    }
    avg=(sum)/(count);
        printf("sum is %d\n",sum);
        printf("averege is %.2f\n",avg);
        return 0;
}










