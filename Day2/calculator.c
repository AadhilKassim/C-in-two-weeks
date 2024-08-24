#include <stdio.h>
#include <windows.h>//used for accessing the terminal commands
#include <string.h>

int main()
{
    int con;
    float num1, num2, result;
    char retry[6] = "yes";
    do
    {
        system("cls"); // used to clear the terminal "screen" 

        printf("GREATEST CALCULATOR EVER\n------------------------\n");
        printf("\nWhich operation would you like to conduct?\n1. Addition\n2. Subtraction\n3. Multiplication\n4. Division\n5. Documentation\nEnter your number for corresponding operation: ");
        scanf("%d", &con);

        if (con < 1 || con > 5)
        {
            printf("Invalid input! Please enter correct value");
        }

        // Taking in the values to be operated on
        if (con >= 1 && con <= 4)
           { printf("\n\nEnter two numbers: ");
        scanf("%f%f", &num1, &num2);}

        // Swtich to the selected operation or do the default condition
        switch (con)
        {
        case 1:
            printf("\nAddition\n---------\n");
            result = num1 + num2;
            printf("Sum= %.1f", result);
            break;
            
        case 2:
            printf("\nSubtraction\n----=-----\n");
            result = num1 - num2;
            printf("Difference= %.1f", result);
            break;

        case 3:
            printf("\nMultiplication\n------------\n");
            result = num1 * num2;
            printf("Product= %.2f", result);
            break;

        case 4:
            if (num2 != 0)
            {
                printf("\nDivision\n---------\n");
                result = num1 / num2;
                printf("Quotient= %.2f", result);
            }
            else
            {
                printf("Division by 0 is not allowed!!!");
            }
            break;

        case 5:
            printf("This program does 4 basic arithmetic operations addition, subtraction, multiplication, and division.\nYou can retry the operations any amount of times.\nAUTHOR: Aadhil Kassim\n");
            break;
        }

        // retry input
        printf("\n\nWould you like to try it again?");
        scanf("%s", retry);
    } while (strcmp(retry, "YES") || strcmp(retry, "yes") || strcmp(retry, "Yes") || strcmp(retry, "Y") || strcmp(retry, "y"));

    return 0;
}
