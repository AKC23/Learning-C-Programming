#include<stdio.h>

struct emp
{
    int age;
};

struct info_1
{
    char name[20];
    struct emp e;           // To declare 1st structure in 2nd structure, 1st structure should be declared in 2nd one.
                            // It will not work if 2nd one is declared in 1st one.
};                          // 1st one should be written above 2nd one.

int main()
{
    struct info_1 E1[100];
    int i,n=1;
    //printf("\nEnter employee's number : %d",n);
    //scanf("%d",&n);

    printf("\nEnter employees' name\n");
    for(i=0;i<n;i++)
    {
        scanf("%s",&E1[i].name);
    }
    printf("\nEnter employees' age\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&E1[i].e.age);
    }
    printf("\nEmployees' information\n");

    for(i=0;i<n;i++)
    {
        printf("Employee no %d\n",(i+1));
        printf("Name : %s\nAge : %d",E1[i].name,E1[i].e.age);
        printf("\n");
    }

    return 0;
}
