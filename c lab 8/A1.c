//Print 1 to 10 then modify program Print 1 to n using while and do while loop.
/*#include<stdio.h>
int main()
{
    int i=1;
   
    while(i<=10)
    {
        printf("%d\n",i);
        i++;
    }
    return 0;
}*/
/*#include<stdio.h>
int main()
{
    int i=1,num;
    printf("enter the number:");
    scanf("%d",&num);
    while(i<=num)
    {
        printf("%d\n",i);
        i++;
    }
    return 0;
}*/
#include<stdio.h>
int main()
{
    int i=1,num;
    printf("enter the number:");
    scanf("%d",&num);
    do
    {
        printf("%d\n",i);
        i++;
    }while(i<=num);
    
    return 0;
}