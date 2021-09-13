#include<stdio.h>
#include<math.h>

int main()
{
    float a,b,c,x1,x2,m,n1,n2,o,p,y;

    printf("Enter three integers\n");
    scanf("%f%f%f",&a,&b,&c);
    printf("So the values are\n");
    printf("\na: %f \nb: %f \nc: %f \n\n",a,b,c);

    printf("Process 1\n");                                              //process 1 : break all equations part by part
    m = sqrt(b*b-4*a*c);
    n1 = (-b+sqrt(b*b-4*a*c));
    n2 = (-b-sqrt(b*b-4*a*c));
    p = 2*a;

    printf("m : %f\n",m);
    printf("n1 : %f\n",n1);
    printf("n2 : %f\n",n2);
    printf("p : %f\n",p);
    printf("\nThe results are \nx1 : %f\nx2 :%f\n\n",n1/p,n2/p);


    printf("Process 2\n");                                              //process 2 : used only pow function
    x1 = ((-b+pow(pow(b,2)-4*a*c,.5))/(2*a));
    x2 = ((-b-pow(pow(b,2)-4*a*c,.5))/(2*a));
    printf("\nThe results are \nx1 : %f\nx2 :%f\n\n",x1,x2);

    printf("Process 3\n");                                              //process 3 : used sqrt function
    x1 = ((-b+sqrt(b*b-4*a*c))/(2*a));
    x2 = ((-b-sqrt(b*b-4*a*c))/(2*a));
    printf("\nThe results are \nx1 : %f\nx2 : %f\n",x1,x2);

    return 0;

}
