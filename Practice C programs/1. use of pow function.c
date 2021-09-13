#include<stdio.h>
#include<math.h>

int main()
{
    float x,a,b,n;
    printf("Enter any number : ");
    scanf("%f",&x);
    printf("Enter power of the number : ");
    scanf("%f",&n);
    a = pow(x,n);
    b = n*pow(10,n)+a;

    printf("\nSo the result is : %.1f\n",a);
    printf("\nValue of b : %.1f\n",b);

    return 0;
}
