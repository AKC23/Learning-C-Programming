#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    char s[100][100];                       //don't know why it is written like this
    int i,n,x;

    printf("Input names\n");

    for(i=0;i<5;i++)
    {
        //scanf("%s",&s[i]);              //can't take the space between words
        gets(s[i]);
    }

    printf("\nThe names are\n");

    for(i=0;i<5;i++)
    {
        //printf("%s\n",s[i]);
        puts(s[i]);
    }

    return 0;
}
