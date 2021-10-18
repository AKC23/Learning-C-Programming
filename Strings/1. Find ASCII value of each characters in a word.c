
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define size 100        //Declare the maximum size of the string
#define chr_no 255          //Maximum number of characters to be allowed

int main()
{
    char s[size];
    int i;

    printf("\nInput characters : ");
    gets(s);
    printf("\nGiven characters : ");
    puts(s);

    for(i=0;s[i]!='\0';i++)
    {
        printf("\nASCII value of %c is %d",s[i],s[i]);
    }


    printf("\n\n");
    return 0;
}
