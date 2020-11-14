#include<stdio.h>
#include<string.h>

struct employee
{
    int acc_no;
    char name[100];
    int salary;
};

int main()
{
    struct employee e[100] = {{01,"Asif",2500},{02,"Saba",3000},{03,"Rafi",2000},{04,"Nadim",2300}},temp;
//have to declare temp as a structure
    int i,j,n=4,l;
//temp should not be declared as int
/*/
    printf("Number of employee : ");
    scanf("%d",&n);
/*/
    printf("\n\n");

    for(i=0; i<n; i++)
    {
        printf(" %d %s %d",e[i].acc_no,e[i].name,e[i].salary);
        printf("\n");
    }

//find who's salary is even

    printf("\nFind who's salary is even and name ends with 'a'\n");

    for(i=0; i<n; i++)
    {
        l = strlen(e[i].name);
        if(e[i].acc_no % 2 ==0 && e[i].name[l-1]=='a')
        {
            printf(" %d %s %d\n",e[i].acc_no,e[i].name,e[i].salary);
        }
    }
/*/
    printf("\nFind who's name ends with a\n");
    for(i=0; i<n; i++)
    {
        l = strlen(e[i].name);

        if(e[i].name[l-1]=='a')
        {
            printf(" %d %s %d\n",e[i].acc_no,e[i].name,e[i].salary);
        }
    }
/*/

    printf("\n\n");
//sorting them in an ascending order
    for(i=0; i<n; i++)
    {
        for(j=0; j<n-1; j++)
        {
            if(e[j].salary > e[j+1].salary)
            {
                temp = e[j];
                e[j] = e[j+1];
                e[j+1] = temp;
            }
        }
    }

//incompatible types when assigning to type 'int' from type 'struct employee'
//incompatible types when assigning to type 'struct employee' from type 'int'

    printf("\n\n");

    for(j=0; j<4; j++)
    {
        printf(" %d %s %d",e[j].acc_no,e[j].name,e[j].salary);
        printf("\n");
    }

    return 0;

}
