#include <stdio.h>
void linearSearch(int *, int, int);

int main()
{
int numbers[] = {
    932, 45, 231, 786, 128, 594, 320, 999, 57, 610,
    400, 789, 123, 432, 876, 543, 902, 734, 222, 88,
    451, 600, 321, 999, 144, 288, 350, 420, 730, 811,
    210, 65, 70, 99, 280, 300, 405, 785, 500, 600,
    25, 36, 49, 64, 81, 100, 121, 144, 169, 196,
    10, 20, 30, 40, 50, 60, 70, 80, 90, 100,
    505, 606, 707, 808, 909, 1010, 1111, 1212, 1313, 1414,
    1515, 1616, 1717, 1818, 1919, 2020, 2121, 2222, 2323, 2424,
    2525, 2626, 2727, 2828, 2929, 3030, 3131, 3232, 3333, 3434,
    3535, 3636, 3737, 3838, 3939, 4040, 4141, 4242, 4343, 4444
};
    int size = sizeof(numbers)/sizeof(numbers[0]);
    int n;
    printf("Enter the number: ");
    scanf("%d", &n);

    linearSearch(numbers, n, size);

    return 0;
}

void linearSearch(int arr[], int n, int size)
{
    for (size_t i = 0; i < size; i++)
    {
        if(arr[i] == n)
        {
            printf("%d found at position %d in the array", n, i);
        }
    }
    
}