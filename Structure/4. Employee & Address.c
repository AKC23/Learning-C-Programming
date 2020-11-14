#include<stdio.h>

struct address
{
    int pin;
    char phone[100];
    char city[100];
};

struct emp
{
    char name[100];
    struct address a;
};
//typedef struct emp employee;

int main()
{
    struct emp e;
    //employee e;

    printf("Input pin no of employee : ");
    scanf("%d",&e.a.pin);
    printf("Input name of employee : ");
    scanf("%s",&e.name);
    printf("\n");
    printf("Input phone of employee : ");
    scanf("%s",&e.a.phone);

    printf("%d\n",e.a.pin);
    printf("%s\n",e.name);
    printf("%s\n",e.a.phone);

    return 0;
}
