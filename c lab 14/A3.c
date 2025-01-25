//Count number of even or odd number from an array of n numbers.
#include<stdio.h>
int main()
{
    int size,odd_count=0,even_count=0;
    printf("enter the size of the array:");
    scanf("%d",&size);
    int a[size];
    
    for(int i=0; i<size; i++)
    {
        printf("enter the values:");
        scanf("%d",&a[i]);
        if(a[i]%2==0)
        {
            even_count++;
        }
        else{
            odd_count++;
        }
    }
    printf("even numbers are: %d\n",even_count);
    printf("odd numbers are: %d\n",odd_count);
    return 0;

}