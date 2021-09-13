#include<stdio.h>

int main()
{
    typedef int x;
    typedef float a;
    x y,z;              //x = int
    a m,n;              //a = m, a = n
    y = 5;
    printf("y : %d\n",y);
    printf("\nInput the value of int z : ");
    scanf("%d",&z);
    printf("\nInput the value of float m and n : ");
    scanf("%f%f",&m,&n);
    printf("\nz : %d\nm : %f\nn : %f",z,m,n);

    return 0;
}

