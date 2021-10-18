#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>

int main()
{
    char s1[100],s2[100] = {'H','E','L','L','O','\0'};

    printf("\nEnter 1st string\n");
    gets(s1);

    printf("\nTwo Strings are\n");
    puts(s1);
    puts(s2);
//strlwr() -> It converts a string to lowercase
    printf("\nLowercase of 1st string : %s",strlwr(s1));
    printf("\nLowercase of 2nd string : %s",strlwr(s2));

}
