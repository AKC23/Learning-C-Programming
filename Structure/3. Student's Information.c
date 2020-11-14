#include<stdio.h>

struct student
{
    int id;
    float CGPA;
    char name[100];
};

int main()
{
    struct student std[100];
    int i,n;                                //n = number

    printf("\nNumber of students : ");
    scanf("%d",&n);

    for(i=0; i<n; i++)
    {
        printf("\nName of student : ");
        scanf("%s",&std[i].name);
        printf("\nId of student : ");
        scanf("%d",&std[i].id);
        printf("\nCGPA of student : ");
        scanf("%f",&std[i].CGPA);
    }

    for(i=0; i<n; i++)
    {
        printf("\nName of student : %s",std[i].name);
        printf("\nId of student : %d",std[i].id);
        printf("\nCGPA of student : %.2f",std[i].CGPA);
        printf("\n");
    }

    return 0;
}
