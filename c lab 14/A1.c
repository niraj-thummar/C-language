/*. Read n numbers from user and print in normal and reverse order*/
#include<stdio.h>
int main()
{
    int size;
    
    printf("enter the size of the array:");
    scanf("%d",&size);
    int a[size];
    for(int i=0; i<size; i++)
    {
        printf("enter the value:");
        scanf("%d",&a[i]);
        
    }
    printf("normal order:");
    for(int i=0; i<size; i++)
    {
        printf("%d ",a[i]);
            
    }
    printf("\n");
    printf("reverse order:");
    
    for(int i=size-1; i>=0; i-- )
    {
        printf("%d ",a[i]);
    }
    return 0;
}