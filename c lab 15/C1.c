//. Find two largest elements in a one dimensional array.
#include<stdio.h>
int main()
{
    int n,max,sec_max;
    printf("enter the size of the array:");
    scanf("%d",&n);
    int a[n];
    for(int i=0; i<n; i++)
    {
        printf("enter the number:");
        scanf("%d",&a[i]);
    }
    max=a[0];
    for(int i=0; i<n; i++)
    {
        if(max<a[i])
        {
            max=a[i];
        }
    }
    printf("%d,",max);
    if(a[0]!=max)
    {
        sec_max=a[0];
    }
    else{
        sec_max=a[n-1];
    }
    for(int i=0; i<n; i++)
    {
        if(sec_max<a[i])
          {
            if(a[i]!=max)
              {
                sec_max=a[i];
              }
          }
    }
    printf("%d ",sec_max);
    return 0;

}