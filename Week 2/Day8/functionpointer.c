#include <stdio.h>


int add(int,int);
int subtract(int,int);
int multiply(int,int);
int division(int,int);

int main()
{ 
    int num1 =10,num2 = 90;
    int c;
    int (*operation[])(int,int) = {add, subtract, multiply, division};

    while (c <4)
    {
        printf("%d\n",operation[c](num1,num2));
        c++;
    }
    
    return 0;
}

int add(int a, int b)
{
    return a+b;
}

int subtract(int a, int b)
{
    return a-b;
}

int multiply(int a, int b)
{
    return a*b;
}

int division(int a, int b)
{
    return a/b;
}