#include <stdio.h>

int fact(int);
int fibonacci (int);
int main()
{
    int n;
    printf("Enter you number to find the factorial and nth fibonacci: ");
    scanf("%d", &n);
    printf("%d! = %d\n", n, fact(n));
    printf("%d'th fibonacci number = %d\n",n,fibonacci(n));
    return 0;
}

int fact(int a)
{
    if (a==0)
    return 1;
    else
    return a*fact(a-1);
}

int fibonacci(int a)
{
    if (a==0)
    return 0;
    if (a==1)
    return 1;
    return fibonacci(a-1)+fibonacci(a-2);
}