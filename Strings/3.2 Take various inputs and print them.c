#include <stdio.h>
#include <string.h>

int main()
{
    //Declare Variables
    char string[10][30]; //2D array for storing strings
    int i, n;

    //Get the maximum number of strings
    printf("Enter number of strings to input\n");
    scanf("%d", &n);

    //Read the string from user
    printf("Enter Strings one by one: \n");
    for(i=0; i< n ; i++)
    {
        scanf("%s",string[i]);
    }

    //Print the length of each string
    printf("The length of each string: \n");
    for(i=0; i< n ; i++)
    {
        //Print the string at current index
        printf("%s  ", string[i]);
        //Print the length using `strlen` function
        printf("%d\n", strlen(string[i]));
    }

    return 0;
}
