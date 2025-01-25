// Print Pascal triangle.
    //          1
    //        1   1
    //      1   2   1
    //    1   3   3   1
    //  1   4   6   4   1
#include<stdio.h>
int main()
{
    int num,value;
    printf("enter the number:");
    scanf("%d",&num);
    for(int i=0; i<num; i++)
    {
        for(int j=0; j<num-i; j++)
        {
            printf("  ");
        }    
            value=1;
            for(int j=0; j<=i; j++)
            {
                printf("%4d",value);
                value = value * (i-j) / (j+1);
            }
            printf("\n");
        
    }
    return 0;
}