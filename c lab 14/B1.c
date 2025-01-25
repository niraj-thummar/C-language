//. Count numbers higher than the average of an array.
#include<stdio.h>
int main()
{
    int size,sum=0,avg,count=0;
    printf("enter the size of the array:");
    scanf("%d",&size);
    int a[size];
    for(int i=0; i<size; i++)
    {
        printf("enter the number:");
        scanf("%d",&a[i]);
        sum+=a[i];
    }
    avg=sum/size;
    for(int i=0; i<size; i++)
    {
        if(a[i]>avg)
        {
            count++;
        }
    }
    printf("%d",count);
    return 0;

}