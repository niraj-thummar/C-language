//Find missing numbers of sequence using array.(in a sequence 1,2,4,5,7,8,10, Missing
//numbers are 3,6,9)
#include<stdio.h>
int main()
{
    int num;
    printf("enter the size of the array:");
    scanf("%d",&num);
    int a[num],m=1;
    for(int i=0; i<num; i++)
    {
        printf("enter the values:");
        scanf("%d",&a[i]);
        
    }
    
    for(int i=0; i<num; i++)
    {
       while(a[i]!=m)
       {
         printf("%d,",m);
         m++;
       }
       m++;
    }
    
    return 0;
     
}