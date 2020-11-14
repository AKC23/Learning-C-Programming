#include<stdio.h>

struct Employee
{
    char name[100];
    int acc_no;
    int bal_no;
};

int main()
{
    struct Employee emp[100] = {{"A",21,4354},{"B",22,7744},{"C",23,6774}};
    int i;
    printf("\tEmployee's name   Account no   Balance no\n");

    for(i=0;i<3;i++)
    {
        printf("\n%15s%15d%15d\n",emp[i].name,emp[i].acc_no,emp[i].bal_no);
    }
}
