#include<stdio.h>
#include<string.h>

int main()
{
    char s1[100];
    int l,s;

    printf("\nEnter String\n");
    gets(s1);

    printf("\nGiven Strings\n");
    puts(s1);

    l = strlen(s1);
    printf("\nLength of string : %d",l);

    s = s1[l-1];
    printf("\nLast letter of the string : %c\n",s);

    if(s1[l-1]=='n')
    {
        printf("\nEnds with 'n'");
        printf("\nThe string is %s",s1);
    }
    else
    {
        printf("\nDoes no end with 'n'");
    }

    return 0;
}
