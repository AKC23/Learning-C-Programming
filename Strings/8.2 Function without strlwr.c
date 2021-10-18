#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>

int main()
{
    char s1[100],s2[100] = {'H','E','L','L','O','\0'};

    char l1[100],l2[100];
    int i;

    printf("\nEnter 1st string\n");
    gets(s1);

    printf("\nTwo Strings are\n");
    puts(s1);
    puts(s2);
    printf("\n\n");

    for(i=0;s1[i]!='\0';i++)
    {
        if(s1[i]>='A' && s1[i]<='Z')
        {
            s1[i] = s1[i] + 32;
        }
    }

    for(i=0;s2[i]!='\0';i++)
    {
        if(s2[i]>='A' && s2[i]<='Z')
        {
            s2[i] = s2[i] + 32;
        }
    }

    printf("\nLowercase of strings \n");
    puts(s1);
    puts(s2);

    //printf("\nLowercase of 1st string : %s",s1);
    //printf("\nLowercase of 2nd string : %s",s2);

    printf("\n\n");

    return 0;
}

