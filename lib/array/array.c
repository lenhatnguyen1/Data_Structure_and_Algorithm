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


// for testing
int main ()
{
    int arrSize = 10;
    int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    // test swap
    printArray(arr, arrSize);
    swap(&arr[0], &arr[1]);
    printf("\n");
    printArray(arr, arrSize);
    swap(&arr[0], &arr[1]);
    printf("------------------\n");

    // test reverse
    printArray(arr, arrSize);
    reverseArray(arr, arrSize);
    printf("\n");
    printArray(arr, arrSize);
    printf("------------------\n");

    return 0;
}