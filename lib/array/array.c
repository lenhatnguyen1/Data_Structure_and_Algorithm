/* 
file: array.c
Include the functions to interact with array
*/

#include "array.h"

void swap (int *a, int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

void printArray (int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("%d\n", arr[i]);
    }
}

void reverseArray (int arr[], int size)
{
    for (int i = 0; i < size/2; i++)
    {
        swap(&arr[i], &arr[size - 1 - i]);
    }    
}

int findMax (int arr[], int size)
{
    int max = arr[0];
    for (int i = 1; i < size; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }

    return max;
}

int findMin (int arr[], int size)
{
    int min = arr[0];
    for (int i = 1; i < size; i++)
    {
        if (arr[i] < min)
        {
            min = arr[i];
        }
    }

    return min;
}

void increaseArray (int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            if (arr[i] > arr[j])
            {
                swap(&arr[i], &arr[j]);
            }
        }
    }
}

void decreaseArray (int arr[], int size)
{
    increaseArray (arr, size);
    reverseArray (arr, size);
}

int binarySearch (int element, int *arr, int size)
{
    int mid;
    int low = 0;
    int high = size - 1;
    while (low <= high)
    {
        mid = low + (high - low)/2;

        if (element == arr[mid])
        {
            return mid;
        }
        else if (element > arr[mid])
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }

    return -1;
}

// for testing
int main ()
{
    int arrSize = 10;
    int arr[10] = {7, 2, 2, 1, 4, 50, 20, 33, 40, 16};

    // // test swap
    // printArray(arr, arrSize);
    // swap(&arr[0], &arr[1]);
    // printf("\n");
    // printArray(arr, arrSize);
    // swap(&arr[0], &arr[1]);
    // printf("------------------\n");

    // // test reverse
    // printArray(arr, arrSize);
    // reverseArray(arr, arrSize);
    // printf("\n");
    // printArray(arr, arrSize);
    // printf("------------------\n");

    // // test sort
    // increaseArray (arr, arrSize);
    // printArray(arr, arrSize);
    // printf("------------------\n");
    // decreaseArray (arr, arrSize);
    // printArray (arr, arrSize);
    // printf("------------------\n");

    // test search
    int index;
    increaseArray (arr, arrSize);
    index = binarySearch(50, arr, arrSize);
    printf("%d\n", (index + 1));
    
    return 0;
}