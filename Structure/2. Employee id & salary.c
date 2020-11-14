#include<stdio.h>

struct Employee
{
    int employee_id;
    float sal;              //sal = salary
};

int main()
{
    struct Employee emp[5];
    int i,n;
    printf("How many employees do you have?\n");
    scanf("%d",&n);

    for(i = 0; i < n; i++)
    {
        printf("\nEmployee ID: ");
        scanf("%d",&emp[i].employee_id);
        printf("Enter Salary: ");
        scanf("%f",&emp[i].sal);
    }
    printf("\nDisplaying Employee record:\n");

    for(i = 0; i < n; i++)
    {
        printf("\nEmployee name is %d", emp[i].employee_id);
        printf("\nSalary is %.3f", emp[i].sal);
    }

    printf("\n\n");
    return 0;
}
