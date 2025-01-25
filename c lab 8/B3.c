//Print ƒrst 50 numbers in series 1, 4, 7, 10…
#include<stdio.h>
int main()
{
    int i=0,num=1;
    while(i<50)
    {
        printf("%d,",num);
        num+=3;
        i++;
    }
    return 0;
}

