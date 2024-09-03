#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    printf("Enter the size of array: ");
    scanf("%d", &n);

    int *p = (int *)malloc(n * sizeof(int));
    // Calloc -> int *p = (int*)calloc(n,sizeof(int));

    for (size_t i = 0; i < n; i++)
    {
        p[i] = i + 1;
    }
    for (size_t i = 0; i < n; i++)
    {
        printf("%d ", p[i]);
    }

    int *q = (int *)realloc(p, 2 * n * sizeof(int));
    /*Either it will extent the allocated memory (same address)
    or it will find another space copy the previous values to it
    (different address). Rest of the space is junk values.*/

    printf("Previous Block Address: %d, New adress: %d", p, q);
    for (int i = 0; i < 2 * n; i++)
    {
        printf("%d\n",q[i]); //will contain same elements as p and extra values will be junk
    }

        free(p); /*will deallocate the memory but the pointer
        will still contain the memory address*/
    p = NULL;

    return 0;
}