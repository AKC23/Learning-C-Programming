#include<stdio.h>
#include<string.h>

int main()
{
    char s1[100],s2[100];
    int l,s;

    printf("\nEnter two Strings\n");
    gets(s1);
    gets(s2);

    printf("\nGiven Strings\n");
    puts(s1);
    puts(s2);

    l = strlen(s1);
    printf("\nLength of string 1 : %d",l);

    s = strcat(s1,s2);
    printf("\nConcatenate of string : %s",s);

    printf("\n\n %s",strset(s1));

}
