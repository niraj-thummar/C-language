/* Check whether the entered character is upper case, lower case, digit or any special
character.*/
#include<stdio.h>
int main()
{
    char a;
    printf("enter the symboll\n");
    scanf("%c",&a);
    if(a>='a' && a<='z')
    {
        printf("given charactor is lower case\n");
    }
    if(a>='A' && a<='Z')
    {
        printf("given charactor is upper case\n");
    }
    if(a>='0' && a<='9')
    {
        printf("given charactor is digit\n");
    }
    if(a=='#'||a=='*'||a=='&'||a=='='||a==';')
    {
        printf("given charactor is a special symboll\n");
    }
    return 0;
}