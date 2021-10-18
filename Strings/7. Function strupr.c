#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>

int main()
{
    char s1[100],s2[100] = {'h','e','l','l','o','\0'};

    char l1[100],l2[100];
    int i;

    printf("\nEnter 1st string\n");
    gets(s1);

    printf("\nTwo Strings are\n");
    puts(s1);
    puts(s2);
//strupr() -> It converts a string to uppercase
    printf("\nUppercase of 1st string : %s",strupr(s1));
    printf("\nUppercase of 2nd string : %s",strupr(s2));

/*/
    printf("\n\n");

    printf("\nUppercase of 1st string : ");

    for(i=0; s1[i]!='\0'; i++)
    {
        l1[i] = strupr(s1[i]);
        printf("%s \n",l1[i]);
    }

    printf("\n\n");
    //l1[i] = '\0';
    //printf("\nUppercase of 1st string : %s",l1);



    printf("\nUppercase of 1st string : ");
    for(i=0; s2[i]='\0'; i++)
    {
        l2[i] = s2[i];
        printf("%c \n",l2[i]);
    }
    //l2[i] = '\0';
    //printf("\nUppercase of 1st string : ");
    //puts(l1);
    //puts(l2);
    //printf("\nUppercase of 1st string : %s",l1);
    //printf("\nUppercase of 2nd string : %s",l1);

    //printf("\n\n");
/*/
    return 0;
}
