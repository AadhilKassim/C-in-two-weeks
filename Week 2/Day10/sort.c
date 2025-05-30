#include <stdio.h>

void bubblesort(int *,int);
void selectionsort(int *, int);
void quicksort(int *, int);

int main()
{
    int numbers[] = {45, 12, 89, 33, 67, 22, 10, 99, 5, 76};
    int n = sizeof(numbers) / sizeof(numbers[0]);

    //bubble sort
    bubblesort(numbers, n);
    //selection sort
    selectionsort(numbers, n);
    //quick sort
    quicksort(numbers, n);
    return 0;
}

void bubblesort(int arr[], int size)
{
    int *data = arr;
    int curr, next, temp;

    for(curr = 0, next=1; curr < size; curr++, next++)
    {

        if(data[curr] > data[next])
        {
            temp = data[curr];
            data[curr] = data[next];
            data[next] = temp;
        }
    }

    printf("%d",data);
}

void selectionsort(int arr[],int size)
{
    int *data = arr;
}

void quicksort(int arr[],int size)
{
    int *data = arr;
}