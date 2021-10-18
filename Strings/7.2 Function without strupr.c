#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>

int main()
{
    char s1[100],s2[100] = {'h','e','l','l','o','\0'};
    int i;

    printf("\nEnter 1st string\n");
    gets(s1);

    printf("\nTwo Strings are\n");
    puts(s1);
    puts(s2);
    printf("\n\n");

    for(i=0;s1[i]!='\0';i++)
    {
        if(s1[i]>='a' && s1[i]<='z')
        {
            s1[i] = s1[i] - 32;
        }
    }

    for(i=0;s2[i]!='\0';i++)
    {
        if(s2[i]>='a' && s2[i]<='z')
        {
            s2[i] = s2[i] - 32;
        }
    }

    printf("\nUppercase of strings \n");
    //puts(s1);
    //puts(s2);

    printf("\nUppercase of 1st string : %s",s1);
    printf("\nUppercase of 2nd string : %s",s2);

    printf("\n\n");

    return 0;
}
