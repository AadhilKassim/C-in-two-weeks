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
    int data[size];
    for (size_t i = 0; i < size; i++)
    {
        data[i] = arr[i];
    }
    

    for(int i = 0; i < size-1; i++)
    {
        for (size_t j = 0; j < size-i-1; j++)
        {
            if (data[j]>data[j+1])
            {
                int temp = data[j];
                data[j] = data[j+1];
                data[j+1] = temp;
            }
            
        }
        

    }

    for (size_t i = 0; i < size; i++)
    {
        printf("%d\t",data[i]);
    }
    
}

void selectionsort(int arr[],int size)
{
    int data[size];
}

void quicksort(int arr[],int size)
{
    int data[size];
}