//Calculate without using power function and without using multiplicatio

#include<stdio.h>
int main()
{
    int temp,result=1,base,exp;
    printf("enter the base:");
    scanf("%d",&base);
    printf("enter the exp:");
    scanf("%d",&exp);
    for(int i=1; i<=exp; i++)
    {
        temp=0;
        for(int i=1; i<=base; i++)
        {
            temp+=result;
        }
        result=temp;
    }
    printf("%d",result);
    return 0;
}