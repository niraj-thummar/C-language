//. Count number of positive or negative number from an array of n numbers.
#include<stdio.h>
int main()
{
    int size,ncount=0,pcount=0;
    printf("enter the size of the array:");
    scanf("%d",&size);
    int a[size];
    
    for(int i=0; i<size; i++)
    {
        printf("enter the values:");
        scanf("%d",&a[i]);
        if(a[i]>=0)
        {
            pcount++;
        }
        else{
            ncount++;
        }
    }
    printf("positive numbers are: %d\n",pcount);
    printf("nagative numbers are: %d\n",ncount);
    return 0;

}