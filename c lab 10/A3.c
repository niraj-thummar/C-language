//. Find whether the given number is prime or not.
#include<stdio.h>
int main()
{
    int i=2,n,count=0;
    printf("enter the number:");
    scanf("%d",&n);
    while(i<n)
    {
        if(n%i==0)
        {
           count+=1;
        }
        i++;
    }
    if(count==0)
    {
        printf("prime number\n");
    }
    else{
        printf("not prime number\n");
    }
    return 0;
}