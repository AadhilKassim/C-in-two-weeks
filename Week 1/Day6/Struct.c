#include <stdio.h>

struct employee //stucture_name
{
    //stucture members
    char name[20];
    int age;
    float salary;
};

int main()
{
    struct employee emp[3]; //structure variable: here an array
    struct employee employer; //can also be just a single variable

    for(int i=0;i<3;i++)
    {
    printf("\nEnter eployee details\nName: ");
    scanf("%s", &emp[i].name);
    printf("Age: ");
    scanf("%d",&emp[i].age);
    printf("Salary: ");
    scanf("%f",&emp[i].salary);
    }

    for(int i=0;i<3;i++)
    {printf("\nEmployee Name: %s\nEmployee Age: %d\nSalary: %.2f\n", emp[i].name,emp[i].age,emp[i].salary);}

    return 0;
}