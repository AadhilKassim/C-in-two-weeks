// This file demonstrates three sorting algorithms in C: Bubble Sort, Selection Sort, and Quick Sort.
// Each algorithm is implemented as a separate function and applied to the same array of integers.
// The sorted results are printed for each algorithm for comparison.

#include <stdio.h>

void bubblesort(int *,int);
void selectionsort(int *, int);
void quicksort(int *, int);
int partition(int *, int, int);
void QuickSort(int *, int, int);

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

// Bubble Sort: Sorts a copy of the input array using the bubble sort algorithm.
// Compares adjacent elements and swaps them if they are in the wrong order.
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
    // Print sorted array
    printf("Bubble Sort:\t");
    for (size_t i = 0; i < size; i++)
    {
        printf("%d\t",data[i]);
    }
    
}

// Selection Sort: Sorts a copy of the input array using the selection sort algorithm.
// Finds the minimum element from the unsorted part and puts it at the beginning.
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

    // Print sorted array
    printf("Selection Sort:\t");
    for (size_t i = 0; i < size; i++)
    {
        printf("%d\t",data[i]);
    }
    
}

// Quick Sort (wrapper): Sorts a copy of the input array using the quick sort algorithm.
// Calls the recursive QuickSort function.
void quicksort(int arr[],int size)
{
    int data[size];
    // Copy the input array to a local array to avoid modifying the original
    for (size_t i = 0; i < size; i++)
    {
        data[i] = arr[i];
    }
    // Call QuickSort on the full array (from index 0 to size)
    QuickSort(data, 0, size);
    // Print sorted array
    printf("Quick Sort:\t");
    for (size_t i = 0; i < size; i++)
    {
        printf("%d\t",data[i]);
    }
    
}

// Partition function for Quick Sort.
// Chooses a pivot and partitions the array into elements less than and greater than the pivot.
int partition(int data[], int l, int h)
{
    int pivot = data[l]; // Select the first element as pivot
    int i = l, j = h;
    
    // Move i forward and j backward to find elements to swap
    while (i<j)
    {
        // Increment i until an element greater than pivot is found
        do
        {
            i++;
        } while (data[i]<=pivot);
        // Decrement j until an element less than or equal to pivot is found
        do
        {
            j--;
        } while (data[j]>pivot);
        // Swap elements at i and j if i < j
        if (i<j)
        {
            int temp = data[j];
            data[j] = data[i];
            data[i] = temp;
        }
    }
    // Place the pivot in its correct sorted position
    int temp = data[j];
    data[j] = data[l];
    data[l] = temp;
    return j ; // Return the partition index
}

// Recursive Quick Sort function.
// Recursively sorts the subarrays before and after the partition index.
void QuickSort(int data[],int l, int h)
{
    int j;
    // Continue only if the subarray has more than one element
    if (l<h)
    {
        // Partition the array and get the pivot index
        j = partition(data, l, h);
        // Recursively sort the left subarray
        QuickSort(data, l, j);
        // Recursively sort the right subarray
        QuickSort(data, j+1, h);
    }
}