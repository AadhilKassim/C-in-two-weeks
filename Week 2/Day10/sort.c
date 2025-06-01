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
    printf("\n");
    //selection sort
    selectionsort(numbers, n);
    printf("\n");
    //quick sort
    quicksort(numbers, n);
    printf("\n");
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
    printf("Bubble Sort:\t");
    for (size_t i = 0; i < size; i++)
    {
        printf("%d\t",data[i]);
    }
    
}

void selectionsort(int arr[],int size)
{
    int data[size], i, j, min_index;
    for (size_t i = 0; i < size; i++)
    {
        data[i] = arr[i];
    }

    for ( i = 0; i < size-1; i++)
    {
        int temp;
        min_index = i;
        for ( j = i+1; j < size; j++){
            if (data[j] < data[min_index])
            {
                min_index = j;
            }
        }
            temp = data[i];;
            data[i] = data[min_index];
            data[min_index] = temp;
        
    }

    printf("Selection Sort:\t");
    for (size_t i = 0; i < size; i++)
    {
        printf("%d\t",data[i]);
    }
    
}

void quicksort(int arr[],int size)
{
    int data[size];
}