//. Calculate the average, geometric and harmonic mean of n elements in an array
//gm=(1x2x3..xn)^1/n;    hm=n/(1/1+1/2+...+1/n);
#include<stdio.h>
#include<math.h>
int main()
{
    int n,sum1=0,mul=1;
    float avg,gm,hm,sum2=0;
    printf("how many numbers you want to enter:");
    scanf("%d",&n);
    int a[n]; 
    for(int i=0; i<n; i++)
    {
        printf("enter the number:");
        scanf("%d",&a[i]);
        sum1+=a[i];
        mul*=(float)a[i];
        sum2+=(float)1/a[i];
    }
    avg=(float)sum1/n;
    gm=pow(mul,(float)1/n);
    hm=n/sum2;
    printf("avg is %.2f\n",avg);
    printf("gm is %.2f\n",gm);
    printf("hm is %.2f\n",hm);
    return 0;
}    
    
