//. Print all uppercase and lowercase alphabet
#include<stdio.h>
int main()
{
    int i=1;
    char ch='a';
    char cha='A';
    while(i<=26)
    {
        printf("%c",ch);
        printf("%c, ",cha);

        ch++;
        cha++;
        i++;
    }
    return 0;
}
