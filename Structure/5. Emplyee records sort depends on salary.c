#include<stdio.h>

struct Emp
{
    int emp_no;
    char name[100];
    int salary;
};

int main()
{
    struct Emp a[50],temp;
    int i,j,n;
    //clrscr();

    printf("Enter n values\n");
    scanf("%d",&n);

    printf("Enter %d employees emp_no,name,salary\n",n);

    for(i=0;i<n;i++)
    {
        scanf("%d%s%d",&a[i].emp_no,&a[i].name,&a[i].salary);
    }

    for(i=1;i<n;i++)
    {
        for(j=0;j<n-i;j++)
        {
            if (a[j].salary>a[j+1].salary)
            {
                temp = a[j];
                a[j]=a[j+1];
                a[j+1] = temp;
            }
        }
    }

    for(i=0;i<n;i++)
    {
        printf("\n\t%d\t%s\t%d",a[i].emp_no,a[i].name,a[i].salary);
        getch();
    }

}

