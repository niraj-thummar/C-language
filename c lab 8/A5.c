//. Get 10 numbers from user print count of odd, even numbers.
#include<stdio.h>
int main()
{
    int num,odd_count=0,even_count=0;
   
   for(int i=1; i<=10; i++)
   {
    printf("enter the number:");
    scanf("%d",&num);
    if(num%2==0)
    {
        even_count++;
    }
    else{
        odd_count++;
    }

   }
   printf(" odd numbers are :%d\n",odd_count);
   printf(" even numbers are : %d\n",even_count);
   return 0;
}