#include<stdio.h>
#include<string.h>

int main()
{
    char s1[100][100];
    int l,i,n;
    printf("\nHow many input?\n");
    scanf("%d",&n);

    printf("\nEnter String\n");
    for (i=0;i<=n;i++)
    {
        gets(s1[i]);
    }
    //s1[i] = '\0';
    printf("\nGiven Strings\n");

    for (i=0;i<=n;i++ )
    {
        puts(s1[i]);
    }

    printf("\nWords ends with 'n' \n");

    for (i=0;i<=n;i++)
    {
        l = strlen(s1[i]);
        if(s1[i][l-1] == 'n')
        {
            printf("%s \n",s1[i]);
        }
    }

    return 0;
}
