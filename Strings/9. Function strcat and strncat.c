#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>

int main()
{
    char s1[100],s2[100] = {'H','e','l','l','o','\0'};

    char l1[100],l2[100];
    int i;

    printf("\nEnter 1st string\n");
    gets(s1);

    printf("\nTwo Strings are\n");
    puts(s1);
    puts(s2);
    printf("\n\n");

    strcat(s1,s2);            //It appends one string at the end of another.
    puts(s1);

    strncat(s1,s2,4);         //It appends first n characters of a string at the end of another.
    puts(s1);
    puts(s2);

    return 0;
}
