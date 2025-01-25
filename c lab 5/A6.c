//Check whether given character is vowel(swar) or consonant(vyanjan). (Using single if only)
#include<stdio.h>
int main()
{
    char ch;
    printf("enter the english character\n");
   scanf("%c",&ch);
    if(ch =='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||
    ch =='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U')
    {
        printf("given character is vowel");
    }
    else{
        printf("given charactor is consonant\n");
    }
    return 0;
}