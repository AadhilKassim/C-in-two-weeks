#include <stdio.h>

void main()
{
    int num1, num2;

    printf("Enter two numbers to be compared: ");
    scanf("%d %d", &num1, &num2);
    //if else 
    if (num1 > num2)
    {
        printf("%d is greater than %d\n", num1, num2);
    }
    else
    {
        printf("%d is greater than %d\n", num2, num1);
    }
    //if 
    if(num1>0)
    {
        printf("%d is positive\n", num1);
    }

    if(num2>0)
    {
        printf("%d is positive\n",num2);
    }
}