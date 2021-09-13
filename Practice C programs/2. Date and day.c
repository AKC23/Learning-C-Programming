//Input any date and find the given day
#include<stdio.h>

int main()
{
    int x,i,z,d,m,y,c=0,day;                            //initialize i = 1900; c = counting variable of leap year, d = day,m = month, y = year

    printf("\t\tWelcome!!\n");
    printf("It's a C program to find any day of the given date\n");
    printf("Input the date and I will find the day of the given date\n");
    printf("Enter day, month and year\n");
    scanf("%d%d%d",&d,&m,&y);

    printf("So the date is (d,m,y) : %d/%d/%d\n",d,m,y);

    for(i=1900;i<=y;i++)                                //initialize i = 1900
    {
        if((i%4==0 && i%100!=0) || (i%400==0))
        {
            c++;
        }
    }

    if((y%4==0 && y%100!=0) || (y%400==0))
    {
        if((m<=2) && (m==2) && (d==29))
        {
            printf("This year's February has 29 days\n");
            printf("Number of leap year = %d\n\n",c);
            d = d - 1;                                  //d = d - 1 cause the day is already counted in leap year's loop
        }
        else if (m>2)
        {
            printf("Number of leap year = %d\n\n",c);
        }
        else
        {
            printf("Number of leap year = %d\n\n",c=c-1);
        }
    }

    x = y - 1900;
    z = (x*365 + c);
    //printf("Value of z = %d\n",z);                    //z = total years from 1900 + leap year's days
    //printf("Value of d = %d\n",d);
    switch(m)
    {
    case 1:
        printf("It's January month\n");
        printf("So, Total days are : %d\n",(day = (0+d+z)));
        break;
    case 2:
        printf("It's February month\n");
        printf("So, Total days are : %d\n",(day = (31+d+z)));
        break;
    case 3:
        printf("It's March month\n");
        printf("So, Total days are : %d\n",(day = (59+d+z)));
        break;
    case 4:
        printf("It's April month\n");
        printf("So, Total days are : %d\n",(day = (90+d+z)));
        break;
    case 5:
        printf("It's May month\n");
        printf("So, Total days are : %d\n",(day = (120+d+z)));
        break;
    case 6:
        printf("It's June month\n");
        printf("So, Total days are : %d\n",(day = (151+d+z)));
        break;
    case 7:
        printf("It's July month\n");
        printf("So, Total days are : %d\n",(day = (181+d+z)));
        break;
    case 8:
        printf("It's August month\n");
        printf("So, Total days are : %d\n",(day = (212+d+z)));
        break;
    case 9:
        printf("It's September month\n");
        printf("So, Total days are : %d\n",(day = (243+d+z)));
        break;
    case 10:
        printf("It's October month\n");
        printf("So, Total days are : %d\n",(day = (273+d+z)));
        break;
    case 11:
        printf("It's November month\n");
        printf("So, Total days are : %d\n",(day = (304+d+z)));
        break;
    case 12:
        printf("It's December month\n");
        printf("So, Total days are : %d\n",(day = (334+d+z)));
        break;
    }


    day = day%7;

    switch(day)
    {
    case 0:
        printf("It's Sunday\n");
        break;
    case 1:
        printf("It's Monday\n");
        break;
    case 2:
        printf("It's Tuesday\n");
        break;
    case 3:
        printf("It's Wednesday\n");
        break;
    case 4:
        printf("It's Thursday\n");
        break;
    case 5:
        printf("It's Friday\n");
        break;
    case 6:
        printf("It's Saturday\n");
        break;

    }

    return 0;
}

