//. Check whether character is an alphabet or not using conditional operator.
#include<stdio.h>
int main()
{
    char a;
    printf("enter the character:");
    scanf("%c",&a);
    a>='a'&& a<='z' || a>='A' && a<='Z'?printf("given charactor is alphabet\n"):printf("given charactor is not alphabet");
    return 0;
}