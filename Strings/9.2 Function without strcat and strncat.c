#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>

int main()
{
    char s1[100],s2[100] = "HELLO";

    char l1[100],l2[100];
    int i,j;
    i=j=0;

    printf("\nEnter 1st string\n");
    gets(s1);

    printf("\nTwo Strings are\n");
    puts(s1);
    puts(s2);
    printf("\n");

//process 1
    for(i=strlen(s1),j=0;s2[j]!= '\0';i++,j++)
    {
        s1[i] = s2[j];
    }
    s1[i] = '\0';

/*/
//process 2
    for(i=strlen(s1),j=0; ;i++,j++)
    {
        s1[i] = s2[j];
        if(s2[j]=='\0')
        {
            break;
        }
    }
/*/
    printf("After concatenation : %s",s1);
}
