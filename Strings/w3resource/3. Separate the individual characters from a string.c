/*/
https://www.w3resource.com/c-programming-exercises/string/c-string-exercise-3.php
/*/
#include<stdio.h>
#include<string.h>

int main()
{
    int i,l=0;
    char s[100];
    gets(s);
    printf("\n\nSeparate the individual characters from a string :\n");
    printf("------------------------------------------------------\n");
    for(i=0; s[i]!='\0'; i++)
    {
        printf("%c ",s[i]);
    }

    return 0;
}

