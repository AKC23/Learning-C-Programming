#include<stdio.h>

struct info_1
{
    char name[20];
    int age;
};

struct info_2
{
    char address[20];
    int salary;
};

int main()
{
    struct info_1 E1[100];
    struct info_2 E2[100];
    int i,n;
    printf("\nEnter employee's number : ");
    scanf("%d",&n);
    printf("\nEnter employees' name and age\n");
    for(i=0;i<n;i++)
    {
        scanf("%s",&E1[i].name);
        scanf("%d",&E1[i].age);
    }
    printf("\nEnter employees' address and salary\n");
    for(i=0;i<n;i++)
    {
        scanf("%s",&E2[i].address);
        scanf("%d",&E2[i].salary);
    }
    printf("\nEmployees' information\n");
    for(i=0;i<n;i++)
    {
        printf("\nEmployee no %d ",(i+1));
        printf("\t%s\t%d\t%s\t%d",E1[i].name,E1[i].age,E2[i].address,E2[i].salary);
    }


    return 0;


}
