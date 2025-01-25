//. Read ƒve person height and weight and count the number of person having height
//greater than 170 and weight less than 50.
#include<stdio.h>
int main()
{
    int h[5];
    int w[5],count=0;
    printf("enter a height:\n");
    for(int i=0; i<5; i++)
    {     
        printf("enter the height:");
        scanf("%d",&h[i]);   
    }
    printf("enter a weight:");
    for(int i=0; i<5; i++)
    {     
        printf("enter the weight:");
        scanf("%d",&w[i]);   
    }
    for(int i=0; i<5; i++)
    {
        if(h[i]>170 && w[i]<50)
        {
            count++;
        }
    }
    printf("%d persons\n",count);
    return 0;
}