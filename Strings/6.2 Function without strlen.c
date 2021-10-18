#include<stdio.h>
#include<string.h>

int main()
{
    char s1[100],s2[100]= "hello";
    //s2[] = "hello";
    int l1,l2,i;
    l1=l2=0;

    printf("\nEnter 1st string\n");
    gets(s1);

    printf("\nTwo strings are\n");
    puts(s1);
    puts(s2);

    for(i=0;s1[i]!='\0';i++)
    {
        l1++;
    }

    for(i=0;s2[i]!='\0';i++)
    {
        l2++;
    }

    printf("\nLength of 1st string is : %d",l1);
    printf("\nLength of 2nd string is : %d",l2);

}
