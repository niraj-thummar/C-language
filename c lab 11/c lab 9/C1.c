//Convert given number in words. (i.e. n=3456  output: Three Four Five Si
#include<stdio.h>
int main()

{
    int n,sum=0,rem=0,count=0;
    printf("enter the number:");
    scanf("%d",&n);
    while(n!=0)
    {
    
    rem=n%10;
    sum=sum*10+rem;
    n=n/10;
    count++;
    
    }
    while(count>0)
    {
       rem=sum%10;
    if(rem==1)
    {
        printf(" one");
    }if(rem==0)
    {
        printf(" zero");
    }
    if(rem==2)
    {
        printf(" two");
    }if(rem==3)
    {
        printf(" three");
    }if(rem==4)
    {
        printf(" four");
    }if(rem==5)
    {
        printf(" five");
    }if(rem==6)
    {
        printf(" six");
    }if(rem==7)
    {
        printf(" seven");
    }if(rem==8)
    {
        printf(" eight");
    }if(rem==9)
    {
        printf(" nine");
    }
    sum=sum/10;
    count--;
    }
   

    
    
   
    
    return 0;
}

