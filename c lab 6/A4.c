//Input an integer number and check the last digit of number is even or odd.
#include<stdio.h>
int main()
{
    int rem,last_digit,num;
    printf("enter the number\n");
    scanf("%d",&num);
    
        rem=num%10;
        last_digit=rem;
        if(last_digit%2==0)
        {
            printf("last digit is even\n");

        }
        else{printf("last digit is odd\n");}
        return 0;
    
}