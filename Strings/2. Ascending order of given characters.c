#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define size 100            //Declare the maximum size of the string
#define chr_no 255          //Maximum number of characters to be allowed

int main()
{
    char s[size];
    int i,j,k;

    printf("\nInput characters : ");
    gets(s);
    printf("\nGiven characters : ");
    puts(s);
    printf("\n\n");

    for(i=0; s[i]!='\0'; i++)
    {
        for(j=1; s[j]!='\0'; j++)
        {
            if(s[j]>=s[j+1])
            {
                k = s[j+1];
                s[j+1]=s[j];
                s[j]=k;
            }
        }
    }

    printf("\n\n");

    for(i=0; s[i]!='\0'; i++)
    {
        printf("%c",s[i]);
    }

    //puts(s);
    //printf("\nCharacters are : %s",s);
    printf("\n\n");
    return 0;
}
