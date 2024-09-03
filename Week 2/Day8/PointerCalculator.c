#include <stdio.h>
#include <windows.h>
#include <string.h>

// Function prototypes with two parameters
float add(float, float);
float subtract(float, float);
float multiply(float, float);
float division(float, float);

int main()
{
    int con;
    float num1, num2, result;
    char retry[6] = "yes";
    
    // Array of function pointers
    float (*operation[])(float, float) = {add, subtract, multiply, division};
    
    do
    {
        system("cls"); // Clear the terminal screen

        printf("GREATEST CALCULATOR EVER\n------------------------\n");
        printf("\nWhich operation would you like to conduct?\n1. Addition\n2. Subtraction\n3. Multiplication\n4. Division\nEnter your number for corresponding operation: ");
        scanf("%d", &con);

        if (con < 1 || con > 4)
        {
            printf("Invalid input! Please enter a correct value.\n");
            continue;
        }

        // Taking in the values to be operated on
        printf("\n\nEnter two numbers: ");
        scanf("%f%f", &num1, &num2);

        // Call the appropriate function and store the result
        result = operation[con - 1](num1, num2);

        printf("Result = %.2f\n", result);

        // retry input
        printf("\n\nWould you like to try it again? ");
        scanf("%s", retry);

    } while (strcmp(retry, "YES") == 0 || strcmp(retry, "yes") == 0 || strcmp(retry, "Yes") == 0 || strcmp(retry, "Y") == 0 || strcmp(retry, "y") == 0);

    return 0;
}

// Functions now return the result directly
float add(float a, float b)
{
    return a + b;
}

float subtract(float a, float b)
{
    return a - b;
}

float multiply(float a, float b)
{
    return a * b;
}

float division(float a, float b)
{
    if (b != 0)
        return a / b;
    else
    {
        printf("Division by zero is not allowed!\n");
        return 0; // Return 0 or any error indicator
    }
}
