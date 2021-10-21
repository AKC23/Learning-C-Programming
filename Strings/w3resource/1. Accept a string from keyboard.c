/*/
https://www.w3resource.com/c-programming-exercises/string/c-string-exercise-1.php
/*/

#include<stdio.h>
#include<string.h>

int main()
{
    char s[100];
    printf("Accept a string from keyboard : \n-----------------------------------\n");
    puts("\nInput the string ");
    gets(s);
    puts("\nThe string you entered is");
    puts(s);

    return 0;
}
