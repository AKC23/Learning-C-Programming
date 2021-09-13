//Use of calloc

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,n;
    int *p;

    printf("Enter size : ");
    scanf("%d",&n);

    p = (int *) calloc(n,sizeof(int));

    if(p==NULL)
    {
        printf("\nMemory not allocated");
    }

    else
    {
        printf("Memory successfully allocated using calloc.\n");

        printf("\nEnter %d inputs \n",n);
        for(i=0;i<n;i++)
        {
            scanf("%d",(p+i));
            //p[i] = i + 1;
        }

        printf("\nThe inputs are \n");
        for(i=0;i<n;i++)
        {
            printf("%d ",*(p+i));
        }

        printf("\nEnter new size : ");
        scanf("%d",&n);

        p = realloc(p, n * sizeof(int));

        printf("\nEnter %d inputs \n",n);
        for(i=0;i<n;i++)
        {
            scanf("%d",(p+i));
        }

        printf("\nThe inputs are \n");
        for(i=0;i<n;i++)
        {
            printf("%d ",*(p+i));
        }

    }

    return 0;
}
