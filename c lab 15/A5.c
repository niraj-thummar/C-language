//Input a string in character array and print string and length of string.
#include<stdio.h>
int main()
{
    char str[100],len=0;
    printf("enter the caharcters:");
    gets(str);
    for(int i=0; str[i]!='\0'; i++)
    {
        len++;
    }
    puts(str);
    printf("length is: %d\n",len);
    return 0;
}