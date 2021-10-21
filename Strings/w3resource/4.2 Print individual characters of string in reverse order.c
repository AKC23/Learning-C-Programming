/*/
Print individual characters of string in reverse order
https://www.w3resource.com/c-programming-exercises/string/c-string-exercise-4.php
/*/

#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main()
{
    char s[100],l[100];
    int i,n;
    printf("\n\nPrint individual characters of string in reverse order :\n");
    printf("------------------------------------------------------\n");
    printf("Input string : \n");
    gets(s);
    printf("Inputed string is \n");

    for(i=0; s[i]!='\0'; i++)
    {
        printf("%c ",s[i]);
    }

    for(i=0; s[i]!='\0'; i++)
    {
        l[i] = s[i];
    }

    n = strlen(s);
    printf("\nLength of string : %d\n",n);

    printf("\nReverse of the string\n",n);

    for(i=(n-1); l[i]>=0; i--)
    {
        printf("%c ",l[i]);
    }

    return 0;
}

