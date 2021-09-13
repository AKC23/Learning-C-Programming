// C program to demonstrate the difference
// between %i and %d specifier
#include <stdio.h>

int main()
{
    int a, b, c;

    printf("Enter value of a in decimal format : ");
    scanf("%d", &a);

    printf("Enter value of b in octal format : ");
    scanf("%i", &b);

    printf("Enter value of c in hexadecimal format : ");
    scanf("%i", &c);

    printf("a = %i, b = %i, c = %i", a, b, c);

    return 0;
}

/*/
%d and %i behavior is different in scanf

%d assume base 10 while %i auto detects the base. Therefore, both specifiers behaves differently while they are used with an input specifier. So, 012 would be 10 with %i but 12 with %d.

    %d takes integer value as signed decimal integer i.e. it takes negative values along with positive values but values should be in decimal otherwise it will print garbage value. Consider a following example.
    %i takes integer value as integer value with decimal, hexadecimal or octal type.
    To enter a value in hexadecimal format – value should be provided by preceding “0x” and value in octal format – value should be provided by preceding “0”
/*/
