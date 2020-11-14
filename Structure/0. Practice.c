#include<stdio.h>

struct info_1
{
    char name[20];
};

struct emp
{
    int age;
    struct info_1 e;
};

int main()
{
    struct emp E1[100];
    int i,n=1;
    //printf("\nEnter employee's number : %d",n);
    //scanf("%d",&n);

    printf("\nEnter employees' name\n");
    for(i=0;i<n;i++)
    {
        scanf("%s",&E1[i].e.name);
    }
    printf("\nEnter employees' age\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&E1[i].age);
    }
    printf("\nEmployees' information\n");

    for(i=0;i<n;i++)
    {
        printf("Employee no %d\n",(i+1));
        printf("Name : %s\nAge : %d",E1[i].e.name,E1[i].age);
        printf("\n");
    }

    return 0;
}

