#include <stdio.h>

int fact(int);

int main()
{
    int n;
    printf("Enter you number to find the factorial: ");
    scanf("%d", &n);
    printf("%d! = %d", n, fact(n));
    return 0;
}

int fact(int a)
{
    if (a==0)
    return 1;
    else
    return a*fact(a-1);
}