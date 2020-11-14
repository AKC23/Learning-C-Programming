#include<stdio.h>

struct date
{
    int month;
    int day;
    int year;
};

int main()
{
    struct date d1,d2;
    printf("\nEnter first date (DD MM YYYY) : ");
    scanf("%d%d%d",&d1.day,&d1.month,&d1.year);
    printf("Today's date : %d / %d / %d\n",d1.day,d1.month,d1.year);

    printf("\nEnter second date (DD MM YYYY) : ");
    scanf("%d%d%d",&d2.day,&d2.month,&d2.year);
    printf("Today's date : %d / %d / %d\n",d2.day,d2.month,d2.year);

    return 0;
}

