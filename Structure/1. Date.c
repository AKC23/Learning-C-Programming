#include<stdio.h>

struct date
{
    int month;
    int day;
    int year;
};

int main()
{
    struct date today;
    printf("Enter today's date (DD MM YYYY) : ");
    scanf("%d%d%d",&today.day,&today.month,&today.year);

    printf("Today's date : %d / %d / %d",today.day,today.month,today.year);

    return 0;
}
