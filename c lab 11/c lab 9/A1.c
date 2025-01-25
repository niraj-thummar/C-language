//Print sum of series 1 – 2 + 3 – 4 + 5 – 6 + 7 … n
#include<stdio.h>
int main()
{
    int n,odd_sum=0,even_sum=0,sum=0,i=1;
    printf("enter the number:");
    scanf("%d",&n);
    while(i<=n)
    {
        if(i%2!=0)
        {
            odd_sum+=i;
        }
        else{
            even_sum-=i;
        }
        
        i++;
    }
    sum=odd_sum+even_sum;
    printf("sum of %d number of series is: %d",n,sum);
    return 0;
}