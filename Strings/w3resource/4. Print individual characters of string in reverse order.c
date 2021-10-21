/*/
Print individual characters of string in reverse order
https://www.w3resource.com/c-programming-exercises/string/c-string-exercise-4.php
/*/
#include<stdio.h>
#include<string.h>

int main()
{
    int i;
    char s[100];
    printf("Input the string : ");
    gets(s);

    strrev(s);
/*/
    printf("process 1");
    printf("The characters of the string in reverse are : \n");
    for(i=0; s[i]!='\0'; i++)
    {
        printf("%c ",s[i]);
    }
/*/

    printf("process 2\n");
    printf("The characters of the string in reverse are : \n");
    puts(s);
}
