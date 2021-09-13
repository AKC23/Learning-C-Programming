#include<stdio.h>

int swap(int *,int *);

int main()
{
    int p = 10,q = 20;

    printf("Before function\n");
    printf("p = %d\n",p);
    printf("q = %d\n",q);

    swap(&p,&q);
    printf("\n\nAfter function\n");
    printf("p = %d\n",p);
    printf("q = %d\n",q);

    return 0;
}

int swap(int *a,int *b)
{
    int temp;
/*/
    temp = *b;
    *b = *a;
    *a = temp;
/*/
    temp = b;
    b = a;
    a = temp;

//if pointer is used then the value will change cause the address is changed
//if pointer is not used then the value will not change
//the address wont change and will show the same output in main func

    printf("\n\nIn function\n");
    printf("p = %d\n",*a);
    printf("q = %d\n",*b);

    return &a,&b;       //it is optional line
}

