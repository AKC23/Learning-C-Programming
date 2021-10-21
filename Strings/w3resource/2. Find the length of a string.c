/*/
https://www.w3resource.com/c-programming-exercises/string/c-string-exercise-2.php
/*/

#include<stdio.h>
#include<string.h>

int main()
{
    int i,l1=0,l2;
    char s[100];
    printf("Input the string : ");
    gets(s);

    printf("Process 1");
    for(i=0;s[i]!='\0';i++)
    {
        l1++;
    }
    puts("\nLength of the string is");
    printf("%d",l1);

/*/
    printf("Process 2");
    l2 = strlen(s);
    printf("\nLength of the string is %d",l2);
/*/

    return 0;
}


