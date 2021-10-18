#include<stdio.h>
#include<string.h>

int main()
{
    char s1[100],s2[100] = {'h','e','l','l','o','\0'};
    //s2[100] = {'h','e','l','l','o','\0'};
    int l1,l2;

    printf("\nEnter 1st string\n");
    gets(s1);

    printf("\nTwo Strings are\n");
    puts(s1);
    puts(s2);

    l1 = strlen(s1);
    printf("\nLength of 1st string : %d",l1);

    l2 = strlen(s2);
    printf("\nLength of 2nd string : %d",l2);


    return 0;
}
